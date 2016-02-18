#include "script_component.hpp"

if(GVAR(EnableDebugTrace) && !isMultiplayer) then {
    GVAR(traceFrags) = true;
    GVAR(autoTrace) = true;
};

if(isServer) then {
    [QGVAR(frag_eh), { _this call FUNC(frago); }] call EFUNC(common,addEventHandler);
};

["SettingsInitialized", {
    //If not enabled, exit
    if (!GVAR(enabled)) exitWith {};

    // Register fire event handler
    ["firedPlayer", DFUNC(fired)] call EFUNC(common,addEventHandler);
    ["firedPlayerNonLocal", DFUNC(fired)] call EFUNC(common,addEventHandler);
    ["firedNonPlayer", DFUNC(fired)] call EFUNC(common,addEventHandler);
    ["firedPlayerVehicle", DFUNC(fired)] call EFUNC(common,addEventHandler);
    ["firedPlayerVehicleNonLocal", DFUNC(fired)] call EFUNC(common,addEventHandler);
    ["firedNonPlayerVehicle", DFUNC(fired)] call EFUNC(common,addEventHandler);

    ["bulletDestroyedFrag", DFUNC(bulletDestroyedFragEH)] call EFUNC(common,addEventHandler);
    ["bulletDestroyedSpall", DFUNC(bulletDestroyedSpallEH)] call EFUNC(common,addEventHandler);

    [FUNC(masterPFH), 0, []] call CBA_fnc_addPerFrameHandler;

}] call EFUNC(common,addEventHandler);

//Cache for ammo type configs
GVAR(cacheRoundsTypesToTrackFrag) = createLocation ["ACE_HashLocation", [-10000,-10000,-10000], 0, 0];
GVAR(cacheRoundsTypesToTrackFrag) setText QGVAR(cacheRoundsTypesToTrackFrag);
