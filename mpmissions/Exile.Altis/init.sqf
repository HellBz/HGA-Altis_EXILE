//------------------------- MarXet ------------------------------------------------------------------//
[] execVM "custom\plugin\MarXet\MarXet_Init.sqf";
//------------------------- MarXet ------------------------------------------------------------------//

//------------------------- R3F_LOG -----------------------------------------------------------------//
[] execVM "custom\plugin\R3F_LOG\init.sqf";
//------------------------- R3F_LOG -----------------------------------------------------------------//

//------------------------- Disable Thermal----------------------------------------------------------//
[] execVM "custom\scripts\disablethermal.sqf";
//------------------------- Disable Thermal----------------------------------------------------------//

//------------------------- Claim Vehicle------------------------------------------------------------//
ExileClient_ClaimVehicles_network_claimRequestSend = compileFinal preprocessFileLineNumbers 'custom\scripts\ExileClient_ClaimVehicles_network_claimRequestSend.sqf';
ExileServer_ClaimVehicles_network_saveVehicleRequest = compileFinal preprocessFileLineNumbers 'custom\scripts\ExileServer_ClaimVehicles_network_saveVehicleRequest.sqf';
//------------------------- Claim Vehicle------------------------------------------------------------//

//------------------------- Server Restart Warning --------------------------------------------------//
"RM_DISPLAYTEXT_PUBVAR" addPublicVariableEventHandler {(_this select 1) spawn BIS_fnc_dynamicText;};
//------------------------- Server Restart Warning --------------------------------------------------//

//------------------------- Enigma_Exile_Deploybike -------------------------------------------------//
[] execVM "custom\plugin\EnigmaPersonalVehicle\init.sqf";
//------------------------- Enigma_Exile_Deploybike -------------------------------------------------//

//------------------------- Status Bar ---------------------------------------------------------------//
[] execVM "custom\plugin\statusBar\statusBar.sqf";
//------------------------- Status Bar ---------------------------------------------------------------//