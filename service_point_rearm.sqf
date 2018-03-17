private ["_vehicle","_args","_servicePoint","_costs","_magazineCount","_weapon","_type","_name","_weaponType","_weaponName","_turret","_magazines","_ammo","_exilew","_veh"];
_vehicle = _this select 0;
_args = _this select 3;
_servicePoint = _args select 0;
_costs = _args select 1;
_weapon = _args select 2;
_type = typeOf _vehicle;
_name = getText(configFile >> "cfgVehicles" >> _type >> "displayName");
_weaponName = _weapon select 0;
_ammoClass = _weapon select 1;
_ammoName = _weapon select 2;
_ammoMAX = _weapon select 3;
_ammoMIN = _weapon select 4;
_turret = _weapon select 5;
_exilew = player getVariable ["ExileMoney", 0];
_veh = vehicle player;
_flags = player nearObjects ['Exile_Construction_Flag_Static', 50];
if!(_flags isEqualTo [])exitWith
{
	["ErrorTitleAndText", ["Rearm Disabled", "You cannot rearm at gas stations near bases"]] call ExileClient_gui_toaster_addTemplateToast;
};
if (!local _vehicle) exitWith {["ErrorTitleOnly", ["Get in vehicle as driver"]] call ExileClient_gui_toaster_addTemplateToast; diag_log format["Error: called service_point_rearm.sqf with non-local vehicle: %1", _vehicle] };
if(count (crew _vehicle) > 1) exitWith {["ErrorTitleOnly", ["Vehicle can not have passengers"]] call ExileClient_gui_toaster_addTemplateToast;};
if(!(_veh isEqualTo player) && !((driver _veh) isEqualTo player)) exitWith {["ErrorTitleOnly", ["You must be in vehicle as driver"]] call ExileClient_gui_toaster_addTemplateToast;};
if (_exilew <_costs) exitWith {["ErrorTitleOnly", ["Not enough poptabs"]] call ExileClient_gui_toaster_addTemplateToast;};
if(_type isKindOf "Air") then 
{
	_ammoMAX = 10;
	_ammoMIN = 1;
} else 
{
	_ammoMAX = _weapon select 3;
	_ammoMIN = _weapon select 4;	
};
_currentmags = magazines _vehicle;
_magscount = count _currentmags;
_ammocount = {_ammoClass == _x}count _currentmags;
if(_magscount > _ammoMAX)exitWith{["ErrorTitleOnly", ["Ammo already full"]] call ExileClient_gui_toaster_addTemplateToast;};
if(_ammocount > _ammoMIN)exitWith{["ErrorTitleOnly", ["Ammo already full"]] call ExileClient_gui_toaster_addTemplateToast;};
 
if(_costs > 0 && isTradeEnabled)then{
        takegive_poptab = [player,_costs,true];
        publicVariableServer "takegive_poptab";
};
_vehicle addMagazineTurret [_ammoClass, _turret]; 
cutText [format["%1 of %2 Rearmed", _weaponName, _name], "PLAIN DOWN"];