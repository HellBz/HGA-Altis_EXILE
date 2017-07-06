/*
HellBz Bury Body Compiles
HellBz - www.hellbz.de
© 2016 HellBz
*/

if (!hasInterface && isServer) exitWith {
Diag_log "Initializing HellBz BuryBody Compiles!";
};

private ['_code', '_function', '_file'];

{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;
    _code = compileFinal (preprocessFileLineNumbers _file);
    missionNamespace setVariable [_function, _code];
}
forEach
[
	['HellBz_BuryBody', 'custom\BuryBody\BuryBody.sqf']
];

true

