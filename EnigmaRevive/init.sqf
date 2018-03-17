if (!hasInterface && isServer) exitWith {

GR8HumanityInstalled = false;

MaxRevivesAllowed = 1;

DamageWhenRevived = 0.75;

FatiguewhenRevived = 1;

ReviveChk_cache = [];
ReviveChk_cache = [[0000,0]];
Diag_log "Initializing Enigma Revive!";
};

if (hasInterface) then {
[] execVM "EnigmaRevive\compiles.sqf";
player setVariable ['EnigmaRevivePermitted', false, true];
player setVariable["antidupe", 1, true];

"EnigmaRevive" addPublicVariableEventHandler {
	private["_newPlayerObject","_oldPlayerObject","_packet","_weapon","_reviver"];
	 _packet = _this select 1;
	_newPlayerObject = _packet select 0;
	cutText ["","BLACK IN",20];
	[100] call BIS_fnc_bloodEffect;
	"Reviving player..." call ExileClient_util_log;
	_layer = "BIS_fnc_respawnCounter" call bis_fnc_rscLayer;
	_layer cutText ["", "plain"];
	"Removing bleed out thread..." call ExileClient_util_log;
	[ExileClientBleedOutThread] call ExileClient_system_thread_removeTask;
 	ExileClientBleedOutThread = -1;
	player setVariable ['EnigmaRevivePermitted', false, true];
	false call ExileClient_gui_postProcessing_toggleDialogBackgroundBlur;
	true call ExileClient_gui_hud_toggle;
	["endBambiStateRequest"] call ExileClient_system_network_send;
	[ExileClientEndBambiStateThread] call ExileClient_system_thread_removeTask;
	ExileClientPlayerIsBambi = false;
	false call ExileClient_gui_hud_toggleBambiIcon;
	player setVariable["antidupe", 1, true];
};

"EnigmaReviveFail" addPublicVariableEventHandler {
   	_packet = _this select 1;
  	_requestingPlayer = _packet select 0;
	_revivername = _packet select 1;
  	systemChat Format ["%1 bungled your revive and killed you!",_revivername];
  		player setVariable["antidupe", 1, true];
	[] call ExileClient_gui_escape_respawn;
};

"EnigmaReviveMSG" addPublicVariableEventHandler {
   _packet = _this select 1;
   _msg = _packet select 0;
  	systemChat Format ["%1",_msg];
	};
	waitUntil { uiSleep 0.5; !isNull(findDisplay 46); };
	sleep 10;
	systemChat "Loading: Enigma Exile Revive";
};