/************************************
	DMS Dynamic Mission
	Called from DMS_selectMission
	Created By Heavy
*************************************/

diag_log text format["[DMS DYNAMIC] SNIPER TEAM mission has started."];

private ["_num", "_group", "_pos", "_side", "_extraParams", "_OK", "_difficulty", "_AICount", "_type", "_launcher", "_crate1", "_rndDir", "_building", "_vehClass1", "_vehicle1", "_vehClass2", "_vehicle2", "_crate_loot_values1", "_missionAIUnits", "_missionObjs", "_msgStart", "_msgWIN", "_msgLOSE", "_missionName", "_markers", "_time", "_added", "_cleanup"];

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
		[10,DMS_WaterNearBlacklist,DMS_MinSurfaceNormal,DMS_SpawnZoneNearBlacklist,DMS_TraderZoneNearBlacklist,DMS_MissionNearBlacklist,DMS_PlayerNearBlacklist,DMS_TerritoryNearBlacklist,DMS_ThrottleBlacklists],
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
	diag_log format ["DMS ERROR :: Called MISSION sniper_ch47.sqf with invalid parameters: %1",_this];
};


// Set general mission difficulty
_difficulty = "difficult";


// Create AI
_AICount = 8 + (round (random 1));

_group =
[
	_pos,					// Position of AI
	_AICount,				// Number of AI
	"difficult",			// "random","hardcore","difficult","moderate", or "easy"
	"sniper", 				// "random","assault","MG","sniper" or "unarmed" OR [_type,_launcher]
	_side 					// "bandit","hero", etc.
] call DMS_fnc_SpawnAIGroup;


// Create Crates

_crate1 = ["Box_NATO_Wps_F",[(_pos select 0)+1,(_pos select 1)-5,0]] call DMS_fnc_SpawnCrate;

_rndDir = random 180;

_building = createVehicle ["Land_Cargo_House_V1_F",[_pos,10+(random 5),_rndDir+90] call DMS_fnc_SelectOffsetPos,[], 0, "CAN_COLLIDE"];


_vehClass1 = "B_Truck_01_transport_F";
_vehClass2 = "B_mas_CH_47F";

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
_vehicle1 = [_vehClass1, [_pos,5+(random 3),_rndDir] call DMS_fnc_SelectOffsetPos] call DMS_fnc_SpawnNonPersistentVehicle;
//_vehicle1 setPosATL ([_pos,80+(random 3),_rndDir] call DMS_fnc_SelectOffsetPos);


_vehicle2 = [_vehClass2, [_pos,40+(random 3),_rndDir+180] call DMS_fnc_SelectOffsetPos] call DMS_fnc_SpawnNonPersistentVehicle;
//_vehicle2 setPosATL ([_pos,130+(random 3),_rndDir+180] call DMS_fnc_SelectOffsetPos);



// Set crate loot values
_crate_loot_values1 =
[
	10,		// Weapons
	25,		// Items
	5 		// Backpacks
];


// Define mission-spawned AI Units
_missionAIUnits =
[
	_group 		// We only spawned the single group for this mission
];

// Define mission-spawned objects and loot values
_missionObjs =
[
	[_building],
	[_vehicle1,_vehicle2],
	[[_crate1,_crate_loot_values1]]
];

// Define Mission Start message
_msgStart = ['#FFFF00',"A Chinook is picking up a sniper team. Eliminate them before they take off."];

// Define Mission Win message
_msgWIN = ['#0080ff',"The snipers have been eliminated and the Chinook secured."];

// Define Mission Lose message
_msgLOSE = ['#FF0000',"The Chinook has left with the snipers. Watch your back."];

// Define mission name (for map marker and logging)
_missionName = "Chinook Sniper Team";

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