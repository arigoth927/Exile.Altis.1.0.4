#include "MarXet\CfgMarXet.cpp"












class CfgClans
{





	registrationFee = 20000;






	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ._-!:\\/";






	maximumIcons = 20;







	maximumIconText = 50;






	maximumPolys = 10;






	maximumPolyNode = 10;
};
class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {};
	tools[] = {};
	requiredInteractionModelGroup = "";
	requiresOcean = 0;
	requiresFire = 0;
	requiresConcreteMixer = 0;
};

class CfgCraftingRecipes



{
	#include "EBM\recipes.hpp"






































	class BreachingChargeBigMomma: Exile_AbstractCraftingRecipe




























	{
		name = "Breaching Charge (Big Momma)";
		pictureItem = "Exile_Item_BreachingCharge_BigMomma";
		returnedItems[] =
		{
			{1, "Exile_Item_BreachingCharge_BigMomma"}
		};
		tools[] =
		{
			"Exile_Item_Foolbox"
		};
		components[] = 
		{
			{3, "Exile_Item_BreachingCharge_Metal"},
			{1, "Exile_Item_MobilePhone"},
			{1, "Exile_Item_DuctTape"},
			{1, "Exile_Item_ZipTie"}
		};
		category = "Exile Explosives";

	};
	class BreachingChargeMetal: Exile_AbstractCraftingRecipe

	{
		name = "Breaching Charge (Metal)";
		pictureItem = "Exile_Item_BreachingCharge_Metal";
		returnedItems[] =
		{
			{1, "Exile_Item_BreachingCharge_Metal"}
		};
		tools[] =
		{
			"Exile_Item_Foolbox"
		};
		components[] = 
		{
			{1, "Exile_Item_DuctTape"},
			{4, "SatchelCharge_Remote_Mag"}
		};
		category = "Exile Explosives";

	};





















	class BreachingChargeWood: Exile_AbstractCraftingRecipe














































	{
		name = "Breaching Charge (Wood)";
		pictureItem = "Exile_Item_BreachingCharge_Wood";
		returnedItems[] =
		{
			{1, "Exile_Item_BreachingCharge_Wood"}
		};
		tools[] =
		{
			"Exile_Item_Foolbox"
		};
		components[] = 
		{
			{1, "Exile_Item_DuctTape"},
			{2, "DemoCharge_Remote_Mag"}
		};
		category = "Exile Explosives";

	};
	class CookBBQSandwich: Exile_AbstractCraftingRecipe

	{
		name = "Cook BBQ Sandwich";
		pictureItem = "Exile_Item_BBQSandwich_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_BBQSandwich_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_BBQSandwich"}
		};
		category = "Cooked Food";
	};


	class CookCatFood: Exile_AbstractCraftingRecipe





	{
		name = "Cook Cat Food";
		pictureItem = "Exile_Item_CatFood_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_CatFood_Cooked"}
		};

		tools[] =
		{

			"Exile_Item_CookingPot"
		};

		components[] = 
		{

			{1, "Exile_Item_CatFood"}
		};
		category = "Cooked Food";
	};


	class CookChristmasTinner: Exile_AbstractCraftingRecipe





	{
		name = "Cook Christmas Tinner";
		pictureItem = "Exile_Item_ChristmasTinner_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_ChristmasTinner_Cooked"}
		};

		tools[] =
		{

			"Exile_Item_CookingPot"
		};

		components[] = 
		{

			{1, "Exile_Item_ChristmasTinner"}
		};
		category = "Cooked Food";
	};







































	class CookCoffee: Exile_AbstractCraftingRecipe
































































































































































































































































































































































































































































































































	{
		name = "Brew Coffee";
		pictureItem = "Exile_Item_PlasticBottleCoffee";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleCoffee"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_PlasticBottleFreshWater"},
			{1, "Exile_Item_InstantCoffee"}
		};
		category = "Hot Drink";
	};

	class CookDogFood: Exile_AbstractCraftingRecipe





	{
		name = "Cook Dog Food";
		pictureItem = "Exile_Item_DogFood_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_DogFood_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_DogFood"}
		};
		category = "Cooked Food";
	};
	class CookGloriousKnakworst: Exile_AbstractCraftingRecipe

	{
		name = "Cook Glorious Knakworst";
		pictureItem = "Exile_Item_GloriousKnakworst_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_GloriousKnakworst_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_GloriousKnakworst"}
		};
		category = "Cooked Food";
	};


	class CookMacasCheese: Exile_AbstractCraftingRecipe





	{
		name = "Cook Macas Cheese";
		pictureItem = "Exile_Item_MacasCheese_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_MacasCheese_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_MacasCheese"}
		};
	};

	class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe

	{
		name = "Cook Dirty Water";
		pictureItem = "Exile_Item_PlasticBottleFreshWater";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleFreshWater"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_PlasticBottleDirtyWater"}
		};
		category = "Clean Water";
	};

	class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe






	{
		name = "Cook Salt Water";
		pictureItem = "Exile_Item_PlasticBottleFreshWater";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleFreshWater"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_PlasticBottleSaltWater"}
		};
		category = "Clean Water";
	};
	class CookSausageGravy: Exile_AbstractCraftingRecipe

	{
		name = "Cook Sausage Gravy";
		pictureItem = "Exile_Item_SausageGravy_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_SausageGravy_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_SausageGravy"}
		};
		category = "Cooked Food";
	};

	class CookSurstromming: Exile_AbstractCraftingRecipe





	{
		name = "Cook Surstr�mming";
		pictureItem = "Exile_Item_Surstromming_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_Surstromming_Cooked"}
		};
		tools[] =
		{

			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_Surstromming"}
		};
		category = "Cooked Food";
	};
	class CraftBandage: Exile_AbstractCraftingRecipe

	{
		name = "Craft Bandage";
		pictureItem = "Exile_Item_Bandage";
		returnedItems[] =
		{
			{1, "Exile_Item_Bandage"}
		};
		components[] = 
		{
			{4, "Exile_Item_ToiletPaper"}
		};
		category = "Medical";
	};
	class CraftConcreteDoorway: Exile_AbstractCraftingRecipe

	{
		name = "Craft Concrete Doorway";
		pictureItem = "Exile_Item_ConcreteDoorwayKit";
		requiresConcreteMixer = false;
		returnedItems[] = 
		{
			{1, "Exile_Item_ConcreteDoorwayKit"},
			{3, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] = 
		{
			{3, "Exile_Item_Cement"},
			{3, "Exile_Item_Sand"},
			{3, "Exile_Item_MetalPole"},
			{3, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
	};

	class CraftConcreteDrawbridge: Exile_AbstractCraftingRecipe





	{
		name = "Craft Concrete Drawbridge";
		pictureItem = "Exile_Item_ConcreteDrawBridgeKit";
		requiresConcreteMixer = true;
		returnedItems[] = 
		{
			{1, "Exile_Item_ConcreteDrawBridgeKit"},
			{4, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};


		components[] = 
		{
			{4, "Exile_Item_Cement"},
			{4, "Exile_Item_Sand"},
			{4, "Exile_Item_MetalPole"},
			{3, "Exile_Item_JunkMetal"},
			{4, "Exile_Item_WaterCanisterDirtyWater"},

			{1, "Exile_Item_FuelCanisterFull"}
		};
		category = "Doorway";
	};

	class CraftConcreteFloor: Exile_AbstractCraftingRecipe





	{
		name = "Craft Concrete Floor";
		pictureItem = "Exile_Item_ConcreteFloorKit";
		requiresConcreteMixer = false;
		returnedItems[] = 
		{
			{1, "Exile_Item_ConcreteFloorKit"},
			{2, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] = 
		{
			{2, "Exile_Item_Cement"},
			{2, "Exile_Item_Sand"},
			{2, "Exile_Item_MetalPole"},
			{2, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
		category = "Floor";
	};
	class CraftConcreteFloorPort: Exile_AbstractCraftingRecipe

	{
		name = "Craft Concrete Floor Port";
		pictureItem = "Exile_Item_ConcreteFloorPortKit";
		requiresConcreteMixer = false;
		returnedItems[] = 
		{
			{1, "Exile_Item_ConcreteFloorPortKit"},
			{3, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] = 
		{
			{3, "Exile_Item_Cement"},
			{3, "Exile_Item_Sand"},
			{3, "Exile_Item_MetalPole"},
			{3, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
	};

	class CraftConcreteFloorPortSmall: Exile_AbstractCraftingRecipe





	{









		name = "Craft Concrete Floor Port (Small)";




























		pictureItem = "Exile_Item_ConcreteFloorPortSmallKit";
		requiresConcreteMixer = true;















		returnedItems[] = 
		{
			{1, "Exile_Item_ConcreteFloorPortSmallKit"},




















			{3, "Exile_Item_WaterCanisterEmpty"},









			{1, "Exile_Item_FuelCanisterEmpty"}















































		};





























































		components[] = 
		{
			{3, "Exile_Item_Cement"},
			{2, "Exile_Item_Sand"},
			{2, "Exile_Item_MetalPole"},
			{3, "Exile_Item_WaterCanisterDirtyWater"},









			{1, "Exile_Item_FuelCanisterFull"}
		};
		category = "Floor";
	};
	class CraftConcreteGate: Exile_AbstractCraftingRecipe

	{
		name = "Craft Concrete Gate";
		pictureItem = "Exile_Item_ConcreteGateKit";
		requiresConcreteMixer = false;
		returnedItems[] = 
		{
			{1, "Exile_Item_ConcreteGateKit"},
			{4, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] = 
		{
			{4, "Exile_Item_Cement"},
			{4, "Exile_Item_Sand"},
			{4, "Exile_Item_MetalPole"},
			{4, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};

	};
	class CraftConcreteLadderHatch: Exile_AbstractCraftingRecipe

	{
		name = "Craft Concrete Ladder Hatch";
		pictureItem = "Exile_Item_ConcreteLadderHatchKit";
		requiresConcreteMixer = true;
		returnedItems[] = 
		{
			{1, "Exile_Item_ConcreteLadderHatchKit"},
			{3, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}

		};


		components[] = 
		{
			{3, "Exile_Item_Cement"},
			{2, "Exile_Item_Sand"},
			{2, "Exile_Item_MetalPole"},
			{3, "Exile_Item_JunkMetal"},
			{3, "Exile_Item_WaterCanisterDirtyWater"},









			{1, "Exile_Item_FuelCanisterFull"}
		};
		category = "Doorway";
	};
	class CraftConcretStairs: Exile_AbstractCraftingRecipe

	{
		name = "Craft Concrete Stairs";
		pictureItem = "Exile_Item_ConcreteStairsKit";
		requiresConcreteMixer = false;
		returnedItems[] = 
		{
			{1, "Exile_Item_ConcreteStairsKit"},
			{1, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] = 
		{
			{1, "Exile_Item_Cement"},
			{1, "Exile_Item_Sand"},
			{1, "Exile_Item_MetalPole"},
			{1, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
		category = "Stairs";

	};
	class CraftConcretSupport: Exile_AbstractCraftingRecipe

	{
		name = "Craft Concrete Support";
		pictureItem = "Exile_Item_ConcreteSupportKit";
		requiresConcreteMixer = false;
		returnedItems[] = 
		{
			{1, "Exile_Item_ConcreteSupportKit"},
			{1, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] = 
		{
			{1, "Exile_Item_Cement"},
			{1, "Exile_Item_Sand"},
			{1, "Exile_Item_MetalPole"},
			{1, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
		category = "Support";
	};




	class CraftConcreteWall: Exile_AbstractCraftingRecipe





	{
		name = "Craft Concrete Wall";
		pictureItem = "Exile_Item_ConcreteWallKit";
		requiresConcreteMixer = false;
		returnedItems[] = 
		{
			{1, "Exile_Item_ConcreteWallKit"},
			{2, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] = 
		{
			{2, "Exile_Item_Cement"},
			{2, "Exile_Item_Sand"},
			{2, "Exile_Item_MetalPole"},
			{2, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
		category = "Wall";
	};
	class CraftFirePlace: Exile_AbstractCraftingRecipe

	{
		name = "Craft Fire Place";
		pictureItem = "Exile_Item_CampFireKit";
		returnedItems[] = 
		{
			{1, "Exile_Item_CampFireKit"}
		};
		components[] = 
		{
			{2, "Exile_Item_WoodLog"}
		};
		category = "Crafting";
	};
	class CraftFloodLight: Exile_AbstractCraftingRecipe

	{
		name = "Craft Flood Light";
		pictureItem = "Exile_Item_FloodLightKit";
		requiresFire = 1;
		returnedItems[] = 
		{
			{1, "Exile_Item_FloodLightKit"}
		};
		components[] = 
		{
			{1, "Exile_Item_MetalPole"},
			{1, "Exile_Item_LightBulb"},
			{1, "Exile_Item_ExtensionCord"}
		};
		category = "Lights";
	};




	class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe





	{
		name = "Craft Fortification Upgrade";
		pictureItem = "Exile_Item_MetalBoard";
		requiresFire = 1;
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_FortificationUpgrade"}
		};
		components[] = 
		{
			{2, "Exile_Item_MetalPole"},
			{4, "Exile_Item_MetalBoard"}
		};
		tools[] = {"Exile_Item_Grinder"};
		category = "Upgrade";
	};
	class CraftHBarrier5Kit: Exile_AbstractCraftingRecipe

	{
		name = "Craft H-barrier (5 Blocks)";
		pictureItem = "Exile_Item_HBarrier5Kit";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Pliers"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_HBarrier5Kit"}
		};
		components[] = 
		{
			{3, "Exile_Item_SandBagsKit_Long"},
			{2, "Exile_Item_MetalWire"}
		};
		category = "Barrier";
	};
	class CraftMetalBoard: Exile_AbstractCraftingRecipe

	{
		name = "Craft Metal Board";
		pictureItem = "Exile_Item_MetalBoard";
		requiresFire = 1;
		returnedItems[] = 
		{
			{1, "Exile_Item_MetalBoard"}
		};
		components[] = 
		{
			{2, "Exile_Item_JunkMetal"}
		};
		tools[] = {"Exile_Item_Grinder"};
		category = "Crafting";
	};




	class CraftMetalHedgehog: Exile_AbstractCraftingRecipe





	{
		name = "Craft Metal Hedgehog";
		pictureItem = "Exile_Item_MetalHedgehogKit";
		requiresFire = 1;
		returnedItems[] = 
		{
			{1, "Exile_Item_MetalHedgehogKit"}
		};
		components[] = 
		{
			{4, "Exile_Item_MetalPole"}
		};
		tools[] = {"Exile_Item_Grinder"};
		category = "Crafting";
	};
	class CraftMetalLadder: Exile_AbstractCraftingRecipe

	{
		name = "Craft Metal Ladder";
		pictureItem = "Exile_Item_MetalLadderKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_MetalLadderKit"}
		};
		components[] =
		{
			{6, "Exile_Item_JunkMetal"}
		};
	};
	class CraftMetalLadderDouble: Exile_AbstractCraftingRecipe

	{
		name = "Craft Metal Ladder (Double Tall)";
		pictureItem = "Exile_Item_MetalLadderDoubleKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_MetalLadderDoubleKit"}
		};
		components[] =
		{
			{2, "Exile_Item_MetalLadderKit"}
		};
	};




	class CraftMetalPole: Exile_AbstractCraftingRecipe





	{
		name = "Craft Metal Pole";
		pictureItem = "Exile_Item_MetalPole";
		requiresFire = 1;
		returnedItems[] = 
		{
			{1, "Exile_Item_MetalPole"}
		};
		components[] = 
		{
			{4, "Exile_Item_JunkMetal"}
		};
		tools[] = {"Exile_Item_Grinder"};
		category = "Crafting";
	};
	class CraftOldChest: Exile_AbstractCraftingRecipe

	{
		name = "Craft Old Chest";
		pictureItem = "Exile_Item_OldChestKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_OldChestKit"}
		};
		components[] = 
		{
			{3, "Exile_Item_WoodPlank"},
			{3, "Exile_Item_JunkMetal"}
		};
	};
	class CraftPortableGenerator: Exile_AbstractCraftingRecipe

	{
		name = "Craft Portable Generator";
		pictureItem = "Exile_Item_PortableGeneratorKit";
		requiresFire = 1;
		returnedItems[] = 
		{
			{1, "Exile_Item_PortableGeneratorKit"}
		};
		components[] = 
		{
			{4, "Exile_Item_MetalBoard"},
			{1, "Exile_Item_FuelCanisterFull"},
			{1, "Exile_Item_ExtensionCord"}
		};
		category = "Power";
	};




	class CraftRazorWireKit: Exile_AbstractCraftingRecipe





	{
		name = "Craft Razor Wire Kit Kit";
		pictureItem = "Exile_Item_RazorWireKit_Long";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Grinder", 
			"Exile_Item_Pliers",
			"Exile_Item_Screwdriver"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_RazorWireKit_Long"}
		};
		components[] = 
		{
			{2, "Exile_Item_MetalPole"},
			{4, "Exile_Item_MetalWire"},
			{1, "Exile_Item_MetalScrews"}
		};
		category = "Security";
	};
	class CraftRepairKitConcrete: Exile_AbstractCraftingRecipe

	{
		name = "Craft Concrete Repair Kit";
		pictureItem = "Exile_Item_Cement";
		requiresConcreteMixer = false;
		returnedItems[] = 
		{
			{1, "Exile_Item_RepairKitConcrete"},
			{1, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] = 
		{
			{4, "Exile_Item_Cement"},
			{2, "Exile_Item_Sand"},
			{1, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
		category = "Repair Kits";

	};
	class CraftRepairKitMetal: Exile_AbstractCraftingRecipe

	{
		name = "Craft Metal Repair Kit";
		pictureItem = "Exile_Item_RepairKitMetal";
		requiresFire = 0;
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_RepairKitMetal"}
		};
		components[] = 
		{
			{4, "Exile_Item_MetalBoard"}
		};
		tools[] = 
		{
			"Exile_Item_Foolbox",
			"Exile_Item_Grinder"
		};
		category = "Repair Kits";
	};




	class CraftRepairKitWood: Exile_AbstractCraftingRecipe





	{
		name = "Craft Wood Repair Kit";
		pictureItem = "Exile_Item_RepairKitWood";
		requiresFire = 0;
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_RepairKitWood"}
		};
		components[] = 
		{
			{4, "Exile_Item_WoodPlank"}
		};
		tools[] = 
		{
			"Exile_Item_Foolbox"
		};
		category = "Repair Kits";
	};
	class CraftSandBagsKitCorner: Exile_AbstractCraftingRecipe

	{
		name = "Craft Sandbags Kit (Corner)";
		pictureItem = "Exile_Item_SandBagsKit_Corner";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_SandBagsKit_Corner"}
		};
		components[] = 
		{
			{3, "Exile_Item_Sand"}
		};
		category = "Barrier";

	};
	class CraftSandBagsKitLong: Exile_AbstractCraftingRecipe

	{
		name = "Craft Sand Bags Kit (Long)";
		pictureItem = "Exile_Item_SandBagsKit_Long";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_SandBagsKit_Long"}
		};
		components[] = 
		{
			{6, "Exile_Item_Sand"}
		};
		category = "Barrier";
	};




	class CraftStorageCrate: Exile_AbstractCraftingRecipe





	{
		name = "Craft Storage Crate";
		pictureItem = "Exile_Item_StorageCrateKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_StorageCrateKit"}
		};
		components[] = 
		{
			{5, "Exile_Item_WoodPlank"}
		};
		category = "Storage";
	};
	class CraftWaterBarrel: Exile_AbstractCraftingRecipe

	{
		name = "Craft Water Barrel";
		pictureItem = "Exile_Item_WaterBarrelKit";
		requiredInteractionModelGroup = "WorkBench";
		requiresFire = 1;
		returnedItems[] = 
		{
			{1, "Exile_Item_WaterBarrelKit"}
		};
		components[] = 
		{
			{20, "Exile_Item_PlasticBottleEmpty"}
		};
		category = "Crafting";

	};
	class CraftWireFenceKit: Exile_AbstractCraftingRecipe

	{
		name = "Craft Wire Fence Kit";
		pictureItem = "Exile_Item_WireFenceKit";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Grinder", 
			"Exile_Item_Pliers",
			"Exile_Item_Screwdriver"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_WireFenceKit"}
		};
		components[] = 
		{
			{4, "Exile_Item_MetalPole"},
			{6, "Exile_Item_MetalWire"},
			{1, "Exile_Item_MetalScrews"}
		};
		category = "Security";
	};




	class CraftWoodDoorWay: Exile_AbstractCraftingRecipe





	{
		name = "Craft Wood Doorway";
		pictureItem = "Exile_Item_WoodDoorwayKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodDoorwayKit"}
		};
		components[] = 
		{
			{6, "Exile_Item_WoodPlank"}
		};
		category = "Doorway";
	};
	class CraftWoodDrawBridge: Exile_AbstractCraftingRecipe

	{
		name = "Craft Wood Draw Bridge";
		pictureItem = "Exile_Item_WoodDrawBridgeKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_WoodDrawBridgeKit"}
		};
		components[] =
		{
			{8, "Exile_Item_WoodPlank"},
			{1, "Exile_Item_JunkMetal"},
			{1, "Exile_Item_MetalScrews"}
		};
		category = "DrawBridge";
	};
	class CraftWoodFloor: Exile_AbstractCraftingRecipe

	{
		name = "Craft Wood Floor";
		pictureItem = "Exile_Item_WoodFloorKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodFloorKit"}
		};
		components[] = 
		{
			{4, "Exile_Item_WoodPlank"}
		};
		category = "Floor";
	};




	class CraftWoodFloorPort: Exile_AbstractCraftingRecipe





	{
		name = "Craft Wood Floor Port";
		pictureItem = "Exile_Item_WoodFloorPortKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodFloorPortKit"}
		};
		components[] = 
		{
			{6, "Exile_Item_WoodPlank"}
		};
		category = "Floor";
	};
	class CraftWoodFloorPortSmall: Exile_AbstractCraftingRecipe

	{
		name = "Craft Wood Floor Port (Small)";
		pictureItem = "Exile_Item_WoodFloorPortSmallKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_WoodFloorPortSmallKit"}
		};
		components[] =
		{
			{6, "Exile_Item_WoodPlank"}
		};
		category = "Floor";

	};
	class CraftWoodGate: Exile_AbstractCraftingRecipe

	{
		name = "Craft Wood Gate";
		pictureItem = "Exile_Item_WoodGateKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodGateKit"}
		};
		components[] = 
		{
			{8, "Exile_Item_WoodPlank"}
		};
		category = "Doorway";
	};




	class CraftWoodLadder: Exile_AbstractCraftingRecipe





	{
		name = "Craft Wood Ladder";
		pictureItem = "Exile_Item_WoodLadderKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_WoodLadderKit"}
		};
		components[] =
		{
			{6, "Exile_Item_WoodPlank"}
		};
	};
	class CraftWoodLadderHatch: Exile_AbstractCraftingRecipe

	{
		name = "Craft Wood Ladder Hatch";
		pictureItem = "Exile_Item_WoodLadderHatchKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_WoodLadderHatchKit"}
		};
		components[] =
		{
			{6, "Exile_Item_WoodPlank"},
			{3, "Exile_Item_JunkMetal"}
		};
		category = "Crafting";

	};
	class CraftWoodPlank: Exile_AbstractCraftingRecipe

	{
		name = "Craft Wood Plank";
		pictureItem = "Exile_Item_WoodPlank";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodPlank"}
		};
		components[] = 
		{
			{2, "Exile_Item_WoodLog"}
		};
		tools[] = {"Exile_Item_Handsaw"};
		category = "Crafting";
	};




	class CraftWoodStairs: Exile_AbstractCraftingRecipe





	{
		name = "Craft Wood Stairs";
		pictureItem = "Exile_Item_WoodStairsKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodStairsKit"}
		};
		components[] = 
		{
			{6, "Exile_Item_WoodPlank"}
		};
		category = "Stairs";
	};
	class CraftWoodSupport: Exile_AbstractCraftingRecipe

	{
		name = "Craft Wood Support";
		pictureItem = "Exile_Item_WoodSupportKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodSupportKit"}
		};
		components[] = 
		{
			{6, "Exile_Item_WoodPlank"}
		};
		category = "Support";
	};
	class CraftWoodWall: Exile_AbstractCraftingRecipe

	{
		name = "Craft Wood Wall";
		pictureItem = "Exile_Item_WoodWallKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodWallKit"}
		};
		components[] = 
		{
			{4, "Exile_Item_WoodPlank"}
		};
		category = "Wall";
	};




	class CraftWoodWallHalf: Exile_AbstractCraftingRecipe





	{
		name = "Craft 1/2 Wood Wall";
		pictureItem = "Exile_Item_WoodWallHalfKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodWallHalfKit"}
		};
		components[] = 
		{
			{2, "Exile_Item_WoodPlank"}
		};
		category = "Wall";
	};
	class CraftWoodWindow: Exile_AbstractCraftingRecipe

	{
		name = "Craft Wood Window";
		pictureItem = "Exile_Item_WoodWindowKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodWindowKit"}
		};
		components[] = 
		{
			{6, "Exile_Item_WoodPlank"}
		};
		category = "Wall";
	};
	class CraftWorkBench: Exile_AbstractCraftingRecipe

	{
		name = "Craft Work Bench";
		pictureItem = "Exile_Item_WorkBenchKit";
		returnedItems[] = 
		{
			{1, "Exile_Item_WorkBenchKit"}
		};
		components[] = 
		{
			{4, "Exile_Item_WoodLog"}
		};
		category = "Crafting";
	};



	class CookAlsatianSteak: Exile_AbstractCraftingRecipe




	{
		name = "Cook Alsatian Steak";
		pictureItem = "Exile_Item_AlsatianSteak_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_AlsatianSteak_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_AlsatianSteak_Raw"}
		};
		category = "Cooked Food";
	};
	class CookCatSharkFilet: Exile_AbstractCraftingRecipe

	{
		name = "Cook Cat Shark Filet";
		pictureItem = "Exile_Item_CatSharkFilet_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_CatSharkFilet_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_CatSharkFilet_Raw"}
		};
		category = "Cooked Food";
	};

	class CookChickenFilet: Exile_AbstractCraftingRecipe




	{
		name = "Cook Chicken Filet";
		pictureItem = "Exile_Item_ChickenFilet_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_ChickenFilet_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_ChickenFilet_Raw"}
		};
		category = "Cooked Food";
	};
	class CookFinSteak: Exile_AbstractCraftingRecipe

	{
		name = "Cook Fin Steak";
		pictureItem = "Exile_Item_FinSteak_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_FinSteak_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_FinSteak_Raw"}
		};
		category = "Cooked Food";
	};

	class CookGoatSteak: Exile_AbstractCraftingRecipe




	{
		name = "Cook Goat Steak";
		pictureItem = "Exile_Item_GoatSteak_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_GoatSteak_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_GoatSteak_Raw"}
		};
		category = "Cooked Food";
	};
	class CookMackerelFilet: Exile_AbstractCraftingRecipe

	{
		name = "Cook Mackerel Filet";
		pictureItem = "Exile_Item_MackerelFilet_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_MackerelFilet_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_MackerelFilet_Raw"}
		};
		category = "Cooked Food";
	};

	class CookMulletFilet: Exile_AbstractCraftingRecipe





	{
		name = "Cook Mullet Filet";
		pictureItem = "Exile_Item_MulletFilet_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_MulletFilet_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_MulletFilet_Raw"}
		};
		category = "Cooked Food";
	};
	class CookOrnateFilet: Exile_AbstractCraftingRecipe

	{
		name = "Cook Ornate Filet";
		pictureItem = "Exile_Item_OrnateFilet_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_OrnateFilet_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_OrnateFilet_Raw"}
		};
		category = "Cooked Food";
	};

	class CookRabbitSteak: Exile_AbstractCraftingRecipe





	{
		name = "Cook Rabbit Steak";
		pictureItem = "Exile_Item_RabbitSteak_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_RabbitSteak_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_RabbitSteak_Raw"}
		};
		category = "Cooked Food";
	};
	class CookRoosterFilet: Exile_AbstractCraftingRecipe

	{
		name = "Cook Rooster Filet";
		pictureItem = "Exile_Item_RoosterFilet_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_RoosterFilet_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_RoosterFilet_Raw"}
		};
		category = "Cooked Food";
	};

	class CookSalemaFilet: Exile_AbstractCraftingRecipe





	{
		name = "Cook Salema Filet";
		pictureItem = "Exile_Item_SalemaFilet_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_SalemaFilet_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_SalemaFilet_Raw"}
		};
		category = "Cooked Food";
	};
	class CookSheepSteak: Exile_AbstractCraftingRecipe

	{
		name = "Cook Sheep Steak";
		pictureItem = "Exile_Item_SheepSteak_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_SheepSteak_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_SheepSteak_Raw"}
		};
		category = "Cooked Food";
	};

	class CookSnakeFilet: Exile_AbstractCraftingRecipe





	{
		name = "Cook Snake Filet";
		pictureItem = "Exile_Item_SnakeFilet_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_SnakeFilet_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_SnakeFilet_Raw"}
		};
		category = "Cooked Food";
	};
	class CookTunaFilet: Exile_AbstractCraftingRecipe

	{
		name = "Cook Tuna Filet";
		pictureItem = "Exile_Item_TunaFilet_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_TunaFilet_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_TunaFilet_Raw"}
		};
		category = "Cooked Food";
	};

	class CookTurtleFilet: Exile_AbstractCraftingRecipe





	{
		name = "Cook Turtle Filet";
		pictureItem = "Exile_Item_TurtleFilet_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_TurtleFilet_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_TurtleFilet_Raw"}
		};
		category = "Cooked Food";
	};
	class EmptyFuelCanister: Exile_AbstractCraftingRecipe

	{
		name = "Empty Fuel Canister";
		pictureItem = "Exile_Item_FuelCanisterEmpty";
		returnedItems[] = 
		{
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] = 
		{
			{1, "Exile_Item_FuelCanisterFull"}
		};
		category = "Fuel";
	};

	class EmptyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe





	{
		name = "Empty Dirty Water";
		pictureItem = "Exile_Item_PlasticBottleEmpty";
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleEmpty"}
		};
		components[] =
		{
			{1, "Exile_Item_PlasticBottleDirtyWater"}
		};
		category = "Dirty Water";
	};
	class EmptyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe

	{
		name = "Empty Salt Water";
		pictureItem = "Exile_Item_PlasticBottleEmpty";
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleEmpty"}
		};
		components[] =
		{


			{1, "Exile_Item_PlasticBottleSaltWater"}
		};
		category = "Salt Water";
	};

	class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe





	{
		name = "Fill Dirty Water";
		pictureItem = "Exile_Item_PlasticBottleDirtyWater";
		requiredInteractionModelGroup = "WaterSource";
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleDirtyWater"}
		};
		components[] = 
		{
			{1, "Exile_Item_PlasticBottleEmpty"}
		};
		category = "Dirty Water";

	};
	class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe

	{
		name = "Fill Fresh Water";
		pictureItem = "Exile_Item_PlasticBottleFreshWater";
		requiredInteractionModelGroup = "CleanWaterSource";
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleFreshWater"}
		};
		components[] = 
		{


			{1, "Exile_Item_PlasticBottleEmpty"}
		};
		category = "Clean Water";
	};

	class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe





	{
		name = "Fill Salt Water";
		pictureItem = "Exile_Item_PlasticBottleSaltWater";
		requiresOcean = 1;
		returnedItems[] = 
		{
			{1, "Exile_Item_PlasticBottleSaltWater"}
		};
		components[] = 
		{
			{1, "Exile_Item_PlasticBottleEmpty"}
		};
		category = "Salt Water";

	};
	class FillEmptyWaterCanisterWithDirtyWater: Exile_AbstractCraftingRecipe

	{
		name = "Fill Dirty Water";
		pictureItem = "Exile_Item_WaterCanisterDirtyWater";
		requiredInteractionModelGroup = "WaterSource";
		returnedItems[] =
		{
			{1, "Exile_Item_WaterCanisterDirtyWater"}
		};
		components[] = 
		{


			{1, "Exile_Item_WaterCanisterEmpty"}
		};
		category = "Dirty Water";
	};

	class FillFuelCanister: Exile_AbstractCraftingRecipe





	{
		name = "Fill Fuel Canister";
		pictureItem = "Exile_Item_FuelCanisterFull";
		requiredInteractionModelGroup = "FuelSource";
		returnedItems[] = 
		{
			{1, "Exile_Item_FuelCanisterFull"}
		};
		components[] = 
		{
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		category = "Fuel";
	};
	class UpgradeToConcreteDoor: Exile_AbstractCraftingRecipe

	{
		name = "Upgrade to Concrete Door";
		pictureItem = "Exile_Item_ConcreteDoorKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_ConcreteDoorKit"}
		};
		components[] = 
		{
			{1, "Exile_Item_ConcreteDoorwayKit"},
			{2, "Exile_Item_MetalPole"},
			{4, "Exile_Item_MetalBoard"}
		};
		category = "Doorway";
	};

	class UpgradeToConcreteFloorPort: Exile_AbstractCraftingRecipe





	{
		name = "Upgrade to Concrete Floor Port";
		pictureItem = "Exile_Item_ConcreteFloorPortKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_ConcreteFloorPortKit"}
		};
		components[] = 
		{
			{1, "Exile_Item_ConcreteFloorKit"},
			{2, "Exile_Item_MetalPole"},
			{4, "Exile_Item_MetalBoard"}
		};
		category = "Floor";
	};
	class UpgradeToConcreteGate: Exile_AbstractCraftingRecipe

	{
		name = "Upgrade to Concrete Gate";
		pictureItem = "Exile_Item_ConcreteGateKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_ConcreteGateKit"}
		};
		components[] = 
		{
			{1, "Exile_Item_ConcreteWallKit"},
			{2, "Exile_Item_MetalPole"},
			{4, "Exile_Item_MetalBoard"}
		};
		category = "Doorway";
	};

	class UpgradeToConcreteWindow: Exile_AbstractCraftingRecipe





	{
		name = "Upgrade to Concrete Window";
		pictureItem = "Exile_Item_ConcreteWindowKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_ConcreteWindowKit"}
		};
		components[] = 
		{
			{1, "Exile_Item_ConcreteWallKit"},
			{2, "Exile_Item_MetalPole"},
			{4, "Exile_Item_MetalBoard"}
		};
		category = "Wall";
	};
	class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe

	{
		name = "Upgrade to Wood Door";
		pictureItem = "Exile_Item_WoodDoorKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{

			{1, "Exile_Item_WoodDoorKit"}
		};
		components[] = 
		{
			{1, "Exile_Item_WoodDoorwayKit"},
			{2, "Exile_Item_WoodPlank"}
		};
		category = "Doorway";
	};

	class UpgradeToWoodDrawBridge: Exile_AbstractCraftingRecipe





	{
		name = "Upgrade to Wood Draw Bridge";
		pictureItem = "Exile_Item_WoodDrawBridgeKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_WoodDrawBridgeKit"}
		};
		components[] =
		{
			{1, "Exile_Item_WoodGateKit"},
			{2, "Exile_Item_WoodPlank"},
			{1, "Exile_Item_JunkMetal"},
			{1, "Exile_Item_MetalScrews"}
		};
		category = "Floor";
	};
	class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe

	{
		name = "Upgrade to Wood Floor Port";
		pictureItem = "Exile_Item_WoodFloorPortKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodFloorPortKit"}
		};
		components[] = 
		{
			{1, "Exile_Item_WoodFloorKit"},
			{2, "Exile_Item_WoodPlank"}
		};
		category = "Floor";
	};

	class UpgradeToWoodGate: Exile_AbstractCraftingRecipe





	{
		name = "Upgrade to Wood Gate";
		pictureItem = "Exile_Item_WoodGateKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodGateKit"}
		};
		components[] = 
		{
			{1, "Exile_Item_WoodWallKit"},
			{4, "Exile_Item_WoodPlank"}
		};
		category = "Doorway";
	};
	class UpgradeToWoodWall: Exile_AbstractCraftingRecipe

	{
		name = "Upgrade to Wood Wall";
		pictureItem = "Exile_Item_WoodWallHalfKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodWallKit"}
		};
		components[] = 
		{
			{2, "Exile_Item_WoodWallHalfKit"}
		};
		category = "Wall";
	};

	class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe





	{
		name = "Upgrade to Wood Window";
		pictureItem = "Exile_Item_WoodWindowKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodWindowKit"}
		};
		components[] = 
		{
			{1, "Exile_Item_WoodWallKit"},
			{2, "Exile_Item_WoodPlank"}
		};
		category = "Wall";
	};
	class CraftASafe: Exile_AbstractCraftingRecipe

	{
		name = "Craft Safe";
		pictureItem = "Exile_Item_SafeKit";
		requiresFire = 1;
		requiredInteractionModelGroup = "WaterSource";
		returnedItems[] =
		{
			{1, "Exile_Item_SafeKit"}
		};
		components[] = 
		{
			{4, "Exile_Item_FortificationUpgrade"},
			{1, "Exile_Item_CodeLock"}
		};
		category = "Storage";
	};
};

	
















class CfgExileAnimals
{



	enabled = 1;





	disableVanillaAnimals = 1;
















	animalTypes[] = 
	{
		"Exile_Animal_Rooster_Abstract",
		"Exile_Animal_Hen_Abstract",
		"Exile_Animal_Goat_Abstract",
		"Exile_Animal_Sheep_Abstract"
	};












	spawnDistance = 150;
	spawnRadius = 50;









	minimumSpawnDelay = 5 * 60;
	maximumSpawnDelay = 10 * 60;





	keepAliveRadius = 500;





	minimumLifetime = 5 * 60;
};
class CfgExileArsenal
{
	#include "CUP\pricing.hpp"
	#include "EBM\prices.hpp"
	#include "MASV\pricing.hpp"
	#include "MASW\pricing.hpp"
	#include "RHSGREF\pricing.hpp"
	#include "RHSV\pricing.hpp"
	#include "RHSW\pricing.hpp"
	//#include "test\test.hpp"

	class Exile_Uniform_BambiOverall				{ quality = 1; price = 1; sellPrice = 1; };




	class U_C_Journalist 							{ quality = 1; price = 20; };
	class U_C_Poloshirt_blue 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_burgundy 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_salmon 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_stripped 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_tricolour 					{ quality = 1; price = 20; };
	class U_C_Poor_1 								{ quality = 1; price = 20; };
	class U_C_Poor_2 								{ quality = 1; price = 20; };
	class U_C_Poor_shorts_1 						{ quality = 1; price = 20; };
	class U_C_Scientist 							{ quality = 1; price = 20; };
	class U_OrestesBody 							{ quality = 1; price = 40; };
	class U_Rangemaster 							{ quality = 1; price = 40; };
	class U_NikosAgedBody 							{ quality = 1; price = 40; };
	class U_NikosBody 								{ quality = 1; price = 40; };
	class U_Competitor 								{ quality = 1; price = 40; };




	class U_B_CombatUniform_mcam 					{ quality = 1; price = 40; };
	class U_B_CombatUniform_mcam_tshirt 			{ quality = 1; price = 40; };
	class U_B_CombatUniform_mcam_vest 				{ quality = 1; price = 40; };
	class U_B_CombatUniform_mcam_worn 				{ quality = 1; price = 40; };
	class U_B_CTRG_1 								{ quality = 1; price = 40; };
	class U_B_CTRG_2 								{ quality = 1; price = 40; };
	class U_B_CTRG_3								{ quality = 1; price = 40; };
	class U_I_CombatUniform 						{ quality = 1; price = 40; };
	class U_I_CombatUniform_shortsleeve				{ quality = 1; price = 40; };
	class U_I_CombatUniform_tshirt					{ quality = 1; price = 40; };
	class U_I_OfficerUniform						{ quality = 1; price = 40; };
	class U_O_CombatUniform_ocamo 					{ quality = 1; price = 40; };
	class U_O_CombatUniform_oucamo 					{ quality = 1; price = 40; };
	class U_O_OfficerUniform_ocamo 					{ quality = 2; price = 80; };
	class U_B_SpecopsUniform_sgg 					{ quality = 2; price = 80; };
	class U_O_SpecopsUniform_blk 					{ quality = 2; price = 80; };
	class U_O_SpecopsUniform_ocamo 					{ quality = 2; price = 80; };
	class U_I_G_Story_Protagonist_F 				{ quality = 3; price = 100; };
	class Exile_Uniform_Woodland 					{ quality = 4; price = 500; };




	class U_C_HunterBody_grn						{ quality = 1; price = 40; };
	class U_IG_Guerilla1_1							{ quality = 1; price = 40; };
	class U_IG_Guerilla2_1							{ quality = 1; price = 60; };
	class U_IG_Guerilla2_2							{ quality = 1; price = 40; };
	class U_IG_Guerilla2_3							{ quality = 1; price = 40; };
	class U_IG_Guerilla3_1							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_1							{ quality = 1; price = 40; };
	class U_IG_Guerilla3_2							{ quality = 1; price = 40; };
	class U_BG_Guerrilla_6_1						{ quality = 1; price = 60; };
	class U_BG_Guerilla1_1							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_2							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_3							{ quality = 1; price = 40; };
	class U_BG_Guerilla3_1							{ quality = 1; price = 40; };
	class U_BG_leader								{ quality = 3; price = 40; };
	class U_IG_leader								{ quality = 3; price = 40; };
	class U_I_G_resistanceLeader_F					{ quality = 3; price = 100; };




	class U_B_FullGhillie_ard						{ quality = 5; price = 750; };
	class U_B_FullGhillie_lsh						{ quality = 5; price = 750; };
	class U_B_FullGhillie_sard						{ quality = 5; price = 750; };
	class U_B_GhillieSuit							{ quality = 4; price = 500; };
	class U_I_FullGhillie_ard						{ quality = 5; price = 750; };
	class U_I_FullGhillie_lsh						{ quality = 5; price = 750; };
	class U_I_FullGhillie_sard						{ quality = 5; price = 750; };
	class U_I_GhillieSuit							{ quality = 5; price = 500; };
	class U_O_FullGhillie_ard						{ quality = 5; price = 750; };
	class U_O_FullGhillie_lsh						{ quality = 5; price = 750; };
	class U_O_FullGhillie_sard						{ quality = 5; price = 750; };
	class U_O_GhillieSuit							{ quality = 4; price = 500; };




	class U_I_Wetsuit								{ quality = 3; price = 80; };
	class U_O_Wetsuit								{ quality = 3; price = 80; };
	class U_B_Wetsuit								{ quality = 3; price = 80; };
	class U_B_survival_uniform						{ quality = 3; price = 80; };




	class V_BandollierB_blk							{ quality = 1; price = 20; };
	class V_BandollierB_cbr							{ quality = 1; price = 20; };
	class V_BandollierB_khk							{ quality = 1; price = 20; };
	class V_BandollierB_oli							{ quality = 1; price = 20; };
	class V_BandollierB_rgr							{ quality = 1; price = 20; };




	class V_Chestrig_blk 							{ quality = 1; price = 30; };
	class V_Chestrig_khk 							{ quality = 1; price = 30; };
	class V_Chestrig_oli 							{ quality = 1; price = 30; };
	class V_Chestrig_rgr 							{ quality = 1; price = 30; };




	class V_Press_F									{ quality = 1; price = 10; };
	class V_Rangemaster_belt						{ quality = 1; price = 6; };
	class V_TacVest_blk								{ quality = 1; price = 50; };
	class V_TacVest_blk_POLICE						{ quality = 1; price = 50; };
	class V_TacVest_brn								{ quality = 1; price = 50; };
	class V_TacVest_camo							{ quality = 1; price = 50; };
	class V_TacVest_khk								{ quality = 1; price = 50; };
	class V_TacVest_oli								{ quality = 1; price = 50; };
	class V_TacVestCamo_khk							{ quality = 1; price = 50; };
	class V_TacVestIR_blk							{ quality = 1; price = 50; };
	class V_I_G_resistanceLeader_F					{ quality = 1; price = 50; };




	class V_HarnessO_brn							{ quality = 1; price = 40; };
	class V_HarnessO_gry							{ quality = 1; price = 40; };
	class V_HarnessOGL_brn							{ quality = 1; price = 30; };
	class V_HarnessOGL_gry							{ quality = 1; price = 30; };
	class V_HarnessOSpec_brn						{ quality = 1; price = 40; };
	class V_HarnessOSpec_gry						{ quality = 1; price = 40; };




	class V_PlateCarrier1_blk 						{ quality = 1; price = 80; };
	class V_PlateCarrier1_rgr 						{ quality = 1; price = 80; };
	class V_PlateCarrier2_rgr 						{ quality = 1; price = 100; };
	class V_PlateCarrier3_rgr 						{ quality = 1; price = 100; };
	class V_PlateCarrierGL_blk 						{ quality = 5; price = 500; };
	class V_PlateCarrierGL_mtp 						{ quality = 5; price = 500; };
	class V_PlateCarrierGL_rgr 						{ quality = 5; price = 500; };
	class V_PlateCarrierH_CTRG 						{ quality = 1; price = 100; };
	class V_PlateCarrierIA1_dgtl 					{ quality = 1; price = 80; };
	class V_PlateCarrierIA2_dgtl 					{ quality = 1; price = 100; };
	class V_PlateCarrierIAGL_dgtl 					{ quality = 4; price = 400; };
	class V_PlateCarrierIAGL_oli 					{ quality = 4; price = 400; };
	class V_PlateCarrierL_CTRG 						{ quality = 1; price = 100; };
	class V_PlateCarrierSpec_blk 					{ quality = 3; price = 200; };
	class V_PlateCarrierSpec_mtp 					{ quality = 3; price = 200; };
	class V_PlateCarrierSpec_rgr 					{ quality = 3; price = 200; };




	class H_Cap_blk 								{ quality = 1; price = 6; };
	class H_Cap_blk_Raven 							{ quality = 1; price = 6; };
	class H_Cap_blu 								{ quality = 1; price = 6; };
	class H_Cap_brn_SPECOPS 						{ quality = 1; price = 6; };
	class H_Cap_grn 								{ quality = 1; price = 6; };
	class H_Cap_headphones 							{ quality = 1; price = 6; };
	class H_Cap_khaki_specops_UK 					{ quality = 1; price = 6; };
	class H_Cap_oli 								{ quality = 1; price = 6; };
	class H_Cap_press 								{ quality = 1; price = 6; };
	class H_Cap_red 								{ quality = 1; price = 6; };
	class H_Cap_tan 								{ quality = 1; price = 6; };
	class H_Cap_tan_specops_US 						{ quality = 1; price = 6; };




	class G_Spectacles			 		{ quality = 1; price = 6; };
	class G_Spectacles_Tinted			{ quality = 1; price = 6; };
	class G_Combat			 			{ quality = 1; price = 6; };
	class G_Lowprofile			 		{ quality = 1; price = 6; };
	class G_Shades_Black			 	{ quality = 1; price = 6; };
	class G_Shades_Green			 	{ quality = 1; price = 6; };
	class G_Shades_Red			 		{ quality = 1; price = 6; };
	class G_Squares			 			{ quality = 1; price = 6; };
	class G_Squares_Tinted			 	{ quality = 1; price = 6; };
	class G_Sport_BlackWhite			{ quality = 1; price = 6; };
	class G_Sport_Blackyellow			{ quality = 1; price = 6; };
	class G_Sport_Greenblack			{ quality = 1; price = 6; };
	class G_Sport_Checkered			 	{ quality = 1; price = 6; };
	class G_Sport_Red			 		{ quality = 1; price = 6; };
	class G_Tactical_Black			 	{ quality = 1; price = 6; };
	class G_Aviator			 			{ quality = 1; price = 6; };
	class G_Lady_Mirror			 		{ quality = 1; price = 6; };
	class G_Lady_Dark			 		{ quality = 1; price = 6; };
	class G_Lady_Red			 		{ quality = 1; price = 6; };
	class G_Lady_Blue			 		{ quality = 1; price = 6; };
	class G_Diving			 			{ quality = 1; price = 6; };
	class G_B_Diving			 		{ quality = 1; price = 6; };
	class G_O_Diving			 		{ quality = 1; price = 6; };
	class G_I_Diving			 		{ quality = 1; price = 6; };
	class G_Goggles_VR			 		{ quality = 1; price = 6; };
	class G_Balaclava_blk			 	{ quality = 2; price = 10; };
	class G_Balaclava_oli			 	{ quality = 2; price = 10; };
	class G_Balaclava_combat			{ quality = 2; price = 10; };
	class G_Balaclava_lowprofile		{ quality = 2; price = 10; };
	class G_Bandanna_blk			 	{ quality = 1; price = 6; };
	class G_Bandanna_oli			 	{ quality = 1; price = 6; };
	class G_Bandanna_khk			 	{ quality = 1; price = 6; };
	class G_Bandanna_tan			 	{ quality = 1; price = 6; };
	class G_Bandanna_beast			 	{ quality = 1; price = 6; };
	class G_Bandanna_shades			 	{ quality = 1; price = 6; };
	class G_Bandanna_sport			 	{ quality = 1; price = 6; };
	class G_Bandanna_aviator			{ quality = 1; price = 6; };
	class G_Shades_Blue			 		{ quality = 1; price = 6; };
	class G_Sport_Blackred			 	{ quality = 1; price = 6; };
	class G_Tactical_Clear			 	{ quality = 1; price = 6; };
	class G_Balaclava_TI_blk_F			{ quality = 2; price = 15; };
	class G_Balaclava_TI_tna_F			{ quality = 2; price = 15; };
	class G_Balaclava_TI_G_blk_F		{ quality = 2; price = 15; };
	class G_Balaclava_TI_G_tna_F		{ quality = 2; price = 15; };
	class G_Combat_Goggles_tna_F		{ quality = 1; price = 6; };




	class H_MilCap_blue 							{ quality = 1; price = 8; };
	class H_MilCap_dgtl 							{ quality = 1; price = 8; };
	class H_MilCap_mcamo 							{ quality = 1; price = 8; };
	class H_MilCap_ocamo 							{ quality = 1; price = 8; };
	class H_MilCap_oucamo 							{ quality = 1; price = 8; };
	class H_MilCap_rucamo 							{ quality = 1; price = 8; };




	class H_Watchcap_blk 							{ quality = 1; price = 6; };
	class H_Watchcap_camo 							{ quality = 1; price = 6; };
	class H_Watchcap_khk 							{ quality = 1; price = 6; };
	class H_Watchcap_sgg 							{ quality = 1; price = 6; };




	class H_Bandanna_camo							{ quality = 1; price = 4; };
	class H_Bandanna_cbr							{ quality = 1; price = 4; };
	class H_Bandanna_gry							{ quality = 1; price = 4; };
	class H_Bandanna_khk							{ quality = 1; price = 4; };
	class H_Bandanna_khk_hs							{ quality = 1; price = 4; };
	class H_Bandanna_mcamo							{ quality = 1; price = 4; };
	class H_Bandanna_sgg							{ quality = 1; price = 4; };
	class H_Bandanna_surfer							{ quality = 1; price = 4; };




	class H_Booniehat_dgtl							{ quality = 1; price = 6; };
	class H_Booniehat_dirty							{ quality = 1; price = 6; };
	class H_Booniehat_grn							{ quality = 1; price = 6; };
	class H_Booniehat_indp							{ quality = 1; price = 6; };
	class H_Booniehat_khk							{ quality = 1; price = 6; };
	class H_Booniehat_khk_hs						{ quality = 1; price = 6; };
	class H_Booniehat_mcamo							{ quality = 1; price = 6; };
	class H_Booniehat_tan							{ quality = 1; price = 6; };




	class H_Hat_blue								{ quality = 1; price = 6; };
	class H_Hat_brown								{ quality = 1; price = 6; };
	class H_Hat_camo								{ quality = 1; price = 6; };
	class H_Hat_checker								{ quality = 1; price = 6; };
	class H_Hat_grey								{ quality = 1; price = 6; };
	class H_Hat_tan									{ quality = 1; price = 6; };
	class H_StrawHat								{ quality = 1; price = 6; };
	class H_StrawHat_dark							{ quality = 1; price = 6; };
	class Exile_Headgear_SantaHat					{ quality = 1; price = 10; };
	class Exile_Headgear_SafetyHelmet				{ quality = 1; price = 20; };




	class H_Beret_02								{ quality = 1; price = 6; };
	class H_Beret_blk								{ quality = 1; price = 6; };
	class H_Beret_blk_POLICE						{ quality = 1; price = 6; };
	class H_Beret_brn_SF							{ quality = 1; price = 6; };
	class H_Beret_Colonel							{ quality = 3; price = 8; };
	class H_Beret_grn								{ quality = 1; price = 6; };
	class H_Beret_grn_SF							{ quality = 1; price = 6; };
	class H_Beret_ocamo								{ quality = 1; price = 6; };
	class H_Beret_red								{ quality = 1; price = 6; };




	class H_Shemag_khk								{ quality = 1; price = 10; };
	class H_Shemag_olive							{ quality = 1; price = 10; };
	class H_Shemag_olive_hs							{ quality = 1; price = 10; };
	class H_Shemag_tan								{ quality = 1; price = 10; };
	class H_ShemagOpen_khk							{ quality = 1; price = 10; };
	class H_ShemagOpen_tan							{ quality = 1; price = 10; };
	class H_TurbanO_blk								{ quality = 1; price = 10; };




	class H_HelmetB_light							{ quality = 1; price = 20; };
	class H_HelmetB_light_black						{ quality = 1; price = 20; };
	class H_HelmetB_light_desert					{ quality = 1; price = 20; };
	class H_HelmetB_light_grass						{ quality = 1; price = 20; };
	class H_HelmetB_light_sand						{ quality = 1; price = 20; };
	class H_HelmetB_light_snakeskin					{ quality = 1; price = 20; };




	class H_HelmetIA								{ quality = 3; price = 40; };
	class H_HelmetIA_camo							{ quality = 3; price = 40; };
	class H_HelmetIA_net							{ quality = 3; price = 40; };
	class H_HelmetB									{ quality = 3; price = 60; };
	class H_HelmetB_black							{ quality = 3; price = 60; };
	class H_HelmetB_camo							{ quality = 3; price = 80; };
	class H_HelmetB_desert							{ quality = 3; price = 60; };
	class H_HelmetB_grass							{ quality = 3; price = 60; };
	class H_HelmetB_paint							{ quality = 3; price = 60; };
	class H_HelmetB_plain_blk						{ quality = 3; price = 60; };
	class H_HelmetB_sand							{ quality = 3; price = 60; };
	class H_HelmetB_snakeskin						{ quality = 3; price = 60; };




	class H_HelmetSpecB								{ quality = 4; price = 80; };
	class H_HelmetSpecB_blk							{ quality = 4; price = 80; };
	class H_HelmetSpecB_paint1						{ quality = 4; price = 80; };
	class H_HelmetSpecB_paint2						{ quality = 4; price = 80; };




	class H_HelmetO_ocamo							{ quality = 5; price = 150; };
	class H_HelmetO_oucamo							{ quality = 5; price = 150; };
	class H_HelmetSpecO_blk							{ quality = 5; price = 100; };
	class H_HelmetSpecO_ocamo						{ quality = 5; price = 100; };
	class H_HelmetLeaderO_ocamo						{ quality = 5; price = 200; };
	class H_HelmetLeaderO_oucamo					{ quality = 5; price = 200; };




	class acc_flashlight 							{ quality = 1; price = 4; };
	class acc_pointer_IR 							{ quality = 1; price = 10; };




	class bipod_01_F_blk	 						{ quality = 1; price = 10; };
	class bipod_01_F_mtp	 						{ quality = 1; price = 10; };
	class bipod_01_F_snd	 						{ quality = 1; price = 10; };
	class bipod_02_F_blk	 						{ quality = 1; price = 10; };
	class bipod_02_F_hex	 						{ quality = 1; price = 10; };
	class bipod_02_F_tan	 						{ quality = 1; price = 10; };
	class bipod_03_F_blk	 						{ quality = 1; price = 10; };
	class bipod_03_F_oli	 						{ quality = 1; price = 10; };




	class muzzle_snds_338_black 					{ quality = 4; price = 50; };
	class muzzle_snds_338_green 					{ quality = 4; price = 50; };
	class muzzle_snds_338_sand 						{ quality = 4; price = 50; };
	class muzzle_snds_93mmg 						{ quality = 4; price = 50; };
	class muzzle_snds_93mmg_tan 					{ quality = 4; price = 50; };
	class muzzle_snds_acp 							{ quality = 4; price = 10; };
	class muzzle_snds_B 							{ quality = 4; price = 20; };
	class muzzle_snds_H 							{ quality = 4; price = 20; };
	class muzzle_snds_H_MG 							{ quality = 4; price = 20; };
	class muzzle_snds_H_SW 							{ quality = 4; price = 20; };
	class muzzle_snds_L 							{ quality = 4; price = 10; };
	class muzzle_snds_M 							{ quality = 4; price = 10; };




	class I_UavTerminal								{ quality = 1; price = 2500; };
	class I_UAV_01_backpack_F						{ quality = 1; price = 3500; };




	class O_HMG_01_weapon_F 						{ quality = 5; price = 5000; };
	class O_HMG_01_support_F 						{ quality = 5; price = 1000; };
	class launch_I_Titan_short_F					{ quality = 2; price = 35000; sellPrice = 5000; };
	class launch_O_Titan_F							{ quality = 2; price = 45000; sellPrice = 5000; };
	class launch_B_Titan_F							{ quality = 2; price = 45000; sellPrice = 5000; };
	class launch_O_Titan_ghex_F						{ quality = 2; price = 45000; sellPrice = 5000; };
	class launch_B_Titan_tna_F						{ quality = 2; price = 45000; sellPrice = 5000; };
	class launch_O_Titan_short_F					{ quality = 2; price = 50000; sellPrice = 5000; };
	class launch_B_Titan_short_F					{ quality = 2; price = 50000; sellPrice = 5000; };
	class launch_O_Titan_short_ghex_F				{ quality = 2; price = 50000; sellPrice = 5000; };
	class launch_B_Titan_short_tna_F				{ quality = 2; price = 50000; sellPrice = 5000; };
	class launch_I_Titan_F							{ quality = 2; price = 35000; sellPrice = 5000; };
	class launch_RPG32_F							{ quality = 2; price = 15000; sellPrice = 5000; };
	class launch_NLAW_F								{ quality = 2; price = 25000; sellPrice = 5000; };
	class NLAW_F									{ quality = 2; price = 5000; };
	class RPG32_F									{ quality = 2; price = 5000; };
	class RPG32_HE_F								{ quality = 2; price = 5000; };
	class Titan_AA									{ quality = 2; price = 20000; sellPrice = 2500; };
	class Titan_AT									{ quality = 2; price = 20000; sellPrice = 2500; };
	class Titan_AP									{ quality = 2; price = 20000; sellPrice = 2500; };






	class optic_Aco									{ quality = 1; price = 70; };
	class optic_ACO_grn								{ quality = 1; price = 70; };
	class optic_ACO_grn_smg							{ quality = 1; price = 70; };
	class optic_Aco_smg								{ quality = 1; price = 70; };
	class optic_AMS									{ quality = 3; price = 300; };
	class optic_AMS_khk								{ quality = 3; price = 300; };
	class optic_AMS_snd								{ quality = 3; price = 300; };
	class optic_Arco								{ quality = 1; price = 100; };
	class optic_DMS									{ quality = 1; price = 150; };
	class optic_Hamr								{ quality = 3; price = 200; };
	class optic_Holosight							{ quality = 1; price = 50; };
	class optic_Holosight_smg						{ quality = 1; price = 50; };
	class optic_KHS_blk								{ quality = 4; price = 300; };
	class optic_KHS_hex								{ quality = 4; price = 300; };
	class optic_KHS_old								{ quality = 4; price = 300; };
	class optic_KHS_tan								{ quality = 4; price = 300; };
	class optic_LRPS								{ quality = 3; price = 300; };
	class optic_MRCO								{ quality = 1; price = 100; };
	class optic_MRD									{ quality = 1; price = 10; };
	class optic_Nightstalker						{ quality = 4; price = 5000; };
	class optic_NVS									{ quality = 3; price = 2500; };
	class optic_SOS									{ quality = 1; price = 200; };
	class optic_tws									{ quality = 6; price = 12500; };
	class optic_tws_mg								{ quality = 5; price = 10000; };
	class optic_Yorris								{ quality = 1; price = 10; };




	class Exile_Item_Rope							{ quality = 1; price = 20; };
	class Exile_Item_DuctTape						{ quality = 1; price = 300; };
	class Exile_Item_ExtensionCord					{ quality = 1; price = 40; };
	class Exile_Item_FuelCanisterEmpty				{ quality = 1; price = 40; };
	class Exile_Item_JunkMetal						{ quality = 1; price = 300; };
	class Exile_Item_LightBulb						{ quality = 1; price = 20; };
	class Exile_Item_MetalBoard						{ quality = 1; price = 600; };
	//class Exile_Item_MetalHedgehogKit				{ quality = 1; price = 1200; }
	class Exile_Item_SafeKit						{ quality = 2; price = 25000; };
	class Exile_Item_CodeLock						{ quality = 1; price = 5000; };
	class Exile_Item_Laptop							{ quality = 3; price = 9000; };
	class Exile_Item_BaseCameraKit					{ quality = 3; price = 5000; };
	class Exile_Item_CamoTentKit					{ quality = 1; price = 250; };
	class Exile_Item_MetalPole						{ quality = 1; price = 800; };
	class Exile_Item_MetalScrews					{ quality = 1; price = 100; };
	class Exile_Item_MetalWire						{ quality = 1; price = 100; };
	class Exile_Item_Cement							{ quality = 3; price = 2500; sellPrice = 500; };
	class Exile_Item_Sand							{ quality = 3; price = 2500; sellPrice = 500; };
	class Exile_Item_CarWheel						{ quality = 1; price = 1000; };


	class Exile_Item_SprayCan_Black					{ quality = 2; price = 20; };
	class Exile_Item_SprayCan_Red					{ quality = 2; price = 20; };
	class Exile_Item_SprayCan_Green					{ quality = 2; price = 20; };
	class Exile_Item_SprayCan_White					{ quality = 2; price = 20; };
	class Exile_Item_SprayCan_Blue					{ quality = 2; price = 20; };
	class Exile_Item_BurlapSack						{ quality = 2; price = 5; };
	class Exile_Item_Bullets_556					{ quality = 2; price = 5; };
	class Exile_Item_Bullets_762					{ quality = 2; price = 5; };
	class Exile_Item_WeaponParts					{ quality = 2; price = 20; };




	class Exile_Item_SheepSteak_Cooked				{ quality = 4; price = 230; };
	class Exile_Item_AlsatianSteak_Cooked			{ quality = 4; price = 230; };
	class Exile_Item_CatSharkFilet_Cooked			{ quality = 4; price = 230; };
	class Exile_Item_FinSteak_Cooked				{ quality = 4; price = 230; };
	class Exile_Item_GoatSteak_Cooked				{ quality = 4; price = 230; };
	class Exile_Item_TurtleFilet_Cooked				{ quality = 4; price = 230; };
	class Exile_Item_TunaFilet_Cooked				{ quality = 3; price = 220; };
	class Exile_Item_RabbitSteak_Cooked				{ quality = 3; price = 215; };
	class Exile_Item_ChickenFilet_Cooked			{ quality = 3; price = 205; };
	class Exile_Item_RoosterFilet_Cooked			{ quality = 3; price = 205; };
	class Exile_Item_MulletFilet_Cooked				{ quality = 3; price = 200; };
	class Exile_Item_SalemaFilet_Cooked				{ quality = 3; price = 200; };
	class Exile_Item_MackerelFilet_Cooked			{ quality = 3; price = 190; };
	class Exile_Item_OrnateFilet_Cooked				{ quality = 3; price = 180; };
	class Exile_Item_SnakeFilet_Cooked				{ quality = 3; price = 180; };
	class Exile_Item_CatSharkFilet_Raw				{ quality = 2; price = 125; };
	class Exile_Item_TunaFilet_Raw					{ quality = 2; price = 120; };
	class Exile_Item_AlsatianSteak_Raw				{ quality = 2; price = 115; };
	class Exile_Item_TurtleFilet_Raw				{ quality = 2; price = 115; };
	class Exile_Item_SheepSteak_Raw					{ quality = 2; price = 115; };
	class Exile_Item_FinSteak_Raw					{ quality = 2; price = 115; };
	class Exile_Item_GoatSteak_Raw					{ quality = 2; price = 115; };
	class Exile_Item_ChickenFilet_Raw				{ quality = 2; price = 110; };
	class Exile_Item_RoosterFilet_Raw				{ quality = 2; price = 110; };
	class Exile_Item_MackerelFilet_Raw				{ quality = 2; price = 108; };
	class Exile_Item_MulletFilet_Raw				{ quality = 2; price = 108; };
	class Exile_Item_OrnateFilet_Raw				{ quality = 2; price = 108; };
	class Exile_Item_RabbitSteak_Raw				{ quality = 2; price = 108; };
	class Exile_Item_SalemaFilet_Raw				{ quality = 2; price = 108; };
	class Exile_Item_SnakeFilet_Raw					{ quality = 2; price = 108; };
	class Exile_Item_FloodLightKit					{ quality = 1; price = 250; sellPrice = 2; };
	class Exile_Item_PortableGeneratorKit			{ quality = 1; price = 250; sellPrice = 25; };
	class Exile_Item_ThermalScannerPro				{ quality = 3; price = 15000; sellPrice = 500; };
	class Exile_Item_FuelCanisterFull				{ quality = 1; price = 50; sellPrice = 5; };
	class Exile_Magazine_Battery					{ quality = 3; price = 1500; sellPrice = 50; };
	class Laserbatteries							{ quality = 3; price = 250; sellPrice = 50; };
	class Exile_Item_EMRE							{ quality = 1; price = 55; };
	class Exile_Item_GloriousKnakworst				{ quality = 1; price = 40; };
	class Exile_Item_MacasCheese					{ quality = 1; price = 40; };
	class Exile_Item_Surstromming					{ quality = 1; price = 35; };
	class Exile_Item_SausageGravy					{ quality = 1; price = 30; };
	class Exile_Item_ChristmasTinner				{ quality = 1; price = 20; };
	class Exile_Item_BBQSandwich					{ quality = 1; price = 20; };
	class Exile_Item_Dogfood						{ quality = 1; price = 20; };
	class Exile_Item_Catfood						{ quality = 1; price = 20; };
	class Exile_Item_BeefParts						{ quality = 1; price = 20; };
	class Exile_Item_Cheathas						{ quality = 1; price = 20; };
	class Exile_Item_Noodles						{ quality = 1; price = 15; };
	class Exile_Item_SeedAstics						{ quality = 1; price = 10; };
	class Exile_Item_Raisins						{ quality = 1; price = 10; };
	class Exile_Item_Moobar							{ quality = 1; price = 10; };
	class Exile_Item_InstantCoffee					{ quality = 1; price = 20; };
	class Exile_Item_Can_Empty						{ quality = 1; price = 1; sellPrice = 1; };




	class Exile_Item_PlasticBottleCoffee	 		{ quality = 1; price = 70; };
	class Exile_Item_PowerDrink						{ quality = 1; price = 60; };
	class Exile_Item_PlasticBottleFreshWater 		{ quality = 1; price = 50; sellPrice = 4; };
	class Exile_Item_Beer 							{ quality = 1; price = 50; };
	class Exile_Item_EnergyDrink					{ quality = 1; price = 40; };
	class Exile_Item_ChocolateMilk					{ quality = 1; price = 25; };
	class Exile_Item_MountainDupe					{ quality = 1; price = 30; };
	class Exile_Item_PlasticBottleEmpty				{ quality = 1; price = 5; };




	class Exile_Item_InstaDoc                       { quality = 1; price = 1250; };
	class Exile_Item_Vishpirin						{ quality = 1; price = 300; };
	class Exile_Item_Bandage	                    { quality = 1; price = 100; };	
	class Exile_Item_Heatpack	                    { quality = 1; price = 50; };

	class Exile_Item_Defibrillator					{ quality = 1; price = 7500; };




	class Exile_Item_Matches 						{ quality = 1; price = 60; };
	class Exile_Item_CookingPot						{ quality = 1; price = 80; };
	class Exile_Melee_Axe							{ quality = 1; price = 100; };
	class Exile_Melee_SledgeHammer					{ quality = 1; price = 500; };
	class Exile_Item_CanOpener						{ quality = 1; price = 80; };
	class Exile_Item_Handsaw						{ quality = 1; price = 500; };
	class Exile_Item_Pliers							{ quality = 1; price = 350; };
	class Exile_Item_Grinder						{ quality = 1; price = 1250; };
	class Exile_Item_Foolbox						{ quality = 1; price = 4000; };
	class Exile_Item_CordlessScrewdriver			{ quality = 1; price = 750; };
	class Exile_Item_FireExtinguisher				{ quality = 1; price = 650; };
	class Exile_Item_Hammer							{ quality = 1; price = 600; };
	class Exile_Item_OilCanister					{ quality = 1; price = 1750; };
	class Exile_Item_Screwdriver					{ quality = 1; price = 250; };
	class Exile_Item_Wrench							{ quality = 1; price = 250; };
	class Exile_Melee_Shovel						{ quality = 3; price = 500; };
	class Exile_Item_SleepingMat					{ quality = 1; price = 100; sellPrice = 5; };
	class Exile_Item_ToiletPaper					{ quality = 1; price = 5; };
	class U_B_Protagonist_VR						{ quality = 1; price = 50; sellPrice = 5; };
	class Exile_Item_ZipTie							{ quality = 1; price = 250; };




	class ItemWatch									{ quality = 1; price = 2; };	
	class ItemGPS									{ quality = 1; price = 40; };
	class ItemMap									{ quality = 1; price = 6; };
	class ItemCompass								{ quality = 1; price = 6; };
	class ItemRadio									{ quality = 1; price = 40; };
	class Binocular									{ quality = 1; price = 40; };
	class Rangefinder								{ quality = 3; price = 200; };
	class Laserdesignator							{ quality = 4; price = 7500; };
	class Laserdesignator_02						{ quality = 4; price = 7500; };
	class Laserdesignator_03						{ quality = 4; price = 7500; };
	class NVGoggles									{ quality = 1; price = 100; sellPrice = 5; };
	class NVGoggles_INDEP							{ quality = 1; price = 250; };
	class NVGoggles_OPFOR							{ quality = 1; price = 250; };
	class Exile_Item_XM8							{ quality = 1; price = 25; };
	class Exile_Item_MobilePhone					{ quality = 3; price = 50000; sellPrice = 5000; };




	class Exile_Headgear_GasMask					{ quality = 1; price = 500; };




	class V_RebreatherB								{ quality = 1; price = 500; };
	class V_RebreatherIA							{ quality = 1; price = 500; };
	class V_RebreatherIR							{ quality = 1; price = 500; };




	class B_Parachute								{ quality = 1; price = 150; };
	class H_CrewHelmetHeli_B						{ quality = 3; price = 150; };
	class H_CrewHelmetHeli_I						{ quality = 3; price = 150; };
	class H_CrewHelmetHeli_O						{ quality = 3; price = 150; };
	class H_HelmetCrew_I							{ quality = 3; price = 100; };
	class H_HelmetCrew_B							{ quality = 3; price = 100; };
	class H_HelmetCrew_O							{ quality = 3; price = 100; };
	class H_PilotHelmetHeli_B						{ quality = 4; price = 100; };
	class H_PilotHelmetHeli_I						{ quality = 4; price = 100; };
	class H_PilotHelmetHeli_O						{ quality = 4; price = 100; };
	class U_B_HeliPilotCoveralls					{ quality = 4; price = 80; };
	class U_B_PilotCoveralls						{ quality = 2; price = 60; };
	class U_I_HeliPilotCoveralls					{ quality = 2; price = 60; };
	class U_I_pilotCoveralls						{ quality = 2; price = 60; };
	class U_O_PilotCoveralls						{ quality = 2; price = 60; };
	class H_PilotHelmetFighter_B					{ quality = 4; price = 150; };
	class H_PilotHelmetFighter_I					{ quality = 4; price = 150; };
	class H_PilotHelmetFighter_O					{ quality = 4; price = 150; };




	class B_HuntingBackpack							{ quality = 3; price = 70; };
	class B_OutdoorPack_blk							{ quality = 1; price = 80; };
	class B_OutdoorPack_blu							{ quality = 1; price = 80; };
	class B_OutdoorPack_tan							{ quality = 1; price = 80; };
	class B_AssaultPack_blk							{ quality = 1; price = 90; };
	class B_AssaultPack_cbr							{ quality = 1; price = 90; };
	class B_AssaultPack_dgtl						{ quality = 1; price = 90; };
	class B_AssaultPack_khk							{ quality = 1; price = 90; };
	class B_AssaultPack_mcamo						{ quality = 1; price = 90; };
	class B_AssaultPack_rgr							{ quality = 1; price = 90; };
	class B_AssaultPack_sgg							{ quality = 1; price = 90; };
	class B_FieldPack_blk							{ quality = 1; price = 120; };
	class B_FieldPack_cbr							{ quality = 1; price = 120; };
	class B_FieldPack_ocamo							{ quality = 1; price = 120; };
	class B_FieldPack_oucamo						{ quality = 1; price = 120; };
	class B_TacticalPack_blk						{ quality = 1; price = 150; };
	class B_TacticalPack_rgr						{ quality = 1; price = 150; };
	class B_TacticalPack_ocamo						{ quality = 1; price = 150; };
	class B_TacticalPack_mcamo						{ quality = 1; price = 150; };
	class B_TacticalPack_oli						{ quality = 1; price = 150; };
	class B_Kitbag_cbr								{ quality = 1; price = 200; };
	class B_Kitbag_mcamo							{ quality = 1; price = 200; };
	class B_Kitbag_sgg								{ quality = 1; price = 200; };
	class B_Bergen_blk								{ quality = 1; price = 200; };
	class B_Bergen_mcamo							{ quality = 1; price = 200; };
	class B_Bergen_rgr								{ quality = 1; price = 200; };
	class B_Bergen_sgg								{ quality = 1; price = 200; };
	class B_Carryall_cbr							{ quality = 5; price = 300; };
	class B_Carryall_khk							{ quality = 5; price = 300; };
	class B_Carryall_mcamo							{ quality = 5; price = 300; };
	class B_Carryall_ocamo							{ quality = 5; price = 300; };
	class B_Carryall_oli							{ quality = 5; price = 300; };
	class B_Carryall_oucamo							{ quality = 5; price = 300; };




	class 100Rnd_65x39_caseless_mag 				{ quality = 1; price = 30; };
	class 100Rnd_65x39_caseless_mag_Tracer 			{ quality = 1; price = 40; };
	class 10Rnd_127x54_Mag 							{ quality = 1; price = 30; };

	class 10Rnd_338_Mag 							{ quality = 1; price = 30; };


	class 10Rnd_762x54_Mag 							{ quality = 1; price = 30; };
	class 10Rnd_93x64_DMR_05_Mag 					{ quality = 1; price = 40; };
	class 11Rnd_45ACP_Mag 							{ quality = 1; price = 8; };
	class 150Rnd_762x54_Box 						{ quality = 1; price = 20; };
	class 150Rnd_762x54_Box_Tracer 					{ quality = 1; price = 30; };
	class 16Rnd_9x21_Mag 							{ quality = 1; price = 20; };
	class 200Rnd_65x39_cased_Box 					{ quality = 1; price = 30; };
	class 200Rnd_65x39_cased_Box_Tracer 			{ quality = 1; price = 30; };
	class 150Rnd_93x64_Mag 							{ quality = 1; price = 50; };
	class 130Rnd_338_Mag 							{ quality = 1; price = 40; };
	class 20Rnd_556x45_UW_mag 						{ quality = 1; price = 20; };
	class 20Rnd_762x51_Mag 							{ quality = 1; price = 20; };
	class 30Rnd_45ACP_Mag_SMG_01 					{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green 		{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow		{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red			{ quality = 1; price = 10; };
	class 30Rnd_556x45_Stanag 						{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Green 			{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_green  				{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Red 			{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Yellow 		{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_red 					{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_green 				{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_green_mag_Tracer 	{ quality = 1; price = 30; };
	class 30Rnd_65x39_caseless_mag 					{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_mag_Tracer 			{ quality = 1; price = 30; };
	class 30Rnd_9x21_Mag 							{ quality = 1; price = 40; };
	class 30Rnd_9x21_Yellow_Mag						{ quality = 1; price = 40; };
	class 30Rnd_9x21_Green_Mag						{ quality = 1; price = 40; };
	class 30Rnd_9x21_Red_Mag						{ quality = 1; price = 40; };
	class 5Rnd_127x108_APDS_Mag 					{ quality = 6; price = 250; };
	class 5Rnd_127x108_Mag 							{ quality = 1; price = 40; };
	class 6Rnd_45ACP_Cylinder 						{ quality = 1; price = 8; };
	class 6Rnd_GreenSignal_F 						{ quality = 1; price = 30; };
	class 6Rnd_RedSignal_F 							{ quality = 1; price = 30; };
	class 7Rnd_408_Mag 								{ quality = 1; price = 10; };
	class 9Rnd_45ACP_Mag 							{ quality = 1; price = 6; };


	class Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag 			{ quality = 6; price = 500 +  5 * 20; };
	class Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag 		{ quality = 6; price = 750 +  5 * 20; };
	class Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag 		{ quality = 6; price = 500 + 10 * 20; };
	class Exile_Magazine_7Rnd_408_Bullet_Cam_Mag 				{ quality = 6; price = 250 +  7 * 20; };
	class Exile_Magazine_10Rnd_338_Bullet_Cam_Mag 				{ quality = 6; price = 250 + 10 * 20; };
	class Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag 		{ quality = 6; price = 500 + 10 * 20; };
	class Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag 		{ quality = 6; price = 500 +  5 * 20; };
	class Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag 	{ quality = 6; price = 750 +  5 * 20; };




	class Chemlight_blue							{ quality = 1; price = 2; };
	class Chemlight_green							{ quality = 1; price = 2; };
	class Chemlight_red								{ quality = 1; price = 2; };
	class FlareGreen_F								{ quality = 1; price = 6; };
	class FlareRed_F								{ quality = 1; price = 6; };
	class FlareWhite_F								{ quality = 1; price = 6; };
	class FlareYellow_F								{ quality = 1; price = 6; };
	class UGL_FlareGreen_F							{ quality = 1; price = 8; };
	class UGL_FlareRed_F							{ quality = 1; price = 8; };
	class UGL_FlareWhite_F							{ quality = 1; price = 8; };
	class UGL_FlareYellow_F							{ quality = 1; price = 8; };
	class 3Rnd_UGL_FlareGreen_F						{ quality = 1; price = 8*3; };
	class 3Rnd_UGL_FlareRed_F						{ quality = 1; price = 8*3; };
	class 3Rnd_UGL_FlareWhite_F						{ quality = 1; price = 8*3; };
	class 3Rnd_UGL_FlareYellow_F					{ quality = 1; price = 8*3; };




	class SmokeShell								{ quality = 1; price = 6; };
	class SmokeShellBlue							{ quality = 1; price = 6; };
	class SmokeShellGreen							{ quality = 1; price = 6; };
	class SmokeShellOrange							{ quality = 1; price = 6; };
	class SmokeShellPurple							{ quality = 1; price = 6; };
	class SmokeShellRed								{ quality = 1; price = 6; };
	class SmokeShellYellow							{ quality = 1; price = 6; };
	class 1Rnd_Smoke_Grenade_shell					{ quality = 1; price = 8; };
	class 1Rnd_SmokeBlue_Grenade_shell				{ quality = 1; price = 8; };
	class 1Rnd_SmokeGreen_Grenade_shell				{ quality = 1; price = 8; };
	class 1Rnd_SmokeOrange_Grenade_shell			{ quality = 1; price = 8; };
	class 1Rnd_SmokePurple_Grenade_shell			{ quality = 1; price = 8; };
	class 1Rnd_SmokeRed_Grenade_shell				{ quality = 1; price = 8; };
	class 1Rnd_SmokeYellow_Grenade_shell			{ quality = 1; price = 8; };
	class 3Rnd_Smoke_Grenade_shell					{ quality = 1; price = 8*3; };
	class 3Rnd_SmokeBlue_Grenade_shell				{ quality = 1; price = 8*3; };
	class 3Rnd_SmokeGreen_Grenade_shell				{ quality = 1; price = 8*3; };
	class 3Rnd_SmokeOrange_Grenade_shell			{ quality = 1; price = 8*3; };
	class 3Rnd_SmokePurple_Grenade_shell			{ quality = 1; price = 8*3; };
	class 3Rnd_SmokeRed_Grenade_shell				{ quality = 1; price = 8*3; };
	class 3Rnd_SmokeYellow_Grenade_shell			{ quality = 1; price = 8*3; };




	class HandGrenade								{ quality = 1; price = 125; };
	class MiniGrenade								{ quality = 1; price = 125; };
	class B_IR_Grenade								{ quality = 1; price = 75; };
	class O_IR_Grenade								{ quality = 1; price = 75; };
	class I_IR_Grenade								{ quality = 1; price = 75; };
	class 1Rnd_HE_Grenade_shell						{ quality = 1; price = 75; };
	class 3Rnd_HE_Grenade_shell						{ quality = 1; price = 75*3; };
	class APERSBoundingMine_Range_Mag				{ quality = 4; price = 1500; };
	class APERSMine_Range_Mag						{ quality = 4; price = 1600; };
	class APERSTripMine_Wire_Mag					{ quality = 4; price = 1300; };
	class ClaymoreDirectionalMine_Remote_Mag		{ quality = 4; price = 1350; };
	class DemoCharge_Remote_Mag						{ quality = 5; price = 3500; };
	class SatchelCharge_Remote_Mag					{ quality = 5; price = 5000; };
	class IEDLandBig_Remote_Mag						{ quality = 3; price = 1600; };
	class IEDLandSmall_Remote_Mag					{ quality = 3; price = 1300; };
	class IEDUrbanBig_Remote_Mag					{ quality = 3; price = 1800; };
	class IEDUrbanSmall_Remote_Mag					{ quality = 3; price = 1400; };
	class SLAMDirectionalMine_Wire_Mag				{ quality = 3; price = 1700; };




	class hgun_ACPC2_F 								{ quality = 1; price = 50; };
	class hgun_P07_F 								{ quality = 1; price = 50; };
	class hgun_Pistol_heavy_01_F 					{ quality = 1; price = 80; };
	class hgun_Pistol_heavy_02_F 					{ quality = 1; price = 80; };
	class hgun_Pistol_Signal_F 						{ quality = 1; price = 100; };
	class hgun_Rook40_F 							{ quality = 1; price = 50; };




	class hgun_PDW2000_F 							{ quality = 1; price = 100; };
	class SMG_01_F 									{ quality = 1; price = 150; };
	class SMG_02_F 									{ quality = 1; price = 150; };




	class arifle_MX_SW_Black_F						{ quality = 1; price = 500; };
	class arifle_MX_SW_F							{ quality = 1; price = 500; };
	class LMG_Mk200_F								{ quality = 1; price = 1200; };
	class LMG_Zafir_F								{ quality = 3; price = 1200; };
	class MMG_01_hex_F								{ quality = 5; price = 1500; };
	class MMG_01_tan_F								{ quality = 5; price = 1500; };
	class MMG_02_black_F							{ quality = 5; price = 1500; };
	class MMG_02_camo_F								{ quality = 5; price = 1500; };
	class MMG_02_sand_F								{ quality = 5; price = 1500; };




	class arifle_Katiba_C_F							{ quality = 1; price = 500; };
	class arifle_Katiba_F							{ quality = 1; price = 500; };
	class arifle_Katiba_GL_F						{ quality = 1; price = 500; };
	class arifle_Mk20_F								{ quality = 1; price = 150; };
	class arifle_Mk20_GL_F							{ quality = 1; price = 200; };
	class arifle_Mk20_GL_plain_F					{ quality = 1; price = 200; };
	class arifle_Mk20_plain_F						{ quality = 1; price = 150; };
	class arifle_Mk20C_F							{ quality = 1; price = 150; };
	class arifle_Mk20C_plain_F						{ quality = 1; price = 150; };
	class arifle_MX_Black_F							{ quality = 1; price = 500; };
	class arifle_MX_F								{ quality = 1; price = 500; };
	class arifle_MX_GL_Black_F						{ quality = 1; price = 500; };
	class arifle_MX_GL_F							{ quality = 1; price = 500; };
	class arifle_MXC_Black_F						{ quality = 1; price = 500; };
	class arifle_MXC_F								{ quality = 1; price = 500; };
	class arifle_SDAR_F								{ quality = 1; price = 500; };
	class arifle_TRG20_F							{ quality = 1; price = 250; };
	class arifle_TRG21_F							{ quality = 1; price = 250; };
	class arifle_TRG21_GL_F							{ quality = 1; price = 350; };




	class arifle_MXM_Black_F 						{ quality = 1; price = 750; };
	class arifle_MXM_F 								{ quality = 1; price = 750; };
	class srifle_DMR_01_F 							{ quality = 4; price = 1600; };
	class srifle_DMR_02_camo_F 						{ quality = 4; price = 1800; };
	class srifle_DMR_02_F 							{ quality = 4; price = 1800; };
	class srifle_DMR_02_sniper_F 					{ quality = 4; price = 1800; };
	class srifle_DMR_03_F 							{ quality = 4; price = 1750; };
	class srifle_DMR_03_khaki_F 					{ quality = 4; price = 1750; };
	class srifle_DMR_03_multicam_F 					{ quality = 4; price = 1750; };
	class srifle_DMR_03_tan_F 						{ quality = 4; price = 1750; };
	class srifle_DMR_03_woodland_F 					{ quality = 4; price = 1750; };
	class srifle_DMR_04_F 							{ quality = 4; price = 1700; };
	class srifle_DMR_04_Tan_F 						{ quality = 4; price = 1700; };
	class srifle_DMR_05_blk_F 						{ quality = 4; price = 1850; };
	class srifle_DMR_05_hex_F 						{ quality = 4; price = 1850; };
	class srifle_DMR_05_tan_f 						{ quality = 4; price = 1850; };
	class srifle_DMR_06_camo_F 						{ quality = 4; price = 1800; };
	class srifle_DMR_06_olive_F 					{ quality = 4; price = 1800; };
	class srifle_EBR_F 								{ quality = 4; price = 1700; };
	class srifle_GM6_camo_F 						{ quality = 6; price = 12500; };
	class srifle_GM6_F 								{ quality = 5; price = 11500; };
	class srifle_LRR_camo_F 						{ quality = 6; price = 9000; };
	class srifle_LRR_F 								{ quality = 5; price = 8000; };




	class Exile_Weapon_AK107						{ quality = 1; price = 300; };
	class Exile_Weapon_AK107_GL						{ quality = 1; price = 400; };
	class Exile_Weapon_AK74							{ quality = 1; price = 350; };
	class Exile_Weapon_AK74_GL						{ quality = 1; price = 400; };
	class Exile_Weapon_AK47							{ quality = 3; price = 500; };
	class Exile_Weapon_AKM							{ quality = 3; price = 500; };
	class Exile_Weapon_AKS							{ quality = 3; price = 500; };
	class Exile_Weapon_AKS_Gold						{ quality = 3; price = 550; };
	class Exile_Weapon_DMR							{ quality = 3; price = 650; };
	class Exile_Weapon_LeeEnfield					{ quality = 1; price = 250; };
	class Exile_Weapon_CZ550						{ quality = 1; price = 400; };
	class Exile_Weapon_SVD							{ quality = 4; price = 800; };
	class Exile_Weapon_SVDCamo						{ quality = 4; price = 850; };
	class Exile_Weapon_VSSVintorez					{ quality = 3; price = 600; };
	class Exile_Weapon_RPK							{ quality = 1; price = 250; };
	class Exile_Weapon_PK							{ quality = 3; price = 300; };
	class Exile_Weapon_PKP							{ quality = 3; price = 350; };
	class Exile_Weapon_Colt1911						{ quality = 1; price = 100; };
	class Exile_Weapon_Makarov						{ quality = 1; price = 100; };
	class Exile_Weapon_Taurus						{ quality = 1; price = 100; };
	class Exile_Weapon_TaurusGold					{ quality = 1; price = 150; };
	class Exile_Weapon_M1014						{ quality = 1; price = 200; };
	class Exile_Weapon_SA61							{ quality = 1; price = 150; };
	class Exile_Weapon_m107							{ quality = 6; price = 12500; };
	class Exile_Weapon_ksvk							{ quality = 6; price = 10000; };
	class Exile_Weapon_M4							{ quality = 2; price = 300; };
	class Exile_Weapon_M16A4						{ quality = 2; price = 350; };
	class Exile_Weapon_M16A2						{ quality = 1; price = 300; };




	class Exile_Magazine_30Rnd_762x39_AK				{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK				{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK_Green			{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK_Red			{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK_White			{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK_Yellow			{ quality = 1; price = 20; };
	class Exile_Magazine_45Rnd_545x39_RPK_Green			{ quality = 1; price = 20; };
	class Exile_Magazine_75Rnd_545x39_RPK_Green			{ quality = 1; price = 20; };
	class Exile_Magazine_20Rnd_762x51_DMR				{ quality = 1; price = 20; };
	class Exile_Magazine_20Rnd_762x51_DMR_Yellow		{ quality = 1; price = 20; };
	class Exile_Magazine_20Rnd_762x51_DMR_Red			{ quality = 1; price = 20; };
	class Exile_Magazine_20Rnd_762x51_DMR_Green			{ quality = 1; price = 20; };
	class Exile_Magazine_10Rnd_303						{ quality = 1; price = 20; };
	class Exile_Magazine_100Rnd_762x54_PK_Green			{ quality = 1; price = 20; };
	class Exile_Magazine_7Rnd_45ACP						{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_9x18						{ quality = 1; price = 20; };
	class Exile_Magazine_6Rnd_45ACP						{ quality = 1; price = 20; };
	class Exile_Magazine_5Rnd_22LR						{ quality = 1; price = 20; };
	class Exile_Magazine_10Rnd_762x54					{ quality = 1; price = 20; };
	class Exile_Magazine_10Rnd_9x39						{ quality = 1; price = 20; };
	class Exile_Magazine_20Rnd_9x39						{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_74Slug					{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_74Pellets					{ quality = 1; price = 20; };
	class Exile_Magazine_10Rnd_765x17_SA61				{ quality = 1; price = 10; };
	class Exile_Magazine_20Rnd_765x17_SA61				{ quality = 1; price = 20; };
	class Exile_Magazine_10Rnd_127x99_m107				{ quality = 6; price = 50; };
	class Exile_Magazine_5Rnd_127x108_APDS_KSVK			{ quality = 6; price = 500; };
	class Exile_Magazine_5Rnd_127x108_KSVK				{ quality = 6; price = 50; };





	class hgun_Pistol_01_F            { quality = 1; price = 65; };
	class hgun_P07_khk_F              { quality = 1; price = 65; };
	class SMG_05_F					  { quality = 1; price = 150; };
	class LMG_03_F					  { quality = 3; price = 650; };
	class arifle_MX_khk_F             { quality = 3; price = 450; };
	class arifle_MX_GL_khk_F          { quality = 3; price = 500; };
	class arifle_MXC_khk_F            { quality = 3; price = 350; };
	class arifle_MXM_khk_F            { quality = 3; price = 500; };
	class srifle_LRR_tna_F            { quality = 6; price = 9000; };
	class srifle_GM6_ghex_F           { quality = 6; price = 12500; };
	class srifle_DMR_07_blk_F         { quality = 4; price = 1750; };
	class srifle_DMR_07_hex_F         { quality = 4; price = 1750; };
	class srifle_DMR_07_ghex_F        { quality = 4; price = 1750; };
	class arifle_AK12_F               { quality = 3; price = 650; };
	class arifle_AK12_GL_F            { quality = 3; price = 700; };
	class arifle_AKM_F                { quality = 3; price = 400; };
	class arifle_AKM_FL_F             { quality = 3; price = 400; };
	class arifle_AKS_F                { quality = 3; price = 350; };
	class arifle_ARX_blk_F            { quality = 5; price = 900; };
	class arifle_ARX_ghex_F           { quality = 5; price = 900; };
	class arifle_ARX_hex_F            { quality = 5; price = 900; };
	class arifle_CTAR_blk_F           { quality = 2; price = 450; };
	class arifle_CTAR_hex_F           { quality = 2; price = 450; };
	class arifle_CTAR_ghex_F          { quality = 2; price = 450; };
	class arifle_CTAR_GL_blk_F        { quality = 2; price = 450; };


	class arifle_CTARS_blk_F          { quality = 2; price = 450; };
	class arifle_CTARS_ghex_F         { quality = 2; price = 450; };
	class arifle_CTARS_hex_F          { quality = 2; price = 450; };
	class arifle_SPAR_01_blk_F        { quality = 1; price = 400; };
	class arifle_SPAR_01_khk_F        { quality = 1; price = 400; };
	class arifle_SPAR_01_snd_F        { quality = 1; price = 400; };
	class arifle_SPAR_01_GL_blk_F     { quality = 1; price = 500; };
	class arifle_SPAR_01_GL_khk_F     { quality = 1; price = 500; };
	class arifle_SPAR_01_GL_snd_F     { quality = 1; price = 500; };
	class arifle_SPAR_02_blk_F  	 	{ quality = 1; price = 500; };
	class arifle_SPAR_02_khk_F   		{ quality = 1; price = 500; };
	class arifle_SPAR_02_snd_F  		{ quality = 1; price = 500; };
	class arifle_SPAR_03_blk_F        { quality = 1; price = 600; };
	class arifle_SPAR_03_khk_F        { quality = 1; price = 600; };
	class arifle_SPAR_03_snd_F        { quality = 1; price = 600; };					
	class muzzle_snds_H_khk_F         { quality = 4; price = 50; };
	class muzzle_snds_H_snd_F         { quality = 4; price = 50; };
	class muzzle_snds_58_blk_F        { quality = 4; price = 20; };
	class muzzle_snds_m_khk_F         { quality = 4; price = 15; };
	class muzzle_snds_m_snd_F         { quality = 4; price = 15; };
	class muzzle_snds_B_khk_F         { quality = 4; price = 50; };
	class muzzle_snds_B_snd_F         { quality = 4; price = 50; };
	class muzzle_snds_58_wdm_F        { quality = 4; price = 20; };
	class muzzle_snds_65_TI_blk_F     { quality = 4; price = 75; };
	class muzzle_snds_65_TI_hex_F     { quality = 4; price = 75; };
	class muzzle_snds_65_TI_ghex_F    { quality = 4; price = 75; };
	class muzzle_snds_H_MG_blk_F      { quality = 4; price = 20; };
	class muzzle_snds_H_MG_khk_F      { quality = 4; price = 20; };
	class optic_Arco_blk_F            { quality = 1; price = 100; };
	class optic_Arco_ghex_F           { quality = 1; price = 100; };
	class optic_DMS_ghex_F            { quality = 2; price = 150; };
	class optic_Hamr_khk_F            { quality = 3; price = 200; };
	class optic_ERCO_blk_F            { quality = 1; price = 125; };
	class optic_ERCO_khk_F            { quality = 1; price = 125; };
	class optic_ERCO_snd_F            { quality = 1; price = 125; };
	class optic_SOS_khk_F             { quality = 2; price = 200; };
	class optic_LRPS_tna_F            { quality = 5; price = 300; };
	class optic_LRPS_ghex_F           { quality = 5; price = 300; };
	class optic_Holosight_blk_F       { quality = 1; price = 50; };
	class optic_Holosight_khk_F       { quality = 1; price = 50; };
	class optic_Holosight_smg_blk_F   { quality = 1; price = 50; };
	class bipod_01_F_khk              { quality = 2; price = 10; };
	class O_NVGoggles_hex_F           { quality = 2; price = 550; };
	class O_NVGoggles_urb_F           { quality = 2; price = 550; };
	class O_NVGoggles_ghex_F          { quality = 2; price = 550; };
	class NVGoggles_tna_F             { quality = 2; price = 550; };
	class NVGogglesB_blk_F            { quality = 5; price = 10000; };
	class NVGogglesB_grn_F            { quality = 5; price = 10000; };
	class NVGogglesB_gry_F            { quality = 5; price = 10000; };
	class Laserdesignator_01_khk_F    { quality = 6; price = 10000; };
	class Laserdesignator_02_ghex_F   { quality = 6; price = 10000; };
	class U_B_T_Soldier_F             { quality = 2; price = 40; };
	class U_B_T_Soldier_AR_F          { quality = 2; price = 40; };
	class U_B_T_Soldier_SL_F          { quality = 2; price = 40; };
	class U_B_T_Sniper_F              { quality = 3; price = 100; };
	class U_B_T_FullGhillie_tna_F     { quality = 4; price = 750; };
	class U_B_CTRG_Soldier_F          { quality = 2; price = 40; };
	class U_B_CTRG_Soldier_2_F        { quality = 2; price = 40; };
	class U_B_CTRG_Soldier_3_F        { quality = 2; price = 40; };
	class U_B_GEN_Soldier_F           { quality = 2; price = 35; };
	class U_B_GEN_Commander_F         { quality = 2; price = 35; };
	class U_O_T_Soldier_F             { quality = 2; price = 40; };
	class U_O_T_Officer_F             { quality = 3; price = 40; };
	class U_O_T_Sniper_F              { quality = 3; price = 100; };
	class U_O_T_FullGhillie_tna_F     { quality = 4; price = 750; };
	class U_O_V_Soldier_Viper_F       { quality = 4; price = 750; };
	class U_O_V_Soldier_Viper_hex_F   { quality = 4; price = 750; };
	class U_I_C_Soldier_Para_1_F      { quality = 2; price = 30; };
	class U_I_C_Soldier_Para_2_F      { quality = 2; price = 30; };
	class U_I_C_Soldier_Para_3_F      { quality = 2; price = 30; };
	class U_I_C_Soldier_Para_4_F      { quality = 2; price = 30; };
	class U_I_C_Soldier_Para_5_F      { quality = 2; price = 30; };
	class U_I_C_Soldier_Bandit_1_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Bandit_2_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Bandit_3_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Bandit_4_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Bandit_5_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Camo_F        { quality = 2; price = 30; };
	class U_C_man_sport_1_F           { quality = 1; price = 10; };
	class U_C_man_sport_2_F           { quality = 1; price = 10; };
	class U_C_man_sport_3_F           { quality = 1; price = 10; };
	class U_C_Man_casual_1_F          { quality = 1; price = 10; };
	class U_C_Man_casual_2_F          { quality = 1; price = 10; };
	class U_C_Man_casual_3_F          { quality = 1; price = 10; };
	class U_C_Man_casual_4_F          { quality = 1; price = 10; };
	class U_C_Man_casual_5_F          { quality = 1; price = 10; };
	class U_C_Man_casual_6_F          { quality = 1; price = 10; };
	class U_B_CTRG_Soldier_urb_1_F    { quality = 2; price = 40; };
	class U_B_CTRG_Soldier_urb_2_F    { quality = 2; price = 40; };
	class U_B_CTRG_Soldier_urb_3_F    { quality = 2; price = 40; };
	class H_Helmet_Skate              { quality = 2; price = 20; };
	class H_HelmetB_TI_tna_F          { quality = 4; price = 500; };
	class H_HelmetO_ViperSP_hex_F     { quality = 6; price = 15000; };
	class H_HelmetO_ViperSP_ghex_F    { quality = 6; price = 15000; };
	class H_HelmetB_tna_F             { quality = 3; price = 50; };
	class H_HelmetB_Enh_tna_F         { quality = 4; price = 100; };
	class H_HelmetB_Light_tna_F       { quality = 2; price = 20; };
	class H_HelmetSpecO_ghex_F        { quality = 5; price = 100; };
	class H_HelmetLeaderO_ghex_F      { quality = 5; price = 175; };
	class H_HelmetO_ghex_F            { quality = 5; price = 75; };
	class H_HelmetCrew_O_ghex_F       { quality = 3; price = 75; };
	class H_MilCap_tna_F              { quality = 1; price = 8; };
	class H_MilCap_ghex_F             { quality = 1; price = 8; };
	class H_Booniehat_tna_F           { quality = 1; price = 4; };
	class H_Beret_gen_F               { quality = 2; price = 12; };
	class H_MilCap_gen_F              { quality = 1; price = 10; };
	class H_Cap_oli_Syndikat_F        { quality = 1; price = 6; };
	class H_Cap_tan_Syndikat_F        { quality = 1; price = 6; };
	class H_Cap_blk_Syndikat_F        { quality = 1; price = 6; };
	class H_Cap_grn_Syndikat_F        { quality = 1; price = 6; };
	class H_FakeHeadgear_Syndikat_F   { quality = 1; price = 6; };
	class V_TacChestrig_grn_F         { quality = 1; price = 15; };
	class V_TacChestrig_oli_F         { quality = 1; price = 15; };
	class V_TacChestrig_cbr_F         { quality = 1; price = 15; };
	class V_PlateCarrier1_tna_F       { quality = 3; price = 50; };
	class V_PlateCarrier2_tna_F       { quality = 3; price = 60; };
	class V_PlateCarrierSpec_tna_F    { quality = 5; price = 100; };
	class V_PlateCarrierGL_tna_F      { quality = 6; price = 500; };
	class V_HarnessO_ghex_F           { quality = 2; price = 50; };
	class V_HarnessOGL_ghex_F         { quality = 1; price = 30; };
	class V_BandollierB_ghex_F        { quality = 1; price = 10; };
	class V_TacVest_gen_F             { quality = 1; price = 25; };
	class V_PlateCarrier1_rgr_noflag_F		{ quality = 2; price = 50; };
	class V_PlateCarrier2_rgr_noflag_F		{ quality = 2; price = 60; };
	class B_Bergen_Base_F					{ quality = 5; price = 750; };
	class B_Bergen_mcamo_F                  { quality = 5; price = 750; };
	class B_Bergen_dgtl_F                   { quality = 5; price = 750; };
	class B_Bergen_hex_F                    { quality = 5; price = 750; };
	class B_Bergen_tna_F                    { quality = 5; price = 750; };
	class B_AssaultPack_tna_F               { quality = 1; price = 90; };
	class B_Carryall_ghex_F                 { quality = 5; price = 650; };
	class B_FieldPack_ghex_F                { quality = 2; price = 120; };
	class B_ViperHarness_base_F             { quality = 4; price = 500; };
	class B_ViperHarness_blk_F              { quality = 4; price = 500; };
	class B_ViperHarness_ghex_F             { quality = 4; price = 500; };
	class B_ViperHarness_hex_F              { quality = 4; price = 500; };
	class B_ViperHarness_khk_F              { quality = 4; price = 500; };
	class B_ViperHarness_oli_F              { quality = 4; price = 500; };
	class B_ViperLightHarness_base_F        { quality = 3; price = 350; };
	class B_ViperLightHarness_blk_F         { quality = 3; price = 350; };
	class B_ViperLightHarness_ghex_F        { quality = 3; price = 350; };
	class B_ViperLightHarness_hex_F         { quality = 3; price = 350; };
	class B_ViperLightHarness_khk_F         { quality = 3; price = 350; };
	class B_ViperLightHarness_oli_F         { quality = 3; price = 350; };

	class 30Rnd_9x21_Mag_SMG_02						{quality = 1; price = 10; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Red          {quality = 1; price = 15; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow       {quality = 1; price = 15; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Green        {quality = 1; price = 15; };
	class 30Rnd_580x42_Mag_F                        {quality = 2; price = 15; };
	class 30Rnd_580x42_Mag_Tracer_F                 {quality = 2; price = 15; };
	class 100Rnd_580x42_Mag_F                       {quality = 2; price = 15; };
	class 100Rnd_580x42_Mag_Tracer_F                {quality = 2; price = 15; };
	class 20Rnd_650x39_Cased_Mag_F                  {quality = 4; price = 20; };
	class 10Rnd_50BW_Mag_F                          {quality = 5; price = 35; };
	class 150Rnd_556x45_Drum_Mag_F                  {quality = 2; price = 75; };
	class 150Rnd_556x45_Drum_Mag_Tracer_F           {quality = 2; price = 75; };
	class 30Rnd_762x39_Mag_F                        {quality = 3; price = 25; };
	class 30Rnd_762x39_Mag_Green_F                  {quality = 3; price = 25; };
	class 30Rnd_762x39_Mag_Tracer_F                 {quality = 3; price = 25; };
	class 30Rnd_762x39_Mag_Tracer_Green_F           {quality = 3; price = 25; };
	class 30Rnd_545x39_Mag_F                        {quality = 1; price = 10; };
	class 30Rnd_545x39_Mag_Green_F                  {quality = 1; price = 10; };
	class 30Rnd_545x39_Mag_Tracer_F                 {quality = 1; price = 10; };
	class 30Rnd_545x39_Mag_Tracer_Green_F           {quality = 1; price = 10; };
	class 200Rnd_556x45_Box_F                       {quality = 1; price = 90; };
	class 200Rnd_556x45_Box_Red_F                   {quality = 1; price = 90; };
	class 200Rnd_556x45_Box_Tracer_F                {quality = 1; price = 90; };
	class 200Rnd_556x45_Box_Tracer_Red_F            {quality = 1; price = 90; };
	class 10Rnd_9x21_Mag							{quality = 1; price = 10; };


	class V_DeckCrew_yellow_F						{ quality = 2; price = 30; };
	class V_DeckCrew_blue_F							{ quality = 2; price = 30; };
	class V_DeckCrew_green_F						{ quality = 2; price = 30; };
	class V_DeckCrew_red_F							{ quality = 2; price = 30; };
	class V_DeckCrew_white_F						{ quality = 2; price = 30; };
	class V_DeckCrew_brown_F						{ quality = 2; price = 30; };
	class V_DeckCrew_violet_F						{ quality = 2; price = 30; };




































	class Exile_Boat_MotorBoat_Police				{ quality = 1; price = 4500; };
	class Exile_Boat_MotorBoat_Orange				{ quality = 1; price = 4500; };
	class Exile_Boat_MotorBoat_White				{ quality = 1; price = 4500; };




	class Exile_Boat_RubberDuck_CSAT				{ quality = 1; price = 3500; };
	class Exile_Boat_RubberDuck_Digital				{ quality = 1; price = 3500; };
	class Exile_Boat_RubberDuck_Orange				{ quality = 1; price = 3500; };
	class Exile_Boat_RubberDuck_Blue				{ quality = 1; price = 3500; };
	class Exile_Boat_RubberDuck_Black				{ quality = 1; price = 3500; };




	class Exile_Boat_SDV_CSAT						{ quality = 3; price = 20000; };
	class Exile_Boat_SDV_Digital					{ quality = 3; price = 20000; };
	class Exile_Boat_SDV_Grey						{ quality = 3; price = 20000; };




	class Exile_Chopper_Huey_Green 					{ quality = 3; price = 80000; };
	class Exile_Chopper_Huey_Desert					{ quality = 3; price = 80000; };
	class Exile_Chopper_Huey_Armed_Green			{ quality = 5; price = 110000; };
	class Exile_Chopper_Huey_Armed_Desert			{ quality = 5; price = 110000; };




	class Exile_Chopper_Hellcat_Green				{ quality = 3; price = 80000; };
	class Exile_Chopper_Hellcat_FIA					{ quality = 3; price = 80000; };




	class Exile_Chopper_Hummingbird_Green			{ quality = 2; price = 40000; };




	class Exile_Chopper_Hummingbird_Civillian_Blue				{ quality = 1; price = 35000; };
	class Exile_Chopper_Hummingbird_Civillian_Red				{ quality = 1; price = 35000; };
	class Exile_Chopper_Hummingbird_Civillian_ION				{ quality = 1; price = 35000; };
	class Exile_Chopper_Hummingbird_Civillian_BlueLine			{ quality = 1; price = 35000; };
	class Exile_Chopper_Hummingbird_Civillian_Digital			{ quality = 1; price = 35000; };
	class Exile_Chopper_Hummingbird_Civillian_Elliptical		{ quality = 1; price = 35000; };
	class Exile_Chopper_Hummingbird_Civillian_Furious			{ quality = 1; price = 35000; };
	class Exile_Chopper_Hummingbird_Civillian_GrayWatcher		{ quality = 1; price = 35000; };
	class Exile_Chopper_Hummingbird_Civillian_Jeans				{ quality = 1; price = 35000; };
	class Exile_Chopper_Hummingbird_Civillian_Light				{ quality = 1; price = 35000; };
	class Exile_Chopper_Hummingbird_Civillian_Shadow			{ quality = 1; price = 35000; };
	class Exile_Chopper_Hummingbird_Civillian_Sheriff			{ quality = 1; price = 35000; };
	class Exile_Chopper_Hummingbird_Civillian_Speedy			{ quality = 1; price = 35000; };
	class Exile_Chopper_Hummingbird_Civillian_Sunset			{ quality = 1; price = 35000; };
	class Exile_Chopper_Hummingbird_Civillian_Vrana				{ quality = 1; price = 35000; };
	class Exile_Chopper_Hummingbird_Civillian_Wasp				{ quality = 1; price = 35000; };
	class Exile_Chopper_Hummingbird_Civillian_Wave				{ quality = 1; price = 35000; };




	class Exile_Chopper_Huron_Black								{ quality = 4; price = 275000; };
	class Exile_Chopper_Huron_Green								{ quality = 4; price = 275000; };




	class Exile_Chopper_Mohawk_FIA								{ quality = 4; price = 175000; };




	class Exile_Chopper_Orca_CSAT								{ quality = 2; price = 35000; };
	class Exile_Chopper_Orca_Black								{ quality = 2; price = 35000; };
	class Exile_Chopper_Orca_BlackCustom						{ quality = 2; price = 35000; };




	class Exile_Chopper_Taru_Transport_CSAT						{ quality = 2; price = 40000; };
	class Exile_Chopper_Taru_Transport_Black					{ quality = 2; price = 40000; };

	class Exile_Chopper_Taru_CSAT								{ quality = 2; price = 50000; };
	class Exile_Chopper_Taru_Black								{ quality = 2; price = 50000; };

	class Exile_Chopper_Taru_Covered_CSAT						{ quality = 2; price = 55000; };
	class Exile_Chopper_Taru_Covered_Black						{ quality = 2; price = 55000; };




	class Exile_Plane_Cessna									{ quality = 1; price = 25000; };




	class Exile_Plane_AN2_Green									{ quality = 1; price = 35000; };
	class Exile_Plane_AN2_White									{ quality = 1; price = 35000; };
	class Exile_Plane_AN2_Stripe								{ quality = 1; price = 35000; };




	class Exile_Car_Hatchback_Beige						{ quality = 1; price = 18000; };
	class Exile_Car_Hatchback_Green						{ quality = 1; price = 18000; };
	class Exile_Car_Hatchback_Blue						{ quality = 1; price = 18000; };
	class Exile_Car_Hatchback_BlueCustom				{ quality = 1; price = 18000; };
	class Exile_Car_Hatchback_BeigeCustom				{ quality = 1; price = 18000; };
	class Exile_Car_Hatchback_Yellow					{ quality = 1; price = 18000; };
	class Exile_Car_Hatchback_Grey						{ quality = 1; price = 18000; };
	class Exile_Car_Hatchback_Black						{ quality = 1; price = 18000; };
	class Exile_Car_Hatchback_Dark						{ quality = 1; price = 18000; };
	class Exile_Car_Hatchback_Rusty1					{ quality = 1; price = 18000; };
	class Exile_Car_Hatchback_Rusty2					{ quality = 1; price = 18000; };
	class Exile_Car_Hatchback_Rusty3					{ quality = 1; price = 18000; };




	class Exile_Car_Golf_Red							{ quality = 1; price = 15000; };
	class Exile_Car_Golf_Black							{ quality = 1; price = 15000; };




	class Exile_Car_Ikarus_Blue 						{ quality = 1; price = 17000; };
	class Exile_Car_Ikarus_Red 							{ quality = 1; price = 17000; };
	class Exile_Car_Ikarus_Party 						{ quality = 1; price = 17000; };




	class Exile_Car_Ural_Open_Blue						{ quality = 1; price = 35000; };
	class Exile_Car_Ural_Open_Yellow					{ quality = 1; price = 35000; };
	class Exile_Car_Ural_Open_Worker					{ quality = 1; price = 35000; };
	class Exile_Car_Ural_Open_Military					{ quality = 1; price = 35000; };




	class Exile_Car_Ural_Covered_Blue					{ quality = 1; price = 35000; };
	class Exile_Car_Ural_Covered_Yellow					{ quality = 1; price = 35000; };
	class Exile_Car_Ural_Covered_Worker					{ quality = 1; price = 35000; };
	class Exile_Car_Ural_Covered_Military				{ quality = 1; price = 35000; };




	class Exile_Car_V3S_Open							{ quality = 1; price = 35000; };
	class Exile_Car_V3S_Covered							{ quality = 1; price = 35000; };




	class Exile_Car_SUVXL_Black 						{ quality = 1; price = 35000; };
	class Exile_Car_Octavius_White						{ quality = 1; price = 12500; };




















	class Exile_Car_Octavius_Black						{ quality = 1; price = 12500; };




	class Exile_Car_UAZ_Green							{ quality = 1; price = 12500; };




	class Exile_Car_UAZ_Open_Green						{ quality = 1; price = 12500; };




	class Exile_Car_LandRover_Red 						{ quality = 1; price = 11000; };
	class Exile_Car_LandRover_Urban 					{ quality = 1; price = 11000; };
	class Exile_Car_LandRover_Green 					{ quality = 1; price = 11000; };
	class Exile_Car_LandRover_Sand 						{ quality = 1; price = 11000; };
	class Exile_Car_LandRover_Desert 					{ quality = 1; price = 11000; };




	class Exile_Car_LandRover_Ambulance_Green			{ quality = 1; price = 12000; };
	class Exile_Car_LandRover_Ambulance_Desert			{ quality = 1; price = 12000; };
	class Exile_Car_LandRover_Ambulance_Sand			{ quality = 1; price = 12000; };




	class Exile_Car_Lada_Green 							{ quality = 1; price = 10000; };
	class Exile_Car_Lada_Taxi 							{ quality = 1; price = 10000; };
	class Exile_Car_Lada_Red 							{ quality = 1; price = 10000; };
	class Exile_Car_Lada_White 							{ quality = 1; price = 10000; };
	class Exile_Car_Lada_Hipster 						{ quality = 1; price = 10000; };




	class Exile_Car_Volha_Blue							{ quality = 1; price = 10000; };
	class Exile_Car_Volha_White							{ quality = 1; price = 10000; };
	class Exile_Car_Volha_Black							{ quality = 1; price = 10000; };




	class Exile_Car_Hatchback_Sport_Red					{ quality = 1; price = 14000; };
	class Exile_Car_Hatchback_Sport_Blue				{ quality = 1; price = 14000; };
	class Exile_Car_Hatchback_Sport_Orange				{ quality = 1; price = 14000; };
	class Exile_Car_Hatchback_Sport_White				{ quality = 1; price = 14000; };
	class Exile_Car_Hatchback_Sport_Beige				{ quality = 1; price = 14000; };
	class Exile_Car_Hatchback_Sport_Green				{ quality = 1; price = 14000; };




	class Exile_Car_HEMMT 								{ quality = 3; price = 48000; };




	class Exile_Car_Hunter 								{ quality = 3; price = 35000; };




	class Exile_Car_Ifrit 								{ quality = 3; price = 33000; };




	class Exile_Car_Offroad_Red							{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Beige						{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_White						{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Blue						{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_DarkRed						{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_BlueCustom					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla01					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla02					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla03					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla04					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla05					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla06					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla07					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla08					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla09					{ quality = 1; price = 16000; };








	class Exile_Car_Offroad_Guerilla10					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla11					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Guerilla12					{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Rusty1						{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Rusty2						{ quality = 1; price = 16000; };
	class Exile_Car_Offroad_Rusty3						{ quality = 1; price = 16000; };




	class Exile_Car_Offroad_Armed_Guerilla01 			{ quality = 2; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla02 			{ quality = 2; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla03 			{ quality = 2; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla04 			{ quality = 2; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla05 			{ quality = 2; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla06 			{ quality = 2; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla07 			{ quality = 2; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla08 			{ quality = 2; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla09 			{ quality = 2; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla10 			{ quality = 2; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla11 			{ quality = 2; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla12 			{ quality = 2; price = 25000; };




	class Exile_Car_Offroad_Repair_Civillian 			{ quality = 2; price = 12500; };
	class Exile_Car_Offroad_Repair_Red 					{ quality = 2; price = 12500; };
	class Exile_Car_Offroad_Repair_Beige 				{ quality = 2; price = 12500; };
	class Exile_Car_Offroad_Repair_White 				{ quality = 2; price = 12500; };
	class Exile_Car_Offroad_Repair_Blue 				{ quality = 2; price = 12500; };
	class Exile_Car_Offroad_Repair_DarkRed 				{ quality = 2; price = 12500; };
	class Exile_Car_Offroad_Repair_BlueCustom 			{ quality = 2; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla01 			{ quality = 2; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla02 			{ quality = 2; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla03 			{ quality = 2; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla04 			{ quality = 2; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla05 			{ quality = 2; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla06 			{ quality = 2; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla07 			{ quality = 2; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla08 			{ quality = 2; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla09 			{ quality = 2; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla10 			{ quality = 2; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla11 			{ quality = 2; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla12 			{ quality = 2; price = 12500; };




	class Exile_Car_Strider 							{ quality = 3; price = 44000; };




	class Exile_Car_SUV_Red 							{ quality = 1; price = 14000; };
	class Exile_Car_SUV_Black 							{ quality = 1; price = 14000; };
	class Exile_Car_SUV_Grey 							{ quality = 1; price = 14000; };
	class Exile_Car_SUV_Orange 							{ quality = 1; price = 14000; };




	class Exile_Car_SUV_Armed_Black 					{ quality = 5; price = 80000; sellPrice = 40000; };




	class Exile_Car_BRDM2_HQ 							{ quality = 5; price = 55000; };




	class Exile_Car_BTR40_MG_Green 						{ quality = 3; price = 38000; };
	class Exile_Car_BTR40_MG_Camo 						{ quality = 3; price = 38000; };
	class Exile_Car_BTR40_Green 						{ quality = 3; price = 15000; };
	class Exile_Car_BTR40_Camo 							{ quality = 3; price = 15000; };




	class Exile_Car_HMMWV_M134_Green 					{ quality = 5; price = 33000; };
	class Exile_Car_HMMWV_M134_Desert 					{ quality = 5; price = 33000; };
	class Exile_Car_HMMWV_M2_Green 						{ quality = 4; price = 40000; };
	class Exile_Car_HMMWV_M2_Desert 					{ quality = 4; price = 40000; };
	class Exile_Car_HMMWV_MEV_Green 					{ quality = 2; price = 21000; };
	class Exile_Car_HMMWV_MEV_Desert 					{ quality = 2; price = 21000; };
	class Exile_Car_HMMWV_UNA_Green 					{ quality = 2; price = 21000; };
	class Exile_Car_HMMWV_UNA_Desert 					{ quality = 2; price = 21000; };




	class Exile_Car_Tempest 							{ quality = 1; price = 48000; };




	class Exile_Car_Van_Black 							{ quality = 1; price = 12000; };
	class Exile_Car_Van_White 							{ quality = 1; price = 12000; };
	class Exile_Car_Van_Red 							{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla01 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla02 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla03 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla04 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla05 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla06 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla07 						{ quality = 1; price = 12000; };
	class Exile_Car_Van_Guerilla08 						{ quality = 1; price = 12000; };




	class Exile_Car_Van_Box_Black 						{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_White 						{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Red 						{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla01 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla02 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla03 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla04 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla05 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla06 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla07 					{ quality = 1; price = 17000; };
	class Exile_Car_Van_Box_Guerilla08 					{ quality = 1; price = 17000; };




	class Exile_Car_Van_Fuel_Black 						{ quality = 2; price = 75000; };
	class Exile_Car_Van_Fuel_White 						{ quality = 2; price = 75000; };
	class Exile_Car_Van_Fuel_Red 						{ quality = 2; price = 75000; };
	class Exile_Car_Van_Fuel_Guerilla01 				{ quality = 2; price = 75000; };
	class Exile_Car_Van_Fuel_Guerilla02 				{ quality = 2; price = 75000; };
	class Exile_Car_Van_Fuel_Guerilla03 				{ quality = 2; price = 75000; };




	class Exile_Car_Zamak 								{ quality = 1; price = 43000; };









	class Exile_Boat_RHIB								{ quality = 2; price = 10000; };




	class Exile_Plane_Ceasar							{ quality = 1; price = 25000; };




	class Exile_Plane_BlackfishInfantry					{ quality = 5; price = 150000; };
	class Exile_Plane_BlackfishVehicle					{ quality = 5; price = 150000; };




	class Exile_Car_ProwlerLight						{ quality = 1; price = 25000; };
	class Exile_Car_ProwlerUnarmed						{ quality = 1; price = 25000; };




	class Exile_Car_QilinUnarmed						{ quality = 1; price = 25000; };




	class Exile_Car_MB4WD								{ quality = 2; price = 15000; };
	class Exile_Car_MB4WDOpen							{ quality = 2; price = 15000; };




	class Exile_Item_FlagStolen1						{ quality = 1; price = 5000;  sellPrice = 5000;  };
	class Exile_Item_FlagStolen2						{ quality = 1; price = 10000; sellPrice = 10000; };
	class Exile_Item_FlagStolen3						{ quality = 1; price = 15000; sellPrice = 15000; };
	class Exile_Item_FlagStolen4						{ quality = 1; price = 20000; sellPrice = 20000; };
	class Exile_Item_FlagStolen5						{ quality = 1; price = 25000; sellPrice = 25000; };
	class Exile_Item_FlagStolen6						{ quality = 1; price = 30000; sellPrice = 30000; };
	class Exile_Item_FlagStolen7						{ quality = 1; price = 35000; sellPrice = 35000; };
	class Exile_Item_FlagStolen8						{ quality = 1; price = 40000; sellPrice = 40000; };
	class Exile_Item_FlagStolen9						{ quality = 1; price = 45000; sellPrice = 45000; };
	class Exile_Item_FlagStolen10						{ quality = 1; price = 50000; sellPrice = 1500000; };
	class Exile_Item_FortificationUpgrade			{ quality = 1;price = 7500; sellPrice = 50; };
	class Exile_Item_WoodStairsKit					{ quality = 1;price = 50; sellPrice = 5; };
	class Exile_Item_WoodSupportKit					{ quality = 1;price = 50; sellPrice = 5; };
	class Exile_Item_WoodGateKit					{ quality = 1;price = 500; sellPrice = 5; };
	class Exile_Item_WoodFloorKit					{ quality = 1;price = 500; sellPrice = 5; };
	class Exile_Item_WoodFloorPortKit				{ quality = 1;price = 500; sellPrice = 5; };
	class Exile_Item_WorkBenchKit					{ quality = 1;price = 50; sellPrice = 5; };
	class Exile_Item_WoodWallHalfKit				{ quality = 1;price = 250; sellPrice = 5; };
	class Exile_Item_WoodWindowKit					{ quality = 1;price = 500; sellPrice = 5; };
	class Exile_Item_WoodWallKit					{ quality = 1;price = 500; sellPrice = 5; };
	class Exile_Item_WoodLog						{ quality = 1;price = 5; sellPrice = 1; };
	class Exile_Item_Flag							{ quality = 1;price = 5000; sellPrice = 1000; };
	class Exile_Item_WoodDoorwayKit					{ quality = 1;price = 500; sellPrice = 5; };
	class Exile_Item_WoodDoorKit					{ quality = 1;price = 750; sellPrice = 5; };
	class Exile_Item_WoodPlank						{ quality = 1;price = 10; sellPrice = 1; };
	class Exile_Item_Storagecratekit				{ quality = 1;price = 50; sellPrice = 1; };
	class Exile_Item_WaterCanisterDirtyWater		{ quality = 1;price = 50; sellPrice = 5; };
	class Exile_Item_BushKit_Green					{ quality = 1;price = 250; sellPrice = 5; };
	class Exile_Item_CampFireKit					{ quality = 1;price = 50; sellPrice = 5; };
	class Exile_Magazine_Swing						{ quality = 1;price = 1; sellPrice = 1; };
	class Exile_Item_ConcreteWallKit				{ quality = 1; price = 12500;  sellPrice = 2000;  };
	class Exile_Item_ConcreteWindowKit				{ quality = 1; price = 12000;  sellPrice = 2000;  };
	class Exile_Item_ConcreteDoorKit				{ quality = 1; price = 15000;  sellPrice = 2000;  };
	class Exile_Item_ConcreteDoorwayKit				{ quality = 1; price = 10000;  sellPrice = 2000;  };
	class Exile_Item_ConcreteGateKit				{ quality = 1; price = 25000;  sellPrice = 2000;  };
	class Exile_Item_ConcreteFloorKit				{ quality = 1; price = 10000;  sellPrice = 2000;  };
	class Exile_Item_ConcreteFloorPortKit			{ quality = 1; price = 12500;  sellPrice = 2000;  };
	class Exile_Item_ConcreteStairsKit				{ quality = 1; price = 5000;  sellPrice = 2000;  };
	class Exile_Item_HBarrier5Kit					{ quality = 1; price = 5000;  sellPrice = 500;  };
	class Exile_Item_SandBagsKit_Long				{ quality = 1; price = 5000;  sellPrice = 500;  };
	class Exile_Item_SandBagsKit_Corner				{ quality = 1; price = 2500;  sellPrice = 500;  };
	class Exile_Item_Shovel							{ quality = 1; price = 700; };
	class GNT_C185T	            						{ quality = 1; price = 75000; };
	class B_Truck_01_Repair_F	       		            { quality = 2; price = 40000; };
	class B_Truck_01_ammo_F	           				 	{ quality = 5; price = 500000; };
	class B_Truck_01_fuel_F	       					    { quality = 2; price = 125000; };
	class O_Truck_03_repair_F	       				    { quality = 2; price = 40000; };
	class O_Truck_03_fuel_F	          				    { quality = 2; price = 125000; };
	class I_Truck_02_medical_F 							{ quality = 2; price = 30000; };
	class B_MRAP_01_hmg_F 								{ quality = 3; price = 75000; };
	class O_MRAP_02_hmg_F 								{ quality = 3; price = 60000; };
	class I_MRAP_03_hmg_F 								{ quality = 3; price = 85000; };
	class O_APC_Wheeled_02_rcws_F						{ quality = 5; price = 225000; };
	class I_Plane_Fighter_03_CAS_F						{ quality = 6; price = 1000000; };
	class B_Plane_CAS_01_F								{ quality = 6; price = 2000000; };
	class B_Plane_CAS_01_Cluster_F						{ quality = 6; price = 2000000; };
	class O_Plane_CAS_02_F								{ quality = 6; price = 2000000; };
	class B_Heli_Transport_01_F							{ quality = 4; price = 175000; };
	class B_Heli_Transport_01_camo_F					{ quality = 4; price = 175000; };
	class B_Heli_Light_01_armed_F						{ quality = 4; price = 175000; };
	class O_Heli_Light_02_F								{ quality = 3; price = 175000; };
	class O_Heli_Light_02_v2_F							{ quality = 3; price = 175000; };
	class B_Heli_Transport_03_F							{ quality = 3; price = 325000; };
	class B_Heli_Transport_03_black_F					{ quality = 3; price = 325000; };
	class I_Heli_light_03_F								{ quality = 3; price = 125000; };
	class I_Boat_Armed_01_minigun_F						{ quality = 3; price = 30000; };
	class O_Boat_Armed_01_hmg_F							{ quality = 3; price = 30000; };
	class B_T_VTOL_01_armed_F							{ quality = 6; price = 1500000; };
	class B_LSV_01_armed_F								{ quality = 3; price = 55000; };
	class B_T_LSV_01_armed_F							{ quality = 3; price = 55000; };
	class O_T_LSV_02_unarmed_F							{ quality = 3; price = 35000; };
	class O_LSV_02_armed_F								{ quality = 3; price = 40000; };
	class O_T_LSV_02_armed_F							{ quality = 3; price = 40000; };
	class O_LSV_02_unarmed_F							{ quality = 1; price = 35000; };
	class B_LSV_01_unarmed_F							{ quality = 1; price = 35000; };
	class B_T_LSV_01_unarmed_F							{ quality = 1; price = 35000; };
	class C_Offroad_02_unarmed_F						{ quality = 1; price = 25000; };
	class I_C_Van_01_transport_F						{ quality = 1; price = 35000; };
	class B_CTRG_Heli_Transport_01_tropic_F		{ quality = 5; price = 75000; };
	class B_CTRG_Heli_Transport_01_sand_F		{ quality = 5; price = 75000; };
	class O_T_Truck_03_fuel_ghex_F	       	    { quality = 3; price = 125000; };
	class O_T_Truck_03_repair_ghex_F	        { quality = 3; price = 40000; };
	class O_T_Truck_03_covered_ghex_F			{ quality = 2; price = 35000; };
	class O_T_Truck_03_transport_ghex_F			{ quality = 2; price = 35000; };
	class O_T_APC_Wheeled_02_rcws_ghex_F		{ quality = 6; price = 225000; };
	class O_T_MRAP_02_ghex_F 					{ quality = 3; price = 25000; };
	class O_T_MRAP_02_hmg_ghex_F 				{ quality = 4; price = 65000; };
	class C_Truck_02_transport_F				{ quality = 3; price = 35000; };
	class O_Truck_02_box_F						{ quality = 3; price = 35000; };
	class O_Truck_02_medical_F 					{ quality = 3; price = 30000; };
	class O_Truck_02_Ammo_F	           		 	{ quality = 5; price = 500000; };
	class O_Truck_02_fuel_F	       			    { quality = 3; price = 125000; };
	class I_Truck_02_ammo_F	           		 	{ quality = 5; price = 500000; };
	class I_Truck_02_box_F						{ quality = 3; price = 35000; };
	class I_Truck_02_fuel_F	       			    { quality = 3; price = 125000; };
	class C_Truck_02_fuel_F	       			    { quality = 3; price = 125000; };
	class C_Truck_02_box_F						{ quality = 3; price = 35000; };
	class B_APC_Tracked_01_rcws_F						{ quality = 5; price = 250000; };
	class B_APC_Tracked_01_CRV_F						{ quality = 5; price = 600000; };
	class B_MRAP_01_gmg_F								{ quality = 5; price = 195000; };
	class O_MRAP_02_gmg_F								{ quality = 5; price = 185000; };
	class I_MRAP_03_gmg_F								{ quality = 5; price = 205000; };
	class O_Heli_Attack_02_F							{ quality = 6; price = 1200000; };
	class I_APC_tracked_03_cannon_F						{ quality = 6; price = 800000; };
	class B_APC_Wheeled_01_cannon_F						{ quality = 6; price = 700000; };
	class B_MBT_01_cannon_F								{ quality = 6; price = 1500000;  sellPrice = 750000;  };
	class I_APC_Wheeled_03_cannon_F						{ quality = 6; price = 800000; };
	class O_APC_Tracked_02_cannon_F						{ quality = 6; price = 800000; };
	class O_Heli_Attack_02_black_F						{ quality = 6; price = 1200000; };
	class O_MBT_02_cannon_F	                			{ quality = 6; price = 2000000;  sellPrice = 1000000;  };
	class I_MBT_03_cannon_F	                			{ quality = 6; price = 2000000;  sellPrice = 1000000;  };
	class B_MBT_01_TUSK_F	                			{ quality = 6; price = 2000000;  sellPrice = 1000000;  };
	class B_MBT_01_arty_F	                			{ quality = 6; price = 30000000;  sellPrice = 1000000;  };
	class B_MBT_01_Mlrs_F	                			{ quality = 6; price = 30000000;  sellPrice = 1000000;  };
	class O_Heli_Transport_04_ammo_F					{ quality = 5; price = 500000; };
	class O_Heli_Transport_04_ammo_black_F				{ quality = 5; price = 500000; };
	class B_Plane_Fighter_01_F						{ quality = 6; price = 2000000; };
	class B_Plane_Fighter_01_Stealth_F				{ quality = 6; price = 1500000; };
	class O_Plane_Fighter_02_F						{ quality = 6; price = 2000000; };
	class O_Plane_Fighter_02_Stealth_F				{ quality = 6; price = 1500000; };
	class I_Plane_Fighter_04_F						{ quality = 6; price = 1000000; };
	class I_UGV_01_F										{ quality = 4; price = 25000; };
	class I_UGV_01_rcws_F									{ quality = 4; price = 175000; };
	class I_UAV_02_CAS_F							{ quality = 4; price = 350000; };
	class I_UAV_02_F								{ quality = 4; price = 350000; };
	
    // UAVs (From Spec Ops Trader)
	class B_UAV_01_backpack_F								{ quality = 1; price = 3500; };
	class O_Mortar_01_support_F								{ quality = 6; price = 1000000; };
	class O_Mortar_01_weapon_F								{ quality = 6; price = 1000000; };
	class O_Static_Designator_02_weapon_F					{ quality = 6; price = 50000; };
     // Drones (From Aircraft Vendor)
 	class B_UAV_02_F                      		  			{ quality = 4; price = 350000; };
 	class B_UAV_02_CAS_F              	  		  			{ quality = 4; price = 350000; };
	class B_T_UAV_03_F                    		  			{ quality = 4; price = 750000; };
	class B_UAV_05_F                      		  			{ quality = 4; price = 350000; };
	class O_T_UAV_04_CAS_F									{ quality = 4; price = 300000; };
	class B_UAV_backpack_F									{ quality = 2; price = 75000; };
     // UGVs (From Vehicle Vendor)
 	class B_UGV_01_F                      					  { quality = 4; price = 25000; };
 	class B_UGV_01_rcws_F                 					  { quality = 4; price = 175000; };
	class B_Heli_Attack_01_F 								{ quality = 6; price = 800000; };
	class B_Heli_Attack_01_dynamicLoadout_F 				{ quality = 6; price = 950000; };
	class O_APC_Tracked_02_AA_F 							{ quality = 6; price = 950000; };
	class B_APC_Tracked_01_AA_F 							{ quality = 6; price = 950000; };
	class O_T_VTOL_02_infantry_grey_F						{ quality = 6; price = 1200000; };   
	class O_T_VTOL_02_vehicle_grey_F						{ quality = 6; price = 1200000; };    
	class O_T_VTOL_02_infantry_ghex_F						{ quality = 6; price = 1200000; };
	class O_T_VTOL_02_vehicle_ghex_F						{ quality = 6; price = 1200000; };
	class O_T_VTOL_02_infantry_hex_F						{ quality = 6; price = 1200000; };
	class O_T_VTOL_02_vehicle_hex_F							{ quality = 6; price = 1200000; };
	class O_T_VTOL_02_infantry_F							{ quality = 6; price = 1200000; };
	class FIR_F16D_Polish_CFT								{ quality = 6; price = 1600000; };
	class FIR_F16C_ENEMY_TYPE_A								{ quality = 6; price = 1600000; };
	class FIR_F16C_Ag_arctic									{ quality = 6; price = 1600000; };
	class FIR_F16C_Ag_lizard								{ quality = 6; price = 1600000; };
	class FIR_A10C_OS										{ quality = 6; price = 2200000; };
	class FIR_A10A_Camo1									{ quality = 8; price = 2200000; };
	class HAFM_MisBoat										{ quality = 5; price = 1600000; };
	class HAFM_PBoat										{ quality = 4; price = 1000000; };
	class HAFM_CB90											{ quality = 3; price = 250000; };
	class HAFM_GunBoat										{ quality = 4; price = 850000; };
	class HAFM_Frigate										{ quality = 6; price = 2000000; };
	class HAFM_Corvette										{ quality = 6; price = 1900000; };
	class HAFM_MisBoat_BLU									{ quality = 5; price = 1600000; };
	class HAFM_PBoat_BLU									{ quality = 4; price = 1000000; };
	class HAFM_CB90_BLU										{ quality = 3; price = 250000; };
	class HAFM_GunBoat_BLU									{ quality = 4; price = 850000; };
	class HAFM_Frigate_OPF									{ quality = 6; price = 2000000; };
	class HAFM_Corvette_OPF									{ quality = 6; price = 1900000; };
	class HAFM_PBoat_OPF									{ quality = 4; price = 1000000; };
	class rhs_mig29sm_vvs									{ quality = 5; price = 2200000; };
	
};



class CfgExileCustomCode 
{
ExileClient_util_array_shuffle = "fixes\ExileClient_util_array_shuffle.sqf";
ExileServer_object_player_database_load = "Overrides\ExileServer_object_player_database_load.sqf";
ExileServer_object_player_createBambi = "Overrides\ExileServer_object_player_createBambi.sqf";
ExileClient_util_playerEquipment_add = "Overrides\ExileClient_util_playerEquipment_add.sqf";
ExileClient_gui_escape_suicide = "Overrides\ExileClient_gui_escape_suicide.sqf";
ExileServer_system_trading_network_purchaseVehicleRequest = "Helipad\ExileServer_system_trading_network_purchaseVehicleRequest.sqf";
ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick = "XG_Spawn_Override\ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick.sqf";
ExileClient_gui_selectSpawnLocation_show = "XG_Spawn_Override\ExileClient_gui_selectSpawnLocation_show.sqf";
ExileClient_gui_traderDialog_updateInventoryDropdown = "Overrides\ExileClient_gui_traderDialog_updateInventoryDropdown.sqf";
ExileClient_object_player_event_onEnterSafezone = "Anti-theft\ExileClient_object_player_event_onEnterSafezone.sqf";
ExileClient_object_player_event_onLeaveSafezone = "Anti-theft\ExileClient_object_player_event_onLeaveSafezone.sqf";
ExileClient_gui_wasteDumpDialog_show = "Anti-theft\ExileClient_gui_wasteDumpDialog_show.sqf";
ExileClient_object_player_event_onInventoryOpened = "Anti-theft\ExileClient_object_player_event_onInventoryOpened.sqf";
ExileClient_object_player_death_startBleedingOut = "EnigmaRevive\ExileClient_object_player_death_startBleedingOut.sqf";
ExileClient_util_world_getNearestLocationName = "Overrides\ExileClient_util_world_getNearestLocationName.sqf";
ExileClient_object_player_event_onKilled = "fixes\ExileClient_object_player_event_onKilled.sqf";
ExileClient_system_process_postInit = "fixes\ExileClient_system_process_postInit.sqf";
ExileClient_object_item_craft = "fixes\ExileClient_object_item_craft.sqf";
ExileClient_object_player_safezone_checkSafezone = "fixes\ExileClient_object_player_safezone_checkSafezone.sqf";
ExileClient_action_gutAnimal_condition = "fixes\ExileClient_action_gutAnimal_condition.sqf";
ExileServer_object_player_event_onMpKilled = "fixes\ExileServer_object_player_event_onMpKilled.sqf";
ExileServer_util_getFragKiller = "fixes\ExileServer_util_getFragKiller.sqf";
ExileServer_util_getFragType = "fixes\ExileServer_util_getFragType.sqf";
ExileClient_action_repairVehicle_condition = "Overrides\ExileClient_action_repairVehicle_condition.sqf";
ExileServer_system_database_connect = "Overrides\ExileServer_system_database_connect.sqf";
//ExAd XM8
ExileServer_system_territory_database_load = "ExAdClient\VirtualGarage\CustomCode\ExileServer_system_territory_database_load.sqf";
ExileClient_gui_virtualGarageDialog_show = "Overrides\ExileClient_gui_virtualGarageDialog_show.sqf";
ExileClient_gui_xm8_slide = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_slide.sqf";
ExileClient_gui_xm8_show = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_show.sqf";
ExileClient_gui_hud_event_onKeyUp = "Overrides\ExileClient_gui_hud_event_onKeyUp.sqf";















};
class CfgExileEnvironment
{
	class Altis 
	{
		class FireFlies
		{

			enable = 1;


			startHour = 18;


			endHour = 4;
		};

		class Anomalies
		{

			enable = 0;


			startHour = 19;


			endHour = 6;
		};

		class Breathing
		{
			// 1 = enabled, 0 = disabled
			enable = 0;
		};

		class Snow
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// https://community.bistudio.com/wiki/surfaceType
			surfaces[] = {};
		};

		class Radiation 
		{
			// 1 = enabled, 0 = disabled
			enable = 0;
		};

		class Temperature
		{
			// Temperature in �C for the time of day, per hour
			// Add the first index to the last index, so it is 25 indizes!
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		
			// Temperature change in �C when it is 100% overcast
			overcast = -2;

			// Temperature change in �C when it is 100% raining
			rain = -5;

			// Temperature change in �C when it is 100% windy
			wind = -1;

			// Temperature change per 100m altitude in �C
			altitude = -0.5;

			// Difference from the daytime temperature to the water temperature
			water = -5;
		};
	};

	class Namalsk: Altis 
	{
		class FireFlies: FireFlies
		{
			enable = 1;
		};

		class Anomalies: Anomalies
		{
			enable = 1;
		};

		class Breathing: Breathing
		{
			enable = 0;
		};

		class Snow: Snow
		{
			enable = 1;
			surfaces[] = {"#nam_snow"};
		};

		class Radiation: Radiation
		{
			enable = 0;
			contaminatedZones[] = 
			{
				{{3960.14,	8454.75,	152.862}, 	80, 	140},	// Object A1
				{{4974.70,	6632.82,	4.74293}, 	40, 	150},	// Object A2
				{{6487.92,	9302.03,	36.0014}, 	60, 	110}	// Sebjan Chemical Factory
			};
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {-2.00,-1.77,-1.12,-0.10,1.24,2.78,4.40,6.00,7.46,8.65,9.50,9.90,9.90,9.50,8.65,7.46,6.00,4.40,2.78,1.24,-0.10,-1.12,-1.77,-2.00,-2.00};
		};
	};

	class Tanoa: Altis
	{
		class FireFlies: FireFlies
		{
			enable = 0;
		};

		class Anomalies: Anomalies
		{
			enable = 0;
		};

		class Breathing: Breathing
		{
			enable = 0;
		};

		class Snow: Snow
		{
			enable = 0;
		};

		class Radiation: Radiation
		{
			enable = 0;
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		};
	};

	class Malden: Altis
	{
		class FireFlies: FireFlies
		{
			enable = 1;
		};

		class Anomalies: Anomalies
		{
			enable = 0;
		};

		class Breathing: Breathing
		{
			enable = 0;
		};

		class Snow: Snow
		{
			enable = 0;
		};

		class Radiation: Radiation
		{
			enable = 0;
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		};
	};
	
};
class CfgExileHUD
{
	class ShortItemNames
	{
		SmokeShell[] 						= {"WHITE", 	"SMOKE"};
		1Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};
		3Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};

		SmokeShellBlue[] 					= {"BLUE", 		"SMOKE"};
		1Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};
		3Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};

		SmokeShellGreen[] 					= {"GREEN", 	"SMOKE"};
		1Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};
		3Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};

		SmokeShellOrange[] 					= {"ORANGE", 	"SMOKE"};
		1Rnd_SmokeOrange_Grenade_shell[]	= {"ORANGE", 	"SMOKE"};
		3Rnd_SmokeOrange_Grenade_shell[] 	= {"ORANGE", 	"SMOKE"};

		SmokeShellPurple[] 					= {"PURPLE", 	"SMOKE"};
		1Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};
		3Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};

		SmokeShellRed[] 					= {"RED", 		"SMOKE"};
		1Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
		3Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};

		SmokeShellYellow[] 					= {"YELLOW", 	"SMOKE"};
		1Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
		3Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};

		UGL_FlareCIR_F[] 					= {"IR", 		"FLARE"};
		3Rnd_UGL_FlareCIR_F[] 				= {"IR", 		"FLARE"};

		UGL_FlareGreen_F[] 					= {"GREEN", 	"FLARE"};
		3Rnd_UGL_FlareGreen_F[] 			= {"GREEN", 	"FLARE"};

		UGL_FlareRed_F[] 					= {"RED", 		"FLARE"};
		3Rnd_UGL_FlareRed_F[] 				= {"RED", 		"FLARE"};

		UGL_FlareWhite_F[] 					= {"WHITE", 	"FLARE"};
		3Rnd_UGL_FlareWhite_F[] 			= {"WHITE", 	"FLARE"};

		UGL_FlareYellow_F[] 				= {"YELLOW", 	"FLARE"};
		3Rnd_UGL_FlareYellow_F[] 			= {"YELLOW", 	"FLARE"};

		Chemlight_blue[] 					= {"BLUE", 		"LIGHT"};
		Chemlight_green[] 					= {"GREEN", 	"LIGHT"};
		Chemlight_red[] 					= {"RED", 		"LIGHT"};
		Chemlight_yellow[] 					= {"YELLOW", 	"LIGHT"};

		1Rnd_HE_Grenade_shell[] 			= {"40MM"};
		3Rnd_HE_Grenade_shell[] 			= {"40MM"};

		O_IR_Grenade[] 						= {"IR"};
		I_IR_Grenade[] 						= {"IR"};
		B_IR_Grenade[] 						= {"IR"};

		HandGrenade[] 						= {"RGO"};
		MiniGrenade[] 						= {"RGN"};
		CUP_HandGrenade_L109A1_HE[] 		= {"HHE"};
		CUP_HandGrenade_RGD5[] 				= {"RGD5"};
		CUP_HandGrenade_M67[] 				= {"M67"};
		CUP_6Rnd_HE_M203[] 					= {"M203"};
		CUP_1Rnd_HE_M203[] 					= {"M203"};
		CUP_6Rnd_HE_GP25_M[] 				= {"GP25"};

		Exile_Item_ZipTie[]					= {"ZIP", "TIE"};
	};
};
class CfgExileLootSettings
{





	lifeTime = 10;





	spawnInterval = 30;













	maximumPositionCoverage = 50;









	maximumNumberOfLootSpotsPerBuilding = 6;






	maximumNumberOfItemsPerLootSpot = 4;










	spawnRadius = 50;






	minimumDistanceToTraderZones = 250;







	minimumDistanceToTerritories = 150;
};
class CfgExileMobileXM8
{




	code = "";
};
class CfgExileMusic
{
	Ambient[] = {"ExileTrack03","ExileTrack04"};
	Combat[] = {"ExileTrack06","ExileTrack07"};
	Intro[] = {"ExileTrack02","ExileTrack03"};
};
class CfgExileParty 
{
	showESP = 1;
	allow3DMarkers = 1;
};
class CfgExileRussianRoulette
{




	buyInAmount = 100;
};
class CfgFlags 
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uids[] = {};
	};
};

class CfgGrinding
{
	// Enables code lock grinding on the server
	enableGrinding = 1;
	
	// Time it takes to grind a fresh lock in minutes
	grindDuration = 15;
	
	// Percentage chance the grinding will fail
	failChance = 30;
	
	// Percentage chance that failing will break your grinder (otherwise it will just remove a battery)
	breakChance = 20;
	
	// Notify the entire server if someone is hacking. 1 == notify, 0 == don't notify
	notifyServer = 1;
	
	// The cooldown time, in minutes, before another server side notification is sent out from a territory. This is on a per territory basis. 
	notificationCooldown = 15;
};
class CfgHacking 
{
	// Enables safe hacking on the server
	enableHacking = 1;
	
	// Time it takes to hack in minutes
	hackDuration = 20;
	
	// Percentage chance the hacking will fail
	failChance = 50;
	
	// Percentage chance the laptop will be removed on fail
	removeChance = 5;
	
	// Max attepts to hack a safe during one restart
	maxHackAttempts = 3;
	
	// Notify the entire server if someone is hacking. 1 == notify, 0 == don't notify
	notifyServer = 1;
	
	// The cooldown time, in minutes, before another server side notification is sent out from a territory. This is on a per territory basis. 
	notificationCooldown = 30;
	
	// The minimal amount of players on the server required in order to hack a safe (set to 0 to disable)
	minPlayers = 10;
	
	// How many safe hacks are allowed to be going at one time
	maxHacks = 2;
	
	// Show a map icon where the hacking is taking place
	showMapIcon = 1;
};

class ExileAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};




class CfgInteractionMenus
{
	#include "EBM\menus.hpp"
	

	class Car 
	{
		targetType = 2;
		target = "Car";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};


			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};


			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};


			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};
            class Salvage: ExileAbstractAction
            {
                title = "Salvage Vehicle";
                condition = "(!(alive (ExileClientInteractionObject)))";
                action = "_this call SV_fnc_SalvageVehicle";
            };



			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};



			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};


			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};


			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
			class ClaimVehicle: ExileAbstractAction
			{
				title = "Claim Ownership";
				condition = "true";
				action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
			};
			class PackDeployedVehicle: ExileAbstractAction
			{
				title = "Pack Vehicle";
				condition = "call ExAd_XM8_DV_fnc_canPack";
				action = "call ExAd_XM8_DV_fnc_pack";
			};			


		};
	};

	class Air
	{
		target = "Air";
		targetType = 2;

		class Actions
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && ((locked ExileClientInteractionObject) != 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};


			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};


			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};


			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};


			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};
            class Salvage: ExileAbstractAction
            {
                title = "Salvage Vehicle";
                condition = "(!(alive (ExileClientInteractionObject)))";
                action = "_this call SV_fnc_SalvageVehicle";
            };
			
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};


			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};


			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			class RotateLeft: ExileAbstractAction
			{
				title = "Rotate Left";	
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,-15] call ExileClient_object_vehicle_rotate";
			};

			class RotateRight: ExileAbstractAction
			{
				title = "Rotate Right";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,15] call ExileClient_object_vehicle_rotate";
			};
			class ClaimVehicle: ExileAbstractAction
			{
				title = "Claim Ownership";
				condition = "true";
				action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
			};

		};
	};

	class Safe
	{
		targetType = 2;
		target = "Exile_Container_Safe";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};


			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Pack : ExileAbstractAction
			{
				title = "Pack";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_container_pack";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};

			class HackLock: ExileAbstractAction
			{
				title = "Hack Safe";
				condition = "call ExAd_fnc_canHackSafe";
				action = "_this spawn ExAd_fnc_startHack";
			};
		};
	};

	class Laptop
	{
		targetType = 2;
		target = "Exile_Construction_Laptop_Static";

		class Actions
		{
			class CameraSystem: ExileAbstractAction
			{
				title = "CCTV Access";
				condition = "((ExileClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
				action = "_this call ExileClient_gui_baseCamera_show";
			};
			class StopHack: ExileAbstractAction
			{
				title = "Interupt Hack";
				condition = "(ExileClientInteractionObject getVariable ['ExAd_HACKING_IN_PROGRESS', false])";
				action = "_this spawn ExAd_fnc_stopHack";
			};

		};
	};

	class SupplyBox
	{
		targetType = 2;
		target = "Exile_Container_SupplyBox";

		class Actions
		{
			class Mount: ExileAbstractAction
			{
				title = "Mount";
				condition = "(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_mount";
			};
			class Unmount: ExileAbstractAction
			{
				title = "Unmount";
				condition = "!(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_unmount";
			};
		};
	};

	class Drawbridge
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_DrawBridge";

		class Actions
		{
			class Lower: ExileAbstractAction
			{
				title = "Lower";
				condition = "ExileClientInteractionObject call ExileClient_object_construction_openBridgeShow";
				action = "ExileClientInteractionObject animateSource ['DrawBridge_Source', 0];";
			};
			
			class Raise: ExileAbstractAction
			{
				title = "Raise";
				condition = "((ExileClientInteractionObject animationSourcePhase 'DrawBridge_Source') < 0.5)";
				action = "ExileClientInteractionObject animateSource ['DrawBridge_Source', 2]";
			};
		};
	};

	class Construction
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_Static";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};


			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_move";
			};


			class Deconstruct: ExileAbstractAction
			{
				title = "Remove";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_deconstruct";
			};

			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};
			
			class RestoreLock : ExileAbstractAction
			{
				title = "Restore Lock";
				condition = "_object call ExAd_fnc_canRestoreLock";
				action = "_this spawn ExAd_fnc_restoreLock";
			};
			class Upgrade : ExileAbstractAction
			{
				title = "Upgrade";
				condition = "call ExileClient_object_construction_upgradeShow";
				action = "_this call ExileClient_object_construction_upgrade";
			};

			class MakeBoom : ExileAbstractAction
			{
				title = "Plant charge";
				condition = "call ExileClient_system_breaching_condition";
				action = "_this call ExileClient_system_breaching_action";
			};

			class Repair : ExileAbstractAction
			{
				title = "Repair";
				condition = "(!((ExileClientInteractionObject getVariable ['ExileConstructionDamage',0]) isEqualTo 0)) && (call ExileClient_util_world_isInOwnTerritory)";
				action = "_this call ExileClient_object_construction_repair";
			};

			class GrindLock : ExileAbstractAction
			{
				title = "Grind Lock";
				condition = "call ExAd_fnc_canGrindLock";
				action = "_this spawn ExAd_fnc_grindLock";
			};
		};
	};




	class Container
	{
		targetType = 2;
		target = "Exile_Container_Abstract";

		class Actions 
		{
			class Pack 
			{
				title = "Pack";
				condition = "!((typeOf ExileClientInteractionObject) isEqualTo 'Exile_Container_SupplyBox')";
				action = "_this spawn ExileClient_object_container_pack";
			};

			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "(getNumber(configFile >> 'CfgVehicles' >> typeOf ExileClientInteractionObject >> 'exileIsLockable') isEqualTo 0) || ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_construction_move";
			};
		};
	};

	class Flag
	{
		targetType = 2;
		target = "Exile_Construction_Flag_Static";

		class Actions
		{

			class HackVG : ExileAbstractAction
			{
				title = "Hack Virtual Garage";
				condition = "call ExAd_fnc_canHackVG";
				action = "_this spawn ExAd_fnc_startHack";
			};

			class StealFlag: ExileAbstractAction
			{
				title = "Steal Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',1]) isEqualTo 0)";
				action = "['StealFlag', _this select 0] call ExileClient_action_execute";
			};

			class RestoreFlag: ExileAbstractAction
			{
				title = "Restore Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',0]) isEqualTo 1)";
				action = "['restoreFlagRequest', [netID ExileClientInteractionObject]] call ExileClient_system_network_send";
			};
		};
	};
	class Tank
	{
		target = "Tank";
		targetType = 2;
		class Actions
		{
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};
            class Salvage: ExileAbstractAction
            {
                title = "Salvage Vehicle";
                condition = "(!(alive (ExileClientInteractionObject)))";
                action = "_this call SV_fnc_SalvageVehicle";
            };
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_lock_scan";
			};
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};
			class ClaimVehicle: ExileAbstractAction
			{
				title = "Claim Ownership";
				condition = "true";
				action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
			};
		};
	};


	class Boat 
	{
		targetType = 2;
		target = "Ship";

		class Actions
		{

			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};


			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};


			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};


			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};
            class Salvage: ExileAbstractAction
            {
                title = "Salvage Vehicle";
                condition = "(!(alive (ExileClientInteractionObject)))";
                action = "_this call SV_fnc_SalvageVehicle";
            };



			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};


			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_lock_scan";
			};



			class Push: ExileAbstractAction
			{
				title = "Push Boat";


				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
			};
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};
			class ClaimVehicle: ExileAbstractAction
			{
				title = "Claim Ownership";
				condition = "true";
				action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
			};
			class PackDeployedVehicle: ExileAbstractAction
			{
				title = "Pack Jetski";
				condition = "call ExAd_XM8_DV_fnc_canPack";
				action = "call ExAd_XM8_DV_fnc_pack";
			};

		};
	};

	class Bikes
	{
		targetType = 2;
		target = "Bicycle";

		class Actions
		{
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "true";
				action = "_this call ExileClient_object_vehicle_flip";
			};
			class PackDeployedVehicle: ExileAbstractAction
			{
				title = "Pack Bike";
				condition = "call ExAd_XM8_DV_fnc_canPack";
				action = "call ExAd_XM8_DV_fnc_pack";
			};

		};
	};

	class Player 
	{
		targetType = 2;
		target = "Exile_Unit_Player";

		class Actions 
		{
			class Free: ExileAbstractAction
			{
				title = "Free";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_free";
			};

			class Search: ExileAbstractAction
			{
				title = "Search Gear";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_searchGear";
			};

			class Identify: ExileAbstractAction
			{
				title = "Identify Body";
				condition = "!(alive ExileClientInteractionObject)";
				action = "_this call ExileClient_object_player_identifyBody";
			};

			class HideCorpse: ExileAbstractAction
			{
				title = "Hide Body";
				condition = "!(alive ExileClientInteractionObject) && ('Exile_Melee_Shovel' isEqualTo (currentWeapon player))";
				action = "['HideBody', (_this select 0)] call ExileClient_action_execute";
			};
			class Revive: ExileAbstractAction
			{
				title = "Perform CPR";
				condition = "(!(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['EnigmaRevivePermitted', true]) && (magazines player find 'Exile_Item_Defibrillator' >= 0))";
				action = "_this spawn Enigma_RevivePlyr";
			};

		};
	};

	class Animal
	{
		targetType = 2;
		target = "Exile_Animal_Abstract";

		class Actions 
		{			
			class Gut: ExileAbstractAction
			{
				title = "Gut Animal";
				condition = "!(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['CanBeGutted', false])";
				action = "['GutAnimal', ExileClientInteractionObject] call ExileClient_action_execute";
			};
		};
	};	
};





class CfgInteractionModels
{
	class WaterSource
	{
		name = "Water tanks, barrels, coolers or pumps";
		models[] = 	
		{
			"barrelwater_f", 
			"barrelwater_grey_f",
			"waterbarrel_f",
			"watertank_f",
			"stallwater_f",
			"waterpump_01_f",
			"water_source_f",


			"wellpump",
			"Land_jhad_stand_water",
			"Land_Jbad_Misc_Well_L",
			"Land_jbad_Fridge",
			"Land_jbad_reservoir",
			"Land_jbad_teapot",
			"Land_KBud",


			"watertank_01_f",
			"watertank_02_f",
			"watertank_03_f",
			"watertank_04_f",
			"Land_Sink_F"
		};
	};

	class CleanWaterSource
	{
		name = "Water cooler";
		models[] = 	
		{
			"watercooler",
			"barrelwater_f", 
			"barrelwater_grey_f",
			"waterbarrel_f",
			"watertank_f",
			"Land_Sink_F",
			"stallwater_f",
			"waterpump_01_f",
			"water_source_f",
			"Land_Water_source_F",
			"Land_WaterCooler_01_new_F"
		};
	};

	class WorkBench
	{
		name = "Work Bench";
		models[] = 
		{
			"workstand_f.p3d"
		};
	};

	class ShippingContainerSource
	{
		name = "Shipping Containers";
		models[] = 
		{

			"CargoBox_V1_F",
			"Cargo20_blue_F",
			"Cargo20_brick_red_F",
			"Cargo20_cyan_F",
			"Cargo20_grey_F",
			"Cargo20_light_blue_F",
			"Cargo20_light_green_F",
			"Cargo20_military_green_F",
			"Cargo20_military_ruins_F",
			"Cargo20_orange_F",
			"Cargo20_red_F",
			"Cargo20_sand_F",
			"Cargo20_white_F",
			"Cargo20_yellow_F",
			"Cargo40_blue_F",
			"Cargo40_brick_red_F",
			"Cargo40_cyan_F",
			"Cargo40_grey_F",
			"Cargo40_light_blue_F",
			"Cargo40_light_green_F",
			"Cargo40_military_green_F",
			"Cargo40_orange_F",
			"Cargo40_red_F",
			"Cargo40_sand_F",
			"Cargo40_white_F",
			"Cargo40_yellow_F",


			"nam_container.p3d",
			"misc_cargo1d.p3d",
			"misc_cargo1b.p3d",
			"misc_cargo1bo.p3d",
			"misc_cargo2c.p3d",
			"misc_cargo1ao.p3d",
			"containerline_01_f",
			"containerline_02_f",
			"containerline_03_f",


			"Land_ContainerLine_01_F",
			"Land_ContainerLine_02_F",
			"Land_ContainerLine_03_F",


			"wreck_"


























		};
	};

	class WoodSource
	{
		name = "Trees";
		models[] = 
		{
			" t_",
			" bo_t_",


            " str_",
            " Smrk_",
            " les_",
            " brg_"			
		};
	};


	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			"fuelstation_feed_f.p3d",
			"metalbarrel_f.p3d",
			"Tank_rust_F",
			"FuelStation_Feed_F",
			"flexibletank_01_f.p3d",
			"fs_feed_f.p3d",

			"fuelstation_01_pump_f.p3d",
			"fuelstation_02_pump_f.p3d",
			"Land_FuelStation_Feed_F",
			"Land_Tank_rust_F"
		};	
	};
};
class CfgLocker 
{
	numbersOnly = "0123456789";

	maxDeposit = 99999999;
};

class CfgPlayer 
{

	hungerDecay = 180;
	thirstDecay = 120;


	healthDecay = 5.0;


	thirstRegen = 90;
	hungerRegen = 90;


	recoveryPerMinute = 4;





	customAimCoefficient = 0.15;


	enableFatigue = 0;
	enableStamina = 0;

	disableMapDrawing = 1;



	useGradientAffectedAutoRun = 1;
};	








class CfgPoptabStorage
{
	class Exile_Container_Safe_Small { max = 25000; };	
};
class CfgSimulation
{
	/*
		Use Arma built in Dynamic Simulation. 
		If you have any issues with players unable to get into cars, control vehicles, fly planes, etc. try turning this off
		Options:
			0: Use Exile's built in simulation system (Same system in 1.0.3 and below)
			1: Use Dynamic Simulation
	*/
	enableDynamicSimulation = 0;
	
	/*
		Simulation distance settings
		For more information:
			https://community.bistudio.com/wiki/setDynamicSimulationDistance
			https://community.bistudio.com/wiki/setDynamicSimulationDistanceCoef
	*/
	
	// The distance, in meters, will infantry units be simulated. Default: 500m
	groupSimulationDistance = 500;
	
	// The distance, in meters, will vehicles with crew be simulated. Default: 350m
	vehicleSimulationDistance = 250;
	
	// The distance, in meters, will all vehicles without crew be simulated. Default: 250m
	emptyVehicleSimulationDistance = 250;
	
	// The distance, in meters, will static objects be simulated. This includes anything from a small tin can to a building. Default: 50m
	propSimulationDistance = 50;
	
	// Multiplies the entity activation distance by set value if the entity is moving. Default: 2
	isMovingSimulationCoef = 2;
};




class CfgSlothMachine
{
	spinCost = 100;
	Jackpot = 15000;

	chances[] = 
	{
		{85, ""}, 					// 85% = Nothing
		{95, "Level1"}, 			// 10% = 1pt
		{96, "Level2"}, 			// 1% = 10pt
		{97, "Level3"}, 			// 1% = 25pt
		{98, "Level4"}, 			// 1% = 50pt
		{99, "Level5"},				// 1% = 100pt
		{100, "Jackpot"} 			// 1% = Jackpot
	};

	class Prizes 
	{
		class Level1
		{
			symbol = "\exile_assets\texture\item\Exile_Item_ToiletPaper.paa";
			prize = 101;
		};

		class Level2
		{
			symbol = "\exile_assets\texture\item\Exile_Item_CockONut.paa";
			prize = 110;
		};

		class Level3
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Beer.paa";
			prize = 125;
		};

		class Level4
		{
			symbol = "\exile_assets\texture\item\Exile_Item_CodeLock.paa";
			prize = 150;
		};

		class Level5
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Safe.paa";
			prize = 200;
		};

		class Jackpot
		{
			symbol = "\exile_assets\texture\item\Exile_Item_XmasPresent.paa";
		};
	};
};
class CfgTerritories
{


	prices[] = 
	{

		{5000,					15,			30 					},
		{10000,					30,			40 					},
		{15000,					65,			50 					},

		{20000,					70,			120					},
		{25000,					75,			150					},
		{30000,					90,			160					},
		{35000,					105,		170					},
		{40000,					120,		180					},
		{45000,					135,		190					},
		{50000,					150,		260					}
	};



	maximumRadius = 150;


	minimumDistanceToOtherTerritories = 175; 


	maximumNumberOfTerritoriesPerPlayer = 2;





	minimumDistanceToTraderZones = 1500;





	minimumDistanceToSpawnZones = 800;


	popTabAmountPerObject = 10;





};
class CfgTraderCategories
{
	#include "CUP\category.hpp"
	#include "EBM\traders.hpp"
	#include "MASV\category.hpp"
	#include "MASW\category.hpp"
	#include "RHSGREF\category.hpp"
	#include "RHSV\category.hpp"
	#include "RHSW\category.hpp"

	class Community
	{
		name = "Community Items";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{

		};
	};

	class Community2
	{
		name = "Community Items 2";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{

		};
	};

	class Community3
	{
		name = "Community Items 3";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{

		};
	};

	class Community4
	{
		name = "Community Items 4";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{

		};
	};

	class Community5
	{
		name = "Community Items 5";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{

		};
	};

	class Community6
	{
		name = "Community Items 6";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{

		};
	};

	class Community7
	{
		name = "Community Items 7";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{

		};
	};

	class Community8
	{
		name = "Community Items 8";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{

		};
	};

	class Community9
	{
		name = "Community Items 9";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{

		};
	};

	class Community10
	{
		name = "Community Items 10";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{

		};
	};

	class Uniforms
	{
		name = "Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			"U_C_Journalist",
			"U_C_Poloshirt_blue",
			"U_C_Poloshirt_burgundy",
			"U_C_Poloshirt_salmon",
			"U_C_Poloshirt_stripped",
			"U_C_Poloshirt_tricolour",
			"U_C_Poor_1",
			"U_C_Poor_2",
			"U_C_Poor_shorts_1",
			"U_C_Scientist",
			"U_OrestesBody",
			"U_Rangemaster",
			"U_NikosAgedBody",
			"U_NikosBody",
			"U_Competitor",
			"U_B_CombatUniform_mcam",
			"U_B_CombatUniform_mcam_tshirt",
			"U_B_CombatUniform_mcam_vest",
			"U_B_CombatUniform_mcam_worn",
			"U_B_CTRG_1",
			"U_B_CTRG_2",
			"U_B_CTRG_3",
			"U_I_CombatUniform",
			"U_I_CombatUniform_shortsleeve",
			"U_I_CombatUniform_tshirt",
			"U_I_OfficerUniform",
			"U_O_CombatUniform_ocamo",
			"U_O_CombatUniform_oucamo",
			"U_O_OfficerUniform_ocamo",
			"U_B_SpecopsUniform_sgg",
			"U_O_SpecopsUniform_blk",
			"U_O_SpecopsUniform_ocamo",
			"U_I_G_Story_Protagonist_F",
			"Exile_Uniform_Woodland",
			"U_C_HunterBody_grn",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla3_1",
			"U_BG_Guerilla2_1",
			"U_IG_Guerilla3_2",
			"U_BG_Guerrilla_6_1",
			"U_BG_Guerilla1_1",
			"U_BG_Guerilla2_2",
			"U_BG_Guerilla2_3",
			"U_BG_Guerilla3_1",
			"U_BG_leader",
			"U_IG_leader",
			"U_I_G_resistanceLeader_F",
			"U_B_FullGhillie_ard",
			"U_B_FullGhillie_lsh",
			"U_B_FullGhillie_sard",
			"U_B_GhillieSuit",
			"U_I_FullGhillie_ard",
			"U_I_FullGhillie_lsh",
			"U_I_FullGhillie_sard",
			"U_I_GhillieSuit",
			"U_O_FullGhillie_ard",
			"U_O_FullGhillie_lsh",
			"U_O_FullGhillie_sard",
			"U_O_GhillieSuit",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit",
			"U_B_survival_uniform",
			"U_B_HeliPilotCoveralls",
			"U_I_HeliPilotCoveralls",
			"U_B_PilotCoveralls",
			"U_I_pilotCoveralls",
			"U_O_PilotCoveralls",

			"U_B_T_Soldier_F",
			"U_B_T_Soldier_AR_F",
			"U_B_T_Soldier_SL_F",
			"U_B_T_Sniper_F",
			"U_B_T_FullGhillie_tna_F",
			"U_B_CTRG_Soldier_F",
			"U_B_CTRG_Soldier_2_F",
			"U_B_CTRG_Soldier_3_F",
			"U_B_GEN_Soldier_F",
			"U_B_GEN_Commander_F",
			"U_O_T_Soldier_F",
			"U_O_T_Officer_F",
			"U_O_T_Sniper_F",
			"U_O_T_FullGhillie_tna_F",
			"U_O_V_Soldier_Viper_F",
			"U_O_V_Soldier_Viper_hex_F",
			"U_I_C_Soldier_Para_1_F",
			"U_I_C_Soldier_Para_2_F",
			"U_I_C_Soldier_Para_3_F",
			"U_I_C_Soldier_Para_4_F",
			"U_I_C_Soldier_Para_5_F",
			"U_I_C_Soldier_Bandit_1_F",
			"U_I_C_Soldier_Bandit_2_F",
			"U_I_C_Soldier_Bandit_3_F",
			"U_I_C_Soldier_Bandit_4_F",
			"U_I_C_Soldier_Bandit_5_F",
			"U_I_C_Soldier_Camo_F",
			"U_C_man_sport_1_F",
			"U_C_man_sport_2_F",
			"U_C_man_sport_3_F",
			"U_C_Man_casual_1_F",
			"U_C_Man_casual_2_F",
			"U_C_Man_casual_3_F",
			"U_C_Man_casual_4_F",
			"U_C_Man_casual_5_F",
			"U_C_Man_casual_6_F",
			"U_B_CTRG_Soldier_urb_1_F",
			"U_B_CTRG_Soldier_urb_2_F",
			"U_B_CTRG_Soldier_urb_3_F"
		};
	};

	class Vests
	{
		name = "Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] =
		{
			"V_Press_F",
			"V_Rangemaster_belt",
			"V_TacVest_blk",
			"V_TacVest_blk_POLICE",
			"V_TacVest_brn",
			"V_TacVest_camo",
			"V_TacVest_khk",
			"V_TacVest_oli",
			"V_TacVestCamo_khk",
			"V_TacVestIR_blk",
			"V_I_G_resistanceLeader_F",
			"V_BandollierB_blk",
			"V_BandollierB_cbr",
			"V_BandollierB_khk",
			"V_BandollierB_oli",
			"V_BandollierB_rgr",
			"V_Chestrig_blk",
			"V_Chestrig_khk",
			"V_Chestrig_oli",
			"V_Chestrig_rgr",
			"V_HarnessO_brn",
			"V_HarnessO_gry",
			"V_HarnessOGL_brn",
			"V_HarnessOGL_gry",
			"V_HarnessOSpec_brn",
			"V_HarnessOSpec_gry",
			"V_PlateCarrier1_blk",
			"V_PlateCarrier1_rgr",
			"V_PlateCarrier2_rgr",
			"V_PlateCarrier3_rgr",
			"V_PlateCarrierGL_blk",
			"V_PlateCarrierGL_mtp",
			"V_PlateCarrierGL_rgr",
			"V_PlateCarrierH_CTRG",
			"V_PlateCarrierIA1_dgtl",
			"V_PlateCarrierIA2_dgtl",
			"V_PlateCarrierIAGL_dgtl",
			"V_PlateCarrierIAGL_oli",
			"V_PlateCarrierL_CTRG",
			"V_PlateCarrierSpec_blk",
			"V_PlateCarrierSpec_mtp",
			"V_PlateCarrierSpec_rgr",

			"V_TacChestrig_grn_F",
			"V_TacChestrig_oli_F",
			"V_TacChestrig_cbr_F",
			"V_PlateCarrier1_tna_F",
			"V_PlateCarrier2_tna_F",
			"V_PlateCarrierSpec_tna_F",
			"V_PlateCarrierGL_tna_F",
			"V_HarnessO_ghex_F",
			"V_HarnessOGL_ghex_F",
			"V_BandollierB_ghex_F",
			"V_TacVest_gen_F",
			"V_PlateCarrier1_rgr_noflag_F",
			"V_PlateCarrier2_rgr_noflag_F",

			"V_DeckCrew_yellow_F",
			"V_DeckCrew_blue_F",
			"V_DeckCrew_green_F",
			"V_DeckCrew_red_F",
			"V_DeckCrew_white_F",
			"V_DeckCrew_brown_F",
			"V_DeckCrew_violet_F"
		};
	};

	class Headgear
	{
		name = "Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			"Exile_Headgear_SantaHat",
			"Exile_Headgear_SafetyHelmet",
			"H_Cap_blk",
			"H_Cap_blk_Raven",
			"H_Cap_blu",
			"H_Cap_brn_SPECOPS",
			"H_Cap_grn",
			"H_Cap_headphones",
			"H_Cap_khaki_specops_UK",
			"H_Cap_oli",
			"H_Cap_press",
			"H_Cap_red",
			"H_Cap_tan",
			"H_Cap_tan_specops_US",
			"H_Watchcap_blk",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Watchcap_sgg",
			"H_MilCap_blue",
			"H_MilCap_dgtl",
			"H_MilCap_mcamo",
			"H_MilCap_ocamo",
			"H_MilCap_oucamo",
			"H_MilCap_rucamo",
			"H_Bandanna_camo",
			"H_Bandanna_cbr",
			"H_Bandanna_gry",
			"H_Bandanna_khk",
			"H_Bandanna_khk_hs",
			"H_Bandanna_mcamo",
			"H_Bandanna_sgg",
			"H_Bandanna_surfer",
			"H_Booniehat_dgtl",
			"H_Booniehat_dirty",
			"H_Booniehat_grn",
			"H_Booniehat_indp",
			"H_Booniehat_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_mcamo",
			"H_Booniehat_tan",
			"H_Hat_blue",
			"H_Hat_brown",
			"H_Hat_camo",
			"H_Hat_checker",
			"H_Hat_grey",
			"H_Hat_tan",
			"H_StrawHat",
			"H_StrawHat_dark",
			"H_Beret_02",
			"H_Beret_blk",
			"H_Beret_blk_POLICE",
			"H_Beret_brn_SF",
			"H_Beret_Colonel",
			"H_Beret_grn",
			"H_Beret_grn_SF",
			"H_Beret_ocamo",
			"H_Beret_red",
			"H_Shemag_khk",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_Shemag_tan",
			"H_ShemagOpen_khk",
			"H_ShemagOpen_tan",
			"H_TurbanO_blk",
			"H_HelmetB",
			"H_HelmetB_black",
			"H_HelmetB_camo",
			"H_HelmetB_desert",
			"H_HelmetB_grass",
			"H_HelmetB_light",
			"H_HelmetB_light_black",
			"H_HelmetB_light_desert",
			"H_HelmetB_light_grass",
			"H_HelmetB_light_sand",
			"H_HelmetB_light_snakeskin",
			"H_HelmetB_paint",
			"H_HelmetB_plain_blk",
			"H_HelmetB_sand",
			"H_HelmetB_snakeskin",
			"H_HelmetCrew_B",
			"H_HelmetCrew_I",
			"H_HelmetCrew_O",
			"H_HelmetIA",
			"H_HelmetIA_camo",
			"H_HelmetIA_net",
			"H_HelmetLeaderO_ocamo",
			"H_HelmetLeaderO_oucamo",
			"H_HelmetO_ocamo",
			"H_HelmetO_oucamo",
			"H_HelmetSpecB",
			"H_HelmetSpecB_blk",
			"H_HelmetSpecB_paint1",
			"H_HelmetSpecB_paint2",
			"H_HelmetSpecO_blk",
			"H_HelmetSpecO_ocamo",
			"H_CrewHelmetHeli_B",
			"H_CrewHelmetHeli_I",
			"H_CrewHelmetHeli_O",
			"H_HelmetCrew_I",
			"H_HelmetCrew_B",
			"H_HelmetCrew_O",
			"H_PilotHelmetHeli_B",
			"H_PilotHelmetHeli_I",
			"H_PilotHelmetHeli_O",
			"H_PilotHelmetFighter_B",				
			"H_PilotHelmetFighter_I",					
			"H_PilotHelmetFighter_O",	


			"H_Helmet_Skate",
			"H_HelmetB_TI_tna_F",
			"H_HelmetO_ViperSP_hex_F",
			"H_HelmetO_ViperSP_ghex_F",
			"H_HelmetB_tna_F",
			"H_HelmetB_Enh_tna_F",
			"H_HelmetB_Light_tna_F",
			"H_HelmetSpecO_ghex_F",
			"H_HelmetLeaderO_ghex_F",
			"H_HelmetO_ghex_F",
			"H_HelmetCrew_O_ghex_F",
			"H_MilCap_tna_F",
			"H_MilCap_ghex_F",
			"H_Booniehat_tna_F",
			"H_Beret_gen_F",
			"H_MilCap_gen_F",
			"H_Cap_oli_Syndikat_F",
			"H_Cap_tan_Syndikat_F",
			"H_Cap_blk_Syndikat_F",
			"H_Cap_grn_Syndikat_F"
		};
	};

	class Glasses
	{
		name = "Glasses";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\Goggles_ca.paa";
		items[] =
		{
			"G_Spectacles",
			"G_Spectacles_Tinted",
			"G_Combat",
			"G_Lowprofile",
			"G_Shades_Black",
			"G_Shades_Green",
			"G_Shades_Red",
			"G_Squares",
			"G_Squares_Tinted",
			"G_Sport_BlackWhite",
			"G_Sport_Blackyellow",
			"G_Sport_Greenblack",
			"G_Sport_Checkered",
			"G_Sport_Red",
			"G_Tactical_Black",
			"G_Aviator",
			"G_Lady_Mirror",
			"G_Lady_Dark",
			"G_Lady_Red",
			"G_Lady_Blue",
			"G_Diving",
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving",
			"G_Goggles_VR",
			"G_Balaclava_blk",
			"G_Balaclava_oli",
			"G_Balaclava_combat",
			"G_Balaclava_lowprofile",
			"G_Bandanna_blk",
			"G_Bandanna_oli",
			"G_Bandanna_khk",
			"G_Bandanna_tan",
			"G_Bandanna_beast",
			"G_Bandanna_shades",
			"G_Bandanna_sport",
			"G_Bandanna_aviator",
			"G_Shades_Blue",
			"G_Sport_Blackred",
			"G_Tactical_Clear",
			"G_Balaclava_TI_blk_F",
			"G_Balaclava_TI_tna_F",
			"G_Balaclava_TI_G_blk_F",
			"G_Balaclava_TI_G_tna_F",
			"G_Combat_Goggles_tna_F"
		};
	};

	class PointerAttachments
	{
		name = "Pointer Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"acc_flashlight",
			"acc_pointer_IR"
		};
	};

	class BipodAttachments
	{
		name = "Bipod Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itembipod_ca.paa";
		items[] =
		{
			"bipod_01_F_blk",
			"bipod_01_F_mtp",
			"bipod_01_F_snd",
			"bipod_02_F_blk",
			"bipod_02_F_hex",
			"bipod_02_F_tan",
			"bipod_03_F_blk",
			"bipod_03_F_oli",

			"bipod_01_F_khk"
		};
	};

	class MuzzleAttachments
	{
		name = "Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] =
		{
			"muzzle_snds_338_black",
			"muzzle_snds_338_green",
			"muzzle_snds_338_sand",
			"muzzle_snds_93mmg",
			"muzzle_snds_93mmg_tan",
			"muzzle_snds_acp",
			"muzzle_snds_B",
			"muzzle_snds_H",
			"muzzle_snds_H_MG",
			"muzzle_snds_H_SW",
			"muzzle_snds_L",
			"muzzle_snds_M",

			"muzzle_snds_H_khk_F",
			"muzzle_snds_H_snd_F",
			"muzzle_snds_58_blk_F",
			"muzzle_snds_m_khk_F",
			"muzzle_snds_m_snd_F",
			"muzzle_snds_B_khk_F",
			"muzzle_snds_B_snd_F",
			"muzzle_snds_58_wdm_F",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_65_TI_hex_F",
			"muzzle_snds_65_TI_ghex_F",
			"muzzle_snds_H_MG_blk_F",
			"muzzle_snds_H_MG_khk_F"
		};
	};

	class UAVs
	{
		name = "Unmanned Aerial Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
		items[] =
		{
			"I_UavTerminal",
			"I_UAV_01_backpack_F",
			"B_UAV_01_backpack_F",
			"B_UAV_backpack_F"
			
		};
	};

	class StaticMGs
	{
		name = "Special Weapons";


		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"O_HMG_01_support_F",
			"O_HMG_01_weapon_F",
			"launch_I_Titan_short_F",
			"launch_O_Titan_F",
			"launch_NLAW_F",
			"launch_B_Titan_F",
			"launch_I_Titan_F",
			"launch_B_Titan_tna_F",
			"launch_B_Titan_short_F",
			"launch_B_Titan_short_tna_F",
			"launch_O_Titan_ghex_F",
			"launch_O_Titan_short_F",
			"launch_O_Titan_short_ghex_F",			
			"launch_RPG32_F",
			"Exile_Melee_Axe",
			"Exile_Melee_SledgeHammer",
			"Exile_Melee_Shovel",
			"O_Mortar_01_support_F",
			"O_Mortar_01_weapon_F",
			"O_Static_Designator_02_weapon_F",
			"B_UAV_backpack_F"


		};
	};

	class OpticAttachments
	{
		name = "Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] =
		{
			"optic_Aco",
			"optic_ACO_grn",
			"optic_ACO_grn_smg",
			"optic_Aco_smg",
			"optic_AMS",
			"optic_AMS_khk",
			"optic_AMS_snd",
			"optic_Arco",
			"optic_DMS",
			"optic_Hamr",
			"optic_Holosight",
			"optic_Holosight_smg",
			"optic_KHS_blk",
			"optic_KHS_hex",
			"optic_KHS_old",
			"optic_KHS_tan",
			"optic_LRPS",
			"optic_MRCO",
			"optic_MRD",
			"optic_Nightstalker",
			"optic_NVS",
			"optic_SOS",
			"optic_tws",
			"optic_tws_mg",
			"optic_Yorris",

			"optic_Arco_blk_F",
			"optic_Arco_ghex_F",
			"optic_DMS_ghex_F",
			"optic_Hamr_khk_F",
			"optic_ERCO_blk_F",
			"optic_ERCO_khk_F",
			"optic_ERCO_snd_F",
			"optic_SOS_khk_F",
			"optic_LRPS_tna_F",
			"optic_LRPS_ghex_F",
			"optic_Holosight_blk_F",
			"optic_Holosight_khk_F",
			"optic_Holosight_smg_blk_F"
		};
	};

	class Food 















































	{
		name = "Fast Food";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_EMRE",
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_Surstromming",
			"Exile_Item_SausageGravy",
			"Exile_Item_Catfood",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_BBQSandwich",
			"Exile_Item_MacasCheese",
			"Exile_Item_Dogfood",
			"Exile_Item_BeefParts",
			"Exile_Item_Cheathas",
			"Exile_Item_Noodles",
			"Exile_Item_SeedAstics",
			"Exile_Item_Raisins",
			"Exile_Item_Moobar",
			"Exile_Item_InstantCoffee",





			"Exile_Item_SheepSteak_Cooked",
			"Exile_Item_AlsatianSteak_Cooked",
			"Exile_Item_CatSharkFilet_Cooked",
			"Exile_Item_FinSteak_Cooked",
			"Exile_Item_GoatSteak_Cooked",
			"Exile_Item_TurtleFilet_Cooked",
			"Exile_Item_TunaFilet_Cooked",
			"Exile_Item_RabbitSteak_Cooked",
			"Exile_Item_ChickenFilet_Cooked",
			"Exile_Item_RoosterFilet_Cooked",
			"Exile_Item_MulletFilet_Cooked",
			"Exile_Item_SalemaFilet_Cooked",
			"Exile_Item_MackerelFilet_Cooked",
			"Exile_Item_OrnateFilet_Cooked",
			"Exile_Item_SnakeFilet_Cooked",
			"Exile_Item_CatSharkFilet_Raw",
			"Exile_Item_TunaFilet_Raw",
			"Exile_Item_AlsatianSteak_Raw",
			"Exile_Item_TurtleFilet_Raw",
			"Exile_Item_SheepSteak_Raw",
			"Exile_Item_FinSteak_Raw",
			"Exile_Item_GoatSteak_Raw",
			"Exile_Item_ChickenFilet_Raw",
			"Exile_Item_RoosterFilet_Raw",
			"Exile_Item_MackerelFilet_Raw",
			"Exile_Item_MulletFilet_Raw",
			"Exile_Item_OrnateFilet_Raw",
			"Exile_Item_RabbitSteak_Raw",
			"Exile_Item_SalemaFilet_Raw",
			"Exile_Item_SnakeFilet_Raw",










			"Exile_Item_CatSharkFilet_Raw",
			"Exile_Item_TunaFilet_Raw",
			"Exile_Item_AlsatianSteak_Raw",
			"Exile_Item_TurtleFilet_Raw",
			"Exile_Item_SheepSteak_Raw",
			"Exile_Item_FinSteak_Raw",
			"Exile_Item_GoatSteak_Raw",
			"Exile_Item_ChickenFilet_Raw",
			"Exile_Item_RoosterFilet_Raw",
			"Exile_Item_MackerelFilet_Raw",
			"Exile_Item_MulletFilet_Raw",
			"Exile_Item_OrnateFilet_Raw",
			"Exile_Item_RabbitSteak_Raw",
			"Exile_Item_SalemaFilet_Raw",
			"Exile_Item_SnakeFilet_Raw"
		};
	};
	class Cooking 
	{
		name = "Cooking EQ";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_Matches",
			"Exile_Item_CookingPot",
			"Exile_Item_CanOpener",
			"Exile_Item_CampFireKit"
		};
	};



	class Drinks 
	{
		name = "Drinks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_PlasticBottleCoffee",
			"Exile_Item_PowerDrink",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_Beer",
			"Exile_Item_EnergyDrink",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_MountainDupe",
			"Exile_Item_PlasticBottleEmpty",
			"Exile_Item_InstantCoffee"
		};
	};

	class Tools
	{
		name = "Tools/Misc";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_Matches",
			"Exile_Item_CookingPot",
			"Exile_Item_CanOpener",
			"Exile_Item_Handsaw",
			"Exile_Item_Pliers",
			"Exile_Item_Grinder",
			"Exile_Magazine_Battery",

			"Exile_Item_Foolbox",


			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_FireExtinguisher",
			"Exile_Item_Hammer",
			"Exile_Item_OilCanister",
			"Exile_Item_Screwdriver",

			"Exile_Item_Wrench",
			"Exile_Item_SleepingMat",
			"Exile_Item_ToiletPaper",

			"Exile_Item_BurlapSack",
			"Exile_Item_Bullets_556",
			"Exile_Item_Bullets_762",
			"Exile_Item_WeaponParts",
			"Exile_Item_ZipTie"
		};
	};
	class Toolbelt 
	{
		name = "Toolbelt";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{


			"Binocular",
			"Rangefinder",

			"Laserdesignator",
			"Laserdesignator_02",
			"Laserdesignator_03",
			"Laserdesignator_01_khk_F",
			"Laserdesignator_02_ghex_F",
			"CUP_NVG_PVS7",
			"CUP_NVG_HMNVS",
			"O_NVGoggles_hex_F",
			"O_NVGoggles_urb_F",
			"O_NVGoggles_ghex_F",
			"NVGoggles_tna_F",
			"NVGogglesB_blk_F",
			"NVGogglesB_grn_F",
			"NVGogglesB_gry_F",
			"NVGoggles",
			"NVGoggles_INDEP",
			"NVGoggles_OPFOR",
			"ItemGPS",
			"Laserbatteries"








		};
	};

	class FirstAid
	{
		name = "FirstAid";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_InstaDoc",
			"Exile_Item_Bandage",
			"Exile_Item_Vishpirin",
			"Exile_Item_Heatpack",


			"Exile_Item_Defibrillator"
		};
	};

	class Navigation
	{
		name = "Specialty Items";


		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"B_Parachute",
			"ItemMap",
			"ItemCompass",
			"ItemRadio",
			"ItemWatch",
			"Exile_Item_XM8",
			"Exile_Item_MobilePhone",
			"Exile_Headgear_GasMask"















		};
	};

	class Backpacks
	{
		name = "Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] = 
		{
			"B_AssaultPack_blk",
			"B_AssaultPack_cbr",
			"B_AssaultPack_dgtl",
			"B_AssaultPack_khk",
			"B_AssaultPack_mcamo",
			"B_AssaultPack_rgr",
			"B_AssaultPack_sgg",
			"B_Bergen_blk",
			"B_Bergen_mcamo",
			"B_Bergen_rgr",
			"B_Bergen_sgg",
			"B_Carryall_cbr",
			"B_Carryall_khk",
			"B_Carryall_mcamo",
			"B_Carryall_ocamo",
			"B_Carryall_oli",
			"B_Carryall_oucamo",
			"B_FieldPack_blk",
			"B_FieldPack_cbr",
			"B_FieldPack_ocamo",
			"B_FieldPack_oucamo",
			"B_HuntingBackpack",
			"B_Kitbag_cbr",
			"B_Kitbag_mcamo",
			"B_Kitbag_sgg",
			"B_OutdoorPack_blk",
			"B_OutdoorPack_blu",
			"B_OutdoorPack_tan",
			"B_TacticalPack_blk",
			"B_TacticalPack_mcamo",
			"B_TacticalPack_ocamo",
			"B_TacticalPack_oli",
			"B_TacticalPack_rgr",

			"B_Bergen_mcamo_F",
			"B_Bergen_dgtl_F",
			"B_Bergen_hex_F",
			"B_Bergen_tna_F",
			"B_AssaultPack_tna_F",
			"B_Carryall_ghex_F",
			"B_FieldPack_ghex_F",
			"B_ViperHarness_blk_F",
			"B_ViperHarness_ghex_F",
			"B_ViperHarness_hex_F",
			"B_ViperHarness_khk_F",
			"B_ViperHarness_oli_F",
			"B_ViperLightHarness_blk_F",
			"B_ViperLightHarness_ghex_F",
			"B_ViperLightHarness_hex_F",
			"B_ViperLightHarness_khk_F",
			"B_ViperLightHarness_oli_F"
		};
	};

	class Ammunition
	{
		name = "Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\CargoMag_ca.paa";
		items[] = 
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"10Rnd_127x54_Mag",
			"10Rnd_338_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"11Rnd_45ACP_Mag",
			"130Rnd_338_Mag",
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box_Tracer",
			"150Rnd_93x64_Mag",
			"16Rnd_9x21_Mag",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box_Tracer",
			"20Rnd_556x45_UW_mag",
			"20Rnd_762x51_Mag",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01_tracer_green",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Yellow_Mag",
			"30Rnd_9x21_Green_Mag",
			"30Rnd_9x21_Red_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_Mag",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_GreenSignal_F",
			"6Rnd_RedSignal_F",
			"7Rnd_408_Mag",
			"9Rnd_45ACP_Mag",
			"Exile_Magazine_30Rnd_762x39_AK",
			"Exile_Magazine_30Rnd_545x39_AK_Green",
			"Exile_Magazine_30Rnd_545x39_AK_Red",
			"Exile_Magazine_30Rnd_545x39_AK_White",
			"Exile_Magazine_30Rnd_545x39_AK_Yellow",
			"Exile_Magazine_45Rnd_545x39_RPK_Green",
			"Exile_Magazine_75Rnd_545x39_RPK_Green",
			"Exile_Magazine_20Rnd_762x51_DMR",
			"Exile_Magazine_20Rnd_762x51_DMR_Yellow",
			"Exile_Magazine_20Rnd_762x51_DMR_Red",
			"Exile_Magazine_20Rnd_762x51_DMR_Green",
			"Exile_Magazine_10Rnd_303",
			"Exile_Magazine_100Rnd_762x54_PK_Green",
			"Exile_Magazine_7Rnd_45ACP",
			"Exile_Magazine_8Rnd_9x18",
			"Exile_Magazine_30Rnd_545x39_AK",
			"Exile_Magazine_6Rnd_45ACP",
			"Exile_Magazine_5Rnd_22LR",
			"Exile_Magazine_10Rnd_762x54",
			"Exile_Magazine_10Rnd_9x39",
			"Exile_Magazine_20Rnd_9x39",
			"Exile_Magazine_8Rnd_74Pellets",
			"Exile_Magazine_8Rnd_74Slug",

			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_Tracer_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_Tracer_F",
			"20Rnd_650x39_Cased_Mag_F",
			"10Rnd_50BW_Mag_F",
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_Green_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Tracer_Green_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_Green_F",
			"30Rnd_545x39_Mag_Tracer_F",
			"30Rnd_545x39_Mag_Tracer_Green_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_Red_F",
			"200Rnd_556x45_Box_Tracer_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"10Rnd_9x21_Mag",
			"Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag",
			"Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag",
			"Exile_Magazine_7Rnd_408_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_338_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag",
			"Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag",
			"Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_765x17_SA61",
			"Exile_Magazine_20Rnd_765x17_SA61",
			"Exile_Magazine_10Rnd_127x99_m107",
			"Exile_Magazine_5Rnd_127x108_APDS_KSVK",
			"Exile_Magazine_5Rnd_127x108_KSVK"
		};
	};

	class Flares 
	{
		name = "Flares";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Chemlight_blue",
			"Chemlight_green",
			"Chemlight_red",
			"FlareGreen_F",
			"FlareRed_F",
			"FlareWhite_F",
			"FlareYellow_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareWhite_F",
			"UGL_FlareYellow_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareYellow_F"
		};
	};

	class Smokes 
	{
		name = "Smokes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShellYellow",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell"
		};
	};	

	class Explosives
	{
		name = "Explosives";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] = 
		{
			"HandGrenade",
			"MiniGrenade",
			"B_IR_Grenade",
			"O_IR_Grenade",
			"I_IR_Grenade",
			"1Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"APERSBoundingMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSTripMine_Wire_Mag",
			"ClaymoreDirectionalMine_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"SatchelCharge_Remote_Mag",
			"IEDLandBig_Remote_Mag",
			"IEDLandSmall_Remote_Mag",
			"IEDUrbanBig_Remote_Mag",
			"IEDUrbanSmall_Remote_Mag",
			"SLAMDirectionalMine_Wire_Mag",
			"NLAW_F",
			"RPG32_F",
			"RPG32_HE_F",
			"Titan_AA",
			"Titan_AT",
			"Titan_AP"


		};
	};

	class Pistols 
	{
		name = "Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] = 
		{
			"hgun_ACPC2_F",
			"hgun_P07_F",
			"hgun_Pistol_heavy_01_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_Pistol_Signal_F",
			"hgun_Rook40_F",
			"Exile_Weapon_Colt1911",
			"Exile_Weapon_Makarov",
			"Exile_Weapon_Taurus",
			"Exile_Weapon_TaurusGold",

			"hgun_Pistol_01_F",
			"hgun_P07_khk_F",
			"Exile_Weapon_SA61"
		};
	};

	class SubMachineGuns 
	{
		name = "Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"hgun_PDW2000_F",
			"SMG_01_F",
			"SMG_02_F",
			"SMG_05_F"
		};
	};

	class LightMachineGuns 
	{
		name = "Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_MX_SW_Black_F",
			"arifle_MX_SW_F",
			"LMG_Mk200_F",
			"LMG_Zafir_F",
			"LMG_03_F",
			"Exile_Weapon_RPK",
			"Exile_Weapon_PK",
			"Exile_Weapon_PKP",


			"MMG_01_hex_F",
			"MMG_01_tan_F",
			"MMG_02_black_F",
			"MMG_02_camo_F",
			"MMG_02_sand_F"

		};
	};

	class AssaultRifles
	{
		name = "Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_Katiba_C_F",
			"arifle_Katiba_F",
			"arifle_Katiba_GL_F",
			"arifle_Mk20_F",
			"arifle_Mk20_GL_F",
			"arifle_Mk20_GL_plain_F",
			"arifle_Mk20_plain_F",
			"arifle_Mk20C_F",
			"arifle_Mk20C_plain_F",
			"arifle_MX_Black_F",
			"arifle_MX_F",
			"arifle_MX_GL_Black_F",
			"arifle_MX_GL_F",
			"arifle_MXC_Black_F",
			"arifle_MXC_F",
			"arifle_SDAR_F",
			"arifle_TRG20_F",
			"arifle_TRG21_F",
			"arifle_TRG21_GL_F",
			"Exile_Weapon_AK107",
			"Exile_Weapon_AK107_GL",
			"Exile_Weapon_AK74",
			"Exile_Weapon_AK74_GL",
			"Exile_Weapon_AK47",
			"Exile_Weapon_AKM",
			"Exile_Weapon_AKS",
			"Exile_Weapon_AKS_Gold",

			"arifle_AK12_F",
			"arifle_AK12_GL_F",
			"arifle_AKM_F",
			"arifle_AKM_FL_F",
			"arifle_AKS_F",
			"arifle_ARX_blk_F",
			"arifle_ARX_ghex_F",
			"arifle_ARX_hex_F",
			"arifle_CTAR_blk_F",
			"arifle_CTAR_hex_F",
			"arifle_CTAR_ghex_F",
			"arifle_CTAR_GL_blk_F",
			"arifle_CTARS_blk_F",
			"arifle_CTARS_hex_F",
			"arifle_CTARS_ghex_F",
			"arifle_SPAR_01_blk_F",
			"arifle_SPAR_01_khk_F",
			"arifle_SPAR_01_snd_F",
			"arifle_SPAR_01_GL_blk_F",
			"arifle_SPAR_01_GL_khk_F",
			"arifle_SPAR_01_GL_snd_F",
			"arifle_SPAR_02_blk_F",
			"arifle_SPAR_02_khk_F",
			"arifle_SPAR_02_snd_F",			
			"arifle_SPAR_03_blk_F",
			"arifle_SPAR_03_khk_F",
			"arifle_SPAR_03_snd_F",
			"arifle_MX_khk_F",
			"arifle_MX_GL_khk_F",
			"arifle_MXC_khk_F",
			"arifle_MXM_khk_F",
			"Exile_Weapon_M4",
			"Exile_Weapon_M16A4",
			"Exile_Weapon_M16A2"
		};
	};

	class Shotguns
	{
		name = "Shotguns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Weapon_M1014"
		};
	};

	class SniperRifles
	{
		name = "Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_MXM_Black_F",
			"arifle_MXM_F",
			"srifle_DMR_01_F",
			"srifle_DMR_02_camo_F",
			"srifle_DMR_02_F",
			"srifle_DMR_02_sniper_F",
			"srifle_DMR_03_F",
			"srifle_DMR_03_khaki_F",
			"srifle_DMR_03_multicam_F",
			"srifle_DMR_03_tan_F",
			"srifle_DMR_03_woodland_F",
			"srifle_DMR_04_F",
			"srifle_DMR_04_Tan_F",
			"srifle_DMR_05_blk_F",
			"srifle_DMR_05_hex_F",
			"srifle_DMR_05_tan_f",
			"srifle_DMR_06_camo_F",
			"srifle_DMR_06_olive_F",
			"srifle_EBR_F",
			"srifle_GM6_camo_F",
			"srifle_GM6_F",
			"srifle_LRR_camo_F",
			"srifle_LRR_F",
			"Exile_Weapon_CZ550",
			"Exile_Weapon_SVD",
			"Exile_Weapon_SVDCamo",
			"Exile_Weapon_VSSVintorez",
			"Exile_Weapon_DMR",
			"Exile_Weapon_LeeEnfield",

			"srifle_LRR_tna_F",
			"srifle_GM6_ghex_F",
			"srifle_DMR_07_blk_F",
			"srifle_DMR_07_hex_F",
			"srifle_DMR_07_ghex_F",
			"Exile_Weapon_m107",
			"Exile_Weapon_ksvk"
		};
	};

	class Armed
	{
		name = "Armed Vehicles";


		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Car_Offroad_Armed_Guerilla01",
			"Exile_Car_Offroad_Armed_Guerilla01",
			"Exile_Car_Offroad_Armed_Guerilla02",
			"Exile_Car_Offroad_Armed_Guerilla03",
			"Exile_Car_Offroad_Armed_Guerilla04",
			"Exile_Car_Offroad_Armed_Guerilla05",
			"Exile_Car_Offroad_Armed_Guerilla06",
			"Exile_Car_Offroad_Armed_Guerilla07",
			"Exile_Car_Offroad_Armed_Guerilla08",
			"Exile_Car_Offroad_Armed_Guerilla09",
			"Exile_Car_Offroad_Armed_Guerilla10",
			"Exile_Car_Offroad_Armed_Guerilla11",
			"Exile_Car_Offroad_Armed_Guerilla12",
			"Exile_Car_SUV_Armed_Black",
			"Exile_Car_BRDM2_HQ",
			"Exile_Car_BTR40_MG_Green",
			"Exile_Car_BTR40_MG_Camo",
			"Exile_Car_HMMWV_M134_Green",
			"Exile_Car_HMMWV_M134_Desert",
			"Exile_Car_HMMWV_M2_Green",
			"Exile_Car_HMMWV_M2_Desert",
			"B_MRAP_01_hmg_F",
			"O_MRAP_02_hmg_F",
			"O_T_MRAP_02_hmg_ghex_F",
			"I_MRAP_03_hmg_F",
			"B_LSV_01_armed_F",
			"B_T_LSV_01_armed_F",
			"O_LSV_02_armed_F",
			"O_T_LSV_02_armed_F",
			"O_T_APC_Wheeled_02_rcws_ghex_F",
			"O_APC_Wheeled_02_rcws_F",
			"B_APC_Tracked_01_rcws_F",
			"B_APC_Tracked_01_CRV_F",
			"B_MRAP_01_gmg_F",
			"O_MRAP_02_gmg_F",
			"I_MRAP_03_gmg_F",
			"I_APC_tracked_03_cannon_F",
			"B_APC_Wheeled_01_cannon_F",
			"I_APC_Wheeled_03_cannon_F",
			"O_APC_Tracked_02_cannon_F",
			"I_UGV_01_F",
			"I_UGV_01_rcws_F",
		    "B_UGV_01_F",                                    	// Stomper (BLUFOR)
			"B_UGV_01_rcws_F",                        			// Stomper RCWS (BLUFOR)
			"O_APC_Tracked_02_AA_F",
			"B_APC_Tracked_01_AA_F"
			
			



		};
	};

	class Cars
	{
		name = "Cars";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{





			"Exile_Car_UAZ_Green",
			"Exile_Car_UAZ_Open_Green",
			"Exile_Car_Octavius_White",
			"Exile_Car_Golf_Red",
			"Exile_Car_Lada_Green",
			"Exile_Car_Lada_Taxi",
			"Exile_Car_Lada_Red",
			"Exile_Car_Lada_White",
			"Exile_Car_Lada_Hipster",
			"Exile_Car_Volha_Blue",
			"Exile_Car_Volha_White",
			"Exile_Car_Volha_Black",
			"Exile_Car_Hatchback_Sport_Red",
			"Exile_Car_Hatchback_Sport_Blue",
			"Exile_Car_Hatchback_Sport_Orange",
			"Exile_Car_Hatchback_Sport_White",
			"Exile_Car_Hatchback_Sport_Beige",
			"Exile_Car_Hatchback_Sport_Green"
		};
	};
	class Landrovers
	{
		name = "LandRovers/Jeeps";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Car_LandRover_Red",
			"Exile_Car_LandRover_Urban",
			"Exile_Car_LandRover_Green",
			"Exile_Car_LandRover_Sand",
			"Exile_Car_LandRover_Desert",
			"Exile_Car_LandRover_Ambulance_Green",
			"Exile_Car_LandRover_Ambulance_Desert",
			"Exile_Car_LandRover_Ambulance_Sand",
			"Exile_Car_MB4WD",
			"Exile_Car_MB4WDOpen"
		};
	};
	class ReAFR
	{
		name = "Rearm/Refuel/Repair";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Car_Van_Fuel_Black",
			"Exile_Car_Offroad_Repair_Civillian",
			"O_T_Truck_03_fuel_ghex_F",
			"O_T_Truck_03_repair_ghex_F",
			"O_Truck_02_Ammo_F",
			"O_Truck_02_fuel_F",
			"I_Truck_02_ammo_F",
			"I_Truck_02_fuel_F",
			"C_Truck_02_fuel_F",
			"B_Truck_01_Repair_F",
			"B_Truck_01_ammo_F",
			"B_Truck_01_fuel_F",
			"O_Truck_03_repair_F",
			"O_Truck_03_fuel_F"	
		};
	};
	class Trucks
	{
		name = "Trucks/Vans";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Car_Van_Black",
			"Exile_Car_Van_Box_Black",
			"Exile_Car_Ural_Open_Blue",
			"Exile_Car_Ural_Open_Yellow",
			"Exile_Car_Ural_Open_Worker",
			"Exile_Car_Ural_Open_Military",


			"Exile_Car_Ural_Covered_Blue",
			"Exile_Car_Ural_Covered_Yellow",
			"Exile_Car_Ural_Covered_Worker",
			"Exile_Car_Ural_Covered_Military",
			"Exile_Car_V3S_Open",
			"Exile_Car_V3S_Covered",

			"Exile_Car_SUV_Red",
			"Exile_Car_SUV_Black",
			"Exile_Car_SUV_Grey",
			"Exile_Car_SUV_Orange",
			"Exile_Car_SUVXL_Black",

			"Exile_Car_Offroad_Rusty1",
			"Exile_Car_Offroad_Rusty2",
			"Exile_Car_Offroad_Rusty3",
			"Exile_Car_Ikarus_Blue",

			"Exile_Car_Ikarus_Red",
			"Exile_Car_Ikarus_Party",
			"C_Offroad_02_unarmed_F",
			"I_C_Van_01_transport_F"















		};
	};
	class ArmedChoppers



	{
		name = "Armed Helicopters";

		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Chopper_Huey_Armed_Green",
			"Exile_Chopper_Huey_Armed_Desert",
			"B_Heli_Transport_01_F",
			"B_Heli_Transport_01_camo_F",
			"B_CTRG_Heli_Transport_01_tropic_F",
			"B_CTRG_Heli_Transport_01_sand_F",
			"B_Heli_Light_01_armed_F",
			"O_Heli_Light_02_F",
			"O_Heli_Light_02_v2_F",
			"B_Heli_Transport_03_F",
			"B_Heli_Transport_03_black_F",
			"I_Heli_light_03_F",
			"B_T_VTOL_01_armed_F",
			"O_Heli_Attack_02_F",
			"O_Heli_Attack_02_black_F",
			"B_Heli_Attack_01_F",
			"B_Heli_Attack_01_dynamicLoadout_F"










		};
	};

	class Choppers
	{
		name = "Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Chopper_Hummingbird_Green",
			"Exile_Chopper_Hummingbird_Civillian_Blue",
			"Exile_Chopper_Hummingbird_Civillian_Red",
			"Exile_Chopper_Hummingbird_Civillian_ION",
			"Exile_Chopper_Hummingbird_Civillian_BlueLine",
			"Exile_Chopper_Hummingbird_Civillian_Digital",
			"Exile_Chopper_Hummingbird_Civillian_Elliptical",
			"Exile_Chopper_Hummingbird_Civillian_Furious",
			"Exile_Chopper_Hummingbird_Civillian_GrayWatcher",
			"Exile_Chopper_Hummingbird_Civillian_Jeans",
			"Exile_Chopper_Hummingbird_Civillian_Light",
			"Exile_Chopper_Hummingbird_Civillian_Shadow",
			"Exile_Chopper_Hummingbird_Civillian_Sheriff",
			"Exile_Chopper_Hummingbird_Civillian_Speedy",
			"Exile_Chopper_Hummingbird_Civillian_Sunset",
			"Exile_Chopper_Hummingbird_Civillian_Vrana",
			"Exile_Chopper_Hummingbird_Civillian_Wasp",
			"Exile_Chopper_Hummingbird_Civillian_Wave",
			"Exile_Chopper_Huey_Green",

			"Exile_Chopper_Huey_Desert",
			"Exile_Chopper_Taru_Transport_CSAT",
			"Exile_Chopper_Taru_Transport_Black",
			"Exile_Chopper_Taru_CSAT",
			"Exile_Chopper_Taru_Black",
			"Exile_Chopper_Taru_Covered_CSAT",
			"Exile_Chopper_Taru_Covered_Black",
			"Exile_Chopper_Orca_CSAT",
			"Exile_Chopper_Orca_Black",
			"Exile_Chopper_Orca_BlackCustom",
			"Exile_Chopper_Mohawk_FIA",
			"Exile_Chopper_Huron_Black",
			"Exile_Chopper_Hellcat_Green",
			"O_Heli_Transport_04_ammo_F",
			"O_Heli_Transport_04_ammo_black_F",
			"O_T_VTOL_02_infantry_grey_F",
			"O_T_VTOL_02_vehicle_grey_F",
			"O_T_VTOL_02_infantry_ghex_F",
			"O_T_VTOL_02_vehicle_ghex_F",
			"O_T_VTOL_02_infantry_hex_F",
			"O_T_VTOL_02_vehicle_hex_F"
		};
	};

	class Boats
	{
		name = "Boats";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey",
			"Exile_Boat_RHIB",
			"I_Boat_Armed_01_minigun_F",
			"O_Boat_Armed_01_hmg_F",
			"CUP_B_RHIB2Turret_USMC",
			"CUP_B_RHIB_USMC",
			"HAFM_Frigate",
			"HAFM_Corvette",
			"HAFM_MisBoat_BLU",
			"HAFM_PBoat_BLU",
			"HAFM_CB90_BLU",
			"HAFM_GunBoat_BLU",
			"HAFM_Frigate_OPF",
			"HAFM_Corvette_OPF",
			"HAFM_PBoat_OPF",
			"HAFM_MisBoat",
			"HAFM_PBoat",
			"HAFM_CB90",
			"HAFM_GunBoat"


		};
	};

	class Planes
	{
		name = "Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Plane_Cessna",
			"Exile_Plane_AN2_Green",
			"Exile_Plane_AN2_White",
			"Exile_Plane_AN2_Stripe",
			"Exile_Plane_Ceasar",
			"Exile_Plane_BlackfishInfantry",
			"Exile_Plane_BlackfishVehicle",
			"I_Plane_Fighter_03_CAS_F",
			"B_Plane_CAS_01_F",
			"B_Plane_CAS_01_Cluster_F",
			"O_Plane_CAS_02_F",
			"B_Plane_Fighter_01_F",
			"B_Plane_Fighter_01_Stealth_F",
			"O_Plane_Fighter_02_F",
			"O_Plane_Fighter_02_Stealth_F",
			"I_Plane_Fighter_04_F",
			"GNT_C185T",
			"I_UAV_02_CAS_F",
			"I_UAV_02_F",
			"B_UAV_02_F",                          // MQ-4A Greyhawk (BLUFOR)
			"B_UAV_02_CAS_F",                    // MQ-4A Greyhawk (CAS) (BLUFOR)
			"B_T_UAV_03_F",                        // MQ-12 Falcon (CAS) (BLUFOR)
			"B_UAV_05_F",                            // UCAV Sentinel (BLUFOR)
			"O_T_UAV_04_CAS_F",
			"FIR_A10A_Camo1",
			"FIR_A10C_OS",
			"FIR_F16C_Ag_arctic",
			"FIR_F16C_Ag_lizard",
			"FIR_F16C_ENEMY_TYPE_A",
			"FIR_F16D_Polish_CFT",
			"rhs_mig29sm_vvs"
		};
	};
	class Military
	{
		name = "Military Trucks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Car_Zamak",
			"Exile_Car_Tempest",
			"Exile_Car_HEMMT",
			"Exile_Car_BTR40_Green",
			"Exile_Car_BTR40_Camo",
			"Exile_Car_ProwlerLight",
			"Exile_Car_ProwlerUnarmed",
			"Exile_Car_QilinUnarmed",
			"Exile_Car_Strider",
			"Exile_Car_Hunter",
			"Exile_Car_Ifrit",
			"Exile_Car_HMMWV_MEV_Green",
			"Exile_Car_HMMWV_MEV_Desert",
			"Exile_Car_HMMWV_UNA_Green",
			"Exile_Car_HMMWV_UNA_Desert",
			"O_T_MRAP_02_ghex_F",
			"O_T_LSV_02_unarmed_F",
			"O_LSV_02_unarmed_F",
			"B_LSV_01_unarmed_F",
			"B_T_LSV_01_unarmed_F",
			"O_T_Truck_03_covered_ghex_F",
			"O_T_Truck_03_transport_ghex_F",
			"C_Truck_02_transport_F",
			"O_Truck_02_box_F",
			"O_Truck_02_medical_F",
			"I_Truck_02_box_F",
			"C_Truck_02_box_F",
			"I_Truck_02_medical_F",
			"O_MBT_02_cannon_F",
			"I_MBT_03_cannon_F",
			"B_MBT_01_TUSK_F",
			"B_MBT_01_arty_F",
			"B_MBT_01_Mlrs_F"
		};
	};
	class LB
	{
		name = "LittleBirds";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Chopper_Hummingbird_Green",
			"Exile_Chopper_Hummingbird_Civillian_Blue",
			"Exile_Chopper_Hummingbird_Civillian_Red",
			"Exile_Chopper_Hummingbird_Civillian_ION",
			"Exile_Chopper_Hummingbird_Civillian_BlueLine",
			"Exile_Chopper_Hummingbird_Civillian_Digital",
			"Exile_Chopper_Hummingbird_Civillian_Elliptical",
			"Exile_Chopper_Hummingbird_Civillian_Furious",
			"Exile_Chopper_Hummingbird_Civillian_GrayWatcher",
			"Exile_Chopper_Hummingbird_Civillian_Jeans",
			"Exile_Chopper_Hummingbird_Civillian_Light",
			"Exile_Chopper_Hummingbird_Civillian_Shadow",
			"Exile_Chopper_Hummingbird_Civillian_Sheriff",
			"Exile_Chopper_Hummingbird_Civillian_Speedy",
			"Exile_Chopper_Hummingbird_Civillian_Sunset",
			"Exile_Chopper_Hummingbird_Civillian_Vrana",
			"Exile_Chopper_Hummingbird_Civillian_Wasp",
			"Exile_Chopper_Hummingbird_Civillian_Wave",
			"CUP_I_MH6J_RACS",
			"CUP_B_MH6J_USA"
		};
	};
	class Storage 
	{
		name = "Storage&Security";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_SafeKit",
			"Exile_Item_CamoTentKit",
			"Exile_Item_Storagecratekit",
			"Exile_Item_CodeLock",
			"Exile_Item_Laptop",
			"Exile_Item_BaseCameraKit",
			"Exile_Item_ThermalScannerPro"
		};
	};
	class Hardware 
	{
		name = "Hardware";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_Rope",
			"Exile_Item_DuctTape",
			"Exile_Item_ExtensionCord",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_JunkMetal",
			"Exile_Item_LightBulb",
			"Exile_Item_MetalBoard",
			"Exile_Item_MetalPole",
			"Exile_Item_MetalScrews",
			"Exile_Item_MetalWire",
			"Exile_Item_CarWheel",
			"Exile_Item_Cement",
			"Exile_Item_Sand",
			"U_B_Protagonist_VR",
			"Exile_Item_SprayCan_Black",
			"Exile_Item_SprayCan_Red",
			"Exile_Item_SprayCan_Green",
			"Exile_Item_SprayCan_White",
			"Exile_Item_SprayCan_Blue"
		};
	};
	class Building
	{
		name = "Building Supplies/Tools";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_Flag",
			"Exile_Item_FortificationUpgrade",
			"Exile_Item_WoodStairsKit",
			"Exile_Item_WoodSupportKit",
			"Exile_Item_WoodGateKit",
			"Exile_Item_WoodFloorKit",
			"Exile_Item_WoodFloorPortKit",
			"Exile_Item_WoodWallHalfKit",
			"Exile_Item_WoodWindowKit",
			"Exile_Item_WoodWallKit",
			"Exile_Item_WoodLog",
			"Exile_Item_WoodDoorwayKit",
			"Exile_Item_WoodDoorKit",
			"Exile_Item_WoodPlank",
			"Exile_Item_ConcreteWallKit",
			"Exile_Item_ConcreteWindowKit",
			"Exile_Item_ConcreteDoorKit",
			"Exile_Item_ConcreteDoorwayKit",
			"Exile_Item_ConcreteGateKit",
			"Exile_Item_ConcreteFloorKit",
			"Exile_Item_ConcreteFloorPortKit",
			"Exile_Item_ConcreteStairsKit",
			"Exile_Item_HBarrier5Kit",
			"Exile_Item_SandBagsKit_Long",
			"Exile_Item_SandBagsKit_Corner",
			"Exile_Item_Shovel",
			"Exile_Melee_Axe",
			"Exile_Melee_SledgeHammer",
			"Exile_Magazine_Swing",
			"Exile_Item_CampFireKit",
			"Exile_Item_WorkBenchKit",
			"Exile_Item_BushKit_Green",
			"Exile_Item_WaterCanisterDirtyWater"
		};
	};

	class Diving 
	{
		name = "Diving";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit"
		};
	};
};

class CfgTraders
{



	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] = 
		{
			"Ammunition",
			"AssaultRifles",


			"BipodAttachments",
			"LightMachineGuns",
			"MuzzleAttachments",
			"OpticAttachments",
			"Pistols",
			"PointerAttachments",


			"Shotguns",
			"SniperRifles",
			"SubMachineGuns",
			"CUPAmmunition",
			"CUPAssaultRifles",
			"CUPLightMachineGuns",
			"CUPMuzzleAttachments",
			"CUPOpticAttachments",
			"CUPPistols",
			"CUPPointerAttachments",
			"CUPSniperRifles",			
			"CUPSubMachineGuns",
			"CUPSubMachineGuns",
			"GREFAmmunition",
			"GREFWeapons",
			"MASAmmunition",
			"MASAssaultRifles",
			"MASLightMachineGuns",
			"MASMuzzleAttachments",
			"MASOpticAttachments",
			"MASPistols",
			"MASPointerAttachments",
			"MASSniperRifles",
			"MASSubMachineGuns",
			"RHSAmmunition",
			"RHSAssaultRifles",
			"RHSBipodAttachments",
			"RHSLightMachineGuns",
			"RHSMuzzleAttachments",
			"RHSOpticAttachments",
			"RHSPistols",
			"RHSPointerAttachments",
			"RHSSniperRifles"



		};
	};




	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1;
		categories[] = 
		{
			"Diving",
			"Explosives",
			"Flares",
			"Navigation",
			"Smokes",




			"StaticMGs",
			"UAVs",
			"CUPExplosives",
			"CUPFlares",
			"CUPSmokes",
			"CUPStaticMGs",
			"CUPStaticMGs",
			"MASExplosive",
			"MASLaunchers",
			"MASLauncherAmmo",
			"RHSLaunchers",
			"RHSLauncherAmmo",
			"RHSMines"


		};
	};




	class Exile_Trader_Equipment
	{	
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Backpacks",

			"Headgear",

			"Uniforms",
			"Vests",
			"CUPHeadgear",
			"CUPUniforms",
			"CUPVests",
			"GREFHeadgear",
			"GREFUniforms",
			"GREFVests",
			"MASBackpacks",
			"MASHeadgear",
			"RHSHeadgear",
			"RHSUniforms",
			"RHSVests",
			"Toolbelt",

			"FirstAid"
		};
	};




	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Food",
			"Drinks",
			"Cooking"

		};
	};




	class Exile_Trader_Hardware
	{
		name = "Hardware";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware",
			"Storage",
			"Tools",
			"Building",
			"ExtendedBaseMod"
		};
	};




	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Armed",

			"Cars",
			"Landrovers",
			"LB",
			"Military",
			"ReAFR",
			"Trucks",
			"CUPArmed",
			"CUPCars",
			"CUPMilitary",
			"CUPReAFR",
			"CUPTrucks",
			"GREFArmed",
			"GREFUAZArmed",
			"MASArmed",
			"MASCars",
			"MASTanks",
			"MASTrucks",
			"RHSVehicles"
		};
	};




	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Choppers",
			"ArmedChoppers",
			"Planes",	
			"CUPPlanes",
			"CUPArmedChoppers",
			"CUPChoppers",
			"GREFPlanes",
			"MASChoppers",
			"RHSChoppers",
			"RHSPlanes"
		};
	};




	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Boats",
			"CUPBoats"
		};
	};

	class Exile_Trader_Diving
	{
		name = "DIVERS";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Diving"
		};
	};




	class Exile_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community1"


		};
	};

	class Exile_Trader_CommunityCustoms2
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community2"
		};
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community3"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community4"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community5"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community6"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community7"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community8"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community9"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community10"
		};
	};
};
class CfgTrading 
{





	sellPriceFactor = 0.5;

	rekeyPriceFactor = 0.25;

	class requiredRespect 
	{
		Level1 = 0;
		Level2 = 10000;
		Level3 = 25000;
		Level4 = 100000;
		Level5 = 500000;
		Level6 = 600000;
		Level7 = 700000;
		Level8 = 800000;
	};
};
class CfgVehicleCustoms
{
























	class Exile_Boat_MotorBoat_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_MotorBoat_Police",		350, "Police", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"}},
			{"Exile_Boat_MotorBoat_Orange",		300, "Orange", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"}},
			{"Exile_Boat_MotorBoat_White",		300, "White",  {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"}}
		};
	};




	class Exile_Boat_RubberDuck_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_RubberDuck_CSAT",		200, "CSAT", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"}},
			{"Exile_Boat_RubberDuck_Digital",	200, "Digital",{"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"}},
			{"Exile_Boat_RubberDuck_Orange",	150, "Orange", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"}},
			{"Exile_Boat_RubberDuck_Blue",		150, "Blue", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"}},
			{"Exile_Boat_RubberDuck_Black",		150, "Black", {"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"}}
		};
	};




	class Exile_Boat_SDV_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_SDV_CSAT",		200, "CSAT", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"}},
			{"Exile_Boat_SDV_Digital",	200, "Digital", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"}},
			{"Exile_Boat_SDV_Grey",		100, "Grey", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"}}
		};
	};




	class Exile_Chopper_Hellcat_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Hellcat_Green", 350, "Green", 	{"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"}},
			{"Exile_Chopper_Hellcat_FIA", 	500, "FIA", 	{"\A3\Air_F_EPB\Heli_Light_03\data\heli_light_03_base_indp_co.paa"}}
		};
	};























	class Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Hummingbird_Civillian_Blue", 		350, "Blue", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Red", 		350, "Red", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_ION", 		350, "ION", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_BlueLine", 	350, "BlueLine", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Digital", 	350, "Digital", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Elliptical", 	350, "Elliptical", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Furious", 	350, "Furious", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_GrayWatcher", 350, "GrayWatcher",	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Jeans", 		350, "Jeans", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Light", 		350, "Light", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Shadow", 		350, "Shadow", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Sheriff", 	350, "Sheriff", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Speedy", 		350, "Speedy", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Sunset", 		350, "Sunset", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Vrana", 		350, "Vrana", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Wasp", 		350, "Wasp", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Wave", 		350, "Wave", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"}}
		};
	};




	class Exile_Chopper_Huron_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Huron_Black", 	450, "Black", {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"}},
			{"Exile_Chopper_Huron_Green", 	450, "Green", {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"}}
		};
	};




	class Exile_Chopper_Orca_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Orca_CSAT", 		350, "CSAT", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"}},
			{"Exile_Chopper_Orca_Black", 		350, "Black", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"}},
			{"Exile_Chopper_Orca_BlackCustom", 	350, "Black Custom", 	{"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"}}
		};
	};




	class Exile_Chopper_Taru_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_CSAT",		500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"}},
			{"Exile_Chopper_Taru_Black",	500, "BLACK", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"}}
		};
	};




	class Exile_Chopper_Taru_Transport_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_Transport_CSAT",	500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"}},
			{"Exile_Chopper_Taru_Transport_Black",	500, "Black", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"}}
		};
	};




	class Exile_Chopper_Taru_Covered_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_Covered_CSAT",		500, "CSAT",	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"}},
			{"Exile_Chopper_Taru_Covered_Black",	500, "Black",	{"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"}}
		};
	};




	class Exile_Car_Hatchback_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Hatchback_Rusty1", 			50, "Rusty White",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_01_co.paa"}},
			{"Exile_Car_Hatchback_Rusty2", 			50, "Rusty Red",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_02_co.paa"}},
			{"Exile_Car_Hatchback_Rusty3", 			50, "Rusty Yellow",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_03_co.paa"}},
			{"Exile_Car_Hatchback_Beige", 			100, "Beige",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa"}},
			{"Exile_Car_Hatchback_Green", 			100, "Green",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa"}},
			{"Exile_Car_Hatchback_Blue", 			100, "Blue",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa"}},
			{"Exile_Car_Hatchback_BlueCustom", 		100, "Blue Custom",		{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa"}},
			{"Exile_Car_Hatchback_BeigeCustom", 	100, "Beige Custom",	{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa"}},
			{"Exile_Car_Hatchback_Yellow", 			100, "Yellow",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa"}},
			{"Exile_Car_Hatchback_Grey", 			100, "Grey",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa"}},
			{"Exile_Car_Hatchback_Black", 			100, "Black",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"}},
			{"Exile_Car_Hatchback_Dark", 			100, "Dark",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa"}}
		};
	};




	class Exile_Car_Hatchback_Sport_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Hatchback_Sport_Red", 		100, "Red",		{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT01_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_Blue", 		100, "Blue",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT02_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_Orange", 	100, "Orange",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT03_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_White", 	100, "White",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT04_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_Beige", 	100, "Beige",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT05_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_Green", 	100, "Green",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"}}
		};
	};




	class Exile_Car_Offroad_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Rusty1", 		50, "Rusty White",	{"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"}},
			{"Exile_Car_Offroad_Rusty2", 		50, "Rusty Red",	{"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"}},
			{"Exile_Car_Offroad_Rusty3", 		50, "Rusty Blue",	{"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"}},
			{"Exile_Car_Offroad_Red", 			500, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"}},
			{"Exile_Car_Offroad_Beige", 		500, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"}},
			{"Exile_Car_Offroad_White", 		500, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"}},
			{"Exile_Car_Offroad_Blue", 			500, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"}},
			{"Exile_Car_Offroad_DarkRed", 		500, "Dark Red",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"}},
			{"Exile_Car_Offroad_BlueCustom", 	500, "Blue Custom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla01", 	700, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla02", 	700, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla03", 	700, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla04", 	700, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla05", 	700, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla06", 	700, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla07", 	700, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla08", 	700, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla09", 	700, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla10", 	700, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla11", 	700, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla12", 	700, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Black", {"exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Light Blue", {"exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Orange",{"exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Pink",	{"exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile White",	{"exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Yellow",{"exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"}}
		};
	};




	class Exile_Car_LandRover_Abstract
	{
		skins[] =
		{
			{"Exile_Car_LandRover_Red", 250, "Red", {"Exile_psycho_LRC\data\r_lr_base_co.paa","Exile_psycho_LRC\data\r_lr_special_co.paa"}},
			{"Exile_Car_LandRover_Urban", 250, "Urban", {"Exile_psycho_LRC\data\textures\lr_base_urbancamo_co.paa","Exile_psycho_LRC\data\textures\lr_special_urbancamo_co.paa"}},
			{"Exile_Car_LandRover_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"}},
			{"Exile_Car_LandRover_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}},
			{"Exile_Car_LandRover_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}}
		};
	};




	class Exile_Car_LandRover_Ambulance_Abstract
	{
		skins[] =
		{
			{"Exile_Car_LandRover_Ambulance_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"}},
			{"Exile_Car_LandRover_Ambulance_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}},
			{"Exile_Car_LandRover_Ambulance_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}}
		};
	};




	class Exile_Car_Octavius_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Octavius_White", 250, "White", {"exile_psycho_Octavia\Data\car_body_co.paa"}},
			{"Exile_Car_Octavius_Black", 250, "Black", {"exile_psycho_Octavia\Data\car_body_bl_co.paa"}}
		};
	};




	class Exile_Chopper_Huey_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Huey_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}},
			{"Exile_Chopper_Huey_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}}
		};
	};




	class Exile_Chopper_Huey_Armed_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Huey_Armed_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}},
			{"Exile_Chopper_Huey_Armed_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}}
		};
	};




	class Exile_Car_Offroad_Armed_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Armed_Guerilla01",	250, "Guerilla 01", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla02",	250, "Guerilla 02", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla03",	250, "Guerilla 03", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla04",	250, "Guerilla 04", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla05",	250, "Guerilla 05", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla06",	250, "Guerilla 06", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla07",	250, "Guerilla 07", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla08",	250, "Guerilla 08", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla09",	250, "Guerilla 09", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla10",	250, "Guerilla 10", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla11",	250, "Guerilla 11", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla12",	250, "Guerilla 12", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"}}
		};
	};




	class Exile_Car_Offroad_Repair_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Repair_Civillian",		150, "Civillian",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Red",			150, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Beige",			150, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"}},
			{"Exile_Car_Offroad_Repair_White",			150, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Blue",			150, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"}},
			{"Exile_Car_Offroad_Repair_DarkRed",		150, "DarkRed",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"}},
			{"Exile_Car_Offroad_Repair_BlueCustom",		150, "BlueCustom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla01",		250, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla02",		250, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla03",		250, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla04",		250, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla05",		250, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla06",		250, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla07",		250, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla08",		250, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla09",		250, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla10",		250, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla11",		250, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla12",		250, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"}}
		};
	};




	class Exile_Car_SUV_Abstract
	{
		skins[] =
		{
			{"Exile_Car_SUV_Red", 		100, "Red",					{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa"}},
			{"Exile_Car_SUV_Black", 	150, "Black",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"}},
			{"Exile_Car_SUV_Grey", 		100, "Grey",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa"}},
			{"Exile_Car_SUV_Orange", 	100, "Orange",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa"}},
			{"Exile_Car_SUV_Black", 	150, "Snow Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Snow_co.paa"}},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Light_co.paa"}},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo (Dark)",	{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Dark_co.paa"}}
		};
	};




	class Exile_Car_SUVXL_Abstract
    {
        skins[] = 
        {
            {"Exile_Car_SUVXL_Black", 100, "Black", {"\Exile_psycho_SUV_a3\Data\suv_body_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Blue White", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_bluewhite.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Charcoal", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_charcoal_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Orange", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_orange_co.paa"}},
            {"Exile_Car_SUVXL_Black", 200, "Hello Kitty", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_Pink_hello_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Red", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_red_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Silver", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_silver_co.paa"}},
            {"Exile_Car_SUVXL_Black", 100, "White", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_white_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Yellow", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_yellow_co.paa"}}
        };
    };




	class Exile_Car_Van_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Red",			100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"}},
			{"Exile_Car_Van_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"}},
			{"Exile_Car_Van_Guerilla03",	150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"}},
			{"Exile_Car_Van_Guerilla04",	150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"}},
			{"Exile_Car_Van_Guerilla05",	150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"}},
			{"Exile_Car_Van_Guerilla06",	150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"}},
			{"Exile_Car_Van_Guerilla07",	150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"}},
			{"Exile_Car_Van_Guerilla08",	150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"}},
			{"Exile_Car_Van_Black",	150, "Brown",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"}},
			{"Exile_Car_Van_Black",	150, "Olive",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa"}}
		};
	};




	class Exile_Car_Van_Box_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Box_Black",				100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Box_White",				100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Box_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla04",		150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla05",		150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla06",		150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla07",		150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla08",		150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"}}
		};
	};




	class Exile_Car_Van_Fuel_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Fuel_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}},
			{"Exile_Car_Van_Fuel_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}},
			{"Exile_Car_Van_Fuel_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}},
			{"Exile_Car_Van_Fuel_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"}},
			{"Exile_Car_Van_Fuel_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"}},
			{"Exile_Car_Van_Fuel_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"}}
		};
	};




	class Exile_Car_Tempest_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Tempest", 		200, "Green Hex",	{"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"}}
		};
	};




	class Exile_Car_Ikarus_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Ikarus_Blue", 		200, "Blue",	{"Exile_psycho_Ikarus\Data\bus_exterior_co.paa"}},
			{"Exile_Car_Ikarus_Red", 		200, "Red",		{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"}},
			{"Exile_Car_Ikarus_Party", 		500, "Party",	{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"}}
		};
	};




	class Exile_Car_Ural_Open_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Ural_Open_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\Ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"}},
			{"Exile_Car_Ural_Open_Yellow",			300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"}},
			{"Exile_Car_Ural_Open_Worker",			300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"}},
			{"Exile_Car_Ural_Open_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"}}
		};
	};




	class Exile_Car_Ural_Covered_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Ural_Covered_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"}},
			{"Exile_Car_Ural_Covered_Yellow",		300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"}},
			{"Exile_Car_Ural_Covered_Worker",		300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"}},
			{"Exile_Car_Ural_Covered_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"}}
		};
	};




	class Exile_Car_Lada_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Lada_Green", 		100, "Green",	{"exile_psycho_lada\data\lada_eciv1_co.paa","exile_psycho_lada\data\Lada_glass_ECIV1_CA.paa"}},
			{"Exile_Car_Lada_Taxi", 		100, "Taxi",	{"exile_psycho_lada\data\Lada_red_CO.paa"}},
			{"Exile_Car_Lada_Red", 			100, "Red",		{"exile_psycho_lada\data\Lada_red_CO.paa"}},
			{"Exile_Car_Lada_Hipster", 		100, "Hipster",	{"exile_psycho_lada\data\lada_eciv2_co.paa","exile_psycho_lada\data\Lada_glass_ECIV2_CA.paa"}}
		};
	};




	class Exile_Car_Volha_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Volha_Blue", 		100, "Blue",	{"Exile_psycho_Gaz_volha\data\Volha_ECIV_CO.paa"}},
			{"Exile_Car_Volha_White", 		100, "White",	{"Exile_psycho_Gaz_volha\data\Volha_Gray_ECIV_CO.paa"}},
			{"Exile_Car_Volha_Black",		100, "Black",	{"Exile_psycho_Gaz_volha\data\Volha_Black_ECIV_CO.paa"}}
		};
	};




	class Exile_Car_Hunter_Abstract
	{
		skins[] =
		{

			{"Exile_Car_Hunter",		1000, "Exile White Edition",	{"exile_assets\texture\vehicle\Exile_Hunter_Snow_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Snow_Back_co.paa"}},
			{"Exile_Car_Hunter",		1000, "Exile Hex",				{"exile_assets\texture\vehicle\Exile_Hunter_Hex_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"}},
			{"Exile_Car_Hunter",		1000, "Exile Black",			{"exile_assets\texture\vehicle\Exile_Hunter_Black_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"}}
		};
	};




	class Exile_Car_Ifrit_Abstract
	{
		skins[] =
		{

			{"Exile_Car_Ifrit",		1000, "Green Hex",	{"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa","\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"}}
		};
	};




	class Exile_Car_HMMWV_M2_Abstract
	{
		skins[] =
		{

			{"Exile_Car_HMMWV_M2_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"}},
			{"Exile_Car_HMMWV_M2_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"}}
		};
	};

	class Exile_Car_HMMWV_M134_Abstract
	{
		skins[] =
		{

			{"Exile_Car_HMMWV_M134_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"}},
			{"Exile_Car_HMMWV_M134_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"}}
		};
	};

	class Exile_Car_HMMWV_MEV_Abstract
	{
		skins[] =
		{

			{"Exile_Car_HMMWV_MEV_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_cm.paa"}},
			{"Exile_Car_HMMWV_MEV_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_cm.paa"}}
		};
	};

	class Exile_Car_HMMWV_UNA_Abstract
	{
		skins[] =
		{

			{"Exile_Car_HMMWV_UNA_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"}},
			{"Exile_Car_HMMWV_UNA_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"}}
		};
	};




	class Exile_Car_BTR40_MG_Abstract
	{
		skins[] =
		{

			{"Exile_Car_BTR40_MG_Green",		1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"}},
			{"Exile_Car_BTR40_MG_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"}}
		};
	};

	class Exile_Car_BTR40_Abstract
	{
		skins[] =
		{

			{"Exile_Car_BTR40_Green",			1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"}},
			{"Exile_Car_BTR40_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"}}
		};
	};




	class Exile_Car_Golf_Abstract
	{
		skins[] =
		{

			{"Exile_Car_Golf_Red",				1000, "Red",	{"exile_psycho_VWGolf\data\vwgolf_body_co.paa"}},
			{"Exile_Car_Golf_Black",			1000, "Black",	{"exile_psycho_VWGolf\data\texture\black_co.paa"}}
		};
	};




	class Exile_Plane_AN2_Abstract
	{
		skins[] =
		{
			{"Exile_Plane_AN2_Green", 700, "Green", {"Exile_psycho_An2\data\an2_1_co.paa","Exile_psycho_An2\data\an2_2_co.paa","Exile_psycho_An2\data\an2_wings_co.paa"}},
			{"Exile_Plane_AN2_White", 700, "Red, White & Blue", {"Exile_psycho_An2\data\an2_1_a_co.paa",
		"Exile_psycho_An2\data\an2_2_a_co.paa","Exile_psycho_An2\data\an2_wings_a_co.paa"}},
			{"Exile_Plane_AN2_Stripe", 700, "Green Stripe", {"Exile_psycho_An2\data\an2_1_b_co.paa","Exile_psycho_An2\data\an2_2_b_co.paa","Exile_psycho_An2\data\an2_wings_b_co.paa"}}
		};
	};




	class B_G_Boat_Transport_02_F
	{
		skins[] =
		{
			{"Exile_Boat_RHIB",		150, "Blue", {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_civilian_CO.paa"}}
		};
	};




	class Exile_Boat_WaterScooter_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_WaterScooter",		150, "Blue", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"}},
			{"Exile_Boat_WaterScooter",		150, "Grey", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"}},
			{"Exile_Boat_WaterScooter",		150, "Lime", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"}},
			{"Exile_Boat_WaterScooter",		150, "Red", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"}},
			{"Exile_Boat_WaterScooter",		150, "White", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"}},
			{"Exile_Boat_WaterScooter",		150, "Yellow", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"}}
		};
	};




	class C_Plane_Civil_01_F
	{
		skins[] =
		{
			{"Exile_Plane_Ceasar",		150, "Racing (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Racing", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Red Line (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Tribal (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Tribal", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Blue Wave (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Blue Wave", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}}
		};
	};




	class B_T_VTOL_01_infantry_F
	{
		skins[] =
		{
			{"Exile_Plane_BlackfishInfantry",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"}}
		};
	};




	class B_T_VTOL_01_vehicle_F
	{
		skins[] =
		{
			{"Exile_Plane_BlackfishVehicle",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"}}
		};
	};




	class B_CTRG_LSV_01_light_F
	{
		skins[] =
		{
			{"Exile_Car_ProwlerLight",		150, "Black", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"}},
			{"Exile_Car_ProwlerLight",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}},
			{"Exile_Car_ProwlerLight",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"}}
		};
	};




	class B_T_LSV_01_unarmed_black_F
	{
		skins[] =
		{
			{"Exile_Car_ProwlerUnarmed",		150, "Olive", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}},
			{"Exile_Car_ProwlerUnarmed",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}},
			{"Exile_Car_ProwlerUnarmed",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"}}
		};
	};




	class O_T_LSV_02_unarmed_black_F
	{
		skins[] =
		{
			{"Exile_Car_QilinUnarmed",		150, "Arid", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"}},
			{"Exile_Car_QilinUnarmed",		150, "Green Hex", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"}}
		};
	};




	class C_Offroad_02_unarmed_orange_F
	{
		skins[] =
		{
			{"Exile_Car_MB4WD",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"}},
			{"Exile_Car_MB4WD",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"}}
		};
	};

	class I_C_Offroad_02_unarmed_F
	{
		skins[] =
		{
			{"Exile_Car_MB4WDOpen",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Orange", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"}}
		};
	};
};











































class CfgVirtualGarage
{
	/*
		Enable or disable virtual garage on the server
		Options:
			0: Disable virtual garage
			1: Enable virtual garage
	*/
	enableVirtualGarage = 1;

	/*
		Enables or disables the ability to access virtual garage while in combat
		Options:
			0: Players cannot access virtual garage while they are in combat
			1: Players can access virtual garage when they are in combat
	*/
	canAccessGarageInCombat = 0;
	
	/*
		When enabled, this will dump any items and money from the vehicle onto the ground where the car was.
		Options:
			0: Do not clear inventory and money
			1: Clear inventory and money
	*/
	clearInventoryOnStore = 0;
	
	/*
		The maximum number of vehicles that can be stored in the VG for that territory.
		Use -1 to disable the ability to store vehicles at that level.
		Make sure to have the same number of levels here as you do in CfgTerritories!
	*/
	numberOfVehicles[] = 
	{
		25,			// Level 1
		30, 		// Level 2 
		35, 		// Level 3
		40, 		// Level 4
		50, 		// Level 5
		70, 		// Level 6
		90, 		// Level 7
		100, 		// Level 8
		120, 		// Level 9
		150 		// Level 10
	};
	
	/*
		The allowed types of vehicles that can be stored in the garage	
		Available Types: "Car", "Tank", "Plane", "Air", "Ship", "Submarine"
	*/
	allowedVehicleTypes[] = {"Car","Tank","Plane","Air","Ship","Submarine"};

};
class CfgXM8 
{
	extraApps[] = {"ExAd_JX","ExAd_Info","ExAd_CHVD","ExAd_VG","BRAmaRecipes","BaseMarker","ExAd_SB","ExAd_APOC_Airdrop","ExAd_Quad","ExAd_Unit"};
	
	class settings
	{
		controlID = 4070;
		appID = "App01";
		title = "Settings";
	};
	
	class healthScanner
	{
		controlID = 4120;
		appID = "App02";
		title = "Health Scanner";
	};

	/*
	* Make sure you change the server rules to match your desires.
	* You can find the file at ExAdClient\XM8\apps\info
	* The file you want to change is message.sqf
	*/
	class ExAd_Info
    {
        title = "Server Rules";				//IDC:50100 -> 50102 || These need to be unique and out of range from each other
        controlID = 50100;                  
        logo = "ExadClient\XM8\Apps\Info\Icon_SI.paa";
        onLoad = "ExAdClient\XM8\Apps\Info\onLoad.sqf";
        onOpen = "ExAdClient\XM8\Apps\Info\onOpen.sqf";
        onClose = "ExAdClient\XM8\Apps\Info\onClose.sqf";
    };
    class ExAd_CHVD
    {
        title = "View Distance Settings";
        controlID = 50200;                  
        config = "ExadClient\XM8\Apps\CHVD\config.sqf";
        logo = "ExadClient\XM8\Apps\CHVD\Icon_CHVD.paa";
        onLoad = "ExAdClient\XM8\Apps\CHVD\onLoad.sqf";
        onOpen = "ExAdClient\XM8\Apps\CHVD\onOpen.sqf";
        onClose = "ExAdClient\XM8\Apps\CHVD\onClose.sqf";
    };
    class ExAd_JX
    {
        title = "Unit Scanner";
        controlID = 85100;                    
        logo = "ExadClient\XM8\Apps\JX\logo.paa";
        onLoad = "ExAdClient\XM8\Apps\JX\onLoad.sqf";
        onOpen = "ExAdClient\XM8\Apps\JX\onOpen.sqf";
        onClose = "ExAdClient\XM8\Apps\JX\onClose.sqf";
    };
	 class ExAd_VG
    {
        title = "Virtual Garage";
        controlID = 50000;                  //IDC:50000 -> 50015 || These need to be unique and out of range from each other
        logo = "ExadClient\XM8\Apps\VG\Icon_VG.paa";
        onLoad = "ExAdClient\XM8\Apps\VG\onLoad.sqf";
        onOpen = "ExAdClient\XM8\Apps\VG\onOpen.sqf";
        onClose = "ExAdClient\XM8\Apps\VG\onClose.sqf";
    };
	class BRAmaRecipes
    {
        controlID = 107000;
        title = "Recipies";
        logo = "ExAdClient\XM8\Apps\BRAmaRecipes\BRAma.paa";
        config = "ExAdClient\XM8\Apps\BRAmaRecipes\config.sqf";
        onLoad = "ExAdClient\XM8\Apps\BRAmaRecipes\onLoad.sqf";
        onOpen = "ExAdClient\XM8\Apps\BRAmaRecipes\onOpen.sqf";
    };
	class BaseMarker
	 {
		 title = "Base Marker";
		 controlID = 70001;
		 logo = "ExAdClient\XM8\Apps\BaseMarker\BaseMarker.paa";
		 onLoad = "ExAdClient\XM8\Apps\BaseMarker\onLoad.sqf";
	 };
	 class ExAd_SB
    {
        title = "Statsbar Settings";
        controlID = 50400;                  //IDC:50400 -> 50475 || These need to be unique and out of range from each other
        logo = "exile_assets\texture\ui\xm8_app_settings_ca.paa";
        onLoad = "ExAdClient\XM8\Apps\SB_Settings\onLoad.sqf";
    };
	class ExAd_Quad
     {
        title = "Deploy Quad Bike";
        config = "ExAdClient\XM8\Apps\DeployVehicle\config.sqf";
        logo = "ExAdClient\XM8\Apps\DeployVehicle\mud.paa";
        bambiState = 0;
        vehicleClass = "Exile_Bike_QuadBike_Fia";
        recipe[] = {{"Exile_Item_JunkMetal",1}};
        packable = 1;
        autoCleanUp = 1;
        quickFunction = "['ExAd_Quad'] call ExAd_XM8_DV_fnc_spawnVehicle";
     };
		class ExAd_Unit
    {
        title = "Recruit Soldier";
        config = "ExAdClient\XM8\Apps\DeployVehicle\guard.sqf";
        logo = "ExAdClient\XM8\Apps\DeployVehicle\dog.paa";
        bambiState = 0;
        vehicleClass = "Land_AncientStatue_01_F";
        recipe[] = {{"Exile_Item_MobilePhone",1}};
        packable = 0;
        autoCleanUp = 0;
        quickFunction = "['ExAd_Unit'] call ExAd_XM8_DV_fnc_spawnVehicle";
        onLoad = "ExAdClient\XM8\Apps\DeployVehicle\guard.sqf";
    };
	class ExAd_APOC_Airdrop
	{
		title = "APOC Airdrop";
		controlID = 66000;					//IDC:66000 -> 66005 || These need to be unique and out of range from each other
		logo = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\supplydrop_ca.paa";
		config = "ExadClient\XM8\Apps\APOC_Airdrop\config.sqf";
		onLoad = "ExAdClient\XM8\Apps\APOC_Airdrop\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\APOC_Airdrop\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\APOC_Airdrop\onClose.sqf";
	};
	   /*class ExAd_WaterScooter
    {
        title = "Deploy WaterScooter";
        config = "ExAdClient\XM8\Apps\DeployVehicle\config.sqf";
        logo = "ExAdClient\XM8\Apps\DeployVehicle\WaterScooter.paa";
        bambiState = 0;
        vehicleClass = "Exile_Boat_WaterScooter";
        recipe[] = {{"Exile_Item_JunkMetal",1}};
        packable = 1;
        autoCleanUp = 1;
        quickFunction = "['ExAd_WaterScooter'] call ExAd_XM8_DV_fnc_spawnVehicle";
    }; */  
};    
/*
	XM8 Extra apps, the Exile way of doing it
	
	Here is an example app layout:
	class XM8_App01_Button: RscExileXM8AppButton1x1
	{
	    textureNoShortcut = "";  	// Path to picture. This can be via mission file or client side PBO
	    text = "";					// The name of the app to be display on the button
	    onButtonClick = "";			// The code to fire when the app is clicked
	    resource = "";				// The name of the resource to load for the app, leave as an empty string if you just want to run code without a GUI, like BOOM or spawning a bike
	};
*/

class XM8_App01_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_settings_ca.paa";
    text = "Settings";
    onButtonClick = "['settings', 0] call ExileClient_gui_xm8_slide";
    resource = "XM8SlideSettings";
};

class XM8_App02_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_health_scanner_ca.paa";
    text = "Health Scanner";
    onButtonClick = "['healthScanner', 0] call ExileClient_gui_xm8_slide";
    resource = "XM8SlideHealthScanner";
};

class XM8_App03_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_boom_ca.paa";
    text = "BOOM!";
    onButtonClick = "call ExileClient_system_breaching_detonate";
    resource = "";
};

class XM8_App04_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "ExadClient\XM8\Apps\CHVD\Icon_CHVD.paa";
    text = "View Distance Settings";
    onButtonClick = "['ExAd_CHVD', 0] call ExileClient_gui_xm8_slide";
    resource = "";
};

class XM8_App05_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "ExadClient\XM8\Apps\Info\Icon_SI.paa";
    text = "Server Rules";
    onButtonClick = "['ExAd_Info', 0] call ExileClient_gui_xm8_slide";
    resource = "";
};

class XM8_App06_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "ExadClient\XM8\Apps\JX\logo.paa";
    text = "Unit Scanner";
    onButtonClick = "['ExAd_JX', 0] call ExileClient_gui_xm8_slide";
    resource = "";
};

class XM8_App07_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "ExAdClient\XM8\Apps\BRAmaRecipes\BRAma.paa";
    text = "BRAmaRecipes";
    onButtonClick = "['BRAmaRecipes', 0] call ExileClient_gui_xm8_slide";
    resource = "";
};

class XM8_App08_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "ExAdClient\XM8\Apps\BaseMarker\BaseMarker.paa";
    text = "Base Marker";
    onButtonClick = "['Basemarker', 0] call ExileClient_gui_xm8_slide";
    resource = "";
};

class XM8_App09_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "exile_assets\texture\ui\xm8_app_settings_ca.paa";
    text = "Status Bar Settings";
    onButtonClick = "['ExAd_SB', 0] call ExileClient_gui_xm8_slide";
    resource = "";
};

class XM8_App10_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "ExAdClient\XM8\Apps\DeployVehicle\mud.paa";
    text = "Deploy Quad Bike";
    onButtonClick = "['ExAd_Quad'] call ExAd_XM8_DV_fnc_spawnVehicle";
    resource = "";
};

class XM8_App11_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "ExAdClient\XM8\Apps\DeployVehicle\dog.paa";
    text = "Recruit Soldier";
    onButtonClick = "ExileClientXM8CurrentSlide = 'apps';closeDialog 0;[] execVM 'ExAdClient\XM8\Apps\DeployVehicle\guard.sqf'";
    resource = "";
};

class XM8_App12_Button: RscExileXM8AppButton1x1
{
   textureNoShortcut = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\supplydrop_ca.paa";
    text = "APOC Airdrop";
	onButtonClick = "['ExAd_APOC_Airdrop', 0] call ExileClient_gui_xm8_slide";
    resource = "";
};

class XM8_App13_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App14_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											   BELOW IS WHERE ALL THE XM8 APP RESOURCES CAN GO
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class XM8SlideSettings: RscExileXM8Slide 
{
	idc = 4070;
	class Controls 
	{
		class GoBackButton: RscExileXM8ButtonMenu
		{
			idc = 4071;
			text = "GO BACK"; 
			x = (30 - 3) * (0.025);
			y = (19 - 2) * (0.04);
			w = 6 * (0.025);
			h = 1 * (0.04);
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};

		class 8GDropDown: RscExileXM8Combo
		{
			idc = 4072;
			x = (5 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_on8GSelectionChanged";
		};

		class 8GLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Show my device in global 8G network."; 
			x = (13 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class SoundDropDown: RscExileXM8Combo
		{
			idc = 4075;
			x = (5 - 3) * (0.025);
			y = (7 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onSoundSelectionChanged";
		};

		class SoundLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Play a beep sound on notifications."; 
			x = (13 - 3) * (0.025);
			y = (7 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyEspDropDown: RscExileXM8Combo
		{
			idc = 4076;
			x = (5 - 3) * (0.025);
			y = (9 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyEspSelectionChanged";
		};

		class PartyEspLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Color of 3D party icons and name tags."; 
			x = (13 - 3) * (0.025);
			y = (9 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyEspSlider: RscExileXM8XSliderH
		{
			idc = 4078;
			x = (5 - 3) * (0.025);
			y = (11 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onSliderPosChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyEspSliderChanged";
		};

		class PartyEspSliderLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Opacity of 3D party icons and name tags."; 
			x = (13 - 3) * (0.025);
			y = (11 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyMarkerSlider: RscExileXM8XSliderH
		{
			idc = 4079;
			x = (5 - 3) * (0.025);
			y = (13 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onSliderPosChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyMarkerSliderChanged";
		};

		class PartyMarkerSliderLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Opacity of 3D party markers."; 
			x = (13 - 3) * (0.025);
			y = (13 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class StreamModeDropDown: RscExileXM8Combo
		{
			idc = 4077;
			x = (5 - 3) * (0.025);
			y = (15 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onStreamModeSelectionChanged";
		};

		class StreamModeLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Masquerade PIN codes. Perfect for streamers."; 
			x = (13 - 3) * (0.025);
			y = (15 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};
	};
};

class XM8SlideHealthScanner: RscExileXM8Slide
{
	idc = 4120;
	class Controls 
	{
		class GoBackButton: RscExileXM8ButtonMenu
		{
			idc = 4122;
			text = "GO BACK"; 
			x = (30 - 3) * (0.025);
			y = (19 - 2) * (0.04);
			w = 6 * (0.025);
			h = 1 * (0.04);
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};

		class HealthInfoControlGroup: RscExileXM8ControlsGroupNoHScrollbars
		{
			idc = -1;
			x = (5 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 30 * (0.025);
			h = 15 * (0.04);
			colorBackground[] = {0,0,0,0.25};

			class controls
			{
				class HealthInfo: RscExileXM8StructuredText
				{
					idc = 4121;
					x = 0;
					y = 0;
					w = 29 * (0.025); // minus 1!
					h = 15 * (0.04);
				};
			};
		};
	};
};

class XM8SlideSlothMachine: RscExileXM8Slide
{
	idc = 4140;
	class Controls 
	{
		class Background: RscExileXM8PictureKeepAspect
		{
			idc = -1;
			text = "\exile_assets\texture\ui\slothMachine\xm8_slothMachineBackground.paa";
			x = -3.1 * (0.025) + (0);
			y = -6 * (0.04) + (0);
			w = 40 * (0.025);
			h = 33 * (0.04);
		};
		
		class XM8SlothMachineSpinButton: RscExileXM8PictureButton
		{
			idc = 4141;
			style = 0x30;
			x = 14.3 * (0.025) + (0);
			y = 15.9 * (0.04) + (0);
			w = 5.7 * (0.025);
			h = 2 * (0.04);
			text = "\exile_assets\texture\ui\slothMachine\button_off_ca.paa";
			action = "[] call ExileClient_gui_xm8_slide_slothMachine_event_onSpinButtonClick;";
		};
		
		class GoBackButton: RscExileXM8ButtonMenu
		{
			idc = 4148;
			text = "GO BACK"; 
			x = (30 - 3) * (0.025);
			y = (19 - 2) * (0.04);
			w = 6 * (0.025);
			h = 1 * (0.04);
			sizeEx = .9 * (0.04);
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};
		
		class PopTabsLabel: RscExileXM8StructuredText
		{
			idc = 4142;
			text = "<t align='center'><t color='#e14141'><img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>";
			x = 6.5 * (0.025) + (0);
			y = 13 * (0.04) + (0);
			w = 6 * (0.025);
			h = 2 * (0.04);
		};
		
		class JackpotLabel: RscExileXM8StructuredText
		{
			idc = 4143;
			text = "<t align='center'><t color='#e14141'></t>";
			x = 14 * (0.025) + (0);
			y = 13 * (0.04) + (0);
			w = 6 * (0.025);
			h = 2 * (0.04);
		};
		
		class WinningsLabel: RscExileXM8StructuredText
		{
			idc = 4144;
			text = "<t align='center'><t color='#e14141'>0</t>";
			x = 21.5 * (0.025) + (0);
			y = 13 * (0.04) + (0);
			w = 6 * (0.025);
			h = 2 * (0.04);
		};
		
		class Symbol01: RscExileXM8PictureKeepAspect
		{
			idc = 4145;
			text = "";
			x = 6.55 * (0.025) + (0);
			y = 4 * (0.04) + (0);
			w = 5.83 * (0.025);
			h = 5 * (0.04);
		};
		
		class Symbol02: RscExileXM8PictureKeepAspect
		{
			idc = 4146;
			text = "";
			x = 14.1 * (0.025) + (0);
			y = 4 * (0.04) + (0);
			w = 5.83 * (0.025);
			h = 5 * (0.04);
		};
		
		class Symbol03: RscExileXM8PictureKeepAspect
		{
			idc = 4147;
			text = "";
			x = 21.6 * (0.025) + (0);
			y = 4 * (0.04) + (0);
			w = 5.83 * (0.025);
			h = 5 * (0.04);
		};
	};
};