 
private["_vehicle","_attachedObjects","_position"];
if (ExilePlayerInSafezone) exitWith { false };
if !(alive player) exitWith { false };
ExilePlayerInSafezone = true;
player allowDamage false;
player removeAllEventHandlers "HandleDamage";
_vehicle = vehicle player;
if !(_vehicle isEqualTo player) then 
{
	if (local _vehicle) then 
	{
		_vehicle allowDamage false;
		["XG_EnterSafeZone",[_vehicle,player]] call ExileClient_system_network_send;
	};
	_attachedObjects = attachedObjects _vehicle;
	if !(_attachedObjects isEqualTo []) then 
	{
		_position = getPosATL _vehicle;
		{
			if ((typeOf _x) in ["DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag"]) then 
			{
				detach _x;
				_x setPosATL [(_position select 0) + random 2, (_position select 1) + random 2, 0.05];
				_x setDir (random 360);
			};
		}
		forEach _attachedObjects;
	};
	ExileClientSafeZoneVehicle = _vehicle;
	ExileClientSafeZoneVehicleFiredEventHandler = _vehicle addEventHandler ["Fired", {_this call ExileClient_object_player_event_onFiredSafeZoneVehicle}];
};
["XG_PlayerEnterSafezone",[player]] call ExileClient_system_network_send;
ExileClientSafeZoneESPEventHandler = addMissionEventHandler ["Draw3D", {20 call ExileClient_gui_safezone_safeESP}];
["InfoTitleAndText", ["Welcome!", "You have entered a trader city safe zone."]] call ExileClient_gui_toaster_addTemplateToast; 
ExileClientSafeZoneUpdateThreadHandle = [1, ExileClient_object_player_thread_safeZone, [], true] call ExileClient_system_thread_addtask;
true