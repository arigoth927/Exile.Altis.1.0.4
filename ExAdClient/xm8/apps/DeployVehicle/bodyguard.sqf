private ["_statue","unit","unitList"];
	if ("Exile_Item_MobilePhone" in (magazines player)) then
    {
	player removeItem "Exile_Item_MobilePhone";
	disableUserInput true;
	player playMove "AinvPknlMstpSnonWnonDr_medic3"; 
	unitList = ["B_soldier_AT_F","B_soldier_AA_F"];
	unit = group player createUnit [unitList select (round(random ((count unitList) - 2))), getPos player, [], 0, "FORM"];
	["SuccessTitleAndText",["AI Deployed"]] call ExileClient_gui_toaster_addTemplateToast;
	_statue = nearestObject [player, "Land_SatellitePhone_F"];
	deleteVehicle _statue;
	disableUserInput false;
	}; 
	else
	{
    ["ErrorTitleAndText", ["You need a MobilePhone..."]] call ExileClient_gui_toaster_addTemplateToast;
	}; 
}; 	

	
