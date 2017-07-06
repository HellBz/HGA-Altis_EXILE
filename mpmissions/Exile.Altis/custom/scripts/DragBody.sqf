H3_dragAction = {
	_unit     =     (_this select 0);
	
	if (primaryWeapon player == "") then {
		player action ["SwitchWeapon", player, player, 100];
	};
	
	_unitID = _unit getVariable "H3_increm";
	 [[_unit, vehicle player,_unitID],"H3_fnc_attach",true] call BIS_fnc_MP; 
	_unit attachTo [player,[0,1,0]];	

	player playAction "grabDrag";
	player forceWalk true;
		
	_dropID = player addAction ["<t color=""#ee0000"">Release Body</t>",{call H3_dropAction},_unit,6];

	player setVariable ["H3dropact",_dropID];
	
};

H3_dropAction = {
 _dropID = (_this select 2);
 _unit	=	(_this select 3);
	
// GLOBAL CODE
	_unitID = _unit getVariable "H3_increm";
 0 = [[_unit, vehicle player,_unitID],"H3_fnc_detach",true] call BIS_fnc_MP;
 deTach _unit;
 
// CLIENT SIDE	
	player removeAction _dropID;
	player playMove "amovpknlmstpsraswrfldnon";
	player forceWalk false;	
};

H3_fnc_attach = {
	_unit 	= 	(_this select 0);
	_player = 	(_this select 1);
	_unitID =	(_this select 2);
	
	_id = format ["h3EF%1",_unitID];
 0 = [_id, "onEachFrame", "H3_fnc_moveBody",[_unit,_player]] call BIS_fnc_addStackedEventHandler;
};
 
H3_fnc_detach = {
 	_unit 	= 	(_this select 0);
	_player = 	(_this select 1);
	_unitID =	(_this select 2);
	
	_id = format ["h3EF%1",_unitID];
 0 = [_id, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
 
	sleep 0.05;
 _relD = [_unit,_player] call BIS_fnc_dirTo;
 _unit switchMove "AinjPpneMstpSnonWrflDb_release";
 _unit setDir _relD;
};

H3_fnc_moveBody = {
	_unit 	= (_this select 0);
	_player	= (_this select 1);
	
// CREDIT TOO Das Attorney FOR CODE
	_pos  = _player modelToWorld [0,1,0];
    _unit setPos _pos;
	_unit setDir 180;
	_unit switchMove "AinjPpneMrunSnonWnonDb"; 		
 };

  
if (isServer) then 
{
	H8_increments = 0;
	{
		H8_increments = H8_increments + 1;    
		_x setVariable ["H8_increm",H8_increments,true];
	}forEach (allUnits+alldead);
	
	publicVariable "H8_increments";            
};