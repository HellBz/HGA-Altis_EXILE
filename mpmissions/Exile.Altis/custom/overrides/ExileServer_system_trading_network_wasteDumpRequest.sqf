/**
 * ExileServer_system_trading_network_wasteDumpRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

private["_sessionID","_parameters","_vehicleNetID","_mode","_vehicleObject","_vehicleDBID","_playerObject","_cargo","_revenue","_playerMoney","_respectGain","_playerRespect","_logging","_traderLog","_responseCode"];
_sessionID = _this select 0;
_parameters = _this select 1;
_vehicleNetID = _parameters select 0;
_mode = _parameters select 1;
try
{
	_vehicleObject = objectFromNetId _vehicleNetID;
	_vehicleDBID = _vehicleObject getVariable "ExileDatabaseID";
	if (isNull _vehicleObject) then
	{
		throw 6;
	};
	if (_vehicleObject getVariable ["ExileMutex", false]) then
	{
		throw 12;
	};
	_vehicleObject setVariable ["ExileMutex", true];
	_playerObject = _sessionID call ExileServer_system_session_getPlayerObject;
	if (isNull _playerObject) then
	{
		throw 1;
	};
	if !(alive _playerObject) then
	{
		throw 2;
	};
	_vehicleInfo = _container getVariable ["XG_AntiTheftInfo",[]];
	if!(_vehicleInfo isEqualTo []) then
	{
		_family = _playerObject getVariable ["ExileClanID",""];
		_vehicleInfo params [["_group",""],["_vifamily",""],["_evhID",-1],["_ownerUID",""],["_evhID1",-1]];
		if(_group isEqualTo "No Group") then
		{
			if!(_family isEqualTo "No Family") then
			{
				if!((_family isEqualTo _vifamily) || (getPlayerUID _playerObject) isEqualTo _ownerUID) exitWith
				{
					throw 6;
				};
			}
			else
			{
				if!((getPlayerUID _playerObject) isEqualTo _ownerUID) exitWith
				{
					throw 6;
				};
			};
		}
		else
		{
			if!(_family isEqualTo "No Family") then
			{
				if!((str(group _playerObject) isEqualTo _group) || (_family isEqualTo _vifamily) || (getPlayerUID _playerObject) isEqualTo _ownerUID) exitWith
				{
					throw 6;
				};
			}
			else
			{
				if!((str(group _playerObject) isEqualTo _group) || (getPlayerUID _playerObject) isEqualTo _ownerUID) exitWith
				{
					throw 6;
				};
			};
		};
	}
	else
	{
		if !((owner _vehicleObject) isEqualTo (owner _playerObject)) then 
		{
			throw 6;
		};
	};
/*
	_cargo = _vehicleObject call ExileClient_util_containerCargo_list;
	_revenue = _cargo call ExileClient_util_gear_calculateTotalSellPrice;
	clearBackpackCargoGlobal _vehicleObject;
	clearItemCargoGlobal _vehicleObject;
	clearMagazineCargoGlobal _vehicleObject;
	clearWeaponCargoGlobal _vehicleObject;
	if (_mode isEqualTo 2) then
	{
		_revenue = _revenue + ([(typeOf _vehicleObject)] call ExileClient_util_gear_calculateTotalSellPrice);
		_vehicleObject call ExileServer_object_vehicle_remove;
		deleteVehicle _vehicleObject;
	}
	else
	{
		_vehicleObject call ExileServer_object_vehicle_database_update;
	};
*/

// Begin modifications
    _cargo = [];
    _revenue = 0;

	//Selling loaded items and contents
	if (_mode isEqualTo 1) then {
        //Sell R3F load and contents
		{
            _cargo = _x call ExileClient_util_containerCargo_list;
            _revenue = _revenue + (_cargo call ExileClient_util_gear_calculateTotalSellPrice);
            _revenue = _revenue + ([(typeOf _x)] call ExileClient_util_gear_calculateTotalSellPrice);
            clearBackpackCargoGlobal _x;
            clearItemCargoGlobal _x;
            clearMagazineCargoGlobal _x;
            clearWeaponCargoGlobal _x;
            _x call ExileServer_object_vehicle_remove;
            deleteVehicle _x;
		} forEach (_vehicleObject getVariable ["R3F_LOG_objets_charges", []]);
		//Sell attached load and contents, works for Igiload
		{
            _cargo = _x call ExileClient_util_containerCargo_list;
            _revenue = _revenue + (_cargo call ExileClient_util_gear_calculateTotalSellPrice);
            _revenue = _revenue + ([(typeOf _x)] call ExileClient_util_gear_calculateTotalSellPrice);
            clearBackpackCargoGlobal _x;
            clearItemCargoGlobal _x;
            clearMagazineCargoGlobal _x;
            clearWeaponCargoGlobal _x;
			detach _x;
            _x call ExileServer_object_vehicle_remove;
            deleteVehicle _x;
         } forEach attachedObjects _vehicleObject;

		//Clear R3F loaded items
		_vehicleObject setVariable ["R3F_LOG_objets_charges", [], true];

		//Reset Igiload status
		[_vehicleObject, true] call IL_Init_Veh;
		[_vehicleObject] call IL_SetNewMass;

		_vehicleObject call ExileServer_object_vehicle_database_update;
    };

	//Selling cargo
    if (_mode isEqualTo 2) then {
        _cargo = _vehicleObject call ExileClient_util_containerCargo_list;
        _revenue = _cargo call ExileClient_util_gear_calculateTotalSellPrice;
        clearBackpackCargoGlobal _vehicleObject;
        clearItemCargoGlobal _vehicleObject;
        clearMagazineCargoGlobal _vehicleObject;
        clearWeaponCargoGlobal _vehicleObject;
        _vehicleObject call ExileServer_object_vehicle_database_update;
    };

	//selling vehicle, cargo, and loaded items and contents
	if (_mode isEqualTo 3) then {
        _cargo = _vehicleObject call ExileClient_util_containerCargo_list;
        _revenue = _revenue + (_cargo call ExileClient_util_gear_calculateTotalSellPrice);
        clearBackpackCargoGlobal _vehicleObject;
        clearItemCargoGlobal _vehicleObject;
        clearMagazineCargoGlobal _vehicleObject;
        clearWeaponCargoGlobal _vehicleObject;
        //Sell R3F load and contents
		if (count (_vehicleObject getVariable ["R3F_LOG_objets_charges", []]) >0) then {
            {
                _cargo = _x call ExileClient_util_containerCargo_list;
                _revenue = _revenue + (_cargo call ExileClient_util_gear_calculateTotalSellPrice);
                _revenue = _revenue + ([(typeOf _x)] call ExileClient_util_gear_calculateTotalSellPrice);
                clearBackpackCargoGlobal _x;
                clearItemCargoGlobal _x;
                clearMagazineCargoGlobal _x;
                clearWeaponCargoGlobal _x;
                _x call ExileServer_object_vehicle_remove;
                deleteVehicle _x;
			} forEach (_vehicleObject getVariable ["R3F_LOG_objets_charges", []]);
        };
		//Sell attached load and contents, works for Igiload
		if(count (attachedObjects _vehicleObject) > 0) then {
            {
                _cargo = _x call ExileClient_util_containerCargo_list;
                _revenue = _revenue + (_cargo call ExileClient_util_gear_calculateTotalSellPrice);
                _revenue = _revenue + ([(typeOf _x)] call ExileClient_util_gear_calculateTotalSellPrice);
                clearBackpackCargoGlobal _x;
                clearItemCargoGlobal _x;
                clearMagazineCargoGlobal _x;
                clearWeaponCargoGlobal _x;
                _x call ExileServer_object_vehicle_remove;
                deleteVehicle _x;
			} forEach attachedObjects _vehicleObject;
        };
        _revenue = _revenue + ([(typeOf _vehicleObject)] call ExileClient_util_gear_calculateTotalSellPrice);
        clearBackpackCargoGlobal _vehicleObject;
        clearItemCargoGlobal _vehicleObject;
        clearMagazineCargoGlobal _vehicleObject;
        clearWeaponCargoGlobal _vehicleObject;
        _vehicleObject call ExileServer_object_vehicle_remove;
        deleteVehicle _vehicleObject;
    };

// End modifications

	_playerMoney = _playerObject getVariable ["ExileMoney", 0];
	_playerMoney = _playerMoney + _revenue;
	_playerObject setVariable ["ExileMoney", _playerMoney, true];
	format["setPlayerMoney:%1:%2", _playerMoney, _playerObject getVariable ["ExileDatabaseID", 0]] call ExileServer_system_database_query_fireAndForget;
	_respectGain = _revenue * getNumber (configFile >> "CfgSettings" >> "Respect" >> "tradingRespectFactor");
	_playerRespect = _playerObject getVariable ["ExileScore", 0];
	_playerRespect = floor (_playerRespect + _respectGain);
	_playerObject setVariable ["ExileScore", _playerRespect];
	format["setAccountScore:%1:%2", _playerRespect, (getPlayerUID _playerObject)] call ExileServer_system_database_query_fireAndForget;
	[_sessionID, "wasteDumpResponse", [0, _revenue, str _playerRespect]] call ExileServer_system_network_send_to;
	_logging = getNumber(configFile >> "CfgSettings" >> "Logging" >> "traderLogging");
	if (_logging isEqualTo 1) then
	{
		_traderLog = format ["PLAYER: ( %1 ) %2 SOLD ITEM: %3 (ID# %4) with Cargo %5 FOR %6 POPTABS AND %7 RESPECT | PLAYER TOTAL MONEY: %8",getPlayerUID _playerObject,_playerObject,typeOf _vehicleObject,_vehicleDBID,_cargo,_revenue,_respectGain,_playerMoney];
		"extDB3" callExtension format["1:TRADING:%1",_traderLog];
	};
}
catch
{
	_responseCode = _exception;
	[_sessionID, "wasteDumpResponse", [_responseCode, 0, ""]] call ExileServer_system_network_send_to;
};
if (!isNull _vehicleObject) then
{
	_vehicleObject setVariable ["ExileMutex", false];
};
true