/*
*
*  MarXet_Init.sqf
*  Author: WolfkillArcadia
*  © 2016 Arcas Industries
*  This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
*  To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/
private["_code"];
if (!hasInterface || isServer) exitWith {};
waitUntil {!isNil "MarXetLoaded"};
if (MarXetLoaded) then
{
    {
        _code = compileFinal (preprocessFileLineNumbers (_x select 1));
        missionNamespace setVariable [(_x select 0), _code];
    }
    forEach
    [
        ['ExileClient_MarXet_gui_load','custom\plugin\MarXet\functions\ExileClient_MarXet_gui_load.sqf'],
        ['ExileClient_MarXet_network_buyerBuyNowResponse','custom\plugin\MarXet\functions\ExileClient_MarXet_network_buyerBuyNowResponse.sqf'],
        ['ExileClient_MarXet_network_createNewListingResponse','custom\plugin\MarXet\functions\ExileClient_MarXet_network_createNewListingResponse.sqf'],
        ['ExileClient_MarXet_network_sellerBuyNowResponse','custom\plugin\MarXet\functions\ExileClient_MarXet_network_sellerBuyNowResponse.sqf'],
        ['ExileClient_MarXet_network_updateInventoryResponse','custom\plugin\MarXet\functions\ExileClient_MarXet_network_updateInventoryResponse.sqf'],
        ['ExileClient_MarXet_util_log','custom\plugin\MarXet\functions\ExileClient_MarXet_util_log.sqf'],
        ['ExileClient_MarXet_util_sortNumberString','custom\plugin\MarXet\functions\ExileClient_MarXet_util_sortNumberString.sqf']
    ];
    [] execVM "custom\plugin\MarXet\MarXet_Traders.sqf";
    [5, {["updateInventoryRequest",[0]] call ExileClient_system_network_send}, [], false] call ExileClient_system_thread_addtask;
    [format["MarXet Client init completed"],"Client Init"] call ExileClient_MarXet_util_log;
}
else
{
    [format["MarXet server failed to load! Client load has been disabled!"],"Client Init"] call ExileClient_MarXet_util_log;
};
