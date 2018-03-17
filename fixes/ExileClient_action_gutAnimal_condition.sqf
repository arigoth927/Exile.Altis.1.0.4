
private["_animal", "_cancel"];
_animal = _this;
_cancel = "";
try
{
	if !('Exile_Item_Handsaw' in (magazines player)) then
	{
		throw "You need a Hand Saw";
	};
	if (alive _animal) then
	{
		throw "You can only gut dead animals";
	};
	if !(_animal getVariable ["CanBeGutted", false]) then 
	{
		throw "This animal cannot be gutted";	
	};
	if !(alive player) then
	{
		throw "You daided!"; 
	};
}
catch
{
	_cancel = _exception;
};
_cancel