/*
BuryBody.sqf
HellBz - www.hellbz.de
© 2016 HellBz
*/

private ["_corpse","_maxdistance","_safepos", "_markerid", "_markerstr"];

_corpse = _this select 0;

_maxdistance = 1000;

_safepos = [player, 1, _maxdistance, 0, 0, 20, 1] call BIS_fnc_findSafePos;

if (count _safepos == 2) then {
	//Move away the Corpse
	_corpse setpos _safepos;

	_markerid = "corpseteleport";

	_markerstr = createMarkerLocal [ _markerid ,[(_safepos select 0),(_safepos select 1)]];
	_markerstr setMarkerShapeLocal "ICON";
	_markerstr setMarkerTypeLocal "KIA";
	_markerstr setMarkerColorLocal "ColorWEST";

	["InfoTitleAndText", ["Die Leiche liegt am Strand !", "Du findest einen blauen Totenkopf auf der Karte für 30 Sekunden.<br/>Schaue schnell Nach..."]] call ExileClient_gui_toaster_addTemplateToast;

	uisleep 30;

	deleteMarkerLocal _markerid;

}else{
     ["ErrorTitleAndText", ["Teleport fehlgeschlagen!", format["Du kannnst Leichen nur bis max. %1 Meter aus Wasser bergen.",_maxdistance] ] ] call ExileClient_gui_toaster_addTemplateToast;
};
//[30, deleteMarker "corpseteleport", [], true] call ExileServer_system_thread_addTask;
