 
if !(ExilePlayerInSafezone) then 
{
	if ((getPosATL (vehicle player)) call ExileClient_util_world_isInTraderZone) then 
	{
		[] call ExileClient_object_player_event_onEnterSafezone; 
	};
	ExileClientPlayerLastSafeZoneCheckAt = diag_tickTime;
}
else 
{
	if (diag_tickTime - ExileClientPlayerLastSafeZoneCheckAt >= 60) then
	{
		if !((vehicle player) call ExileClient_util_world_isInTraderZone) then 
		{
			[] call ExileClient_object_player_event_onLeaveSafezone; 
		};
		ExileClientPlayerLastSafeZoneCheckAt = diag_tickTime;
	};
};