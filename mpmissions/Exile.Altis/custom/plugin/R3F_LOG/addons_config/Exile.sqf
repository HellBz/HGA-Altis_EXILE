/**
 * Logistics configuration for All in Arma.
 * The configuration is splitted in categories dispatched in the included files.
 */

// Load the logistics config only if the addon is used
if (isClass (configfile >> "CfgPatches" >> "AiA_Core")) then
{
    #include "Exile\Air.sqf"
    #include "Exile\LandVehicle.sqf"
    #include "Exile\Ship.sqf"
    #include "Exile\Building.sqf"
    #include "Exile\ReammoBox.sqf"
    #include "Exile\Others.sqf"
};