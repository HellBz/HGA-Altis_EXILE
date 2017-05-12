/************************************
	DMS Dynamic Mission
	Called from DMS_selectMission
	Created By Heavy
*************************************/

diag_log text format["[DMS DYNAMIC] MEDICAL OUTPOST mission has started."];

private ["_num", "_side", "_pos", "_OK", "_difficulty", "_AICount", "_group", "_type", "_launcher", "_staticGuns", "_crate1", "_vehicle", "_pinCode", "_class", "_veh", "_crate_loot_values1", "_missionAIUnits", "_missionObjs", "_msgStart", "_msgWIN", "_msgLOSE", "_missionName", "_markers", "_time", "_added", "_cleanup", "_baseObjs", "_crate_weapons", "_crate_items", "_crate_item_list", "_crate_backpacks"];

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
		[30,DMS_WaterNearBlacklist,DMS_MinSurfaceNormal,DMS_SpawnZoneNearBlacklist,DMS_TraderZoneNearBlacklist,DMS_MissionNearBlacklist,DMS_PlayerNearBlacklist,DMS_TerritoryNearBlacklist,DMS_ThrottleBlacklists],
		[
			[]
		],
		_this
	];
};

// Check calling parameters for manually defined mission position.
// You can define "_extraParams" to specify the vehicle classname to spawn, either as _vehClass or [_vehClass]
_OK = (_this call DMS_fnc_MissionParams) params
[
	["_pos",[],[[]],[3],[],[],[]],
	["_extraParams",[]]
];

if !(_OK) exitWith
{
	diag_log format ["DMS ERROR :: Called MISSION medical_outpost.sqf with invalid parameters: %1",_this];
};


// Set general mission difficulty - "hardcore","difficult","moderate", or "easy"
_difficulty = "hardcore";


// Create AI - foot soldiers first
_AICount = 7 + (round (random 4));

_group =
[
	_pos,					// Position of AI
	_AICount,				// Number of AI
	"difficult",			// "random","hardcore","difficult","moderate", or "easy"
	"assault", 				// "random","assault","MG","sniper" or "unarmed" OR [_type,_launcher]
	_side 					// "bandit","hero", etc.
] call DMS_fnc_SpawnAIGroup;

// add vehicle patrol
_veh =
[
	[
		[(_pos select 0) -65,(_pos select 1)+65,0]
	],
	_group,
	"assault",
	"difficult",
	_side
] call DMS_fnc_SpawnAIVehicle;


// add static guns
_staticGuns =
[
	[
		// make statically positioned relative to centre point and randomise a little
		[(_pos select 0) -(5-(random 2)),(_pos select 1)+(5-(random 2)),0],
		[(_pos select 0) -(5+(random 2)),(_pos select 1)-(5+(random 2)),0],
		[(_pos select 0) +(5+(random 2)),(_pos select 1)+(5+(random 2)),0],
		[(_pos select 0) +(5-(random 2)),(_pos select 1)-(5-(random 2)),0]
	],
	_group,
	"assault",
	"static",
	"bandit"
] call DMS_fnc_SpawnAIStaticMG;


// Create Buildings - use separate file as found in the mercbase mission
_baseObjs =
[
	"medoutpost_objects",
	_pos
] call DMS_fnc_ImportFromM3E;
		
// Select vehicle and position relative to centre trying to avoid buildings - its a none persistant vehicle so needs to be sold 
_vehicle = ["I_Truck_02_medical_F",[(_pos select 0) -30, (_pos select 1) -30,0],[], 0, "CAN_COLLIDE"] call DMS_fnc_SpawnNonPersistentVehicle;

//to make persistant comment out the current _vehicle and uncomment the 2 lines below
//_pinCode = round (random 9999);
//_vehicle = ["I_Truck_02_medical_F",[[(_pos select 0), (_pos select 1) -30,0],[], 0, "CAN_COLLIDE"],_pinCode] call DMS_fnc_SpawnPersistentVehicle;

// Create Crate type
_crate1 = ["Box_NATO_Wps_F",_pos] call DMS_fnc_SpawnCrate;

// Set crate loot values - trying to have setup area for crate
// whats in crate variable trying random numbers - failed
_crate_weapons 		= 5;
_crate_items 		= 25;
_crate_item_list	= ["Exile_Item_InstaDoc","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_InstaDoc","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin","Exile_Item_Bandage","Exile_Item_Vishpirin"];
_crate_backpacks 	= 3;

// setup crate iteself with items
_crate_loot_values1 =
[
	_crate_weapons,		// Weapons
	[_crate_items,_crate_item_list],		// Items + selection list
	_crate_backpacks 		// Backpacks
];


// Define mission-spawned AI Units
_missionAIUnits =
[
	_group 		// We only spawned the single group for this mission
];

// Define mission-spawned objects and loot values
_missionObjs =
[
	_staticGuns+_baseObjs+[_veh],			// armed AI vehicle, base objects, and static guns
	[_vehicle],							//this is prize vehicle
	[[_crate1,_crate_loot_values1]]		//this is prize crate
];

// Define Mission Start message
_msgStart = ['#FFFF00',"A medical outpost is under attack! Go kill the attackers!"];

// Define Mission Win message
_msgWIN = ['#0080ff',"Convicts secure the medical outpost and its supplies!"];

// Define Mission Lose message
_msgLOSE = ['#FF0000',"The attackers killed the medics and stole everything!"];

// Define mission name (for map marker and logging)
_missionName = "Hospital Under Siege";

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