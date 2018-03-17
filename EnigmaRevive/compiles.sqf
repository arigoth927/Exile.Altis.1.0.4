if (!hasInterface && isServer) exitWith {
Diag_log "Initializing Enigma Revive Compiles!";
};

private ['_code', '_function', '_file'];

{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;
    _code = compileFinal (preprocessFileLineNumbers _file);
    missionNamespace setVariable [_function, _code];
}
forEach
[
	['Enigma_RevivePlyr', 'EnigmaRevive\Enigma_RevivePlyr.sqf']
];

true


