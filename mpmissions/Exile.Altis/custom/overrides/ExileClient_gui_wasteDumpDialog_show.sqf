/**
 * ExileClient_gui_wasteDumpDialog_show
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

private["_nearVehicles","_localVehicles","_display","_revenue","_sellButton","_dropdown","_vehicleObject","_vehicleName","_index"];
disableSerialization;
_nearVehicles = nearestObjects [player, ["LandVehicle", "Air", "Ship"], 50];
_localVehicles = [];
{
	if (local _x) then
	{
		if (alive _x) then
		{
			_localVehicles pushBack _x;
		};
	};
}
forEach _nearVehicles;
if (_localVehicles isEqualTo []) exitWith
{
	["VehicleCustomsWarningNoVehiclesNearby"] call ExileClient_gui_notification_event_addNotification;
};
ExileClientCurrentTrader = _this;
createDialog "RscExileWasteDumpDialog";
waitUntil { !isNull findDisplay 24011 };
_display = uiNameSpace getVariable ["RscExileWasteDumpDialog", displayNull];
_revenue = _display displayCtrl 4001;
_revenue ctrlSetStructuredText (parseText "<t size='1.4'>0<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>");
_sellButton = _display displayCtrl 4000;
_sellButton ctrlEnable false;
_dropdown = _display displayCtrl 4002;
lbClear _dropdown;
{
	_vehicleObject = _x;
	_vehicleName = getText(configFile >> "CfgVehicles" >> (typeOf _vehicleObject) >> "displayName");

	_R3FObjectsCnt = count (_vehicleObject getVariable ["R3F_LOG_objets_charges", []]);
	_attachedObjectCnt = count (attachedObjects _vehicleObject);
	_loadedObjectCnt = _R3FObjectsCnt + _attachedObjectCnt;

	if (_loadedObjectCnt > 0) then {
		_index = _dropdown lbAdd (format ["Crate(%2): %1", _vehicleName, _loadedObjectCnt]);
		_dropdown lbSetData [_index, netId _vehicleObject];
		_dropdown lbSetValue [_index, 1];
	};
	_index = _dropdown lbAdd (format ["Cargo: %1", _vehicleName]);
	_dropdown lbSetData [_index, netId _vehicleObject];
	_dropdown lbSetValue [_index, 2];

	if (_loadedObjectCnt >0) then {
		_index = _dropdown lbAdd (format ["Vehicle + Cargo + Crate(%2): %1", _vehicleName, _loadedObjectCnt]);
		_dropdown lbSetData [_index, netId _vehicleObject];
		_dropdown lbSetValue [_index, 3];
	}
	else {
		_index = _dropdown lbAdd (format ["Vehicle + Cargo: %1", _vehicleName]);
		_dropdown lbSetData [_index, netId _vehicleObject];
		_dropdown lbSetValue [_index, 3];
	};
}
forEach _localVehicles;
true call ExileClient_gui_postProcessing_toggleDialogBackgroundBlur;
true