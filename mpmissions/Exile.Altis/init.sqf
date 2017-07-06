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

//------------------------- EnigmaRevive -------------------------------------------------------------//
[] execVM "custom\plugin\EnigmaRevive\init.sqf";
//------------------------- EnigmaRevive -------------------------------------------------------------//

//------------------------- A3XAI -------------------------------------------------------------------//
#include "custom\plugin\A3XAI_Client\A3XAI_initclient.sqf";
//------------------------- A3XAI -------------------------------------------------------------------//

//------------------------- Get Time to Restart -----------------------------------------------------//
//ExileServer_Restart_network_timeToRestart = compileFinal preprocessFileLineNumbers "custom\scripts\ExileServer_Restart_network_timeToRestart.sqf"; 
//------------------------- Get Time to Restart -----------------------------------------------------//


[] execVM "custom\BuryBody\init.sqf";

if hasInterface then
{
	[] ExecVM "VEMFr_client\sqf\initClient.sqf"; // Client-side part of VEMFr
};

null = allUnits execVM "custom\scripts\DragBody.sqf";
