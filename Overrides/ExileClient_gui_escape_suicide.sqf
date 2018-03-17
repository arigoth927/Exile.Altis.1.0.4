 
private["_maxSuicides","_suicideDelay","_currentSuicide","_product","_result","_display"];

_maxSuicides=getNumber(missionConfigFile >> "CfgSuicide" >> "MaxSuicides");
_suicideDelay=getNumber(missionConfigFile >> "CfgSuicide" >> "SuicideDelay");
_currentSuicide=missionNameSpace getVariable[format["ExileClientSuicided%1",getplayerUID player],0];
_amountSuicides=missionNameSpace getVariable[format["ExileClientMaxSuicides%1",getplayerUID player],0];
if(_amountSuicides < _maxSuicides)then
{
	if ((diag_tickTime - _currentSuicide) > _suicideDelay)then
	{
		disableSerialization;
		_result = ["Do you really want to end your life?", "Confirm", "Yes", "Nah"] call BIS_fnc_guiMessage;
		waitUntil { !isNil "_result" };
		if (_result) then
		{
			_display = findDisplay 49;
			if !(isNull _display) then
			{
				_display closeDisplay 2; 
			};
			missionNameSpace setVariable[format["ExileClientSuicided%1",getplayerUID player],diag_tickTime];
			_product = _amountSuicides + 1;
			missionNameSpace setVariable[format["ExileClientMaxSuicides%1",getplayerUID player],_product];
			player allowDamage true;
			player setDamage 1;
			
		};
	}
	else
	{
		disableSerialization;
		//_result = ["Suicide to farm vehicles is frowned upon?", "Confirm", "I'm A Douche", "Why Not"] call BIS_fnc_guiMessage;
		_display = findDisplay 49;
		_display closeDisplay 2;
		hint "Suicide Delay Enabled :P";
		["Whoops",["Suicide Delay"]] call ExileClient_gui_notification_event_addNotification;
	};
}
else
{
	disableSerialization;
	//_result = ["You are limited on total Suicides?", "Confirm", "Yes", "No"] call BIS_fnc_guiMessage;
	_display = findDisplay 49;
	_display closeDisplay 2;
	hint "Suicide Maximum Reached :P";
	["Whoops",["Suicide Max Reached       "]] call ExileClient_gui_notification_event_addNotification;

};
true