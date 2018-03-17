if (isServer) then {
[] execVM "addons\time.sqf";			    // Time
};

private _objects = 
[
	["Exile_Sign_Aircraft", [14593.7,16753.7,17.8762], [[-0.690074,-0.723738,0],[0,0,1]], [false, false]],
	["Exile_Sign_Armory", [14567,16763.8,17.91], [[-0.690074,-0.723738,0],[0,0,1]], [false, false]],
	["Exile_Sign_Equipment", [14573.4,16758.3,17.8331], [[-0.0475771,-0.998868,0],[0,0,1]], [false, false]],
	["Exile_Sign_Food", [14591.4,16777.4,17.91], [[0.707107,-0.707107,0],[0,0,1]], [false, false]],
	["Exile_Sign_SpecialOperations", [14565.6,16774,17.6937], [[-0.750526,0.660841,0],[0,0,1]], [false, false]],
	["Exile_Sign_Hardware", [14588.9,16756.8,17.8212], [[0.984808,-0.173646,0],[0,0,1]], [false, false]],
	["Exile_Sign_Vehicles", [14610.1,16872.5,18.1622], [[0.745267,-0.666767,0],[0,0,1]], [false, false]],
	["Land_WaterCooler_01_new_F", [14584,16777.7,17.91], [[-0.66084,-0.750526,0],[0,0,1]], [false, false]],
	["Exile_Sign_WasteDump", [14609.2,16898.9,18.0966], [[0.690079,0.723734,0],[0,0,1]], [false, false]],
	["Exile_Sign_Office_Small", [14588.1,16772.5,17.3235], [[0.707107,0.707107,0],[0,0,1]], [false, false]],
	["Exile_Sign_Office", [14596.3,16776.3,22.9992], [[-0.672664,0.739948,0],[0,0,1]], [false, false]],
	["Exile_Sign_Office_Small", [14592.6,16773.2,21.9835], [[0.707107,-0.707107,0],[0,0,1]], [false, false]],
	["Exile_Sign_Aircraft_Small", [14595.9,16765.1,17.303], [[0.745267,-0.666767,0],[0,0,1]], [false, false]],
	["Exile_Cosmetic_MG", [14568,16774.8,18.0358], [[-0.999717,0.0238043,0],[0,0,1]], [false, false]],
	["Exile_Cosmetic_UAV", [14567.2,16775,18.8145], [[0,1,0],[0,0,1]], [false, false]],
	["Exile_Sign_VehicleCustoms", [14619.4,16888.2,17.7657], [[0.999497,-0.0317282,0],[0,0,1]], [false, false]],
	["Exile_Sign_TraderCity", [14554.8,16906.4,17.6393], [[0.739948,-0.672664,0],[0,0,1]], [false, false]],
	["Land_FuelStation_Build_F", [14624.3,16894.8,17.8827], [[0.952516,0.304487,0],[0,0,1]], [false, false]],
	["Land_FuelStation_Sign_F", [14621.4,16898.1,17.8708], [[0,1,0],[0,0,1]], [false, false]],
	["Land_FuelStation_Feed_F", [14619.2,16895.9,17.8569], [[-0.96991,-0.243463,0],[0,0,1]], [false, false]],
	["Exile_Sign_SpecialOperations_Small", [14573,16774.7,17.3007], [[-0.729183,-0.684318,0],[0,0,1]], [false, false]],
	["Exile_Sign_Equipment_Small", [14579.5,16768.1,17.3113], [[-0.701469,-0.7127,0],[0,0,1]], [false, false]],
	["Exile_Sign_Armory_Small", [14576.5,16771.2,17.3145], [[-0.707107,-0.707107,0],[0,0,1]], [false, false]],
	["Exile_Sign_Hardware_Small", [14584.4,16763.2,17.3163], [[-0.684318,-0.729184,0],[0,0,1]], [false, false]],
	["Exile_Sign_AircraftCustoms", [14634.8,16792.4,17.7303], [[-0.712699,0.701469,0],[0,0,1]], [false, false]],
	["Exile_Sign_AircraftCustoms_Small", [14633.2,16800.4,17.2345], [[0.599275,-0.800543,0],[0,0,1]], [false, false]],
	["Exile_Sign_AircraftCustoms_Small", [14614.6,16799.5,17.3016], [[0.718238,0.695798,0],[0,0,1]], [false, false]],
	["Land_Pier_Box_F", [14673.6,16798.4,22.6626], [[0.707107,-0.707107,0],[0,0,1]], [false, false]],
	["Land_Pier_Box_F", [14577.1,16723.9,22.6626], [[-0.707107,-0.707107,0],[0,0,1]], [false, false]],
	["Land_Pier_F", [2993.46,18185.8,-1.13638], [[0.999641,-0.0267981,0],[0,0,1]], [false, false]],
	["Land_Pier_F", [2994.03,18144.2,-1.15465], [[0.999641,-0.0267981,0],[0,0,1]], [false, false]],
	["Land_Pier_F", [2980.88,18182.9,-1.1319], [[0.999641,-0.0267981,0],[0,0,1]], [false, false]],
	["Land_Pier_F", [2979.73,18141.3,-1.14254], [[0.999641,-0.0267981,0],[0,0,1]], [false, false]],
	["Land_WaterCooler_01_new_F", [2979.31,18177.4,1.27611], [[-0.999497,0.0317244,0],[0,0,1]], [false, false]],
	["Land_WaterCooler_01_new_F", [23356,24169.5,4.60965], [[-0.642788,-0.766044,0],[0,0,1]], [false, false]],
	["Exile_Sign_TraderCity", [2989.89,18177.6,0.61365], [[-0.999874,-0.0158642,0],[0,0,1]], [false, false]],
	["Land_Pier_Box_F", [2921.94,18197.2,1.15006], [[0.0158659,0.999874,0],[0,0,1]], [false, false]],
	["Land_PierLadder_F", [2969.61,18152.9,-1.73874], [[0.998867,0.0475807,0],[0,0,1]], [false, false]],
	["Exile_Sign_WasteDump", [2983.77,18132.1,1.31246], [[-0.197041,-0.980395,0],[0,0,1]], [false, false]],
	["Exile_Sign_Vehicles", [2981.34,18148.4,1.77985], [[0.0475819,0.998867,0],[0,0,1]], [false, false]],
	["Exile_Sign_Boat", [2912.81,18194.8,0.945447], [[-0.999717,0.0238043,0],[0,0,1]], [false, false]],
	["Exile_Sign_Armory", [2988.82,18179.1,1.02696], [[0.999717,-0.0237971,0],[0,0,1]], [false, false]],
	["Exile_Sign_Equipment", [2980.48,18195.6,0.997162], [[0,1,0],[0,0,1]], [false, false]],
	["Exile_Sign_Food", [2978.52,18178.6,1.16662], [[-1,1.19249e-008,0],[0,0,1]], [false, false]],
	["Land_Pier_small_F", [23389,24147.6,-0.137567], [[-0.251141,0.967951,0],[0,0,1]], [false, false]],
	["Exile_Sign_TraderCity", [23329.3,24201.1,3.09842], [[-0.0475771,-0.998868,0],[0,0,1]], [false, false]],
	["Exile_Sign_Equipment", [23381.4,24170,3.95674], [[-0.0475771,-0.998868,0],[0,0,1]], [false, false]],
	["Exile_Sign_Armory", [23378.2,24165.2,3.95674], [[-0.0475771,-0.998868,0],[0,0,1]], [false, false]],
	["Exile_Sign_Hardware_Small", [2991.93,18162.8,0], [[0.158002,0.987439,0],[0,0,1]], [false, false]],
	["Exile_Sign_Hardware", [23370.9,24187.1,4.57432], [[-0.987439,0.158003,0],[0,0,1]], [false, false]],
	["Exile_Sign_Vehicles", [23389.4,24185.3,4.46844], [[-0.312037,-0.95007,0],[0,0,1]], [false, false]],
	["Exile_Sign_WasteDump", [23340.4,24209.8,4.49615], [[0.997987,-0.0634245,0],[0,0,1]], [false, false]],
	["Exile_Sign_Food_Small", [23353.6,24171.1,3.37786], [[-0.678506,-0.734595,0],[0,0,1]], [false, false]],
	["Exile_Sign_Boat_Small", [23333.4,24189.1,3.19471], [[-0.916111,0.400924,0],[0,0,1]], [false, false]],
	["Exile_Locker", [14618.4,16804.2,17.9974], [[0.69225,-0.721658,0],[0,0,1]], [false, false]],
	["Exile_Sign_Locker", [14620,16805.8,17.91], [[0.711919,-0.702261,0],[0,0,1]], [false, false]],
	["Exile_Locker", [23341.3,24194.2,4.44642], [[-0.5,0.866025,0],[0,0,1]], [false, false]],
	["Exile_Locker",[2988.82,18173.9,1.35244],[[0.999929,0.011945,0],[0,0,1]],[false,false]],
	["Land_HelipadEmpty_F",[3001.96,18111.6,3],[false,false]],
	["Land_HelipadSquare_F",[3001.96,18111.6,3],[false,false]],
    ["Land_HelipadEmpty_F",[2946.49,18226.3,7],[false,false]],
    ["Land_HelipadSquare_F",[14638.9,16743.7,18],[false,false]],
    ["Land_HelipadEmpty_F",[14638.9,16743.7,18],[false,false]],
    ["Land_HelipadSquare_F",[14585.6,16900.6,18],[false,false]],
    ["Land_HelipadEmpty_F",[14585.6,16900.6,18],[false,false]],
    ["Land_HelipadEmpty_F",[23424.2,24218.3,5],[false,false]],
    ["Land_HelipadSquare_F",[23424.2,24218.3,5],[false,false]],
    ["Land_HelipadEmpty_F",[23308.55,24227.19,5],[false,false]],
	["Land_HelipadEmpty_F",[14248.2,13175.5,17.6025],[false,false]],
	["Exile_Sign_WasteDump_Small", [22163.539063,5869.134277,23.249077], [[0.0537657,0.998554,0],[0,0,1]], [false, false]],
	["Exile_Locker", [22171.28125,5804.604492,23.549077], [[-0.995837,0.0911504,0],[0,0,1]], [false, false]],
	["Exile_Sign_Locker",[22171.078125,5806.539063,23.249077],[[-0.99986,0.0167114,0],[0,0,1]],[false,false]],
	["Exile_Sign_SpecialOperations_Small",[22153.589844,5831.594238,23.249077],[[-0.99986,0.0167114,0],[0,0,1]],[false,false]],
	["Exile_Sign_Office_Small",[22166.128906,5792.577148,23.249077],[[-0.00111372,0.999999,0],[0,0,1]],[false,false]],
	["Exile_Sign_Equipment",[22166.888672,5815.420898,23.249077],[[-0.00589853,-0.999983,0],[0,0,1]],[false,false]],
	["Exile_Sign_Armory", [22161.962891,5815.0366211,23.249077], [[-0.0163427,-0.999867,0],[0,0,1]], [false, false]],
	["Exile_Sign_Food_Small", [22159.683594,5796.307617,23.249077], [[0.99999,0.00439626,0],[0,0,1]], [false, false]],
	["Exile_Sign_Hardware_Small", [22159.851563,5811.38623,23.249077], [[0.999999,-0.00142746,0],[0,0,1]], [false, false]],
	["Land_Pier_Box_F",[6472.93,8654.47,4.02466],[[0,1,0],[0,0,1]],[true,false]],
	["Land_Pier_addon",[6484.64,8654.81,-1.89912],[[0.999988,0.00495404,0],[0,0,1]],[true,false]],
	["Exile_Locker",[6483.12,8650.07,0.490143],[[-0.999361,-0.0357385,0],[0,0,1]],[true,false]],
	["Exile_Sign_Locker",[6483.02,8651.93,0.792289],[[-0.999994,-0.0033736,0],[0,0,1]],[true,false]],
	["Land_Pier_Box_F",[18420.4,23962.3,4.19868],[[0,1,0],[0,0,1]],[true,false]],
	["Land_Pier_addon",[18432.1,23962,-1.67976],[[0.999988,0.00495404,0],[0,0,1]],[true,false]],
	["Exile_Sign_Boat",[18522.7,23883.2,0.462006],[[0.752626,-0.658448,0],[0,0,1]],[true,false]],
	["Exile_Locker",[18430.7,23956.5,0.981969],[[-0.999361,-0.0357385,0],[0,0,1]],[true,false]],
	["Exile_Sign_Locker",[18430.6,23958.4,0.981969],[[-0.999994,-0.0033736,0],[0,0,1]],[true,false]],
	["Land_PierWooden_01_platform_F",[18520.3,23885.4,-1.8912],[[0.750491,-0.66088,0],[0,0,1]],[true,false]],
	["Exile_Construction_WoodLadder_Static",[18519.5,23886.2,-2.93239],[[0.743843,-0.668354,0],[0,0,1]],[true,false]],
	["Exile_Sign_WasteDump",[18411.6,23962.2,4.20432],[[-0.999953,0.00973687,0],[0,0,1]],[true,false]],
	["Land_Wreck_HMMWV_F",[18415.8,23968.8,4.20432],[[0.560759,0.827979,0],[0,0,1]],[true,false]],
	["Land_GarbageHeap_03_F",[18414.1,23956.7,4.20432],[[-0.848617,-0.529008,0],[0,0,1]],[true,false]],
	["Exile_Sign_Boat",[6566.31,8606.47,1.48514],[[0.752626,-0.658448,0],[0,0,1]],[true,false]],
	["Land_PierWooden_01_platform_F",[6563.98,8608.63,-0.927462],[[0.750491,-0.66088,0],[0,0,1]],[true,false]],
	["Exile_Construction_WoodLadder_Static",[6563.22,8609.45,-1.99778],[[0.743843,-0.668354,0],[0,0,1]],[true,false]],
	["Land_GarbageHeap_04_F",[6466.09,8648.65,3.72836],[[0.859803,0.510625,0],[0,0,1]],[true,false]],
	["Land_Boat_04_wreck_F",[6471.77,8661.24,4.03029],[[-0.885781,-0.464103,0],[0,0,1]],[true,false]],
	["Exile_Sign_WasteDump",[6464.16,8654.42,3.76503],[[-0.999995,0.00307704,0],[0,0,1]],[true,false]]
];

{
	private _object = (_x select 0) createVehicle [0,0,0];
	_object setPosASL (_x select 1);
	_object setVectorDirAndUp (_x select 2);
	_object enableSimulationGlobal ((_x select 3) select 0);
	_object allowDamage ((_x select 3) select 1);
} forEach _objects;


///////////////////////////////////////////////////////////////////////////////////////////////////
// Russian Roulette
///////////////////////////////////////////////////////////////////////////////////////////////////

_objects =
[
    ["Land_WoodenTable_large_F", [14628.171,16826.014,18.467293], 0, false],
    ["Exile_Sign_RussianRoulette", [14623.898,16820.336, 18.950966], 0.77240193, false],
    ["Land_HumanSkull_F", [14621.056, 16821.572, 18.476805], 2.0025947, false],
    ["Land_WheelCart_F", [14621.334,16821.477, 18.355867], 4.9935374, false],
    ["Land_Camping_Light_F", [14628.075,16825.77, 19.00408], 0, true]
    //["Land_SportGround_fence_F", [14625.692, 16818.945, 18.791378], 0.79693103, false], 
    //["Land_SportGround_fence_F", [14633.911, 16816.904, 17.9177], 5.4953084, false], 
    //["Land_CargoBox_V1_F", [14619.726, 16823.613, 18.75972], 5.4931207, false],
];

{
    private ["_object"];

    _object = (_x select 0) createVehicle [0,0,0];
    _object setDir (deg (_x select 2));
    _object setPosWorld (_x select 1);
    _object allowDamage false;
    _object enableSimulation (_x select 3);
    _object enableSimulationGlobal (_x select 3);
}
forEach _objects;

ExileRouletteChairs = [];

ExileRouletteChairPositions = 
[
    [[14627.052, 16826.611, 18.004343], 4.9010592], 
    [[14629.161, 16826.707, 18.004343], 1.3332222], 
    [[14628.180, 16824.557, 18.004343], 3.1448042], 
    [[14628.123, 16827.488, 18.004343], 0], 
    [[14629.184, 16825.537, 18.034342], 1.7944603],
    [[14627.175, 16825.453, 18.004343], 4.4050193]
];

{
    private ["_chair"];

    _chair = "Exile_RussianRouletteChair" createVehicle [0, 0, 0];
    _chair setDir (deg (_x select 1));
    _chair setPosWorld (_x select 0);
    _chair allowDamage false;
    _chair enableSimulationGlobal true;

    ExileRouletteChairs pushBack _chair;
}
forEach ExileRouletteChairPositions;