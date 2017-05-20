/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 

class CfgClans
{
	/*
		Defines the amount of pop tabs needed to register a new clan

		Default: 20,000
	*/
	registrationFee = 20000;

	/*
		A list of all characters allowed in a clan *name*

		NOTE: 
	*/
	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ._-!:\\/";

	/*

		Maximum markers per clan

	*/
	maximumIcons = 20;

	/*
		Maximum number of characters on a Marker in a presistent system

		Note: MAX 255!
		
	*/
	maximumIconText = 50;

	/*

		Maximum poly markers per clan

	*/
	maximumPolys = 10;


	/* 

		Maximum points in poly
	*/
	maximumPolyNode = 10;
};
class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CfgInteractionModels
	requiresOcean = 0; // isSurfaceWater test
	requiresFire = 0; // inflamed object nearby
	requiresConcreteMixer = 0; // Check if concrete mixer is nearby
};

class CfgCraftingRecipes
{
	
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
		{1, "SatchelCharge_Remote_Mag"}
	};
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
		{1, "DemoCharge_Remote_Mag"}
	};
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
};

class CookSurstromming: Exile_AbstractCraftingRecipe
{
	name = "Cook Surströmming";
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
};

class CraftConcreteDoorway: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Doorway";
	pictureItem = "Exile_Item_ConcreteDoorwayKit";
	requiresConcreteMixer = true;
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
class CraftConcreteFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor";
	pictureItem = "Exile_Item_ConcreteFloorKit";
	requiresConcreteMixer = true;
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
};
class CraftConcreteFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor Port";
	pictureItem = "Exile_Item_ConcreteFloorPortKit";
	requiresConcreteMixer = true;
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
class CraftConcreteGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Gate";
	pictureItem = "Exile_Item_ConcreteGateKit";
	requiresConcreteMixer = true;
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
class CraftConcretStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Stairs";
	pictureItem = "Exile_Item_ConcreteStairsKit";
	requiresConcreteMixer = true;
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
};
class CraftConcretSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Support";
	pictureItem = "Exile_Item_ConcreteSupportKit";
	requiresConcreteMixer = true;
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
};
class CraftConcreteWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Wall";
	pictureItem = "Exile_Item_ConcreteWallKit";
	requiresConcreteMixer = true;
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
};
class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
{
	name = "Craft Fortification Upgrade";
	pictureItem = "Exile_Item_MetalBoard"; //<< CHANGE IT
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
};
/*class CraftRazorWireKit: Exile_AbstractCraftingRecipe
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
};*/
class CraftRepairKitConcrete: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Repair Kit";
	pictureItem = "Exile_Item_Cement";
	requiresConcreteMixer = true;
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
};
};

class CfgExileArsenal
{
	#include "custom\traders\CfgExileArsenal.hpp"
};


class CfgExileCustomCode 
{
	/*
		You can overwrite every single file of our code without touching it.
		To do that, add the function name you want to overwrite plus the 
		path to your custom file here. If you wonder how this works, have a
		look at our bootstrap/fn_preInit.sqf function.

		Simply add the following scheme here:

		<Function Name of Exile> = "<New File Name>";

		Example:

		ExileClient_util_fusRoDah = "myaddon\myfunction.sqf";
	*/
	
	ExileServer_object_construction_database_insert 							= "custom\extdb3_fix\ExileServer_object_construction_database_insert.sqf";
	ExileServer_object_construction_database_load 								= "custom\extdb3_fix\ExileServer_object_construction_database_load.sqf";
	ExileServer_object_container_database_insert 								= "custom\extdb3_fix\ExileServer_object_container_database_insert.sqf";
	ExileServer_object_container_database_update								= "custom\extdb3_fix\ExileServer_object_container_database_update.sqf";
	ExileServer_object_player_database_insert 									= "custom\extdb3_fix\ExileServer_object_player_database_insert.sqf";
	ExileServer_object_player_event_onMpKilled 									= "custom\extdb3_fix\ExileServer_object_player_event_onMpKilled.sqf";
	ExileServer_system_database_connect 										= "custom\extdb3_fix\ExileServer_system_database_connect.sqf";
	ExileServer_system_database_handleBig 										= "custom\extdb3_fix\ExileServer_system_database_handleBig.sqf";
	ExileServer_system_database_query_fireAndForget 							= "custom\extdb3_fix\ExileServer_system_database_query_fireAndForget.sqf";
	ExileServer_system_database_query_insertSingle						 		= "custom\extdb3_fix\ExileServer_system_database_query_insertSingle.sqf";
	ExileServer_system_database_query_selectFull 								= "custom\extdb3_fix\ExileServer_system_database_query_selectFull.sqf";
	ExileServer_system_database_query_selectSingle 								= "custom\extdb3_fix\ExileServer_system_database_query_selectSingle.sqf";
	ExileServer_system_database_query_selectSingleField 						= "custom\extdb3_fix\ExileServer_system_database_query_selectSingleField.sqf";
	ExileServer_system_territory_database_insert 								= "custom\extdb3_fix\ExileServer_system_territory_database_insert.sqf";
	ExileServer_system_territory_maintenance_recalculateDueDate 				= "custom\extdb3_fix\ExileServer_system_territory_maintenance_recalculateDueDate.sqf";
	ExileServer_system_territory_network_flagStolenRequest 						= "custom\extdb3_fix\ExileServer_system_territory_network_flagStolenRequest.sqf";
	ExileServer_system_territory_network_payFlagRansomRequest 					= "custom\extdb3_fix\ExileServer_system_territory_network_payFlagRansomRequest.sqf";
	ExileServer_system_territory_network_payTerritoryProtectionMoneyRequest 	= "custom\extdb3_fix\ExileServer_system_territory_network_payTerritoryProtectionMoneyRequest.sqf";
	ExileServer_system_territory_network_purchaseTerritory 						= "custom\extdb3_fix\ExileServer_system_territory_network_purchaseTerritory.sqf";
	ExileServer_system_territory_network_restoreFlagRequest 					= "custom\extdb3_fix\ExileServer_system_territory_network_restoreFlagRequest.sqf";
	ExileServer_system_territory_network_territoryUpgradeRequest 				= "custom\extdb3_fix\ExileServer_system_territory_network_territoryUpgradeRequest.sqf";
	ExileServer_system_trading_network_purchaseItemRequest 						= "custom\extdb3_fix\ExileServer_system_trading_network_purchaseItemRequest.sqf";
	ExileServer_system_trading_network_purchaseVehicleRequest 					= "custom\extdb3_fix\ExileServer_system_trading_network_purchaseVehicleRequest.sqf";
	ExileServer_system_trading_network_purchaseVehicleSkinRequest 				= "custom\extdb3_fix\ExileServer_system_trading_network_purchaseVehicleSkinRequest.sqf";
	ExileServer_system_trading_network_sellItemRequest 							= "custom\extdb3_fix\ExileServer_system_trading_network_sellItemRequest.sqf";
	//ExileServer_system_trading_network_wasteDumpRequest 						= "custom\extdb3_fix\ExileServer_system_trading_network_wasteDumpRequest.sqf";
	ExileServer_util_time_addTime 												= "custom\extdb3_fix\ExileServer_util_time_addTime.sqf";
	ExileServer_util_time_currentTime 											= "custom\extdb3_fix\ExileServer_util_time_currentTime.sqf";
	ExileServer_util_time_uptime 												= "custom\extdb3_fix\ExileServer_util_time_uptime.sqf";
	//MarXet
	ExileServer_system_network_dispatchIncomingMessage 							= "custom\overrides\ExileServer_system_network_dispatchIncomingMessage.sqf";
	// Trader Launcher FIX
	ExileClient_util_playerEquipment_add										= "custom\overrides\ExileClient_util_playerEquipment_add.sqf";
	// Set Car Magazines to only 1
	ExileServer_world_spawnVehicles												= "custom\overrides\ExileServer_world_spawnVehicles.sqf";
	// Get Poptabs for Drinks
	ExileClient_object_item_consume												= "custom\overrides\ExileClient_object_item_consume.sqf";
	//Enigma Deploybike
	ExileClient_gui_inventory_event_onSlotDoubleClick 							= "custom\plugin\EnigmaPersonalVehicle\ExileClient_gui_inventory_event_onSlotDoubleClick.sqf"; 
	//Sell Crates to Waste Dump 
	ExileClient_gui_traderDialog_updateInventoryDropdown 						= "custom\overrides\ExileClient_gui_traderDialog_updateInventoryDropdown.sqf";
	// R3F-WasteDump
	ExileClient_gui_wasteDumpDialog_show 										= "custom\overrides\ExileClient_gui_wasteDumpDialog_show.sqf";
	ExileServer_system_trading_network_wasteDumpRequest 						= "custom\overrides\ExileServer_system_trading_network_wasteDumpRequest.sqf";
	ExileClient_gui_wasteDumpDialog_event_onModeDropDownSelectionChanged 		= "custom\overrides\ExileClient_gui_wasteDumpDialog_event_onModeDropDownSelectionChanged.sqf"; 
	//EnigmaRevive
	ExileClient_object_player_death_startBleedingOut 							= "custom\plugin\EnigmaRevive\ExileClient_object_player_death_startBleedingOut.sqf"; //Happys Revive
	ExileClient_object_player_event_onInventoryOpened 							= "custom\plugin\EnigmaRevive\ExileClient_object_player_event_onInventoryOpened.sqf"; //Happys Revive AntiDupe ---NEW with v0.65
	//ExAd Pack
	ExileServer_system_territory_database_load 									= "custom\plugin\ExAdClient\VirtualGarage\CustomCode\ExileServer_system_territory_database_load.sqf";
	ExileClient_gui_xm8_slide 													= "custom\plugin\ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_slide.sqf";
	ExileClient_gui_xm8_show 													= "custom\plugin\ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_show.sqf";
	//Lottery
	ExileClient_gui_xm8_slide_apps_onOpen										= "custom\overrides\ExileClient_gui_xm8_slide_apps_onOpen.sqf";
	//1.0.3 Lootsystem
	ExileServer_system_process_postInit											= "custom\overrides\ExileServer_system_process_postInit.sqf";
	ExileServer_system_lootManager_initialize									= "custom\overrides\ExileServer_system_lootManager_initialize.sqf";
	ExileServer_system_lootManager_dropItem										= "custom\overrides\ExileServer_system_lootManager_dropItem.sqf";

};
class CfgExileEnvironment
{
	class Altis 
	{
		class FireFlies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour fire flies begin to spawn
			startHour = 18;

			// At this hour fire flies stop spawning
			endHour = 4;
		};

		class Anomalies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour anomalies begin to spawn
			startHour = 19;

			// At this hour anomalies stop spawning
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
			enable = 1;
		};

		class Temperature
		{
			// Temperature in °C for the time of day, per hour
			// Add the first index to the last index, so it is 25 indizes!
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		
			// Temperature change in °C when it is 100% overcast
			overcast = -2;

			// Temperature change in °C when it is 100% raining
			rain = -5;

			// Temperature change in °C when it is 100% windy
			wind = -1;

			// Temperature change per 100m altitude in °C
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
			enable = 1;
		};

		class Snow: Snow
		{
			enable = 1;
			surfaces[] = {"#nam_snow"};
		};

		class Radiation: Radiation
		{
			enable = 1;
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
			enable = 1;
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

		Exile_Item_ZipTie[]					= {"ZIP", "TIE"};
	};
};
class CfgExileLootSettings
{
	/**
	 * Lifetime of loot in minutes. Synchronize this with
	 * the garbage collector settings of your server
	 * CfgSettings!
	 */
	lifeTime = 8;

	/**
	 * Interval in seconds when the client searches for
	 * new buildings to spawn loot in
	 */
	spawnInterval = 5;

	/**
	 * This is a percentage value to determine how many loot
	 * positions should contain loot when the system spawns loot.
	 *
	 * If a building has 20 positions defined, Exile will 
	 * spawn loot in 10 random positions of them.
	 * 
	 * This means smaller buildings spawn less loot and larger
	 * ones spawn more loot.
	 *
	 * You can also cap it at a maximum value. See below.
	 */
	maximumPositionCoverage = 30;

 	/**
 	 * Limit the number of loot positions per building. If the 
 	 * above percentage value exceeds this value, it will be capped.
 	 *
 	 * Example: Coverage is 50%. Building has 60 loot positions defined.
 	 * This results in 30 loot positions and that is too much. So we
 	 * cap this at 10
 	 */
	maximumNumberOfLootSpotsPerBuilding = 3;

	/**
	 * Exile spawns a random number of items per loot spot. This 
	 * is the upper cap for that. So 3 means it could spawn 1, 2 
	 * or 3.
	 */
	maximumNumberOfItemsPerLootSpot = 2;

	/**
	 * Radius in meter to spawn loot AROUND each player.
	 * Do NOT touch this value if you dont know what you do.
	 * The higher the number, the higher the drop rates, the
	 * easier your server will lag.
	 *
	 * 50m  = Minimum
	 * 200m = Maximum
	 */
	spawnRadius = 60;

	/**
	 * Defines the radius around trader cities where the system should
	 * not spawn loot. Set this to 0 if you want to have loot spawning
	 * in trader citites, ugh.
	 */
	minimumDistanceToTraderZones = 500;

	/**
	 * Defines the radius around territories where no loot spawns.
	 * This does not regard the actual size of a territory. So do not
	 * set this to a lower value than the maximum radius of a territory,
	 * which is 150m by default.
	 */
	minimumDistanceToTerritories = 150;
};
class CfgExileMobileXM8
{
	/**
	 * Add the 4 digit permission code here, so players can authorize
	 * your server to send them messages to their Mobile XM8 app.
	 */
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
	/*
		Minimum amount to join a session of 
		russian roulette
	*/
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

class ExileAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};

/**
 * Sort this by probability of occurence to speed things up a bit
 */
class CfgInteractionMenus
{
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
			
		    // Salvage Vehicle
            class Salvage: ExileAbstractAction
            {
                title = "Salvage Vehicle";
                condition = "(!(alive (ExileClientInteractionObject)))";
                action = "_this call HGA_fnc_SalvageVehicle";
            };

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};
			
			//Claim a Vehicle
            class ClaimVehicle: ExileAbstractAction
            {
            title = "Claim Ownership";
            condition = "true";
            action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
            };

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
		};
	};

	class Tank
	{
		target = "Tank";
		targetType = 2;

		class Actions
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && ((locked ExileClientInteractionObject) != 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};
			
		    // Salvage Vehicle
            class Salvage: ExileAbstractAction
            {
                title = "Salvage Vehicle";
                condition = "(!(alive (ExileClientInteractionObject)))";
                action = "_this call HGA_fnc_SalvageVehicle";
            };

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};
			
			//Claim a Vehicle
            class ClaimVehicle: ExileAbstractAction
            {
            title = "Claim Ownership";
            condition = "true";
            action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
            };

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
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

		    // Salvage Vehicle
            class Salvage: ExileAbstractAction
            {
                title = "Salvage Vehicle";
                condition = "(!(alive (ExileClientInteractionObject)))";
                action = "_this call HGA_fnc_SalvageVehicle";
            };
			
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};
			
			//Claim a Vehicle
            class ClaimVehicle: ExileAbstractAction
            {
            title = "Claim Ownership";
            condition = "true";
            action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
            };

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
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

			// Locks a vehicle
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
			class HackSafe : ExileAbstractAction
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

			class Install: ExileAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExileClientInteractionObject) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_install";
			};

			class Unmount: ExileAbstractAction
			{
				title = "Unmount";
				condition = "!(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_unmount";
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

			// Picks up the construction so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_move";
			};

			// Removes the construction.
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
			class Grind : ExileAbstractAction
			{
				title = "Grind Lock";
				condition = "call ExAd_fnc_canGrindLock";
				action = "_this spawn ExAd_fnc_grindLock";
			};
			
			class RestoreLock : ExileAbstractAction
			{
				title = "Restore Lock";
				condition = "_object call ExAd_fnc_canRestoreLock";
				action = "_this spawn ExAd_fnc_restoreLock";
			};
		};
	};

	/*
		Tent, Storage crate etc.
	*/
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
			// Picks up the container so you can move it
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
			/*
			class Manage : ExileAbstractAction
			{
				title = "Manage";
				condition = "true";
				action = "_this call ExileClient_gui_baseManagement_event_show";
			};
			*/
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
			
			class HackVG : ExileAbstractAction
			{
				title = "Hack Virtual Garage";
				condition = "call ExAd_fnc_canHackVG";
				action = "_this spawn ExAd_fnc_startHack";
			};
			
		};
	};

	class Boat 
	{
		targetType = 2;
		target = "Ship";

		class Actions
		{
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			// Pushes a boat into look direction to move into water
			class Push: ExileAbstractAction
			{
				title = "Fus Ro Dah!";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
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
			
			//////////////Added by [_ZEN_]happydayz/////////////////
			
			class Revive: ExileAbstractAction
			{
				title = "Perform CPR";
				condition = "(!(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['EnigmaRevivePermitted', true]) && (magazines player find 'Exile_Item_Defibrillator' >= 0))";
				action = "_this spawn Enigma_RevivePlyr";
			};	
			
			class HideCorpse: ExileAbstractAction
			{
				title = "Hide Body";
				condition = "!(alive ExileClientInteractionObject) && ('Exile_Melee_Shovel' isEqualTo (currentWeapon player))";
				action = "['HideBody', (_this select 0)] call ExileClient_action_execute";
			};
		};
	};
};
/**
 * Classname is used for reference
 * name is displayed in crafting requirements
 * models is used for crafting and interaction menus
 */
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

			// Namalsk
			"wellpump",
			"Land_jhad_stand_water",
			"Land_Jbad_Misc_Well_L",
			"Land_jbad_Fridge",
			"Land_jbad_reservoir",
			"Land_jbad_teapot",
			"Land_KBud",
			
			//Tanoa
			"watertank_01_f",
			"watertank_02_f",
			"watertank_03_f",
			"watertank_04_f"
		};
	};

	class CleanWaterSource
	{
		name = "Water cooler";
		models[] = 	
		{
			"watercooler"
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
			// Arma 3
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

			// Namalsk
			"nam_container.p3d",
			"misc_cargo1d.p3d",
			"misc_cargo1b.p3d",
			"misc_cargo1bo.p3d",
			"misc_cargo2c.p3d",
			"misc_cargo1ao.p3d",
			
			//Tanoa
			"Land_ContainerLine_01_F",
			"Land_ContainerLine_02_F",
			"Land_ContainerLine_03_F",

			// Also allow wrecks
			"wreck_"
/*			
			"wreck_bmp2_f.p3d",
			"wreck_brdm2_f.p3d",
			"wreck_car2_f.p3d",
			"wreck_car3_f.p3d",
			"wreck_car_f.p3d",
			"wreck_cardismantled_f.p3d",
			"wreck_hmmwv_f.p3d",
			"wreck_hunter_f.p3d",
			"wreck_offroad2_f.p3d",
			"wreck_offroad_f.p3d",
			"wreck_skodovka_f.p3d",
			"wreck_slammer_f.p3d",
			"wreck_slammer_hull_f.p3d",
			"wreck_slammer_turret_f.p3d",
			"wreck_t72_hull_f.p3d",
			"wreck_t72_turret_f.p3d",
			"wreck_truck_dropside_f.p3d",
			"wreck_truck_f.p3d",
			"wreck_uaz_f.p3d",
			"wreck_ural_f.p3d"
			"wreck_van_f.p3d",
			*/


			// TODO: Ask community for CUP/AiA model names	
		};
	};

	class WoodSource
	{
		name = "Trees";
		models[] = 
		{
			" t_",
			" bo_t_",

			// A2 trees
            " str_",
            " Smrk_",
            " les_",
            " brg_"			
		};
	};

	// TODO: Add https://community.bistudio.com/wikidata/images/thumb/6/60/Arma3_CfgVehicles_Land_Tank_rust_F.jpg/150px-Arma3_CfgVehicles_Land_Tank_rust_F.jpg
	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			"fuelstation_feed_f.p3d",
			"metalbarrel_f.p3d",
			"flexibletank_01_f.p3d",
			"fs_feed_f.p3d",
			//Tanoa
			"fuelstation_01_pump_f.p3d",
			"fuelstation_02_pump_f.p3d"
		};	
	};
};
class CfgLocker 
{
	numbersOnly = "0123456789";
	
	maxDeposit = 10000000;
};

class CfgPlayer 
{
	// In minutes ammount of time it takes to go from 100 - 0 if stationary
	hungerDecay = 90;
	thirstDecay = 60;

	// Damage taken from 0 (health||thirst)/sec
	healthDecay = 5.0;

	// Health regen if over BOTH
	thirstRegen = 90;
	hungerRegen = 90;

	// IF above meet recover HP%/MIN
	recoveryPerMinute = 2;

	// Set custom aim precision coefficient for weapon sway
	// https://community.bistudio.com/wiki/Arma_3_Stamina
	// Set to -1 if you want to use Arma 3 default value
	// setCustomAimCoef
	customAimCoefficient = 0.5;

	// 0 or 1
	enableFatigue = 0;
	enableStamina = 0;

	disableMapDrawing = 1;
};
class CfgSlothMachine
{
	spinCost = 100;
	Jackpot = 10100;
	
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
			symbol = "\exile_assets\texture\item\Exile_Item_Knife.paa";
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
	// Base Cost / Radius
	// Level 1 is allways for Pop Tabs, >= 2 for Respect
	prices[] = 
	{
		// Purchase Price 		Radius 		Number of Objects
		{5000,					15,			30 					}, // Level 1
		{10000,					30,			60 					}, // Level 2 
		{15000,					45,			90 					}, // Level 3
		{20000,					60,			120					}, // Level 4
		{25000,					75,			150					}, // Level 5
		{30000,					90,			180					}, // Level 6
		{35000,					105,		210					}, // Level 7
		{40000,					120,		240					}, // Level 8
		{45000,					135,		270					}, // Level 9
		{50000,					150,		300					}  // Level 10
	};

	// A shortcut of the above maximum radius
	maximumRadius = 150;

	// The above * 2 plus coverving the 20m you can move while placing things
	minimumDistanceToOtherTerritories = 325; 

	// Maximum number of territories a player can own
	maximumNumberOfTerritoriesPerPlayer = 2;

	/**
	 * Defines the minimum distance to safe zones / trader cities where players
	 * cannot build territories
	 */
	minimumDistanceToTraderZones = 1000;

	/**
	 * Defines the minimum distance to spawn zones where players
	 * cannot build territories
	 */
	minimumDistanceToSpawnZones = 1000;

	// Amount of pop tabs per object to pay
	popTabAmountPerObject = 10;
};

class CfgTraderCategories
{
	#include "custom\traders\CfgTraderCategories.hpp"
};

class CfgTraders
{
	#include "custom\traders\CfgTraders.hpp"
};

class CfgTrading 
{
	/*
	* This factor defines the difference between sales/purchase price of
	* items and vehicles. It is used if there is no sales price defined
	* in CfgExileArsenal. 
	*/
	sellPriceFactor = 0.5;
	
	rekeyPriceFactor = 0.1;

	class requiredRespect 
	{
		Level1 = 0;
		Level2 = 5000;
		Level3 = 10000;
		Level4 = 15000;
		Level5 = 20000;
		Level6 = 25000;
	};
};

class CfgVehicleCustoms
{
	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Bike_QuadBike_Blue",		200, "Blue",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"};},
			{"Exile_Bike_QuadBike_Pink", 	    200, "Pink",        {"#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Bike_QuadBike_Green", 	    200, "Green",       {"#(argb,8,8,3)color(0,1,0,1)"};},	
			{"Exile_Bike_QuadBike_Tan", 	    200, "Tan",         {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},				
			{"Exile_Bike_QuadBike_Hex", 	    200, "Green Hex",   {"\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_ghex_CO.paa","\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_wheel_ghex_CO.paa"};},			
			{"Exile_Bike_QuadBike_Red",			200, "Red",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"};},
			{"Exile_Bike_QuadBike_White",		200, "White",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"};},
			{"Exile_Bike_QuadBike_Nato",		300, "NATO",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"};},
			{"Exile_Bike_QuadBike_Csat",		300, "CSAT",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"};},
			{"Exile_Bike_QuadBike_Fia",			300, "FIA",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_INDP_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_INDP_CO.paa"};},
			{"Exile_Bike_QuadBike_Guerilla01",	300, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"};},
			{"Exile_Bike_QuadBike_Guerilla02",	300, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"};},
			{"Exile_Bike_QuadBike_Black",		200, "Black",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_MotorBoat_Police",		1300, "Police", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"};},			
			{"Exile_Boat_MotorBoat_Orange",		1200, "Orange", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"};},
			{"Exile_Boat_MotorBoat_Red",		1300, "Red",    {"\a3\boat_f_gamma\Boat_Civil_04\data\boat_civil_04_1_co.paa","\a3\boat_f_gamma\Boat_Civil_04\data\boat_civil_04_2_co.paa"};},
			{"Exile_Boat_MotorBoat_Pink", 	    1200, "Pink",   {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Boat_MotorBoat_White", 	    1200, "White",  {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},			
			{"Exile_Boat_MotorBoat_Green", 	    1200, "Green",  {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},	
			{"Exile_Boat_MotorBoat_Blue", 	    1200, "Blue",   {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},	
			{"Exile_Boat_MotorBoat_Black", 	    1200, "Black",  {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},
			{"Exile_Boat_MotorBoat_Tan", 	    1200, "Tan",    {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"Exile_Boat_MotorBoat_White",		1200, "White",  {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};}
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_RubberDuck_CSAT",		750, "CSAT",   {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"};},
			{"Exile_Boat_RubberDuck_Digital",	750, "Digital",{"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"};},
			{"Exile_Boat_RubberDuck_Orange",	600, "Orange", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"};},
			{"Exile_Boat_RubberDuck_Blue",		600, "Blue",   {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"};},
			{"Exile_Boat_RubberDuck_Pink", 	    600, "Pink",   {"#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Boat_RubberDuck_White", 	600, "White",  {"#(argb,8,8,3)color(1,1,1,1)"};},			
			{"Exile_Boat_RubberDuck_Red", 	    600, "Red",    {"#(argb,8,8,3)color(1,0,0,1)"};},	
			{"Exile_Boat_RubberDuck_Green", 	600, "Green",  {"#(argb,8,8,3)color(0,1,0,1)"};},	
			{"Exile_Boat_RubberDuck_Tan", 	    600, "Tan",    {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},					
			{"Exile_Boat_RubberDuck_Black",		600, "Black",  {"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Jetski
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_WaterScooter_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_WaterScooter",		400, "Blue",   {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"};},
			{"Exile_Boat_WaterScooter",     400, "Pink",   {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Boat_WaterScooter", 	400, "White",  {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},			
			{"Exile_Boat_WaterScooter",     400, "Green",  {"#(rgb,8,8,3)color(1,0.08,0.57,1)","#(rgb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Boat_WaterScooter",     400, "Blue",   {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},
			{"Exile_Boat_WaterScooter",     400, "Black",  {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},
			{"Exile_Boat_WaterScooter",     400, "Tan",    {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},
			{"Exile_Boat_WaterScooter",     400, "Red",    {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},			
			{"Exile_Boat_WaterScooter",		400, "Grey",   {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"};},
			{"Exile_Boat_WaterScooter",		400, "Lime",   {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"};},
			{"Exile_Boat_WaterScooter",		400, "Red",    {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};},
			{"Exile_Boat_WaterScooter",		400, "White",  {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};},
			{"Exile_Boat_WaterScooter",		400, "Yellow", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"};}
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_SDV_CSAT",		850, "CSAT",    {"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"};},
			{"Exile_Boat_SDV_Digital",	850, "Digital", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"};},
			{"Exile_Boat_SDV_Pink", 	800, "Pink",    {"#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Boat_SDV_White", 	800, "White",   {"#(argb,8,8,3)color(1,1,1,1)"};},			
			{"Exile_Boat_SDV_Red", 	    800, "Red",     {"#(argb,8,8,3)color(1,0,0,1)"};},	
			{"Exile_Boat_SDV_Green", 	800, "Green",   {"#(argb,8,8,3)color(0,1,0,1)"};},	
			{"Exile_Boat_SDV_Blue", 	800, "Blue",    {"#(argb,8,8,3)color(0,0,1,1)"};},	
			{"Exile_Boat_SDV_Black", 	800, "Black",   {"#(argb,8,8,3)color(0,0,0,0.6)"};},	
			{"Exile_Boat_SDV_Tan", 	    800, "Tan",     {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},				
			{"Exile_Boat_SDV_Grey",		800, "Grey",    {"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Schnell Boot MG
	///////////////////////////////////////////////////////////////////////////////
	class Boat_Armed_01_minigun_base_F
	{
		skins[] = 
		{			
			{"I_Boat_Armed_01_minigun_CSAT_F",		1800, "CSAT",    {"\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_ext_co.paa","\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_co.paa","\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_crows_blufor_co.paa"};},
			{"I_Boat_Armed_01_minigun_FIA_F",	    1800, "FIA",     {"\A3\boat_f_beta\Boat_Armed_01\data\Boat_Armed_01_ext_INDP_co.paa","\A3\boat_f_beta\Boat_Armed_01\data\Boat_Armed_01_int_INDP_co.paa","\A3\boat_f_beta\Boat_Armed_01\data\Boat_Armed_01_crows_INDP_co.paa"};},
			{"I_Boat_Armed_01_minigun_Pink_F", 	    1800, "Pink",    {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"I_Boat_Armed_01_minigun_White_F", 	1800, "White",   {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},				
			{"I_Boat_Armed_01_minigun_Red_F", 	    1800, "Red",     {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},
			{"I_Boat_Armed_01_minigun_Green_F", 	1800, "Green",   {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},
			{"I_Boat_Armed_01_minigun_Blue_F", 	    1800, "Blue",    {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},
			{"I_Boat_Armed_01_minigun_Black_F", 	1800, "Black",   {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},
			{"I_Boat_Armed_01_minigun_Tan_F", 	    1800, "Tan",     {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"I_Boat_Armed_01_minigun_OPFER_F",		1800, "OPFER",   {"\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_ext_opfor_co.paa","\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_int_opfor_co.paa","\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_crows_OPFOR_co.paa"};}
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hellcat_Green", 1700, "Green",        {"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"};},
			{"Exile_Chopper_Hellcat_Pink", 	1700, "Pink",         {"#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Chopper_Hellcat_White", 1700, "White",        {"#(argb,8,8,3)color(1,1,1,1)"};},			
			{"Exile_Chopper_Hellcat_Red", 	1700, "Red",          {"#(argb,8,8,3)color(1,0,0,1)"};},	
			{"Exile_Chopper_Hellcat_Green", 1700, "Green Custom", {"#(argb,8,8,3)color(0,1,0,1)"};},	
			{"Exile_Chopper_Hellcat_Blue", 	1700, "Blue",         {"#(argb,8,8,3)color(0,0,1,1)"};},	
			{"Exile_Chopper_Hellcat_Black", 1700, "Black",        {"#(argb,8,8,3)color(0,0,0,0.6)"};},	
			{"Exile_Chopper_Hellcat_Tan", 	1700, "Tan",          {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"Exile_Chopper_Hellcat_FIA", 	1700, "FIA", 	      {"\A3\Air_F_EPB\Heli_Light_03\data\heli_light_03_base_indp_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat armed
	///////////////////////////////////////////////////////////////////////////////
	class Heli_light_03_base_F
	{
		skins[] = 
		{
			{"I_Heli_light_03_F",           1700, "Green", 	      {"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"};},
			{"I_Heli_light_03_F", 	        1700, "Pink",         {"#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"I_Heli_light_03_F",           1700, "White",        {"#(argb,8,8,3)color(1,1,1,1)"};},			
			{"I_Heli_light_03_F", 	        1700, "Red",          {"#(argb,8,8,3)color(1,0,0,1)"};},	
			{"I_Heli_light_03_F", 	        1700, "Green Custom", {"#(argb,8,8,3)color(0,1,0,1)"};},	
			{"I_Heli_light_03_F", 	        1700, "Blue",         {"#(argb,8,8,3)color(0,0,1,1)"};},	
			{"I_Heli_light_03_F", 	        1700, "Black",        {"#(argb,8,8,3)color(0,0,0,0.6)"};},	
			{"I_Heli_light_03_F", 	        1700, "Tan",          {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"I_Heli_light_03_F", 	        1700, "FIA", 	      {"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_INDP_CO.paa"};}
		};
	};
		
	///////////////////////////////////////////////////////////////////////////////
	// Karts
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Kart_BluKing", 			200, "Bluking", 	 {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_RedStone", 		200, "RedStone", 	 {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},
			{"Exile_Car_Kart_Vrana", 			200, "Vrana", 		 {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Green", 			200, "Green", 		 {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Pink", 	        200, "Pink",         {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Car_Kart_Red", 	            200, "Red",          {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},
			{"Exile_Car_Kart_White",            200, "White",        {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},			
			{"Exile_Car_Kart_Greenn", 	        200, "Green Custom", {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},
			{"Exile_Car_Kart_Bluee", 	        200, "Blue Custom",  {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},
			{"Exile_Car_Kart_Blackk", 	        200, "Black Black",  {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},
			{"Exile_Car_Kart_Tan", 	            200, "Tan",          {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"Exile_Car_Kart_Blue", 			200, "Blue", 		 {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Orange", 			200, "Orange",		 {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_White", 			200, "White", 		 {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Yellow", 			200, "Yellow", 		 {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Black", 			200, "Black", 		 {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};}	
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hummingbird_Civillian_Blue", 		1200, "Blue", 		    {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Red", 		1200, "Red", 		    {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_ION", 		1200, "ION", 		    {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_BlueLine", 	1200, "BlueLine", 	    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Digital", 	1200, "Digital", 	    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Elliptical", 	1200, "Elliptical", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Furious", 	1200, "Furious", 	    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_GrayWatcher", 1200, "GrayWatcher",	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Jeans", 		1200, "Jeans", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Pink", 	    1200, "Pink",           {"#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Chopper_Hummingbird_Civillian_White",       1200, "White",          {"#(argb,8,8,3)color(1,1,1,1)"};},			
			{"Exile_Chopper_Hummingbird_Civillian_Blackk", 		1200, "Black Custom", 	{"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_UNI_MC.paa"};},			
			{"Exile_Chopper_Hummingbird_Civillian_Red", 	    1200, "Red Red",        {"#(argb,8,8,3)color(1,0,0,1)"};},
			{"Exile_Chopper_Hummingbird_Civillian_Greenn", 	    1200, "Green",          {"#(argb,8,8,3)color(0,1,0,1)"};},
			{"Exile_Chopper_Hummingbird_Civillian_Bluee", 	    1200, "Blue Custom",    {"#(argb,8,8,3)color(0,0,1,1)"};},
			{"Exile_Chopper_Hummingbird_Civillian_Black", 	    1200, "Black",          {"#(argb,8,8,3)color(0,0,0,0.6)"};},
			{"Exile_Chopper_Hummingbird_Civillian_Tan", 	    1200, "Tan",            {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"Exile_Chopper_Hummingbird_Civillian_Light", 		1200, "Light", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Shadow", 		1200, "Shadow", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Sheriff", 	1200, "Sheriff", 	    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Speedy", 		1200, "Speedy", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Sunset", 		1200, "Sunset", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Vrana", 		1200, "Vrana", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Wasp", 		1200, "Wasp", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Wave", 		1200, "Wave", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird  
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hummingbird_Blue", 		    1200, "Blue", 		    {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"};},
			{"Exile_Chopper_Hummingbird_Red", 		    1200, "Red", 		    {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"};},
			{"Exile_Chopper_Hummingbird_ION", 		    1200, "ION", 		    {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};},
			{"Exile_Chopper_Hummingbird_BlueLine", 	    1200, "BlueLine", 	    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"};},
			{"Exile_Chopper_Hummingbird_Digital", 	    1200, "Digital", 	    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};},
			{"Exile_Chopper_Hummingbird_Elliptical", 	1200, "Elliptical", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"};},
			{"Exile_Chopper_Hummingbird_Furious", 	    1200, "Furious", 	    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"};},
			{"Exile_Chopper_Hummingbird_GrayWatcher",   1200, "GrayWatcher",	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"};},
			{"Exile_Chopper_Hummingbird_Jeans", 		1200, "Jeans", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"};},
			{"Exile_Chopper_Hummingbird_Green", 		1200, "Green", 		    {"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_Blufor_CO.paa"};},
			{"Exile_Chopper_Hummingbird_fia", 		    1200, "FIA", 		    {"A3\Air_F\Heli_Light_01\Data\heli_light_01_ext_indp_CO.paa"};},
			{"Exile_Chopper_Hummingbird_Blackk", 		1200, "Black Custom", 	{"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_UNI_MC.paa"};},			
			{"Exile_Chopper_Hummingbird_Pink", 	        1200, "Pink",           {"#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Chopper_Hummingbird_White",         1200, "White",          {"#(argb,8,8,3)color(1,1,1,1)"};},			
			{"Exile_Chopper_Hummingbird_Red", 	        1200, "Red Red",        {"#(argb,8,8,3)color(1,0,0,1)"};},
			{"Exile_Chopper_Hummingbird_Greenn", 	    1200, "Green Custom",   {"#(argb,8,8,3)color(0,1,0,1)"};},
			{"Exile_Chopper_Hummingbird_Bluee", 	    1200, "Blue Blue",      {"#(argb,8,8,3)color(0,0,1,1)"};},
			{"Exile_Chopper_Hummingbird_Black", 	    1200, "Black",          {"#(argb,8,8,3)color(0,0,0,0.6)"};},
			{"Exile_Chopper_Hummingbird_Tan", 	        1200, "Tan",            {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"Exile_Chopper_Hummingbird_Light", 		1200, "Light", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"};},
			{"Exile_Chopper_Hummingbird_Shadow", 		1200, "Shadow", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"};},
			{"Exile_Chopper_Hummingbird_Sheriff", 	    1200, "Sheriff", 	    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"};},
			{"Exile_Chopper_Hummingbird_Speedy", 		1200, "Speedy", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"};},
			{"Exile_Chopper_Hummingbird_Sunset", 		1200, "Sunset", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"};},
			{"Exile_Chopper_Hummingbird_Vrana", 		1200, "Vrana", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"};},
			{"Exile_Chopper_Hummingbird_Wasp", 		    1200, "Wasp", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"};},
			{"Exile_Chopper_Hummingbird_Wave", 		    1200, "Wave", 		    {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"};}
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huron_Black", 	    3500, "Black",        {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"};},
			{"Exile_Chopper_Huron_Pink", 	    3500, "Pink",         {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Chopper_Huron_White",       3500, "White",        {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},			
			{"Exile_Chopper_Huron_Red", 	    3500, "Red",          {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},
			{"Exile_Chopper_Huron_Green", 	    3500, "Green Custom", {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},
			{"Exile_Chopper_Huron_Blue", 	    3500, "Blue",         {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},
			{"Exile_Chopper_Huron_Blackk", 	    3500, "Black Custom", {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},
			{"Exile_Chopper_Huron_Tan", 	    3500, "Tan",          {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"Exile_Chopper_Huron_Green", 	    3500, "Green",        {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"};}			
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// Huron armed
	///////////////////////////////////////////////////////////////////////////////
	class B_Heli_Transport_03_black_F
	{
		skins[] = 
		{
			{"B_Heli_Transport_03_Black_F", 	3500, "Black",        {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"};},			
			{"B_Heli_Transport_03_Pink_F", 	    3500, "Pink",         {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"B_Heli_Transport_03_White_F",     3500, "White",        {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},				
			{"B_Heli_Transport_03_Red_F", 	    3500, "Red",          {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},
			{"B_Heli_Transport_03_Green_F", 	3500, "Green Custom", {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},
			{"B_Heli_Transport_03_Blue_F", 	    3500, "Blue",         {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},
			{"B_Heli_Transport_03_Blackk_F", 	3500, "Black Custom", {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},
			{"B_Heli_Transport_03_Tan_F", 	    3500, "Tan",          {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"B_Heli_Transport_03_Green_F", 	3500, "Green",        {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"};}			
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// Huron armed
	///////////////////////////////////////////////////////////////////////////////
	class B_Heli_Transport_03_F
	{
		skins[] = 
		{
			{"B_Heli_Transport_03_Green_F", 	3500, "Green",        {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"};},				
			{"B_Heli_Transport_03_Pink_F", 	    3500, "Pink",         {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"B_Heli_Transport_03_White_F",     3500, "White",        {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},			
			{"B_Heli_Transport_03_Red_F", 	    3500, "Red",          {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},
			{"B_Heli_Transport_03_Greenn_F", 	3500, "Green Custom", {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},
			{"B_Heli_Transport_03_Blue_F", 	    3500, "Blue",         {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},
			{"B_Heli_Transport_03_Blackk_F", 	3500, "Black Custom", {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},
			{"B_Heli_Transport_03_Tan_F", 	    3500, "Tan",          {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"B_Heli_Transport_03_Black_F", 	3500, "Black",        {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"};}			
		};
	};		
	
	///////////////////////////////////////////////////////////////////////////////
	// UH-80 Ghost Hawk
	///////////////////////////////////////////////////////////////////////////////
	class Heli_Transport_01_base_F
	{
		skins[] = 
		{
			{"B_Heli_Transport_01_F", 	     3500, "Black",        {"\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_CO.paa","\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext02_CO.paa"};},			
			{"B_Heli_Transport_01_Pink_F", 	 3500, "Pink",         {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"B_Heli_Transport_01_White_F",  3500, "White",        {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},				
			{"B_Heli_Transport_01_Red_F", 	 3500, "Red",          {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},
			{"B_Heli_Transport_01_Green_F",  3500, "Green Custom", {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},
			{"B_Heli_Transport_01_Blue_F", 	 3500, "Blue",         {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},
			{"B_Heli_Transport_01_Blackk_F", 3500, "Black Custom", {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},
			{"B_Heli_Transport_01_Tan_F", 	 3500, "Tan",          {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"B_Heli_Transport_01_Sand_F", 	 3500, "Sand",         {"\A3\Air_F_Exp\Heli_Transport_01\Data\Heli_Transport_01_ext01_sand_CO.paa","\A3\Air_F_Exp\Heli_Transport_01\Data\Heli_Transport_01_ext02_sand_CO.paa"};},
			{"B_Heli_Transport_01_Tropic_F", 3500, "Tropic",       {"\A3\Air_F_Exp\Heli_Transport_01\Data\Heli_Transport_01_ext01_tropic_CO.paa","\A3\Air_F_Exp\Heli_Transport_01\Data\Heli_Transport_01_ext02_tropic_CO.paa"};},			
			{"B_Heli_Transport_01_camo_F", 	 3500, "Green",        {"\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_BLUFOR_CO.paa","\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext02_BLUFOR_CO.paa"};}
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// MV-22 armed
	///////////////////////////////////////////////////////////////////////////////
	class VTOL_01_armed_base_F
	{
		skins[] = 
		{
			{"B_T_VTOL_01_armed_blue_F", 	3500, "Blue",        {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"};},
			{"B_T_VTOL_01_armed_Pink_F", 	3500, "Pink",        {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},		
			{"B_T_VTOL_01_armed_Red_F", 	3500, "Red",         {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},
			{"B_T_VTOL_01_armed_Red_F", 	3500, "White",       {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},			
			{"B_T_VTOL_01_armed_Green_F", 	3500, "Green",       {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},
			{"B_T_VTOL_01_armed_Bluee_F", 	3500, "Blue Custom", {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},			
			{"B_T_VTOL_01_armed_Black_F",   3500, "Black",       {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},						
			{"B_T_VTOL_01_armed_Tan_F",     3500, "Tan",	     {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"B_T_VTOL_01_armed_olive_F", 	3500, "Olive",       {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_olive_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_olive_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_olive_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_olive_CO.paa"};}
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// MV-22 vehicle
	///////////////////////////////////////////////////////////////////////////////
	class B_T_VTOL_01_vehicle_F
	{
		skins[] = 
		{
			{"Exile_Plane_BlackfishVehicle",   3500, "Blue",        {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"};},
			{"Exile_Plane_BlackfishVehicle",   3500, "Pink",        {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Plane_BlackfishVehicle",   3500, "White",       {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},			
			{"Exile_Plane_BlackfishVehicle",   3500, "Red",         {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},			
			{"Exile_Plane_BlackfishVehicle",   3500, "Green",       {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},
			{"Exile_Plane_BlackfishVehicle",   3500, "Blue Custom", {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},			
			{"Exile_Plane_BlackfishVehicle",   3500, "Black",       {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},						
			{"Exile_Plane_BlackfishVehicle",   3500, "Tan",	        {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"Exile_Plane_BlackfishVehicle",   3500, "Olive",       {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_olive_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_olive_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_olive_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_olive_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// MV-22 infantry
	///////////////////////////////////////////////////////////////////////////////
	class B_T_VTOL_01_infantry_F
	{
		skins[] = 
		{
			{"Exile_Plane_BlackfishInfantry", 	3500, "Blue",        {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"};},
			{"Exile_Plane_BlackfishInfantry",   3500, "Pink",        {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Plane_BlackfishInfantry",   3500, "White",       {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},			
			{"Exile_Plane_BlackfishInfantry",   3500, "Red",         {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},			
			{"Exile_Plane_BlackfishInfantry",   3500, "Green",       {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},
			{"Exile_Plane_BlackfishInfantry",   3500, "Blue Custom", {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},			
			{"Exile_Plane_BlackfishInfantry",   3500, "Black",       {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},						
			{"Exile_Plane_BlackfishInfantry",   3500, "Tan",	     {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},					
			{"Exile_Plane_BlackfishInfantry",   3500, "Olive",       {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_olive_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_olive_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_olive_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_olive_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Orca_CSAT", 		2700, "CSAT", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"};},
			{"Exile_Chopper_Orca_Black", 		2700, "Black", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};},
			{"Exile_Chopper_Orca_Pink", 	    2700, "Pink",           {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Chopper_Orca_White",        2700, "White",          {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},			
			{"Exile_Chopper_Orca_Red", 	        2700, "Red",            {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},	
			{"Exile_Chopper_Orca_Green", 	    2700, "Green",          {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},	
			{"Exile_Chopper_Orca_Bluee", 	    2700, "Blue Custom",    {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},	
			{"Exile_Chopper_Orca_Black", 	    2700, "Black Custom1",  {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},	
			{"Exile_Chopper_Orca_Tan", 	        2700, "Tan",            {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},				
			{"Exile_Chopper_Orca_Blue", 		2700, "Blue", 			{"\A3\Air_F\Heli_Light_02\Data\heli_light_02_ext_civilian_CO.paa"};},		
			{"Exile_Chopper_Orca_BlackCustom", 	2700, "Black Custom", 	{"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_CSAT",		3000, "CSAT", 	      {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};},
			{"Exile_Chopper_Taru_Pink", 	3000, "Pink",         {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Chopper_Taru_White",    3000, "White",        {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},			
			{"Exile_Chopper_Taru_Red", 	    3000, "Red",          {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},	
			{"Exile_Chopper_Taru_Green", 	3000, "Green",        {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},	
			{"Exile_Chopper_Taru_Blue", 	3000, "Blue",         {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},	
			{"Exile_Chopper_Taru_Blackk", 	3000, "Black Custom", {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},	
			{"Exile_Chopper_Taru_Tan", 	    3000, "Tan",          {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"Exile_Chopper_Taru_Black",	3000, "BLACK", 	      {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Transport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_Transport_CSAT",	 3000, "CSAT", 	       {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};},
			{"Exile_Chopper_Taru_Transport_Pink", 	 3000, "Pink",         {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Chopper_Taru_Transport_White",   3000, "White",        {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},			
			{"Exile_Chopper_Taru_Transport_Red", 	 3000, "Red",          {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},	
			{"Exile_Chopper_Taru_Transport_Green", 	 3000, "Green",        {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},	
			{"Exile_Chopper_Taru_Transport_Blue", 	 3000, "Blue",         {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},	
			{"Exile_Chopper_Taru_Transport_Blackk",  3000, "Black Custom", {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},	
			{"Exile_Chopper_Taru_Transport_Tan", 	 3000, "Tan",          {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},		
			{"Exile_Chopper_Taru_Transport_Black",	 3000, "Black", 	   {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Covered_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_Covered_CSAT",		3000, "CSAT",	      {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"};},
			{"Exile_Chopper_Taru_Covered_Pink", 	3000, "Pink",         {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Chopper_Taru_Covered_White",    3000, "White",        {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},				
			{"Exile_Chopper_Taru_Covered_Red", 	    3000, "Red",          {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},	
			{"Exile_Chopper_Taru_Covered_Green", 	3000, "Green",        {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},	
			{"Exile_Chopper_Taru_Covered_Blue", 	3000, "Blue",         {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},	
			{"Exile_Chopper_Taru_Covered_Blackk",   3000, "Black Custom", {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},	
			{"Exile_Chopper_Taru_Covered_Tan", 	    3000, "Tan",          {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},				
			{"Exile_Chopper_Taru_Covered_Black",	3000, "Black",	      {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Abstract
	{	
		skins[] = 
		{			
			{"Exile_Car_Hatchback_Rusty1", 			200, "Rusty White",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_01_co.paa"};},
			{"Exile_Car_Hatchback_Rusty2", 			200, "Rusty Red",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_02_co.paa"};},
			{"Exile_Car_Hatchback_Rusty3", 			200, "Rusty Yellow",	{"\exile_assets\model\RTV\Exile_Car_Hatchback_03_co.paa"};},			
			{"Exile_Car_Hatchback_Beige", 			200, "Beige",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Hatchback_Green", 			200, "Green",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Hatchback_Blue", 			200, "Blue",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Hatchback_BlueCustom", 		200, "Blue Custom",		{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Hatchback_BeigeCustom", 	200, "Beige Custom",	{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Hatchback_Yellow", 			200, "Yellow",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa"};},
			{"Exile_Car_Hatchback_White", 			200, "White",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_CO.paa"};},			
			{"Exile_Car_Hatchback_Grey", 			200, "Grey",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa"};},
			{"Exile_Car_Hatchback_Black", 			200, "Black",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"};},
			{"Exile_Car_Hatchback_Dark", 			200, "Dark",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// HEMMT transport
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HEMMT_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_HEMMT", 				1800, "NATO", 		 {"\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa"};}		
		};
	};		

	///////////////////////////////////////////////////////////////////////////////
	// HEMMT covered
	///////////////////////////////////////////////////////////////////////////////
	class B_Truck_01_covered_F
	{
		skins[] = 
		{			
			{"B_Truck_01_covered_NATO_F", 				1800, "NATO", 	     {"\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa"};}		
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// HEMMT box
	///////////////////////////////////////////////////////////////////////////////
	class B_Truck_01_box_F
	{
		skins[] = 
		{
			{"B_Truck_01_box_NATO_F", 			    1800, "NATO", 	     {"\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\A3\Soft_F_Gamma\Truck_01\Data\truck_01_ammo_CO.paa"};}				
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// HEMMT medical
	///////////////////////////////////////////////////////////////////////////////
	class B_Truck_01_medical_F
	{
		skins[] = 
		{
			{"B_Truck_01_medical_NATO_F", 				1800, "NATO", 		 {"\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa"};}			
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// HEMMT fuel
	///////////////////////////////////////////////////////////////////////////////
	class B_Truck_01_fuel_F
	{
		skins[] = 
		{	
			{"B_Truck_01_fuel_NATO_F", 				1800, "NATO", 		 {"\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\A3\Soft_F_Gamma\Truck_01\Data\truck_01_Fuel_CO.paa"};}				
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// HEMMT Repair
	///////////////////////////////////////////////////////////////////////////////
	class B_Truck_01_Repair_F
	{
		skins[] = 
		{
			{"B_Truck_01_Repair_NATO_F", 				1800, "NATO", 		 {"\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\A3\Soft_F_Gamma\Truck_01\Data\truck_01_ammo_CO.paa"};}			
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// HEMMT Move
	///////////////////////////////////////////////////////////////////////////////
	class B_Truck_01_mover_F
	{
		skins[] = 
		{	
			{"B_Truck_01_mover_NATO_F", 				1800, "NATO", 		 {"\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\A3\Soft_F_Gamma\Truck_01\Data\truck_01_mprimer_CO.paa"};}
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// HUNTER
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter_Abstract
	{
		skins[] = 
		{			
			{"Exile_Car_Hunter",		2000, "Exile White Edition",	{"exile_assets\texture\vehicle\Exile_Hunter_Snow_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Snow_Back_co.paa"};},
			{"Exile_Car_Hunter",		2000, "Exile Hex",				{"exile_assets\texture\vehicle\Exile_Hunter_Hex_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};},
			{"Exile_Car_Hunter",		2000, "NATO",				    {"\A3\soft_F\MRAP_01\data\MRAP_01_base_CO.paa","\A3\soft_F\MRAP_01\data\MRAP_01_adds_CO.paa"};},						
			{"Exile_Car_Hunter", 		2000, "Pink",	                {"#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Car_Hunter",        2000, "White",                  {"#(argb,8,8,3)color(1,1,1,1)"};},			
			{"Exile_Car_Hunter", 	    2000, "Black",                  {"#(argb,8,8,3)color(0,0,0,0.6)"};},			
			{"Exile_Car_Hunter", 	    2000, "Red",	                {"#(argb,8,8,3)color(1,0,0,1)"};},
			{"Exile_Car_Hunter", 	    2000, "Green",	                {"#(argb,8,8,3)color(0,1,0,1)"};},
			{"Exile_Car_Hunter", 	    2000, "Blue",	                {"#(argb,8,8,3)color(0,0,1,1)"};},			
			{"Exile_Car_Hunter", 	    2000, "Tan",	                {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"Exile_Car_Hunter",		2000, "Exile Black",			{"exile_assets\texture\vehicle\Exile_Hunter_Black_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};}
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// Strider
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Strider_Abstract
	{	
		skins[] = 
		{
			{"I_MRAP_03_FIA_F", 	2200, "FIA",	     {"\a3\soft_f_beta\mrap_03\data\mrap_03_ext_indp_co.paa","\a3\data_f\vehicles\turret_indp_co.paa"};},
			{"I_MRAP_03_NATO_F", 	2200, "NATO",	     {"\a3\soft_f_beta\mrap_03\data\mrap_03_ext_co.paa","\a3\data_f\vehicles\turret_opfor_co.paa"};},
			{"I_MRAP_03_NATO_F", 	2200, "Desert",	     {"\a3\soft_f_beta\mrap_03\data\mrap_03_ext_co.paa","\a3\data_f\vehicles\turret_co.paa"};},			
			{"I_MRAP_03_Black_F", 	2200, "Black",	     {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},
			{"I_MRAP_03_White_F",   2200, "White",       {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},			
			{"I_MRAP_03_Pink_F", 	2200, "Pink",	     {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"I_MRAP_03_Red_F", 	2200, "Red",	     {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},
			{"I_MRAP_03_Green_F", 	2200, "Green",	     {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},
			{"I_MRAP_03_Blue_F", 	2200, "Blue",	     {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},			
			{"I_MRAP_03_Tan_F", 	2200, "Tan",	     {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};}	
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// Zamak transport
	///////////////////////////////////////////////////////////////////////////////
	class Truck_02_transport_base_F
	{
		skins[] = 
		{
			{"O_Truck_02_transport_F", 				1600, "CSAT", 		{"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_OPFOR_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_OPFOR_co.paa"};},				
			{"I_Truck_02_transport_F", 				1600, "FIA",		{"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_INDP_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_INDP_co.paa"};},
			{"C_Truck_02_transport_B_F", 			1600, "Blue", 		{"\A3\soft_f_beta\Truck_02\Data\truck_02_kab_blue_co.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_kuz_co.paa"};},							
			{"C_Truck_02_transport_F", 				1600, "Orange", 	{"\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"};}		
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Zamak covered
	///////////////////////////////////////////////////////////////////////////////
	class Truck_02_base_F
	{
		skins[] = 
		{			
			{"O_Truck_02_covered_F", 				1600, "CSAT", 	      {"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_OPFOR_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_OPFOR_co.paa"};},		
			{"I_Truck_02_covered_F", 				1600, "FIA", 		  {"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_INDP_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_INDP_co.paa"};},
			{"C_Truck_02_covered_B_F", 				1600, "Blue", 	      {"\A3\soft_f_beta\Truck_02\Data\truck_02_kab_blue_co.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_kuz_co.paa"};},		
			{"C_Truck_02_covered_BO_F", 			1600, "Blue Olive",   {"\A3\soft_f_beta\Truck_02\Data\truck_02_kab_blue_co.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_kuz_olive_co.paa"};},
			{"C_Truck_02_covered_BI_F", 			1600, "Blue Pink",    {"\a3\soft_f_beta\Truck_02\data\truck_02_kab_blue_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_smdi.paa"};},			
			{"C_Truck_02_covered_OO_F", 			1600, "Orange Olive", {"\A3\soft_f_beta\Truck_02\Data\truck_02_kab_co.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_kuz_olive_co.paa"};},
			{"C_Truck_02_covered_OB_F", 			1600, "Orange Blue",  {"\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_blue_co.paa"};},
			{"C_Truck_02_covered_OI_F", 			1600, "Orange Pink",  {"\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_smdi.paa"};}					
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Zamak box
	///////////////////////////////////////////////////////////////////////////////
	class Truck_02_box_base_F
	{
		skins[] = 
		{
			{"O_Truck_02_box_F", 			        1600, "CSAT", 	      {"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_OPFOR_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_repair_OPFOR_co.paa"};},
			{"I_Truck_02_box_F", 				    1600, "FIA", 		  {"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_INDP_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_repair_INDP_co.paa"};},
			{"C_Truck_02_box_BG_F", 			    1600, "Blue Green",   {"\A3\soft_f_beta\Truck_02\Data\truck_02_kab_blue_co.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_repair_green_co.paa"};},
			{"C_Truck_02_box_BO_F", 				1600, "Blue Orange",  {"\A3\soft_f_beta\Truck_02\Data\truck_02_kab_blue_co.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_repair_orange_co.paa"};},
			{"C_Truck_02_box_OG_F", 			    1600, "Orange Green", {"\A3\soft_f_beta\Truck_02\Data\truck_02_kab_co.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_repair_green_co.paa"};},			
			{"C_Truck_02_box_F", 				    1600, "Orange", 	  {"\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_repair_co.paa"};}	
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// Zamak medical
	///////////////////////////////////////////////////////////////////////////////
	class Truck_02_medical_base_F
	{
		skins[] = 
		{
			{"O_Truck_02_medical_F", 				1600, "CSAT", 		  {"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_OPFOR_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_OPFOR_co.paa"};},	
			{"I_Truck_02_medical_F", 				1600, "FIA", 		  {"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_INDP_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_INDP_co.paa"};},
			{"C_Truck_02_medical_B_F", 			    1600, "Blue",         {"\A3\soft_f_beta\Truck_02\Data\truck_02_kab_blue_co.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_kuz_co.paa"};},			
			{"C_Truck_02_medical_BP_F", 			1600, "Blue Pink", 	  {"\A3\soft_f_beta\Truck_02\Data\truck_02_kab_blue_co.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_kuz_smdi.paa"};},		
			{"C_Truck_02_medical_BO_F", 			1600, "Blue Olive",   {"\A3\soft_f_beta\Truck_02\Data\truck_02_kab_blue_co.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_kuz_olive_co.paa"};},
			{"C_Truck_02_medical_OO_F", 			1600, "Orange Olive", {"\A3\soft_f_beta\Truck_02\Data\truck_02_kab_co.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_kuz_olive_co.paa"};},
			{"C_Truck_02_medical_OB_F", 			1600, "Orange Blue",  {"\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_blue_co.paa"};},
			{"C_Truck_02_medical_OI_F", 			1600, "Orange Pink",  {"\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_smdi.paa"};}			
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Zamak fuel
	///////////////////////////////////////////////////////////////////////////////
	class Truck_02_fuel_base_F
	{
		skins[] = 
		{	
			{"O_Truck_02_fuel_F", 				    1600, "CSAT", 		 {"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_OPFOR_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_fuel_OPFOR_co.paa"};},			
			{"I_Truck_02_fuel_F", 				    1600, "FIA",		 {"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_INDP_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_fuel_INDP_co.paa"};},
			{"C_Truck_02_fuel_B_F", 				1600, "Blue",        {"\A3\soft_f_beta\Truck_02\Data\truck_02_kab_blue_co.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_fuel_co.paa"};},
			{"C_Truck_02_fuel_BP_F", 				1600, "Blue Pink",   {"\A3\soft_f_beta\Truck_02\Data\truck_02_kab_blue_co.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_fuel_smdi.paa"};},
			{"C_Truck_02_fuel_OP_F", 				1600, "Orange Pink", {"\A3\soft_f_beta\Truck_02\Data\truck_02_kab_co.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_fuel_smdi.paa"};},			
			{"C_Truck_02_fuel_F", 				    1600, "Orange",	     {"\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_fuel_co.paa"};}		
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// Tempest transport
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest_Abstract
	{
		skins[] = 
		{			
			{"Exile_Car_Tempest", 				1800, "CSAT", 	    {"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa"};},		
			{"Exile_Car_Tempest", 				1800, "Green Hex",  {"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Tempest abgedeckt
	///////////////////////////////////////////////////////////////////////////////
	class Truck_03_base_F
	{
		skins[] = 
		{
			{"O_Truck_03_covered_F", 			    1800, "CSAT", 	    {"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cover_CO.paa"};},
			{"O_T_Truck_03_covered_ghex_F", 	    1800, "Green Hex",  {"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cover_ghex_CO.paa"};}
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// Tempest medical
	///////////////////////////////////////////////////////////////////////////////
	class Truck_03_medical_base_F
	{
		skins[] = 
		{
			{"B_Truck_01_medical_F", 				1800, "CSAT", 		    {"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cover_CO.paa"};},	
			{"O_T_Truck_03_medical_ghex_F", 		1800, "Green Hex", 		{"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cover_ghex_CO.paa"};}		
		};
	};
		
	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Abstract
	{
		skins[] = 
		{			
			{"Exile_Car_Hatchback_Sport_Red", 		200, "Red",		{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT01_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Blue", 		200, "Blue",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT02_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Orange", 	200, "Orange",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT03_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_White", 	200, "White",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT04_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Beige", 	200, "Beige",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT05_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Green", 	200, "Green",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Abstract
	{
		skins[] = 
		{		
			{"Exile_Car_Offroad_Rusty1", 		1000, "Rusty White",	  {"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"};},
			{"Exile_Car_Offroad_Rusty2", 		1000, "Rusty Red",	      {"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"};},
			{"Exile_Car_Offroad_Rusty3", 		1000, "Rusty Blue",	      {"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"};},			
			{"Exile_Car_Offroad_Red", 			1000, "Red",		      {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};},
			{"Exile_Car_Offroad_Beige", 		1000, "Beige",		      {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Offroad_White", 		1000, "White",		      {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Offroad_Blue", 			1000, "Blue",		      {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Offroad_DarkRed", 		1000, "Dark Red",	      {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};},			
			{"Exile_Car_Offroad_Pink", 	        1000, "Pink",             {"#(argb,8,8,3)color(1,0.08,0.57,1)"};},		
			{"Exile_Car_Offroad_Black", 	    1000, "Black Custom",	  {"#(argb,8,8,3)color(0,0,0,0.6)"};},			
			{"Exile_Car_Offroad_Red", 	        1000, "Red Custom",	      {"#(argb,8,8,3)color(1,0,0,1)"};},
			{"Exile_Car_Offroad_Green", 	    1000, "Green",	          {"#(argb,8,8,3)color(0,1,0,1)"};},
			{"Exile_Car_Offroad_Blue", 	        1000, "Blue Custom1",	  {"#(argb,8,8,3)color(0,0,1,1)"};},			
			{"Exile_Car_Offroad_Tan", 	        1000, "Tan",	          {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},				
			{"Exile_Car_Offroad_BlueCustom", 	1000, "Blue Custom",	  {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla01", 	1400, "Guerilla 01",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla02", 	1400, "Guerilla 02",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla03", 	1400, "Guerilla 03",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla04", 	1400, "Guerilla 04",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla05", 	1400, "Guerilla 05",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla06", 	1400, "Guerilla 06",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla07", 	1400, "Guerilla 07",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla08", 	1400, "Guerilla 08",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla09", 	1400, "Guerilla 09",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla10", 	1400, "Guerilla 10",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla11", 	1400, "Guerilla 11",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla12", 	1400, "Guerilla 12",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};},
			{"Exile_Car_Offroad_DarkRed",		1400, "Exile Black",      {"exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		1400, "Exile Light Blue", {"exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		1400, "Exile Orange",     {"exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		1400, "Exile Pink",	      {"exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		1400, "Exile White",	  {"exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		1400, "Exile Yellow",     {"exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_LandRover_Red", 700, "Red",       {"Exile_psycho_LRC\data\r_lr_base_co.paa","Exile_psycho_LRC\data\r_lr_special_co.paa"};},
			{"Exile_Car_LandRover_Urban", 700, "Urban",   {"Exile_psycho_LRC\data\textures\lr_base_urbancamo_co.paa","Exile_psycho_LRC\data\textures\lr_special_urbancamo_co.paa"};},
			{"Exile_Car_LandRover_Green", 700, "Green",   {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};},
			{"Exile_Car_LandRover_Sand", 700, "Sand",     {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};},
			{"Exile_Car_LandRover_Desert", 700, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover (Ambulance)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Ambulance_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_LandRover_Ambulance_Green", 700, "Green",   {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};},
			{"Exile_Car_LandRover_Ambulance_Desert", 700, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};},
			{"Exile_Car_LandRover_Ambulance_Sand", 700, "Sand",     {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Octavius
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Octavius_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Octavius_White", 500, "White", {"exile_psycho_Octavia\Data\car_body_co.paa"};},
			{"Exile_Car_Octavius_Black", 500, "Black", {"exile_psycho_Octavia\Data\car_body_bl_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Mohawk
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Mohawk_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Mohawk_FIA",   3500, "FIA",         {"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_1_INDP_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_2_INDP_CO.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa"};},
			{"Exile_Chopper_Mohawk_Pink",  3500, "Pink",        {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Chopper_Mohawk_Black", 3500, "Black",       {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},
			{"Exile_Chopper_Mohawk_Red",   3500, "Red",         {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},
			{"Exile_Chopper_Mohawk_Green", 3500, "Green",       {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},
			{"Exile_Chopper_Mohawk_Blue",  3500, "Blue",        {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},
			{"Exile_Chopper_Mohawk_White", 3500, "White",       {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},				
			{"Exile_Chopper_Mohawk_Tan",   3500, "Tan",         {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"Exile_Chopper_Mohawk_homan", 3500, "Homan",       {"A3\Air_F_Beta\Heli_Transport_02\Data\skins\heli_transport_02_1_dahoman_co.paa","A3\Air_F_Beta\Heli_Transport_02\Data\skins\heli_transport_02_2_dahoman_co.paa","A3\Air_F_Beta\Heli_Transport_02\Data\skins\heli_transport_02_3_dahoman_co.paa"};},
			{"Exile_Chopper_Mohawk_ION",   3500, "ION",         {"A3\Air_F_Beta\Heli_Transport_02\Data\skins\heli_transport_02_1_ion_co.paa","A3\Air_F_Beta\Heli_Transport_02\Data\skins\heli_transport_02_2_ion_co.paa","A3\Air_F_Beta\Heli_Transport_02\Data\skins\heli_transport_02_3_ion_co.paa"};}			
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huey_Green",  1400, "Green",   {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};},
			{"Exile_Chopper_Huey_Pink",   1400, "Pink",    {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Chopper_Huey_White",  1400, "White",   {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},			
			{"Exile_Chopper_Huey_Black",  1400, "Black",   {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},	
			{"Exile_Chopper_Huey_Red",    1400, "Red",     {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},	
			{"Exile_Chopper_Huey_Green",  1400, "Green",   {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},	
			{"Exile_Chopper_Huey_Blue",   1400, "Blue",    {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},	
			{"Exile_Chopper_Huey_Tan",    1400, "Tan",     {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},				
			{"Exile_Chopper_Huey_Desert", 1400, "Desert",  {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Armed_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huey_Armed_Green",  1400, "Green",   {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};},
			{"Exile_Chopper_Huey_Armed_Pink",   1400, "Pink",    {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Chopper_Huey_Armed_White",  1400, "White",   {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},			
			{"Exile_Chopper_Huey_Armed_Black",  1400, "Black",   {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},	
			{"Exile_Chopper_Huey_Armed_Red",    1400, "Red",     {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},	
			{"Exile_Chopper_Huey_Armed_Green",  1400, "Green",   {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},	
			{"Exile_Chopper_Huey_Armed_Blue",   1400, "Blue",    {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},	
			{"Exile_Chopper_Huey_Armed_Tan",    1400, "Tan",     {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"Exile_Chopper_Huey_Armed_Desert", 1400, "Desert",  {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};}
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// Ceasar BTT
	///////////////////////////////////////////////////////////////////////////////
	class C_Plane_Civil_01_F
	{
		skins[] = 
		{
			{"Exile_Plane_Ceasar",		750, "Racing (Tan Interior)",    {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		750, "Racing",                   {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};},
			{"Exile_Plane_Ceasar",		750, "Red Line (Tan Interior)",  {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		750, "Tribal (Tan Interior)",    {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		750, "Tribal",                   {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};},
			{"Exile_Plane_Ceasar",		750, "Blue Wave (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		750, "Blue Wave",                {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Armed_Rusty1", 		1000, "Rusty White",   	  {"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"};},
			{"Exile_Car_Offroad_Armed_Rusty2", 		1000, "Rusty Red",	      {"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"};},
			{"Exile_Car_Offroad_Armed_Rusty3", 		1000, "Rusty Blue",	      {"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"};},			
			{"Exile_Car_Offroad_Armed_Pink", 	    1000, "Pink",             {"#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Car_Offroad_Armed_Black", 	    1000, "Black",	          {"#(argb,8,8,3)color(0,0,0,0.6)"};},			
			{"Exile_Car_Offroad_Armed_Red", 	    1000, "Red",	          {"#(argb,8,8,3)color(1,0,0,1)"};},
			{"Exile_Car_Offroad_Armed_Green", 	    1000, "Green",	          {"#(argb,8,8,3)color(0,1,0,1)"};},
			{"Exile_Car_Offroad_Armed_Blue", 	    1000, "Blue",	          {"#(argb,8,8,3)color(0,0,1,1)"};},			
			{"Exile_Car_Offroad_Armed_Tan", 	    1000, "Tan",	          {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},		
			{"Exile_Car_Offroad_Armed_Black",		1000, "Exile Black",	  {"exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"};},
			{"Exile_Car_Offroad_Armed_LightBlue",	1000, "Exile Light Blue", {"exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"};},
			{"Exile_Car_Offroad_Armed_Orange",		1000, "Exile Orange",	  {"exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"};},
			{"Exile_Car_Offroad_Armed_Pink",		1000, "Exile Pink",		  {"exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"};},
			{"Exile_Car_Offroad_Armed_White",		1000, "Exile White",	  {"exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"};},
			{"Exile_Car_Offroad_Armed_Yellow",		1000, "Exile Yellow",     {"exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"};},			
			{"Exile_Car_Offroad_Armed_Guerilla01",	1000, "Guerilla 01",      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla02",	1000, "Guerilla 02",      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla03",	1000, "Guerilla 03",      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla04",	1000, "Guerilla 04",      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla05",	1000, "Guerilla 05",      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla06",	1000, "Guerilla 06",      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla07",	1000, "Guerilla 07",      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla08",	1000, "Guerilla 08",      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla09",	1000, "Guerilla 09",      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla10",	1000, "Guerilla 10",      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla11",	1000, "Guerilla 11",      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla12",	1000, "Guerilla 12",      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MB 4WD
	///////////////////////////////////////////////////////////////////////////////
	class C_Offroad_02_unarmed_orange_F
	{
		skins[] = 
		{
			{"Exile_Car_MB4WD",		900, "Black",        {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"};},
			{"Exile_Car_MB4WD",		900, "Blue",         {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"};},
			{"Exile_Car_MB4WD",		900, "Brown",        {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"};},
			{"Exile_Car_MB4WD",		900, "Green",        {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"};},
			{"Exile_Car_MB4WD",		900, "Olive",        {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};},
			{"Exile_Car_MB4WD",		900, "Red",          {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"};},
			{"Exile_Car_MB4WD", 	900, "Pink",         {"#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Car_MB4WD", 	900, "Black Custom", {"#(argb,8,8,3)color(0,0,0,0.6)"};},			
			{"Exile_Car_MB4WD", 	900, "Red Custom",	 {"#(argb,8,8,3)color(1,0,0,1)"};},
			{"Exile_Car_MB4WD", 	900, "Green Custom", {"#(argb,8,8,3)color(0,1,0,1)"};},
			{"Exile_Car_MB4WD", 	900, "Blue Custom",	 {"#(argb,8,8,3)color(0,0,1,1)"};},			
			{"Exile_Car_MB4WD", 	900, "Tan",	         {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},				
			{"Exile_Car_MB4WD",		900, "White",        {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MB 4WD open
	///////////////////////////////////////////////////////////////////////////////	
	class I_C_Offroad_02_unarmed_F
	{
		skins[] = 
		{
			{"Exile_Car_MB4WDOpen",		900, "Black",        {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"};},
			{"Exile_Car_MB4WDOpen",		900, "Blue",         {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"};},
			{"Exile_Car_MB4WDOpen",		900, "Brown",        {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"};},
			{"Exile_Car_MB4WDOpen",		900, "Green",        {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"};},
			{"Exile_Car_MB4WDOpen",		900, "Orange",       {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"};},
			{"Exile_Car_MB4WDOpen",		900, "Red",          {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"};},
			{"Exile_Car_MB4WDOpen", 	900, "Pink",         {"#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Car_MB4WDOpen", 	900, "Black Custom", {"#(argb,8,8,3)color(0,0,0,0.6)"};},			
			{"Exile_Car_MB4WDOpen", 	900, "Red Custom",	 {"#(argb,8,8,3)color(1,0,0,1)"};},
			{"Exile_Car_MB4WDOpen", 	900, "Green Custom", {"#(argb,8,8,3)color(0,1,0,1)"};},
			{"Exile_Car_MB4WDOpen", 	900, "Blue Custom",	 {"#(argb,8,8,3)color(0,0,1,1)"};},			
			{"Exile_Car_MB4WDOpen", 	900, "Tan",	         {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},				
			{"Exile_Car_MB4WDOpen",		900, "White",        {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"};},
			{"Exile_Car_MB4WDOpen",		900, "Olive",        {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};}
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// Boat Transport
	///////////////////////////////////////////////////////////////////////////////
	class Boat_Transport_02_base_F
	{
		skins[] = 
		{
			{"C_Boat_Transport_02_F", 		    1100, "Blue",	      {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_civilian_CO.paa"};},
			{"O_G_Boat_Transport_02_F", 		1100, "Black",	      {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_CO.paa" };},
			{"B_G_Boat_Transport_02_pink_F", 	1100, "Pink",         {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"B_G_Boat_Transport_02_White_F",   1100, "White",        {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},			
			{"B_G_Boat_Transport_02_black_F", 	1100, "Black Custom", {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},			
			{"B_G_Boat_Transport_02_red_F", 	1100, "Red",	      {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},
			{"B_G_Boat_Transport_02_green_F", 	1100, "Green",        {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},
			{"B_G_Boat_Transport_02_blue_F", 	1100, "Blue Custom",  {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},			
			{"B_G_Boat_Transport_02_tan_F", 	1100, "Tan",	      {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};}			
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Repair_Rusty1", 		700, "Rusty White",	      {"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"};},
			{"Exile_Car_Offroad_Repair_Rusty2", 		700, "Rusty Red",	      {"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"};},
			{"Exile_Car_Offroad_Repair_Rusty3", 		700, "Rusty Blue",	      {"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"};},			
			{"Exile_Car_Offroad_Repair_Civillian",		700, "Civillian",	      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Red",			700, "Red",			      {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Beige",			700, "Beige",		      {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Offroad_Repair_White",			700, "White",		      {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Blue",			700, "Blue",		      {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Offroad_Repair_DarkRed",		700, "DarkRed",		      {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Pink", 	        700, "Pink",              {"#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Car_Offroad_Repair_Black", 	        700, "Black",	          {"#(argb,8,8,3)color(0,0,0,0.6)"};},			
			{"Exile_Car_Offroad_Repair_Red", 	        700, "Red Custom",	      {"#(argb,8,8,3)color(1,0,0,1)"};},		
			{"Exile_Car_Offroad_Repair_Green", 	        700, "Green",	          {"#(argb,8,8,3)color(0,1,0,1)"};},
			{"Exile_Car_Offroad_Repair_Blue", 	        700, "Blue Custom",	      {"#(argb,8,8,3)color(0,0,1,1)"};},			
			{"Exile_Car_Offroad_Repair_Tan", 	        700, "Tan",	              {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"Exile_Car_Offroad_Repair_Black",		    700, "Exile Black",	      {"exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"};},
			{"Exile_Car_Offroad_Repair_LightBlue",	    700, "Exile Light Blue",  {"exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"};},
			{"Exile_Car_Offroad_Repair_Orange",		    700, "Exile Orange",	  {"exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"};},
			{"Exile_Car_Offroad_Repair_Pink",		    700, "Exile Pink",		  {"exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"};},
			{"Exile_Car_Offroad_Repair_White",		    700, "Exile White",	      {"exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"};},
			{"Exile_Car_Offroad_Repair_Yellow",		    700, "Exile Yellow",      {"exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"};},			
			{"Exile_Car_Offroad_Repair_BlueCustom",		700, "BlueCustom",	      {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla01",		900, "Guerilla 01",	      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla02",		900, "Guerilla 02",	      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla03",		900, "Guerilla 03",	      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla04",		900, "Guerilla 04",	      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla05",		900, "Guerilla 05",	      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla06",		900, "Guerilla 06",	      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla07",		900, "Guerilla 07",	      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla08",		900, "Guerilla 08",	      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla09",		900, "Guerilla 09",	      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla10",		900, "Guerilla 10",	      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla11",		900, "Guerilla 11",	      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla12",		900, "Guerilla 12",	      {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad Poli
	///////////////////////////////////////////////////////////////////////////////
	class Offroad_01_civil_base_F
	{
		skins[] = 
		{		
			{"B_GEN_Offroad_01_gen_Rusty1_F", 		1000, "Rusty White",	  {"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"};},
			{"B_GEN_Offroad_01_gen_Rusty2_F", 		1000, "Rusty Red",	      {"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"};},
			{"B_GEN_Offroad_01_gen_Rusty3_F", 		1000, "Rusty Blue",	      {"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"};},
			{"B_GEN_Offroad_01_gen_GEN_F", 			1000, "GEN",			  {"\A3\Soft_F_Exp\Offroad_01\Data\Offroad_01_ext_gen_CO.paa","\A3\Soft_F_Exp\Offroad_01\Data\Offroad_01_ext_gen_CO.paa"};},			
			{"B_GEN_Offroad_01_gen_Red_F", 			1000, "Red",		      {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Beige_F", 		1000, "Beige",		      {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};},
			{"B_GEN_Offroad_01_gen_White_F", 		1000, "White",		      {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Blue_F", 		1000, "Blue",		      {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};},
			{"B_GEN_Offroad_01_gen_DarkRed_F", 		1000, "Dark Red",	      {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Pink_F", 	    1000, "Pink",             {"#(argb,8,8,3)color(1,0.08,0.57,1)"};},			
			{"B_GEN_Offroad_01_gen_Black_F", 	    1000, "Black",	          {"#(argb,8,8,3)color(0,0,0,0.6)"};},			
			{"B_GEN_Offroad_01_gen_Red_F", 	        1000, "Red Custom",	      {"#(argb,8,8,3)color(1,0,0,1)"};},
			{"B_GEN_Offroad_01_gen_Green_F", 	    1000, "Green",	          {"#(argb,8,8,3)color(0,1,0,1)"};},
			{"B_GEN_Offroad_01_gen_Blue_F", 	    1000, "Blue Custom1",	  {"#(argb,8,8,3)color(0,0,1,1)"};},			
			{"B_GEN_Offroad_01_gen_Tan_F", 	        1000, "Tan",	          {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"B_GEN_Offroad_01_gen_BlueCustom_F", 	1000, "Blue Custom",	  {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla01_F", 	1400, "Guerilla 01",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla02_F", 	1400, "Guerilla 02",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla03_F", 	1400, "Guerilla 03",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla04_F", 	1400, "Guerilla 04",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla05_F", 	1400, "Guerilla 05",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla06_F", 	1400, "Guerilla 06",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla07_F", 	1400, "Guerilla 07",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla08_F", 	1400, "Guerilla 08",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla09_F", 	1400, "Guerilla 09",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla10_F", 	1400, "Guerilla 10",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla11_F", 	1400, "Guerilla 11",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Guerilla12_F", 	1400, "Guerilla 12",	  {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};},
			{"B_GEN_Offroad_01_gen_Blacks_F",		1400, "Exile Black",      {"exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"};},
			{"B_GEN_Offroad_01_gen_Light_F",		1400, "Exile Light Blue", {"exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"};},
			{"B_GEN_Offroad_01_gen_Pink_F",		    1400, "Exile Orange",     {"exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"};},
			{"B_GEN_Offroad_01_gen_F_DarkRed",		1400, "Exile Pink",	      {"exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"};},
			{"B_GEN_Offroad_01_gen_Whitee_F",		1400, "Exile White",	  {"exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"};},
			{"B_GEN_Offroad_01_gen_Yellow_F",		1400, "Exile Yellow",     {"exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"};}			
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_SUV_Red", 		500, "Red",					{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa"};},
			{"Exile_Car_SUV_Black", 	600, "Black",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"};},
			{"Exile_Car_SUV_Grey", 		500, "Grey",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa"};},
			{"Exile_Car_SUV_Orange", 	500, "Orange",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa"};},
			{"Exile_Car_SUV_Rusty1", 	550, "Rusty White",	        {"\exile_assets\model\RTV\Exile_Car_Suv_03_co.paa"};},
			{"Exile_Car_SUV_Rusty2", 	550, "Rusty Red",	        {"\exile_assets\model\RTV\Exile_Car_Suv_02_co.paa"};},
			{"Exile_Car_SUV_Rusty3", 	550, "Rusty Black",	        {"\exile_assets\model\RTV\Exile_Car_Suv_01_co.paa"};},						
			{"Exile_Car_SUV_Black", 	600, "Snow Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Snow_co.paa"};},
			{"Exile_Car_SUV_Black", 	600, "Leaf Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Light_co.paa"};},
			{"Exile_Car_SUV_Black", 	600, "Leaf Camo (Dark)",	{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Dark_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV XL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_SUVXL_Black", 700,  "Black",  {"Exile_psycho_SUV_a3\Data\suv_body_co.paa"};},
			{"Exile_Car_SUVXL_White", 700,  "White",  {"Exile_psycho_SUV_a3\Data\textures\suv_body_white_co.paa"};},
			{"Exile_Car_SUVXL_Silver", 700, "Silver", {"Exile_psycho_SUV_a3\Data\textures\suv_body_silver_co.paa"};},			
			{"Exile_Car_SUVXL_Blue", 700,   "Blue",   {"Exile_psycho_SUV_a3\Data\textures\suv_body_bluewhite.paa"};}			
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV Armed
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Armed_Abstract
	{
		skins[] = 
		{
			//{"Exile_Car_SUV_Armed_Black", 750, "Black", {"\Exile_psycho_SuvArm_a3\data\armoredsuv_body_co.paa"};}			
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// Van 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Black",			750, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_White",			750, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Red",			750, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Olive",			750, "Olive",		{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa"};},
			{"Exile_Car_Van_Brown",			750, "Brown",		{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"};},			
			{"Exile_Car_Van_Guerilla01",	900, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};},
			{"Exile_Car_Van_Guerilla02",	900, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};},
			{"Exile_Car_Van_Guerilla03",	900, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};},
			{"Exile_Car_Van_Guerilla04",	900, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};},
			{"Exile_Car_Van_Guerilla05",	900, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};},
			{"Exile_Car_Van_Guerilla06",	900, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};},
			{"Exile_Car_Van_Guerilla07",	900, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};},
			{"Exile_Car_Van_Guerilla08",	900, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Box_Black",				750, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_White",				750, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_Red",				750, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_Olive",			    750, "Olive",		{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa"};},
			{"Exile_Car_Van_Box_Brown",			    750, "Brown",		{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"};},			
			{"Exile_Car_Van_Box_Guerilla01",		900, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla02",		900, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla03",		900, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla04",		900, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla05",		900, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla06",		900, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla07",		900, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla08",		900, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Fuel_Black",			750, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_White",			750, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_Red",				750, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla01",		900, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla02",		900, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla03",		900, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ikarus_Blue", 		1000, "Blue",	{"Exile_psycho_Ikarus\Data\bus_exterior_co.paa"};},
			{"Exile_Car_Ikarus_Red", 		1000, "Red",	{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};},
			{"Exile_Car_Ikarus_Party", 		1500, "Party",	{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};},
			{"Exile_Car_Ikarus_Party", 		1500, "EXILE",	{"Exile_psycho_Ikarus\data\textures\bus_exterior_govn_co.paa", "\exile_psycho_ikarus\data\bus_exterior_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ural_Open_Blue",			1200, "Blue",		{"Exile_psycho_Ural\data\Ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Open_Yellow",			1200, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};},
			{"Exile_Car_Ural_Open_Worker",			1200, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Open_Military",		1200, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ural_Covered_Blue",			1200, "Blue",		{"Exile_psycho_Ural\data\ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Covered_Yellow",		1200, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};},
			{"Exile_Car_Ural_Covered_Worker",		1200, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Covered_Military",		1200, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Lada_Green", 		200, "Green",	{"exile_psycho_lada\data\lada_eciv1_co.paa","exile_psycho_lada\data\Lada_glass_ECIV1_CA.paa"};},
			{"Exile_Car_Lada_Taxi", 		200, "Taxi",	{"exile_psycho_lada\data\Lada_red_CO.paa"};},
			{"Exile_Car_Lada_Red", 			200, "Red",		{"exile_psycho_lada\data\Lada_red_CO.paa"};},
			{"Exile_Car_Lada_Hipster", 		200, "Hipster",	{"exile_psycho_lada\data\lada_eciv2_co.paa","exile_psycho_lada\data\Lada_glass_ECIV2_CA.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Volha_Blue", 		200, "Blue",	{"Exile_psycho_Gaz_volha\data\Volha_ECIV_CO.paa"};},
			{"Exile_Car_Volha_White", 		200, "White",	{"Exile_psycho_Gaz_volha\data\Volha_Gray_ECIV_CO.paa"};},
			{"Exile_Car_Volha_Black",		200, "Black",	{"Exile_psycho_Gaz_volha\data\Volha_Black_ECIV_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ifrit
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ifrit", 	2000, "CSAT",	     {"\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa","\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa"};},			
			{"Exile_Car_Ifrit", 	2000, "Green Hex",	 {"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa","\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_LSV_01_unarmed_black_F
	{
		skins[] = 
		{
			{"Exile_Car_ProwlerUnarmed",		1600, "Olive",        {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerUnarmed",		1600, "Dazzle",       {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerUnarmed",		1600, "Sand",         {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"};},
			{"Exile_Car_ProwlerUnarmed",        1600, "Pink",         {"#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Car_ProwlerUnarmed",        1600, "White",        {"#(argb,8,8,3)color(1,1,1,1)"};},			
			{"Exile_Car_ProwlerUnarmed", 	    1600, "Black Custom", {"#(argb,8,8,3)color(0,0,0,0.6)"};},			
			{"Exile_Car_ProwlerUnarmed", 	    1600, "Red",	      {"#(argb,8,8,3)color(1,0,0,1)"};},
			{"Exile_Car_ProwlerUnarmed", 	    1600, "Green",	      {"#(argb,8,8,3)color(0,1,0,1)"};},
			{"Exile_Car_ProwlerUnarmed", 	    1600, "Blue",	      {"#(argb,8,8,3)color(0,0,1,1)"};},			
			{"Exile_Car_ProwlerUnarmed", 	    1600, "Tan",	      {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"Exile_Car_ProwlerUnarmed", 	    1600, "Black",	      {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"};}			
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Light)
	///////////////////////////////////////////////////////////////////////////////
	class B_CTRG_LSV_01_light_F
	{
		skins[] = 
		{
			{"Exile_Car_ProwlerLight",		1500, "Black",        {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"};},
			{"Exile_Car_ProwlerLight",		1500, "Dazzle",       {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerLight",		1500, "Sand",         {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"};},
			{"Exile_Car_ProwlerLight",      1500, "Pink",         {"#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Car_ProwlerLight",      1500, "White",        {"#(argb,8,8,3)color(1,1,1,1)"};},			
			{"Exile_Car_ProwlerLight", 	    1500, "Black Custom", {"#(argb,8,8,3)color(0,0,0,0.6)"};},			
			{"Exile_Car_ProwlerLight", 	    1500, "Red",	      {"#(argb,8,8,3)color(1,0,0,1)"};},
			{"Exile_Car_ProwlerLight", 	    1500, "Green",	      {"#(argb,8,8,3)color(0,1,0,1)"};},
			{"Exile_Car_ProwlerLight", 	    1500, "Blue",	      {"#(argb,8,8,3)color(0,0,1,1)"};},			
			{"Exile_Car_ProwlerLight", 	    1500, "Tan",	      {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"Exile_Car_ProwlerLight", 	    1500, "Olive",	      {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};}			
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// Prowler armed
	///////////////////////////////////////////////////////////////////////////////
	class LSV_01_armed_base_F
	{	
		skins[] = 
		{
			{"B_LSV_01_armed_olive_F", 	1600, "Olive",	      {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"B_LSV_01_armed_sand_F", 	1600, "Sand",	      {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"};},
			{"B_LSV_01_armed_dazzle_F", 1600, "Dazzle",	      {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"B_LSV_01_armed_pink_F",   1600, "Pink",         {"#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"B_LSV_01_armed_White_F",  1600, "White",        {"#(argb,8,8,3)color(1,1,1,1)"};},			
			{"B_LSV_01_armed_black_F", 	1600, "Black Custom", {"#(argb,8,8,3)color(0,0,0,0.6)"};},			
			{"B_LSV_01_armed_red_F", 	1600, "Red",	      {"#(argb,8,8,3)color(1,0,0,1)"};},
			{"B_LSV_01_armed_green_F", 	1600, "Green",	      {"#(argb,8,8,3)color(0,1,0,1)"};},
			{"B_LSV_01_armed_blue_F", 	1600, "Blue",	      {"#(argb,8,8,3)color(0,0,1,1)"};},			
			{"B_LSV_01_armed_tan_F", 	1600, "Tan",	      {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"B_LSV_01_armed_black_F", 	1600, "Black",	      {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"};}			
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	// Qilin armed
	///////////////////////////////////////////////////////////////////////////////
	class LSV_02_armed_base_F
	{	
		skins[] = 
		{
			{"O_T_LSV_02_armed_F",		1500, "Arid",           {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"};},
			{"O_T_LSV_02_armed_F",      1500, "Black",          {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"};},
			{"O_T_LSV_02_armed_F",      1500, "Pink",           {"#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"O_T_LSV_02_armed_F",      1500, "White",          {"#(argb,8,8,3)color(1,1,1,1)"};},			
			{"O_T_LSV_02_armed_F", 	    1500, "Black Custom",   {"#(argb,8,8,3)color(0,0,0,0.6)"};},			
			{"O_T_LSV_02_armed_F", 	    1500, "Red",	        {"#(argb,8,8,3)color(1,0,0,1)"};},
			{"O_T_LSV_02_armed_F", 	    1500, "Green",	        {"#(argb,8,8,3)color(0,1,0,1)"};},
			{"O_T_LSV_02_armed_F", 	    1500, "Blue",	        {"#(argb,8,8,3)color(0,0,1,1)"};},			
			{"O_T_LSV_02_armed_F", 	    1500, "Tan",	        {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"O_T_LSV_02_armed_F", 	    1500, "Green Hex",	    {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"};}
		};
	};	

	///////////////////////////////////////////////////////////////////////////////
	//  Y-32 XI infantry
	///////////////////////////////////////////////////////////////////////////////
	class VTOL_02_infantry_base_F
	{
		skins[] = 
		{
			{"O_T_VTOL_02_vehicle_F", 	   3500, "Grey",        {"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_CO.paa"};},
			{"O_T_VTOL_02_infantry_F",     3500, "HEX",         {"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_bhex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_bhex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_bhex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_bhex_CO.paa"};},
			{"O_T_VTOL_02_infantry_F", 	   3500, "Pink",        {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"O_T_VTOL_02_infantry_F",     3500, "White",       {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},			
			{"O_T_VTOL_02_infantry_F", 	   3500, "Black", 		{"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},			
			{"O_T_VTOL_02_infantry_F", 	   3500, "Red",	        {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},
			{"O_T_VTOL_02_infantry_F", 	   3500, "Green",	    {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},
			{"O_T_VTOL_02_infantry_F", 	   3500, "Blue",	    {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},			
			{"O_T_VTOL_02_infantry_F", 	   3500, "Tan",	        {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"O_T_VTOL_02_infantry_F",     3500, "Green Hex",   {"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_ghex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_ghex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_ghex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_ghex_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	//  Y-32 XI vehicle
	///////////////////////////////////////////////////////////////////////////////
	class VTOL_02_vehicle_base_F
	{
		skins[] = 
		{
			{"O_T_VTOL_02_vehicle_F", 	3500, "Grey",        {"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_CO.paa"};},
			{"O_T_VTOL_02_vehicle_F",   3500, "HEX",         {"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_bhex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_bhex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_bhex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_bhex_CO.paa"};},
			{"O_T_VTOL_02_vehicle_F", 	3500, "Pink",        {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"O_T_VTOL_02_vehicle_F",   3500, "White",       {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},				
			{"O_T_VTOL_02_vehicle_F", 	3500, "Black", 		 {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},			
			{"O_T_VTOL_02_vehicle_F", 	3500, "Red",	     {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},
			{"O_T_VTOL_02_vehicle_F", 	3500, "Green",	     {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},
			{"O_T_VTOL_02_vehicle_F", 	3500, "Blue",	     {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},			
			{"O_T_VTOL_02_vehicle_F", 	3500, "Tan",	     {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},			
			{"O_T_VTOL_02_vehicle_F",   3500, "Green Hex",   {"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_ghex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_ghex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_ghex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_ghex_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Qilin (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class O_T_LSV_02_unarmed_black_F
	{
		skins[] = 
		{
			{"Exile_Car_QilinUnarmed",		1450, "Arid",         {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"};},
			{"Exile_Car_QilinUnarmed",		1450, "Black",        {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"};},
			{"Exile_Car_QilinUnarmed", 		1450, "Pink",         {"#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"Exile_Car_QilinUnarmed",      1450, "White",        {"#(argb,8,8,3)color(1,1,1,1)"};},			
			{"Exile_Car_QilinUnarmed", 	    1450, "Black Custom", {"#(argb,8,8,3)color(0,0,0,0.6)"};},			
			{"Exile_Car_QilinUnarmed", 	    1450, "Red",	      {"#(argb,8,8,3)color(1,0,0,1)"};},
			{"Exile_Car_QilinUnarmed", 	    1450, "Green",	      {"#(argb,8,8,3)color(0,1,0,1)"};},
			{"Exile_Car_QilinUnarmed", 	    1450, "Blue",	      {"#(argb,8,8,3)color(0,0,1,1)"};},			
			{"Exile_Car_QilinUnarmed", 	    1450, "Tan",	      {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};},				
			{"Exile_Car_QilinUnarmed",		1450, "Green Hex",    {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"};}
		};
	};
		
	///////////////////////////////////////////////////////////////////////////////
	// IFV-6c Panther
	///////////////////////////////////////////////////////////////////////////////
	class B_APC_Tracked_01_base_F
	{	
		skins[] = 
		{
			{"B_APC_Tracked_01_rcws_NATO_F", 	3200, "NATO",	    {"A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_body_crv_co.paa","A3\Armor_F_Beta\APC_Tracked_01\Data\mbt_01_body_co.paa","a3\data_f\vehicles\turret_co.paa"};},			{"B_APC_Tracked_01_rcws_Black_F", 	3200, "Black",	    {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},
			{"B_APC_Tracked_01_rcws_White_F", 	3200, "White",      {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},		
			{"B_APC_Tracked_01_rcws_Pink_F", 	3200, "Pink",	    {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"B_APC_Tracked_01_rcws_Red_F", 	3200, "Red",	    {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},
			{"B_APC_Tracked_01_rcws_Green_F", 	3200, "Green",	    {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},
			{"B_APC_Tracked_01_rcws_Blue_F", 	3200, "Blue",	    {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},			
			{"B_APC_Tracked_01_rcws_Tan_F", 	3200, "Tan",	    {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};}	
		};
	};	

    ///////////////////////////////////////////////////////////////////////////////
	// CRV-6e Bobcat
	///////////////////////////////////////////////////////////////////////////////
	class B_APC_Tracked_01_CRV_F
	{	
		skins[] = 
		{
			{"B_APC_Tracked_01_CRV_NATO_F", 	3200, "NATO",	    {"A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_body_crv_co.paa","A3\Armor_F_Beta\APC_Tracked_01\Data\mbt_01_body_co.paa","a3\data_f\vehicles\turret_co.paa","A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_crv_co.paa"};},			
			{"B_APC_Tracked_01_CRV_Black_F", 	3200, "Black",	    {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},
			{"B_APC_Tracked_01_CRV_White_F", 	3200, "White",      {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},			
			{"B_APC_Tracked_01_CRV_Pink_F", 	3200, "Pink",	    {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"B_APC_Tracked_01_CRV_Red_F", 	    3200, "Red",	    {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},
			{"B_APC_Tracked_01_CRV_Green_F", 	3200, "Green",	    {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},
			{"B_APC_Tracked_01_CRV_Blue_F", 	3200, "Blue",	    {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},			
			{"B_APC_Tracked_01_CRV_Tan_F", 	    3200, "Tan",	    {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};}	
		};
	};	
	
	///////////////////////////////////////////////////////////////////////////////
	// M2A1 Slammer
	///////////////////////////////////////////////////////////////////////////////
	class B_MBT_01_base_F
	{	
		skins[] = 
		{
			{"B_MBT_01_cannon_NATO_F", 	3200, "NATO",	    {"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa","A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_CO.paa"};},			
			{"B_MBT_01_cannon_Black_F", 3200, "Black",	    {"#(argb,8,8,3)color(0,0,0,0.6)","#(argb,8,8,3)color(0,0,0,0.6)"};},
			{"B_MBT_01_cannon_Black_F", 3200, "White",      {"#(argb,8,8,3)color(1,1,1,1)","#(argb,8,8,3)color(1,1,1,1)"};},			
			{"B_MBT_01_cannon_Pink_F", 	3200, "Pink",	    {"#(argb,8,8,3)color(1,0.08,0.57,1)","#(argb,8,8,3)color(1,0.08,0.57,1)"};},
			{"B_MBT_01_cannon_Red_F", 	3200, "Red",	    {"#(argb,8,8,3)color(1,0,0,1)","#(argb,8,8,3)color(1,0,0,1)"};},
			{"B_MBT_01_cannon_Green_F", 3200, "Green",	    {"#(argb,8,8,3)color(0,1,0,1)","#(argb,8,8,3)color(0,1,0,1)"};},
			{"B_MBT_01_cannon_Blue_F", 	3200, "Blue",	    {"#(argb,8,8,3)color(0,0,1,1)","#(argb,8,8,3)color(0,0,1,1)"};},			
			{"B_MBT_01_cannon_Tan_F", 	3200, "Tan",	    {"#(argb,8,8,3)color(0.8,0.7,0.5,0.2)","#(argb,8,8,3)color(0.8,0.7,0.5,0.2)"};}	
		};
	};		
	
	///////////////////////////////////////////////////////////////////////////////
	// HMMWV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HMMWV_M2_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_M2_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_M2_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_M134_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_M134_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_M134_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_MEV_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_MEV_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_cm.paa"};},
			{"Exile_Car_HMMWV_MEV_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_cm.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_UNA_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_UNA_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_UNA_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// BTR40
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BTR40_MG_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_BTR40_MG_Green",		1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"};},
			{"Exile_Car_BTR40_MG_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"};}
		};
	};
	
	class Exile_Car_BTR40_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_BTR40_Green",			1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"};},
			{"Exile_Car_BTR40_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Golf
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Golf_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_Golf_Red",				1000, "Red",	{"exile_psycho_VWGolf\data\vwgolf_body_co.paa"};},
			{"Exile_Car_Golf_Black",			1000, "Black",	{"exile_psycho_VWGolf\data\texture\black_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// AN-2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_AN2_Abstract
	{
		skins[] = 
		{
			{"Exile_Plane_AN2_Green", 700, "Green",             {"Exile_psycho_An2\data\an2_1_co.paa","Exile_psycho_An2\data\an2_2_co.paa","Exile_psycho_An2\data\an2_wings_co.paa"};},
			{"Exile_Plane_AN2_White", 700, "Red, White & Blue", {"Exile_psycho_An2\data\an2_1_a_co.paa","Exile_psycho_An2\data\an2_2_a_co.paa","Exile_psycho_An2\data\an2_wings_a_co.paa"};},
			{"Exile_Plane_AN2_Stripe", 700, "Green Stripe",     {"Exile_psycho_An2\data\an2_1_b_co.paa","Exile_psycho_An2\data\an2_2_b_co.paa","Exile_psycho_An2\data\an2_wings_b_co.paa"};}
		};
	};	
};

class CfgVehicleTransport 
{
	class Exile_Container_SupplyBox
	{
		vehicles[] = {"Exile_Car_Van_Abstract", "Exile_Car_Offroad_Abstract", "Exile_Car_Zamak_Abstract", "Exile_Car_HEMMT_Abstract", "Exile_Car_Tempest_Abstract"};

		class Exile_Car_Van_Abstract
		{
			attachPosition[] = {0, -1.1, 0.2};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0, -4.4};
		};

		class Exile_Car_Offroad_Abstract
		{
			attachPosition[] = {0, -1.6, 0.4};
			cargoIndizes[] = {1, 2, 3, 4}; 
			detachPosition[] = {0, -4};
		};

		class Exile_Car_Zamak_Abstract
		{
			attachPosition[] = {0.03, 0.3, 0};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0.03, -4.8};
		};

		class Exile_Car_HEMMT_Abstract
		{
			attachPosition[] = {0.05, -0.1, 0.3};
			cargoIndizes[] = {1, 2, 8, 9}; 
			detachPosition[] = {0.05, -6.1};
		};

		class Exile_Car_Tempest_Abstract
		{
			attachPosition[] = {0.08, -0.85, 0.4};
			cargoIndizes[] = {1, 6, 7, 9}; 
			detachPosition[] = {0.08, -6};
		};
	};
};


class SpawnVehicleItems
{
	/**
	* Vehicles in the world
	*/
	class WorldVehicles
	{
		/*
		* Allow(1) or disable(0) Items in Spawned vehicles
		* kinda self explanitory
		*/
		vehicleItemsAllowed = 1;
		/*
		* Set the maximum Items per Vehicle to
		* kinda self explanitory
		*/
		maximumItemsPerVehicle = 5;
		/*
		* Array of allowedItems
		* kinda self explanitory
		*/
		allowedItems[] = {
			"Exile_Item_ToiletPaper",
			"Exile_Item_PlasticBottleEmpty",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_DuctTape",
			"Exile_Item_BBQSandwich_Cooked",
			"Exile_Item_Can_Empty"
		};
	};
};

class CfgXM8
{
	extraApps[] = {"ExAd_VG","ExAd_Info","ExAd_CHVD","ExAd_Journal","ExAd_SB","ExAd_Selfie","ExAd_modChecker","ExAd_Scratchie","ExAd_ScratchieBuy","ExAd_ScratchiePrize"};
	
	class ExAd_VG 
	{
		title = "Virtual Garage";
		controlID = 50000;					//IDC:50000 -> 50015 || These need to be unique and out of range from each other 
		logo = "custom\plugin\ExAdClient\XM8\Apps\VG\Icon_VG.paa";
		onLoad = "custom\plugin\ExAdClient\XM8\Apps\VG\onLoad.sqf";
		onOpen = "custom\plugin\ExAdClient\XM8\Apps\VG\onOpen.sqf";
		onClose = "custom\plugin\ExAdClient\XM8\Apps\VG\onClose.sqf";
	};	
	class ExAd_Info 
	{
		title = "Server Info";
		controlID = 50100;					//IDC:50100 -> 50102 || These need to be unique and out of range from each other
		logo = "custom\plugin\ExAdClient\XM8\Apps\Info\Icon_SI.paa";
		onLoad = "custom\plugin\ExAdClient\XM8\Apps\Info\onLoad.sqf";
		onOpen = "custom\plugin\ExAdClient\XM8\Apps\Info\onOpen.sqf";
		onClose = "custom\plugin\ExAdClient\XM8\Apps\Info\onClose.sqf";
	};	
	class ExAd_CHVD 
	{
		title = "View Distance Settings";
		controlID = 50200;					//IDC:50200 -> 50102 || These need to be unique and out of range from each other
		config = "custom\plugin\ExAdClient\XM8\Apps\CHVD\config.sqf";
		logo = "custom\plugin\ExAdClient\XM8\Apps\CHVD\Icon_CHVD.paa";
		onLoad = "custom\plugin\ExAdClient\XM8\Apps\CHVD\onLoad.sqf";
		onOpen = "custom\plugin\ExAdClient\XM8\Apps\CHVD\onOpen.sqf";
		onClose = "custom\plugin\ExAdClient\XM8\Apps\CHVD\onClose.sqf";
	};		
	class ExAd_Journal 
	{
		title = "Journal";
		controlID = 50300;					//IDC:50300 -> 50305 || These need to be unique and out of range from each other
		config = "custom\plugin\ExAdClient\XM8\Apps\Journal\config.sqf";
		logo = "custom\plugin\ExAdClient\XM8\Apps\Journal\Icon_Journal.paa";
		onLoad = "custom\plugin\ExAdClient\XM8\Apps\Journal\onLoad.sqf";
		onOpen = "custom\plugin\ExAdClient\XM8\Apps\Journal\onOpen.sqf";
		onClose = "custom\plugin\ExAdClient\XM8\Apps\Journal\onClose.sqf";
	};
	class ExAd_SB 
	{
		title = "Statsbar Settings";
		controlID = 50400;					//IDC:50400 -> 50475 || These need to be unique and out of range from each other
		logo = "custom\plugin\ExAdClient\XM8\Apps\SB_Settings\Icon_SB.paa";
		onLoad = "custom\plugin\ExAdClient\XM8\Apps\SB_Settings\onLoad.sqf";
	};
	
    class ExAd_Selfie
    {
        controlID = 50500;
        title = "Selfie";            
        logo = "custom\plugin\ExAdClient\XM8\Apps\Selfie\selfie.paa";        
        quickFunction = "ExileClientXM8CurrentSlide = 'apps';closeDialog 0;[] execVM 'custom\plugin\ExAdClient\XM8\Apps\Selfie\onOpen.sqf'";
    }; 
	class ExAd_modChecker 
	{
		title = "Mod Checker";
		controlID = 50600;
		logo = "custom\plugin\ExAdClient\XM8\Apps\ModChecker\modChecker.paa";
		onLoad = "custom\plugin\ExAdClient\XM8\Apps\ModChecker\onLoad.sqf";
		onOpen = "custom\plugin\ExAdClient\XM8\Apps\ModChecker\onOpen.sqf";
		onClose = "custom\plugin\ExAdClient\XM8\Apps\ModChecker\onClose.sqf";
	};
	class ExAd_Scratchie 
	{
		controlID = 50700;
		title = "(counting) Scratchies...";
		logo = "custom\textures\scratchie.paa";	
		quickFunction = "ExileClientXM8CurrentSlide = 'apps'; closeDialog 0; ['use',ExileClientSessionId, player, ''] remoteExecCall ['ExileServer_lottery_network_request', 2];";
	};
	class ExAd_ScratchieBuy 
	{
		controlID = 50800;
		title = "Buy Scratchie";		
		logo = "custom\textures\scratchie-buy.paa";	
        quickFunction = "['buy',ExileClientSessionId, player, ''] remoteExecCall ['ExileServer_lottery_network_request', 2]; '' call ExileClient_gui_xm8_slide_apps_onOpen;";
	};
	class ExAd_ScratchiePrize 
	{
		controlID = 50900;
		title = "Get Prize";		
		logo = "custom\textures\scratchie-prize.paa";		
        quickFunction = "ExileClientXM8CurrentSlide = 'apps'; closeDialog 0; ['get',ExileClientSessionId, player, ''] remoteExecCall ['ExileServer_lottery_network_request', 2];";
	};
};