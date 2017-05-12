/************************************
	DMS Dynamic Mission
	Called from DMS_selectMission
	Created By Heavy
	Used with snukes_objects.sqf
*************************************/

diag_log text format["[DMS DYNAMIC] STOLEN NUKES mission has started."];

///////////////////////////////////////////////////////////////////////////

private [

"_added",
"_AICount",
"_baseObjs",
"_cleanup",
"_crate1",
"_crate2",
"_crate_loot_values1",
"_crate_loot_values2",
"_difficulty",
"_extraParams",
"_group",
"_missionAIUnits",
"_missionObjs",
"_msgStart",
"_msgWIN",
"_msgLOSE",
"_missionName",
"_markers",
"_num",
"_OK",
"_pos",
"_rndDir",
"_side",
"_staticGuns",
"_time",
"_vehClass1", 
"_vehClass2", 
"_vehicle1",
"_vehicle2"

];

///////////////////////////////////////////////////////////////////////////
// For logging purposes
_num = DMS_MissionCount;

// Set mission side
_side = "bandit";

//This part is unnecessary, but exists just as an example to format the parameters for "DMS_fnc_MissionParams" if you want to explicitly define the calling parameters for DMS_fnc_FindSafePos.
//It also allows anybody to modify the default calling parameters easily.
if ((isNil "_this") || {_this isEqualTo [] || {!(_this isEqualType [])}}) then
{
	_this =
	[
		[50,DMS_WaterNearBlacklist,DMS_MinSurfaceNormal,DMS_SpawnZoneNearBlacklist,DMS_TraderZoneNearBlacklist,DMS_MissionNearBlacklist,DMS_PlayerNearBlacklist,DMS_TerritoryNearBlacklist,DMS_ThrottleBlacklists],
		[
			[]
		],
		_this
	];
};

// Check calling parameters for manually defined mission position.
// This mission doesn't use "_extraParams" in any way currently.
_OK = (_this call DMS_fnc_MissionParams) Params
[
	["_pos",[],[[]],[3]],
	["_extraParams",[]]
];

if !(_OK) exitWith
{
	diag_log format ["DMS ERROR :: Called MISSION stolen_nukes.sqf with invalid parameters: %1",_this];
};

// Set general mission difficulty
_difficulty = "hardcore";

///////////////////////////////////////////////////////////////////////////
// Create AI, define settings

_AICount = 10 + (round (random 2));

_group =
[
	_pos,		// Position of AI
	_AICount,	// Number of AI
	"hardcore",	// "random","hardcore","difficult","moderate", or "easy"
	"random", 	// "random","assault","MG","sniper" or "unarmed" OR [_type,_launcher]
	_side 		// "bandit","hero", etc.
] call DMS_fnc_SpawnAIGroup;

/*
[
	_group,
	[_pos,[-9.48486,-12.4834,0]] call DMS_fnc_CalcPos,
	"base"
] call DMS_fnc_SetGroupBehavior;
*/

///////////////////////////////////////////////////////////////////////////

/*
_veh =
[
	[
		[_pos,125,random 360] call DMS_fnc_SelectOffsetPos,
		_pos
	],
	_group,
	"assault",
	_difficulty,
	_side
] call DMS_fnc_SpawnAIVehicle;
*/

///////////////////////////////////////////////////////////////////////////

_staticGuns =
[
	[
		[(_pos select 0) -(12-(random 1)),(_pos select 1)+(12-(random 1)),0],
		[(_pos select 0) +(12-(random 1)),(_pos select 1)-(12-(random 1)),0],
		[(_pos select 0) +(12-(random 1)),(_pos select 1)+(12-(random 1)),0],
		[(_pos select 0) -(12-(random 1)),(_pos select 1)-(12-(random 1)),0]
	],
	_group,
	"assault",
	"static",
	"bandit"
] call DMS_fnc_SpawnAIStaticMG;

(_staticGuns select 0) setDir 45;

///////////////////////////////////////////////////////////////////////////
// Static mission objects

_baseObjs =
[
	"snukes_objects",
	_pos
] call DMS_fnc_ImportFromM3E;

///////////////////////////////////////////////////////////////////////////
// Check to see if a special vehicle class is defined in "_extraParams"

_rndDir = random 180;
_vehClass1 = "O_Truck_03_device_F";
_vehClass2 = "Exile_Car_Tempest";

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
_vehicle1 = [_vehClass1, [_pos,25+(random 1),_rndDir+90] call DMS_fnc_SelectOffsetPos] call DMS_fnc_SpawnNonPersistentVehicle;
_vehicle2 = [_vehClass2, [_pos,25-(random 1),_rndDir-90] call DMS_fnc_SelectOffsetPos] call DMS_fnc_SpawnNonPersistentVehicle;

///////////////////////////////////////////////////////////////////////////
// Create Crates and define and loot values

_crate1 = ["Box_NATO_Wps_F",[(_pos select 0)-7,(_pos select 1)+7,0]] call DMS_fnc_SpawnCrate;
_crate2 = ["Box_NATO_WpsSpecial_F",[(_pos select 0)+7,(_pos select 1)-7,0]] call DMS_fnc_SpawnCrate;

// Set crate loot values
_crate_loot_values1 =
[
	5,		// Weapons
	[10,DMS_BoxBuildingSupplies],
	3 		// Backpacks
];
_crate_loot_values2 =
[
	10,		// Weapons
	10,		// Items
	3 		// Backpacks
];

///////////////////////////////////////////////////////////////////////////
// Define mission-spawned AI Units

_missionAIUnits =
[
	_group   // We only spawned the single group for this mission
];

///////////////////////////////////////////////////////////////////////////
// Define mission-spawned objects

_missionObjs =
[
	_staticGuns+_baseObjs,   // armed AI vehicle, base objects, and static gun
	[_vehicle1,_vehicle2],
	[[_crate1,_crate_loot_values1],[_crate2,_crate_loot_values2]]
];

///////////////////////////////////////////////////////////////////////////
// Define Mission Start message

_msgStart = ['#FFFF00',format ["A group of terrorists have stolen nuclear devices and are trying to obtain the detonation codes! Go deal with the terrorists and recover the stolen items!",mapGridPosition _pos]];

// Define Mission Win message
_msgWIN = ['#0080ff',"Convicts have successfully eliminated the terrorists and secured the nuclear devices. Well done convicts, enjoy your spoils!"];

// Define Mission Lose message
_msgLOSE = ['#FF0000',"Players have failed to secure the nuclear devices and the terrorists have fled the area along with the stolen nukes! Nice fail convicts!"];

// Define mission name (for map marker and logging)
_missionName = "Stolen Nukes";

///////////////////////////////////////////////////////////////////////////
// Create Marker

_markers =
[
	_pos,
	_missionName,
	_difficulty
] call DMS_fnc_CreateMarker;

///////////////////////////////////////////////////////////////////////////
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

///////////////////////////////////////////////////////////////////////////
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

///////////////////////////////////////////////////////////////////////////
// Notify players

[_missionName,_msgStart] call DMS_fnc_BroadcastMissionStatus;

///////////////////////////////////////////////////////////////////////////
// Debug

if (DMS_DEBUG) then
{
	(format ["MISSION: (%1) :: Mission #%2 started at %3 with %4 AI units and %5 difficulty at time %6",_missionName,_num,_pos,_AICount,_difficulty,_time]) call DMS_fnc_DebugLog;
};
