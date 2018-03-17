
private["_traders","_trader","_signs","_sign"];
_traders = [];
switch (toLower worldName) do {
	case "altis":
    {
        _trader =

        call ExileClient_object_trader_create;
		_traders pushBack _trader;
		private ["_signs"];
		_signs = [
			//["Exile_Sign_Armory",[14577.6,16755.7,0],225.798,[[-0.716886,-0.69719,0],[-0,0,1]],false],
			//["Exile_Sign_Armory",[2986.82,18151.3,0.237748],294.574,[[-0.909421,0.415876,0],[0,0,1]],false],
			//["Exile_Sign_Armory",[23334.3,24201.4,-0.221748],181.915,[[-0.0334147,-0.999442,0],[-0,0,1]],false]
		];
		{
			private ["_sign"];
			_sign = createVehicle [_x select 0, [0,0,0], [], 0, ""];
			_sign enableSimulationGlobal false;
			_sign setObjectTextureGlobal [0, "MarXet\images\MarXet_Sign.jpg"];
			if (_x select 4) then {
				_sign setDir (_x select 2);
				_sign setPos (_x select 1);
			} else {
				_sign setPosATL (_x select 1);
				_sign setVectorDirAndUp (_x select 3);
			};
		} foreach _signs;
    };
};
{
	_x forceAddUniform "U_BG_Guerilla2_1";
	_x addVest "Exile_Vest_Snow";
	_x addHeadgear "H_Watchcap_blk";
	_x addGoggles "G_Bandanna_aviator";
	_x addWeapon "srifle_DMR_04_F";
	_x addPrimaryWeaponItem "optic_LRPS";
	_x addWeapon "hgun_ACPC2_F";
	_x addAction ["<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Access MarXet","createDialog 'RscMarXetDialog'","",1,false,true,"","((position player) distance _target) <= 4"];
} forEach _traders;
[format["MarXet Traders have been placed. Trader count: %1. Map: %2",(count(_traders)),worldName],"Client Traders"] call ExileClient_MarXet_util_log;
