//------------------------- MarXet ------------------------------------------------------------------//
[] execVM "MarXet\MarXet_Init.sqf";
//------------------------- MarXet ------------------------------------------------------------------//

//------------------------- Disable Thermal----------------------------------------------------------//
[] execVM "custom\scripts\disablethermal.sqf";
//------------------------- Disable Thermal----------------------------------------------------------//

//------------------------- Claim Vehicle------------------------------------------------------------//
ExileClient_ClaimVehicles_network_claimRequestSend = compileFinal preprocessFileLineNumbers 'custom\scripts\ExileClient_ClaimVehicles_network_claimRequestSend.sqf';
ExileServer_ClaimVehicles_network_saveVehicleRequest = compileFinal preprocessFileLineNumbers 'custom\scripts\ExileServer_ClaimVehicles_network_saveVehicleRequest.sqf';
//------------------------- Claim Vehicle------------------------------------------------------------//
