/************************************
	DMS Dynamic Mission
	Called from DMS_selectMission
	Created By Heavy
*************************************/

diag_log text format["[DMS DYNAMIC] BANK JOB mission has started."];

private ["_crate", "_crate_backpacks", "_crate_item_list", "_crate_items", "_crate_weapons", "_crate_loot_values", "_staticGuns", "_num", "_group", "_pos", "_side", "_extraParams", "_OK", "_difficulty", "_AICount", "_type", "_launcher", "_rndDir", "_bank", "_vehClass1", "_vehicle1", "_vehClass2", "_vehicle2", "_missionAIUnits", "_missionObjs", "_msgStart", "_msgWIN", "_msgLOSE", "_missionName", "_markers", "_time", "_added", "_cleanup"];

// For logging purposes
_num = DMS_MissionCount;

// Set mission side (only "bandit" is supported for now)
_side = "bandit";

// This part is unnecessary, but exists just as an example to format the parameters for "DMS_fnc_MissionParams" if you want to explicitly define the calling parameters for DMS_fnc_FindSafePos.
// It also allows anybody to modify the default calling parameters easily.
if ((isNil "_this") || {_this isEqualTo [] || {(typeName _this)!="ARRAY"}}) then
{
	_this =
	[
		[100,DMS_WaterNearBlacklist,DMS_MinSurfaceNormal,DMS_SpawnZoneNearBlacklist,DMS_TraderZoneNearBlacklist,DMS_MissionNearBlacklist,DMS_PlayerNearBlacklist,DMS_TerritoryNearBlacklist,DMS_ThrottleBlacklists],
		[
			[]
		],
		_this
	];
};

// Check calling parameters for manually defined mission position.
// You can use _extraParams to define which vehicles to spawn. _vehClass1, [_vehClass1], or [_vehClass1,_vehClass2]
_OK = (_this call DMS_fnc_MissionParams) params
[
	["_pos",[],[[]],[3]],
	["_extraParams",[]]
];

if !(_OK) exitWith
{
	diag_log format ["DMS ERROR :: Called MISSION bank_job.sqf with invalid parameters: %1",_this];
};

// Set general mission difficulty
_difficulty = "hardcore";

// Create AI
_AICount = 10 + (round (random 1));

_group =
[
	_pos,					// Position of AI
	_AICount,				// Number of AI
	"difficult",			// "random","hardcore","difficult","moderate", or "easy"
	"random", 				// "random","assault","MG","sniper" or "unarmed" OR [_type,_launcher]
	_side 					// "bandit","hero", etc.
] call DMS_fnc_SpawnAIGroup;

/*
[
	_group,
	[_pos,[-12.48486,-15.4834,0]] call DMS_fnc_CalcPos,
	"base"
] call DMS_fnc_SetGroupBehavior;
*/

_staticGuns =
[
	[
		[(_pos select 0) -(25-(random 1)),(_pos select 1)+(25-(random 1)),0],
		[(_pos select 0) +(25-(random 1)),(_pos select 1)-(25-(random 1)),0]
	],
	_group,
	"assault",
	"static",
	"bandit"
] call DMS_fnc_SpawnAIStaticMG;

(_staticGuns select 0) setDir 45;

// Create Crates
_crate = ["Exile_Container_SupplyBox",[(_pos select 0)+15,(_pos select 1)-15,0]] call DMS_fnc_SpawnCrate;

// Set crate loot items
_crate_weapons 		= 0;
_crate_backpacks 	= 0;
_crate_items 		= 6;
_crate_item_list	= 

[

"Exile_Item_SafeKit",
"Exile_Item_Laptop",
"Exile_Item_SafeKit",
"Item_Item_Codelock",
"Exile_Item_SafeKit",
"Exile_Headgear_GasMask",
"Exile_Item_SafeKit",
"Exile_Item_Laptop",
"Exile_Item_SafeKit",
"Item_Item_Codelock",
"Exile_Item_SafeKit",
"Exile_Headgear_GasMask",
"Exile_Item_SafeKit"

];

// Set crate loot values
_crate_loot_values =
[
	_crate_weapons,							// Weapons
	[_crate_items,_crate_item_list],		// Items + selection list
	_crate_backpacks 						// Backpacks
];

_rndDir = random 180;

_bank = createVehicle ["Land_Offices_01_V1_F",[_pos,1+(random 1),_rndDir+90] call DMS_fnc_SelectOffsetPos,[], 0, "CAN_COLLIDE"];

_vehClass1 = "Exile_Car_SUVXL_Black";
_vehClass2 = "Exile_Car_SUVXL_Black";

_vehicle1 = [_vehClass1, [_pos,30-(random 1),_rndDir+90] call DMS_fnc_SelectOffsetPos] call DMS_fnc_SpawnNonPersistentVehicle;
_vehicle2 = [_vehClass2, [_pos,30+(random 1),_rndDir-90] call DMS_fnc_SelectOffsetPos] call DMS_fnc_SpawnNonPersistentVehicle;

if !(_extraParams isEqualTo []) then
{
	if ((typeName _extraParams)=="STRING") then
	{
		_vehClass1 = _extraParams;
	}
	else
	{
		if (((typeName _extraParams)=="ARRAY") && {(typeName (_extraParams select 0))=="STRING"}) then
		{
			_vehClass1 = _extraParams select 0;

			if (((count _extraParams)>1) && {(typeName (_extraParams select 1))=="STRING"}) then
			{
				_vehClass2 = _extraParams select 1;
			};
		};
	};
};


// Define mission-spawned AI Units
_missionAIUnits =
[
	_group	// We only spawned the single group for this mission
];

// Define mission-spawned objects and loot values
_missionObjs =
[
	[_bank,_staticGuns],			// Structures, MGs, AI Vehicles
	[_vehicle1,_vehicle2],			// NON-Persistant Vehicles
	[[_crate,_crate_loot_values]]	// Crate, Crate Loot
];

// Define Mission Start message
_msgStart = ['#FFFF00',"The First National of Altis is being robbed! Kill the robbers and secure the loot for yourself."];

// Define Mission Win message
_msgWIN = ['#0080ff',"The bank robbers were dealt with harshly, well done, enjoy your spoils!"];

// Define Mission Lose message
_msgLOSE = ['#FF0000',"The bank robbers have escaped with the loot and are fleeing to Chernarus."];

// Define mission name (for map marker and logging)
_missionName = "Altis Bank Job";

// Create Markers
_markers =
[
	_pos,
	_missionName,
	_difficulty
] call DMS_fnc_CreateMarker;

// Record time here (for logging purposes, otherwise you could just put "diag_tickTime" into the "DMS_AddMissionToMonitor" parameters directly)
_time = diag_tickTime;

// Parse and add mission info to missions monitor
_added =
[
	_pos,
	[
		[
			"kill",
			_group
		],
		[
			"playerNear",
			[_pos,DMS_playerNearRadius]
		]
	],
	[
		_time,
		(DMS_MissionTimeOut select 0) + random((DMS_MissionTimeOut select 1) - (DMS_MissionTimeOut select 0))
	],
	_missionAIUnits,
	_missionObjs,
	[_missionName,_msgWIN,_msgLOSE],
	_markers,
	_side,
	_difficulty,
	[]
] call DMS_fnc_AddMissionToMonitor;

// Check to see if it was added correctly, otherwise delete the stuff
if !(_added) exitWith
{
	diag_log format ["DMS ERROR :: Attempt to set up mission %1 with invalid parameters for DMS_AddMissionToMonitor! Deleting mission objects and resetting DMS_MissionCount.",_missionName];

	// Delete AI units and the crate. I could do it in one line but I just made a little function that should work for every mission (provided you defined everything correctly)
	_cleanup = [];
	{
		_cleanup pushBack _x;
	} forEach _missionAIUnits;

	_cleanup pushBack ((_missionObjs select 0)+(_missionObjs select 1));
	
	{
		_cleanup pushBack (_x select 0);
	} foreach (_missionObjs select 2);

	_cleanup call DMS_fnc_CleanUp;

	// Delete the markers directly
	{deleteMarker _x;} forEach _markers;

	// Reset the mission count
	DMS_MissionCount = DMS_MissionCount - 1;
};

// Notify players
[_missionName,_msgStart] call DMS_fnc_BroadcastMissionStatus;

if (DMS_DEBUG) then
{
	(format ["MISSION: (%1) :: Mission #%2 started at %3 with %4 AI units and %5 difficulty at time %6",_missionName,_num,_pos,_AICount,_difficulty,_time]) call DMS_fnc_DebugLog;
};
