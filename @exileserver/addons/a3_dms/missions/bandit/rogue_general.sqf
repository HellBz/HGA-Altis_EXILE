/************************************
	DMS Dynamic Mission
	Called from DMS_selectMission
	Created By Heavy
*************************************/

diag_log text format["[DMS DYNAMIC] ROGUE GENERAL mission has started."];

private [

"_veh", 
"_num", 
"_side", 
"_pos", 
"_OK", 
"_difficulty", 
"_AICount", 
"_group", 
"_type", 
"_launcher", 
"_staticGuns", 
"_crate1",
"_crate2", 
"_vehicle1", 
"_vehicle2", 
"_vehicle3", 
"_crate_loot_values1", 
"_crate_loot_values2", 
"_missionAIUnits", 
"_missionObjs", 
"_msgStart", 
"_msgWIN", 
"_msgLOSE", 
"_missionName", 
"_markers", 
"_time", 
"_added", 
"_cleanup", 
"_base", 
"_base0", 
"_base1", 
"_base2", 
"_base3"

];

///////////////////////////////////////////////////////////////////////////

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
		[75,DMS_WaterNearBlacklist,DMS_MinSurfaceNormal,DMS_SpawnZoneNearBlacklist,DMS_TraderZoneNearBlacklist,DMS_MissionNearBlacklist,DMS_PlayerNearBlacklist,DMS_TerritoryNearBlacklist,DMS_ThrottleBlacklists],
	[
		[]
	],
		_this
	];
};

///////////////////////////////////////////////////////////////////////////

// Check calling parameters for manually defined mission position.
// You can define "_extraParams" to specify the vehicle classname to spawn, either as _vehClass or [_vehClass]
_OK = (_this call DMS_fnc_MissionParams) params
[
	["_pos",[],[[]],[3]],
	["_extraParams",[]]
];

if !(_OK) exitWith
{
	diag_log format ["DMS ERROR :: Called MISSION rogue_general.sqf with invalid parameters: %1",_this];
};

// Set general mission difficulty - "hardcore","difficult","moderate", or "easy"
_difficulty = "moderate";

///////////////////////////////////////////////////////////////////////////

// Create AI
_AICount = 15 + (round (random 4));

_group =
[
	_pos,     // Position of AI
	_AICount, // Number of AI
	"random", // "random","hardcore","difficult","moderate", or "easy"
	"random", // "random","assault","MG","sniper" or "unarmed" OR [_type,_launcher]
	_side     // "bandit","hero", etc.
] call DMS_fnc_SpawnAIGroup;

///////////////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////////

_staticGuns =
[
	[
		[(_pos select 0) -(15-(random 1)),(_pos select 1)+(15-(random 1)),0],
		[(_pos select 0) +(15-(random 1)),(_pos select 1)-(15-(random 1)),0],
		[(_pos select 0) +(15-(random 1)),(_pos select 1)+(15-(random 1)),0],
		[(_pos select 0) -(15-(random 1)),(_pos select 1)-(15-(random 1)),0]
	],
	_group,
	"assault",
	"static",
	"bandit"
] call DMS_fnc_SpawnAIStaticMG;

///////////////////////////////////////////////////////////////////////////

// Create Crate
_crate1 = ["Box_NATO_Wps_F",[(_pos select 0) - 10,(_pos select 1) + 10,0]] call DMS_fnc_SpawnCrate;
_crate2 = ["Box_NATO_WpsSpecial_F",[(_pos select 0) + 10,(_pos select 1) - 10,0]] call DMS_fnc_SpawnCrate;

///////////////////////////////////////////////////////////////////////////

// Create Buildings with positions relative to the spawn centre
_base0 = createVehicle ["Land_Cargo_HQ_V1_F",[(_pos select 0) + 2, (_pos select 1) + 5,0],[], 0, "CAN_COLLIDE"];
_base1 = createVehicle ["Land_BagBunker_Tower_F",[(_pos select 0) - 24, (_pos select 1) - 5,0],[], 0, "CAN_COLLIDE"];
_base2 = createVehicle ["Land_Cargo_House_V1_F",[(_pos select 0) - 17, (_pos select 1) - 5,0],[], 0, "CAN_COLLIDE"];
_base3 = createVehicle ["Land_BagBunker_Tower_F",[(_pos select 0) - 10, (_pos select 1) - 5,0],[], 0, "CAN_COLLIDE"];

//build string to make all bases at once
_base = [
	[_base0],
	[_base1],
	[_base2],
	[_base3]
];

///////////////////////////////////////////////////////////////////////////

// Select vehicle and position relative to centre trying to avoid buildings - its a none persistant vehicle so needs to be sold but you can change DMS_fnc_SpawnNonPersistentVehicle to DMS_fn_SpawnPersistentVehicle for a permenant one.
_vehicle1 = ["Exile_Car_Ural_Covered_Military",[(_pos select 0) + 20, (_pos select 1) - 20, 0],[], 0, "CAN_COLLIDE"] call DMS_fnc_SpawnNonPersistentVehicle;
_vehicle2 = ["Exile_Car_Zamak",[(_pos select 0) - 30, (_pos select 1) + 25, 0],[], 0, "CAN_COLLIDE"] call DMS_fnc_SpawnNonPersistentVehicle;
_vehicle3 = ["Exile_Chopper_Huey_Armed_Desert",[(_pos select 0) + 35, (_pos select 1) - 40, 0],[], 0, "CAN_COLLIDE"] call DMS_fnc_SpawnNonPersistentVehicle;

///////////////////////////////////////////////////////////////////////////

// Set crate loot values - notice i listed medical items from which to select 6
_crate_loot_values1 =
[
	5,  // Weapons
	[10,["Exile_Item_InstaDoc","Exile_Item_Bandage","Exile_Item_Bandage","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Vishpirin","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Bandage","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Vishpirin","Exile_Item_Vishpirin"]],  // Items
	3   // Backpacks
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

// Define mission-spawned objects and loot values
_missionObjs =
[
	[_base] + _staticGuns + [_veh],  // armed AI vehicle, base objects, and static gun
	[_vehicle1, _vehicle2, _vehicle3],
	[[_crate1, _crate_loot_values1],[_crate2, _crate_loot_values2]]
];

///////////////////////////////////////////////////////////////////////////

// Define Mission Start message
_msgStart = ['#FFFF00',"The rogue general has setup a FOB and threatens nearby towns. Go stop him and his men!"];

// Define Mission Win message
_msgWIN = ['#0080ff',"Convicts have killed the rogue general's men and secured his base, well done!"];

// Define Mission Lose message
_msgLOSE = ['#FF0000',"Convicts failed to secure the rogue general's base. Better luck next time."];

// Define mission name (for map marker and logging)
_missionName = "Rogue General's Base";

///////////////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////////

[
	_time,
	(DMS_MissionTimeOut select 0) + random((DMS_MissionTimeOut select 1) - (DMS_MissionTimeOut select 0))
],

_missionAIUnits,
_missionObjs,
[_missionName, _msgWIN, _msgLOSE],
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
}forEach _missionAIUnits;

_cleanup pushBack ((_missionObjs select 0) + (_missionObjs select 1));
 
{
	_cleanup pushBack (_x select 0);
}foreach (_missionObjs select 2);

_cleanup call DMS_fnc_CleanUp;

// Delete the markers directly
{deleteMarker _x;} forEach _markers;

// Reset the mission count
DMS_MissionCount = DMS_MissionCount - 1;
};

///////////////////////////////////////////////////////////////////////////

// Notify players
[_missionName,_msgStart] call DMS_fnc_BroadcastMissionStatus;

if (DMS_DEBUG) then
{
 (format ["MISSION: (%1) :: Mission #%2 started at %3 with %4 AI units and %5 difficulty at time %6",_missionName,_num,_pos,_AICount,_difficulty,_time]) call DMS_fnc_DebugLog;
};
