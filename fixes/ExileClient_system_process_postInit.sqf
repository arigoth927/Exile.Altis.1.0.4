 
private["_shift","_spawnInterval"];
if (missionName isEqualTo "ExileIntro") then
{
	"Intro PostInit..." call ExileClient_util_log;
}
else 
{
	if (hasInterface) then
	{
		onMapSingleClick {_shift};
		[] call ExileClient_system_moon_initialize;
		[] call ExileClient_gui_hud_initialize;
		[15, ExileClient_gui_hud_thread_survivalInfo, [], true] call ExileClient_system_thread_addtask;
		[1, ExileClient_gui_hud_thread_update, [], true] call ExileClient_system_thread_addtask;
		[] call ExileClient_system_map_initialize;
		[] call ExileClient_object_fireFlies_initialize;
		[] call ExileClient_object_anomaly_initialize;
		[] call ExileClient_system_radiation_initialize;
		[] call ExileClient_gui_clan_initialize;
		if( isServer ) then
		{
			if( !isMultiplayer ) then
			{
				"Editor PostInit..." call ExileClient_util_log;
				[] call ExileClient_util_debug_editor;
				true call ExileClient_gui_hud_toggle;
			};		
		};
		if (!isServer) then 
		{
			"Client PostInit..." call ExileClient_util_log;
			[] call ExileClient_system_music_initialize;
			[0.5, ExileClient_object_player_von_checkVon, [], true] call ExileClient_system_thread_addtask;
			[0.25, ExileClient_object_player_stats_update, [], true] call ExileClient_system_thread_addtask;
			[5, ExileClient_object_player_safezone_checkSafezone, [], true] call ExileClient_system_thread_addtask;
			[60, ExileClient_object_player_save, [], true] call ExileClient_system_thread_addtask;
			_spawnInterval = getNumber (missionConfigFile >> "CfgExileLootSettings" >> "spawnInterval");
			[_spawnInterval, ExileClient_system_lootManager_thread_spawn, [], true] call ExileClient_system_thread_addtask;
		};
		true call ExileClient_gui_toaster_toggle;
	};
};
true