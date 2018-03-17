
private ["_reserved_uids", "_uid","_playercount","_servernoreserve","_server_reservedslots","_server_maxplayers","_testplayer"];

_server_maxplayers = 50;

_server_reservedslots = 5;

_reserved_uids = [
			""
		];

		waitUntil {!isNull player};
		waitUntil {(vehicle player) == player};
		waitUntil {(getPlayerUID player) != ""};
		
		_playercount = count playableUnits;
		_uid = getPlayerUID player;
		_servernoreserve = _server_maxplayers - _server_reservedslots;
		{
			_testplayer = getPlayerUID _x;
			if(_testplayer in _reserved_uids) then
				{
					_servernoreserve = _servernoreserve + 1;
					if (_servernoreserve > _server_maxplayers) then
						{
							_servernoreserve = _server_maxplayers;
						};
				};
		} forEach allPlayers;
		
		if ((_playercount > _servernoreserve)&& !(_uid in _reserved_uids)) then 
			{
				titleText ["", "BLACK OUT"];
				disableUserInput true;
				hint "You are in a reserved slot! You will be kicked back to server browser in 10 seconds!";
				sleep 5;
				hint "You are in a reserved slot! You will be kicked back to server browser in 5 seconds!";
				sleep 5;
				titleText ["", "BLACK IN"];
				disableUserInput false;
				failMission "end1";
			};  