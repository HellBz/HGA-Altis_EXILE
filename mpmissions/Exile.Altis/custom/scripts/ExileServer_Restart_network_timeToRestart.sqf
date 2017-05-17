/*

 	Name: ExileServer_Restart_network_timeToRestart.sqf

 	Author: HellBz
    Copyright (c) 2016 HellBz

    This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
    To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0

*/
private["_difftime"];

_restarttimes = ["04:00:00","08:00:00","12:00:00","16:00:00","20:00:00","24:00:00"];

_gottime = true;
{
	_hardServerTime = _x splitString ":";
	_hardServerTimeHour = parseNumber (_hardServerTime select 0);
	_hardServerTimeMin  = parseNumber (_hardServerTime select 1);
	_hardServerTimeSec  = parseNumber (_hardServerTime select 2);

	_hardSecondsTime = (_hardServerTimeHour * 3600);
	_hardSecondsTime = (_hardSecondsTime + (_hardServerTimeMin * 60));
	_hardSecondsTime = (_hardSecondsTime + _hardServerTimeSec);

	_currentTimestamp = (call compile ("extDB3" callExtension "9:LOCAL_TIME")) select 1;
	_nowServerTimeHour = _currentTimestamp select 3; 
	_nowServerTimeMin  = _currentTimestamp select 4; 
	_nowServerTimeSec  = _currentTimestamp select 5;
	
	_nowSecondsTime = (_nowServerTimeHour * 3600);
	_nowSecondsTime = (_nowSecondsTime + (_nowServerTimeMin * 60));
	_nowSecondsTime = (_nowSecondsTime + _nowServerTimeSec);

	if( _nowSecondsTime < _hardSecondsTime ) then {
		if (_gottime) then{
			_difftime = _hardSecondsTime - _nowSecondsTime;
			_gottime = false;
		};
	};
} forEach _restarttimes;	

_hours = floor(_difftime / 3600);
_minutes = floor( (_difftime / 3600 ) / 60);

["SuccessTitleAndText", ["Restart in", format ["%1 Hours and %2 Minutes",_hours , _minutes ]]] call ExileClient_gui_toaster_addTemplateToast;

_difftime