/*
HellBz Bury Body Initialization
HellBz - www.hellbz.de
© 2016 HellBz
*/

private["_handguntype","_handgunammo","_player","_playerID","_playerPos",
	"_reviveused","_reviverownerID","_bambiPlayerID","_playerPos","_data",
	"_extDB2Message","_revivername","_msg","_reviveused","_ind","_playerID",
	"_sessionID","_requestingPlayer", "_requestingPlayerUID", "_items", "_dir",
	"_location", "_type", "_weapon", "_attachments", "_currWeap", "_itemSlot",
	"_itemqtys", "_goggles", "_headgear", "_vest", "_backpack", "_uniform",
	"_weapons", "_magazinesAmmo", "_itemsplayer", "_weaponsplayer", "_group",
	"_primaryWeapon", "_secondaryWeapon", "_attachment", "_equipped", "_wMags",
	"_requestingPlayerGroup", "_droppedWeapons", "_bambiPlayer", "_ownerID", "_reviver","_playerUID","_locationTABS"];	
	
_buryer = _this select 1;
_ownerID = owner _buryer;
_corpse = _this select 0;

_graves  = selectRandom [ //change to classnames of Graves you want to random select.
                        "Land_Grave_forest_F",  // Type Waldgrab
                        "Land_Grave_rocks_F",   // Type Steingrab
                        "Land_Grave_dirt_F"     // Type Erdgrab
                        ];

_corpse setVariable["isBuried",true,true];

_position = getPosATL _corpse;
_dir = getDir _corpse;

_crate = "Box_Syndicate_Wps_F" createvehicle _position;
_crate setposATL [(_position select 0)+1,(_position select 1),_position select 2];
_crate enableRopeAttach SC_ropeAttach; 	// Stop people airlifting the crate
_crate setVariable ["permaLoot",true,true];
_crate allowDamage false; 				// Stop crates taking damage
_crate setVariable ["bury",true,true];

_grave = createVehicle [_graves,_position,[],0,"CAN_COLLIDE"];
_grave setposATL [(_position select 0)+1,(_position select 1)+1,_position select 2];
_grave setVariable ["bury",true,true];

//Move away the Corpse
_corpse setpos [0,0,0];
//Clear Crate

_headgear 		 = headgear			_corpse;
_goggles 		 = goggles 			_corpse;

_uniform 		 = uniform 			_corpse;
_vest 			 = vest 			_corpse;
_backpack 		 = backpack 		_corpse;

_items 			 = assignedItems 	_corpse;
_magazinesAmmo 	 = magazinesAmmo 	_corpse;
_handgunammo 	 = _corpse ammo handgunWeapon _corpse;
_handguntype	 = handgunWeapon 	_corpse;
_primaryWeapon 	 = "";
_secondaryWeapon = "";

_itemsplayer 	= [getItemCargo(uniformContainer _corpse), getItemCargo(vestContainer _corpse), getItemCargo(backpackContainer _corpse)];
_weaponsplayer 	= [getWeaponCargo(uniformContainer _corpse), getWeaponCargo(vestContainer _corpse), getWeaponCargo(backpackContainer _corpse)];
_weapons 		= [currentWeapon _corpse, (weaponsItems _corpse), [_primaryWeapon, _secondaryWeapon, handgunWeapon _corpse]];
			
// Remove all items from dead body
_clear =
{
	_object = _this;
	removeAllActions _object;
	removeAllAssignedItems  _object;
	removeHeadgear _object;
	removeGoggles _object;
	clearBackpackCargoGlobal _object;
	clearWeaponCargoGlobal _object;
	clearItemCargoGlobal _object;
	clearMagazineCargoGlobal _object;
	removeAllContainers _object;
};

_fnc_add_BoxItem = 
{
	_itemClassName = _this select 1;
	_cargoType = _itemClassName call ExileClient_util_cargo_getType;
	switch (_cargoType) do
	{
		case 1: 	
		{	_this select 0 addMagazineCargoGlobal [_itemClassName, 1]; };
		case 3: 	
		{	_this select 0 addBackpackCargoGlobal [_itemClassName, 1]; };
		case 2: 	
		{	_this select 0 addWeaponCargoGlobal [_itemClassName, 1]; };
		default
		{ 	_this select 0 addItemCargoGlobal [_itemClassName, 1]; };
	};
};

_crate call _clear;

if (_headgear != "") 	then { _crate addItemCargoGlobal 	 [_headgear, 1]; };
if (_goggles != "") 	then { _crate addItemCargoGlobal 	 [_goggles, 1];  };
if (_uniform != "") 	then { _crate addItemCargoGlobal 	 [_uniform, 1];  { [_crate,_x] call _fnc_add_BoxItem; }forEach uniformitems _corpse; 	};
if (_vest != "") 		then { _crate addItemCargoGlobal 	 [_vest, 1];     { [_crate,_x] call _fnc_add_BoxItem; }forEach vestitems _corpse; 	};
if (_backpack != "") 	then { _crate addItemCargoGlobal     [_backpack, 1]; { [_crate,_x] call _fnc_add_BoxItem; }forEach backpackitems _corpse; 	};

_corpse call _clear;

{	[_crate,_x] call _fnc_add_BoxItem;	}forEach _items;

if (count _weapons >= 2) then {
	_equipped = _weapons select 2;
	{
		_weapon = _x select 0;
		[_crate,_weapon] call _fnc_add_BoxItem;
		_type = getNumber(configfile >> "cfgweapons" >> _weapon >> "type");

		_attachments = [];
		for "_a" from 1 to 3 do {
			_attachment = _x select _a;
			if (_attachment != "") then {
				[_crate,_attachment] call _fnc_add_BoxItem;
			};
		};

	} forEach (_weapons select 1);
};

_corpse setDamage 1;
deleteVehicle _corpse;

_addrespect = 25;
format["modifyAccountScore:%1:%2", _addrespect, (getPlayerUID _buryer) ] call ExileServer_system_database_query_fireAndForget;

uiSleep 30;

deleteVehicle _corpse;
