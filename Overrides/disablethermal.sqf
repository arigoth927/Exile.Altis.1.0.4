_layer = 85125; 
_launchers =["launch_I_Titan_short_F","launch_O_Titan_F","launch_NLAW_F","launch_B_Titan_F","launch_I_Titan_F","launch_B_Titan_tna_F","launch_B_Titan_short_F","launch_B_Titan_short_tna_F","launch_O_Titan_ghex_F","launch_O_Titan_short_F","launch_O_Titan_short_ghex_F","launch_RPG32_F","CUP_launch_NLAW","CUP_launch_RPG7V","CUP_launch_Metis","CUP_launch_RPG18","CUP_launch_Mk153Mod0","CUP_launch_9K32Strela","CUP_launch_MAAWS","CUP_launch_FIM92Stinger","CUP_launch_M136","CUP_launch_M47","CUP_launch_Javelin","CUP_launch_Igla","rhs_weap_rpg26","rhs_weap_rpg7","rhs_weap_rshg2","mas_launch_maaws_F","mas_launch_smaw_F","mas_launch_NLAW_F","mas_launch_LAW_F","mas_launch_M136_F","mas_launch_TitanS_F","mas_launch_RPG7_F","mas_launch_RPG18_F","mas_launch_Metis_F","mas_launch_pzf60_F","mas_launch_Stinger_F","mas_launch_Strela_F"];  // launcher array


while {true} do 
{ 
if (currentVisionMode player == 2) then	
{
	if (currentweapon player in _launchers) then
		{ 																										
            _layer    cutText ["Thermal is disabled!.","BLACK",-1];
			playSound "FD_CP_Not_Clear_F";
            waituntil {currentVisionMode player != 2};
            _layer cutText ["", "PLAIN"];
		}
	else
	{
	if (alive (getConnectedUAV player)) then		
		{																											
            _layer    cutText ["Thermal is disabled!!.","BLACK",-1];
			playSound "FD_CP_Not_Clear_F";
            waituntil {currentVisionMode player != 2};
            _layer cutText ["", "PLAIN"];
		}
		else
		{
			setViewDistance 3000;																				
			waituntil {currentVisionMode player != 2};
			setViewDistance -1;
		}
	};	
};	
	
	sleep 1;
};