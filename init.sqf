[] execVM "Overrides\disablethermal.sqf";
[] execVM "ClaimVehicles_Client\ClaimVehicles_Client_init.sqf";
[] execVM "R3F_LOG\init.sqf";
[] execVM "MarXet\MarXet_Init.sqf";
[] execVM "EnigmaRevive\init.sqf";
[] execVM "reservedslots.sqf";
[] execVM "spawnCarrier.sqf";

call compileFinal preprocessFileLineNumbers "takegive_poptab_init.sqf";

if(hasInterface) then{
    call compileFinal preprocessFileLineNumbers "service_point.sqf";
};

waitUntil {!isNull (findDisplay 46)};


	

