/*
BuryBody.sqf
HellBz - www.hellbz.de
© 2016 HellBz
*/


private ["_corpse","_corpse_name", "_bodypos1", "_bodypos2", "_bodypos3", "_healPlace", "_action", "_bodypos", "_animstate", "_primaryw", "_timer", "_Anims", "_defibpos", "_defibangle", "_posh", "_posi", "_dy", "_dx", "_dir", "_position", "_lootHolder", "_targetsbleedoutcountdown", "_secondsRemaining"];


_corpse = _this select 0;
_corpse_name = name _corpse;


	if (hellbz_buryInProgress) exitWith {
		//Todo Toast"You are already performing an action, wait for the current action to finish." call dayz_rollingMessages;
	};

	hellbz_buryInProgress = true;

	//if !( isPlayer _corpse ) exitWith {hellbz_buryInProgress = false; systemChat Format ["cursorTarget isNull!"]};

	_corpse setVariable["isBuried",true,true];
	
	player action ["SwitchWeapon", player, player, 100];

	player playMove "AinvPknlMstpSnonWnonDr_medic1";
	
	uiSleep 7;
	
	HELLBZ_burybody_server = [_corpse,player,1];
	publicVariableServer "HELLBZ_burybody_server";
	
	uiSleep 3;
	
	if (_corpse_name != "unknown") then {
		[ format["Rest in peace, %1...",_corpse_name] ] spawn ExileClient_gui_baguette_show;
	} else {
		[ "Rest in peace, unknown soldier...." ] spawn ExileClient_gui_baguette_show;
	};
	
	player switchMove "AmovPercMstpSnonWnonDnon_SaluteIn";
	
	player switchMove "AmovPercMstpSnonWnonDnon_Salute";
	
	uiSleep 5;
	
	player switchMove "AmovPercMstpSnonWnonDnon_SaluteOut";
	
	player switchMove "saluteOff"; 
	
	uiSleep 2;
	
hellbz_buryInProgress = false;
