if (!hasInterface || isServer) exitWith {};

enableEnvironment [false, true];
"ColorCorrections" ppEffectEnable true; 
"ColorCorrections" ppEffectAdjust [0.88, 0.88, 0, [0.2, 0.29, 0.4, -0.22], [1, 1, 1, 1.3], [0.15, 0.09, 0.09, 0.0]];
"ColorCorrections" ppEffectCommit 0;

_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 45.4546;
_workBench setPosATL [14587.8, 16758.7, 0.0938587];

_trader = 
[
    "Exile_Trader_Hardware",
    "Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [0, 0, -0.5],
    170,
    _workBench
]
call ExileClient_object_trader_create;

_cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
_cashDesk setDir 131.818;
_cashDesk setPosATL [14589.8, 16778.2, -0.0701294];

_microwave = "Land_Microwave_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _microwave;         
_microwave disableCollisionWith _cashDesk; 
_microwave attachTo [_cashDesk, [-0.6, 0.2, 1.1]];

_ketchup = "Land_Ketchup_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _ketchup;         
_ketchup disableCollisionWith _cashDesk; 
_ketchup attachTo [_cashDesk, [-0.6, 0, 1.1]];

_mustard = "Land_Mustard_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _mustard;         
_mustard disableCollisionWith _cashDesk; 
_mustard attachTo [_cashDesk, [-0.5, -0.05, 1.1]];

_trader = 
[
    "Exile_Trader_Food",
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [0.1, 0.5, 0.2],
    170,
    _cashDesk
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Armory",
    "Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [14568.1, 16764.3, 0.084837],
    0
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Equipment",
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["InBaseMoves_Lean1"],
    [14571.5, 16759.1, 0.126438],
    0
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_SpecialOperations",
    "Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [14566.3, 16773.2, 0.126438],
    140
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Office",
    "Exile_Trader_Office",
    "GreekHead_A3_04",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    [14599.6, 16774.6, 5.12644],
    220
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [14608.4, 16901.3, 0],
    270
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Aircraft",
    "Exile_Trader_Aircraft",
    "WhiteHead_17",
    ["LHD_krajPaluby"],
    [14596.5, 16752.9, 0.12644],
    133
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_AircraftCustoms",
    "Exile_Trader_AircraftCustoms",
    "GreekHead_A3_07",
    ["HubStandingUC_idle1", "HubStandingUC_idle2", "HubStandingUC_idle3", "HubStandingUC_move1", "HubStandingUC_move2"],
    [14635, 16790.3, 0],
    156.294
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Vehicle",
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [14603.7, 16877.3, 0.00143433],
    90
]
call ExileClient_object_trader_create;
_trader addAction ["<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Access MarXet","createDialog 'RscMarXetDialog'","",1,false,true,"","((position player) distance _target) <= 4"];

_carWreck = "Land_Wreck_CarDismantled_F" createVehicleLocal [0,0,0];
_carWreck setDir 355.455;
_carWreck setPosATL [14605.6, 16877.3, 0.0208359];

_trader = 
[
    "Exile_Trader_VehicleCustoms",
    "Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [14617.2, 16888.4, 0],
    269.96
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Boat",
    "Exile_Trader_Boat",
    "WhiteHead_17",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [18521.8,23884.3,173.251],
    313
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Vehicle",
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [2980.19,18146.2,1.06391],
    222.352
]
call ExileClient_object_trader_create;
_trader addAction ["<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Access MarXet","createDialog 'RscMarXetDialog'","",1,false,true,"","((position player) distance _target) <= 4"];
_carWreck = "Land_Wreck_CarDismantled_F" createVehicleLocal [0,0,0];
_carWreck setDir 130.966;    
_carWreck setPosATL [2978.76,18144.5,1.13293];

_trader = 
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [2984.05,18133.4,0.00107765],
    29.3856
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Food",
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [2979.87,18180.9,2.353821],
    89.2952
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Equipment",
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [2980.7,18192.9,2.353821],
    130.535
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Armory",
    "Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [2986.43,18178.5,1.353821],
    9
]
call ExileClient_object_trader_create;

_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 109.888;
_workBench setPosATL [2993.2, 18167, 0.353821];
_trader = 
[
    "Exile_Trader_Hardware",
    "Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [0, 0, -0.5],
    170,
    _workBench
]
call ExileClient_object_trader_create;

_cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
_cashDesk setDir 222.727;
_cashDesk setPosATL [23353.1, 24168, 0.16585];

_microwave = "Land_Microwave_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _microwave;         
_microwave disableCollisionWith _cashDesk; 
_microwave attachTo [_cashDesk, [-0.6, 0.2, 1.1]];

_ketchup = "Land_Ketchup_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _ketchup;         
_ketchup disableCollisionWith _cashDesk; 
_ketchup attachTo [_cashDesk, [-0.6, 0, 1.1]];

_mustard = "Land_Mustard_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _mustard;         
_mustard disableCollisionWith _cashDesk; 
_mustard attachTo [_cashDesk, [-0.5, -0.05, 1.1]];

_trader = 
[
    "Exile_Trader_Food",
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [0.1, 0.5, 0.2],
    170,
    _cashDesk
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Boat",
    "Exile_Trader_Boat",
    "WhiteHead_17",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [6565.22,8607.61,163.83],
    312
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [6465.93,8654.22,172.253],
    92
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [18414.1,23962.2,181.25],
    88
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Vehicle",
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [23385.6,24191.6,0.00136566],
    123
]
call ExileClient_object_trader_create;
_trader addAction ["<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Access MarXet","createDialog 'RscMarXetDialog'","",1,false,true,"","((position player) distance _target) <= 4"];
_carWreck = "Land_Wreck_CarDismantled_F" createVehicleLocal [0,0,0];
_carWreck setDir 47.2728;    
_carWreck setPosATL [23387.3, 24190.3, 0.05];

_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 279.545;
_workBench setPosATL [23371.6, 24188, 0.199955];

_trader = 
[
    "Exile_Trader_Hardware",
    "Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [0, 0, -0.5],
    170,
    _workBench
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Equipment",
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [23379.9, 24169.3, 0.199955],
    206
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Armory",
    "Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [23375.2,24165, 0.199955],
    296.855
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [23336.6,24214.4,0.00115061],
    346
]
call ExileClient_object_trader_create;

[
    "Exile_Trader_RussianRoulette",
    "",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [14622.6, 16820.1, 0.126],
    187.428
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [22160.5, 5865.852051, 40.800102],
    181
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_SpecialOperations",
    "Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [22153.525391, 5829.0737305, 39.9534],
    90
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Equipment",
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [22169.0273438, 5817.384766, 43.024334],
    3
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Office",
    "Exile_Trader_Office",
    "GreekHead_A3_04",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    [22164.65625, 5791.504883, 43.872276],
    181
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Armory",
    "Exile_Trader_Armory",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [22161.923828, 5816.870117, 42.74157],
    3
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Food",
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [22158.785156, 5797.783203, 44.369637],
    275
]
call ExileClient_object_trader_create;

_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 275.4546;
_workBench setPosATL [22158.376953, 5811.314941, 43.548355];

_trader = 
[
    "Exile_Trader_Hardware",
    "Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [0, 0, -0.5],
    275,
    _workBench
]
call ExileClient_object_trader_create;

_pic = "logo\RG.paa";
[
		'<img align=''left'' size=''2.0'' shadow=''0'' image='+(str(_pic))+' />',
		safeZoneX+0.00,
		safeZoneY+safeZoneH-0.12,
		99999,
		0,
		0,
		3090
	] spawn bis_fnc_dynamicText;

missionNamespace setVariable ["ExileClientXM8IsPowerOn",true];
player setVariable ["ExileXM8IsOnline",true];
profileNamespace setVariable ["ExileEnable8GNetwork",true];

SV_fnc_SalvageVehicle = compileFinal preprocessFileLineNumbers "SalvageVehicle.sqf";
execVM "announcepay.sqf";
execVM "wages.sqf";

call compile preprocessfilelinenumbers "zcp.sqf";

