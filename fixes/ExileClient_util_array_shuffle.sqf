/*
	ExileClient_util_array_shuffle

	The original function was not shuffling
*/
_in = _this;
_out = [];
_count = count _in;
for "_i" from 1 to _count do 
{
	_r = selectRandom _in;
	_out pushBackUnique _r;
	_in = _in - [_r];
};
_out