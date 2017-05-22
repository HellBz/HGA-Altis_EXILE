class CfgExileLootServer
{
	class LootTables
	{

		/*
			Percental Item Group Spawn Chances of CivillianLowerClass:

			Restraints           = 0,35%
			PistolAttachments    = 1,05%
			CUPPistolAttachments = 1,05%
			ShotgunAmmo          = 1,05%
			CUPShotgunAmmo       = 1,05%
			SMGAmmo              = 1,05%
			CUPSMGAmmo           = 1,05%
			SMGAttachments       = 1,05%
			CUPSMGAttachments    = 1,05%
			Shotguns             = 1,39%
			CUPShotguns          = 1,39%
			SMG                  = 1,39%
			CUPSMG               = 1,39%
			CivilianVests        = 1,74%
			CUPCivilianVests     = 1,74%
			PistolAmmo           = 1,74%
			CUPPistolAmmo        = 1,74%
			Pistols              = 2,79%
			CUPPistols           = 2,79%
			Chemlights           = 3,48%
			CivilianItems        = 3,48%
			CUPCivilianItems     = 3,48%
			Drinks               = 3,48%
			RoadFlares           = 3,48%
			CivilianBackpacks    = 3,83%
			CUPCivilianBackpacks = 3,83%
			CivilianClothing     = 6,97%
			CUPCivilianClothing  = 6,97%
			CivilianHeadgear     = 6,97%
			CUPCivilianHeadgear  = 6,97%
			Food                 = 9,76%
			Trash                = 6,97%
			CUPTrash             = 3,48%
		*/
		CivillianLowerClass[] = {"CivilianItems", "CivilianBackpacks", "CivilianHeadgear", "CUPCivilianBackpacks", "Trash", "CUPShotgunAmmo", "CivilianItems", "CivilianBackpacks", "Shotguns", "CivilianItems", "CivilianHeadgear", "RoadFlares", "Drinks", "CivilianHeadgear", "CUPSMG", "Pistols", "Food", "CUPCivilianBackpacks", "CUPCivilianHeadgear", "PistolAmmo", "CivilianVests", "CUPPistolAttachments", "CUPCivilianBackpacks", "SMG", "CivilianHeadgear", "Drinks", "CUPTrash", "Trash", "CUPTrash", "Food", "Shotguns", "CivilianBackpacks", "Food", "CivilianClothing", "CivilianHeadgear", "CivilianBackpacks", "CUPSMGAmmo", "Food", "CUPCivilianHeadgear", "SMG", "CUPCivilianClothing", "Food", "CUPCivilianHeadgear", "Food", "Trash", "Pistols", "Chemlights", "Drinks", "CUPSMGAttachments", "CivilianItems", "Drinks", "CUPCivilianHeadgear", "CUPTrash", "CUPCivilianItems", "CUPCivilianItems", "Restraints", "CUPCivilianItems", "CUPCivilianBackpacks", "CUPCivilianHeadgear", "CUPCivilianClothing", "Food", "CUPShotguns", "Trash", "Drinks", "CUPPistols", "CivilianClothing", "CivilianClothing", "CUPShotgunAmmo", "RoadFlares", "Trash", "CUPTrash", "CUPCivilianBackpacks", "SMGAmmo", "CivilianItems", "CUPCivilianBackpacks", "CUPPistolAttachments", "CivilianClothing", "Trash", "CUPShotguns", "CivilianClothing", "Pistols", "SMGAttachments", "CivilianClothing", "CUPCivilianBackpacks", "CUPCivilianItems", "ShotgunAmmo", "CUPCivilianClothing", "CUPCivilianItems", "Food", "CUPCivilianClothing", "CivilianClothing", "CUPPistols", "Pistols", "CUPCivilianVests", "CUPCivilianVests", "PistolAmmo", "CivilianClothing", "PistolAttachments", "CivilianClothing", "Food", "CUPSMGAmmo", "CUPSMG", "Pistols", "CUPCivilianClothing", "ShotgunAmmo", "CivilianVests", "Food", "CivilianBackpacks", "CUPPistolAmmo", "CUPCivilianItems", "Food", "CUPTrash", "CivilianVests", "RoadFlares", "Drinks", "SMG", "CUPCivilianClothing", "CUPPistolAmmo", "CivilianHeadgear", "Drinks", "Trash", "Food", "CivilianClothing", "ShotgunAmmo", "CivilianHeadgear", "CUPCivilianClothing", "CivilianClothing", "CUPPistolAmmo", "Chemlights", "CivilianBackpacks", "CUPCivilianHeadgear", "CivilianHeadgear", "CUPCivilianItems", "Food", "CUPCivilianHeadgear", "CUPCivilianItems", "Food", "CUPTrash", "Chemlights", "CUPPistols", "CUPShotgunAmmo", "CUPPistolAmmo", "CUPCivilianHeadgear", "Pistols", "SMG", "PistolAmmo", "CUPCivilianHeadgear", "PistolAttachments", "CUPCivilianBackpacks", "SMGAttachments", "CUPSMGAmmo", "RoadFlares", "Trash", "CUPPistols", "CivilianClothing", "Food", "SMGAttachments", "CUPSMGAttachments", "CUPCivilianClothing", "Food", "CivilianClothing", "Food", "Food", "CUPCivilianClothing", "Pistols", "CUPPistols", "CUPCivilianHeadgear", "CUPCivilianClothing", "CivilianClothing", "Trash", "CUPTrash", "CUPCivilianHeadgear", "CivilianHeadgear", "CivilianHeadgear", "Chemlights", "PistolAttachments", "Chemlights", "RoadFlares", "Trash", "Trash", "CUPPistolAttachments", "CUPCivilianHeadgear", "CivilianClothing", "CUPCivilianHeadgear", "CUPPistolAmmo", "Trash", "CivilianClothing", "CivilianHeadgear", "CUPCivilianVests", "CUPCivilianBackpacks", "Trash", "Trash", "Drinks", "Food", "CUPCivilianClothing", "CUPTrash", "CivilianItems", "CivilianBackpacks", "Shotguns", "Food", "Pistols", "Shotguns", "Trash", "CivilianClothing", "CUPSMGAttachments", "Chemlights", "Trash", "CUPPistols", "CivilianHeadgear", "CivilianItems", "CivilianClothing", "CUPCivilianClothing", "CUPShotguns", "CUPCivilianClothing", "RoadFlares", "Trash", "CivilianHeadgear", "Food", "CivilianItems", "CUPTrash", "CivilianHeadgear", "SMGAmmo", "CUPCivilianBackpacks", "CivilianVests", "CUPCivilianClothing", "RoadFlares", "CivilianBackpacks", "Drinks", "CUPCivilianClothing", "CivilianItems", "CUPCivilianItems", "CUPCivilianVests", "RoadFlares", "Chemlights", "Food", "CUPTrash", "SMGAmmo", "CUPCivilianClothing", "CUPCivilianClothing", "CUPCivilianClothing", "Food", "CivilianHeadgear", "CivilianBackpacks", "CUPCivilianHeadgear", "Food", "Drinks", "CivilianBackpacks", "CUPSMG", "CivilianItems", "CivilianClothing", "Food", "CUPCivilianHeadgear", "CUPCivilianHeadgear", "CivilianClothing", "CUPCivilianHeadgear", "CUPShotguns", "CivilianHeadgear", "Chemlights", "CivilianBackpacks", "CUPCivilianHeadgear", "CUPSMG", "PistolAmmo", "CivilianVests", "Trash", "Chemlights", "CUPCivilianClothing", "CUPPistols", "CUPCivilianClothing", "Trash", "Food", "RoadFlares", "CUPCivilianHeadgear", "CivilianHeadgear", "Chemlights", "CUPCivilianVests", "CivilianHeadgear", "PistolAmmo", "CUPCivilianItems", "CUPCivilianBackpacks", "CUPPistols", "RoadFlares", "CivilianHeadgear", "CivilianHeadgear", "Trash", "Food", "CUPCivilianHeadgear", "Food"};

		/*
			Percental Item Group Spawn Chances of CivillianUpperClass:

			Restraints           = 0,33%
			PistolAttachments    = 0,98%
			CUPPistolAttachments = 0,98%
			RifleAmmo            = 0,98%
			CUPRifleAmmo         = 0,98%
			RifleAttachments     = 0,98%
			CUPRifleAttachments  = 0,98%
			Rifles               = 0,98%
			CUPRifles            = 0,98%
			ShotgunAmmo          = 0,98%
			CUPShotgunAmmo       = 0,98%
			SMGAmmo              = 0,98%
			CUPSMGAmmo           = 0,98%
			SMGAttachments       = 0,98%
			CUPSMGAttachments    = 0,98%
			Shotguns             = 1,31%
			CUPShotguns          = 1,31%
			SMG                  = 1,31%
			CUPSMG               = 1,31%
			CivilianVests        = 1,64%
			CUPCivilianVests     = 1,64%
			PistolAmmo           = 1,64%
			CUPPistolAmmo        = 1,64%
			Pistols              = 2,62%
			CUPPistols           = 2,62%
			Chemlights           = 3,28%
			CivilianItems        = 3,28%
			CUPCivilianItems     = 3,28%
			Drinks               = 3,28%
			RoadFlares           = 3,28%
			CivilianBackpacks    = 3,61%
			CUPCivilianBackpacks = 3,61%
			CivilianClothing     = 6,56%
			CUPCivilianClothing  = 6,56%
			CivilianHeadgear     = 6,56%
			CUPCivilianHeadgear  = 6,56%
			Food                 = 9,18%
			Trash                = 6,56%
			CUPTrash             = 3,28%
		*/
		CivillianUpperClass[] = {"CUPCivilianBackpacks", "PistolAmmo", "CivilianHeadgear", "CivilianHeadgear", "CUPCivilianHeadgear", "Pistols", "Drinks", "CUPCivilianHeadgear", "PistolAttachments", "Food", "CUPCivilianClothing", "Trash", "Trash", "CUPCivilianHeadgear", "CUPPistolAmmo", "CUPCivilianHeadgear", "CivilianClothing", "CivilianHeadgear", "CUPRifles", "RoadFlares", "RoadFlares", "CUPPistols", "Trash", "Trash", "CUPShotgunAmmo", "CUPPistols", "Trash", "Rifles", "CUPCivilianClothing", "CUPCivilianItems", "CivilianBackpacks", "CUPCivilianClothing", "Chemlights", "CUPCivilianClothing", "CUPCivilianItems", "Rifles", "CUPCivilianHeadgear", "RifleAmmo", "Food", "Shotguns", "Trash", "SMGAmmo", "CivilianClothing", "Trash", "Food", "CivilianItems", "Drinks", "Pistols", "SMGAmmo", "CUPRifleAttachments", "CivilianClothing", "PistolAttachments", "PistolAmmo", "ShotgunAmmo", "Trash", "CUPCivilianBackpacks", "CUPCivilianHeadgear", "CivilianClothing", "CivilianHeadgear", "CUPSMGAmmo", "CUPTrash", "CivilianHeadgear", "CUPTrash", "Drinks", "Pistols", "CUPPistols", "CUPTrash", "CUPPistolAttachments", "CUPCivilianVests", "RoadFlares", "CUPCivilianBackpacks", "Chemlights", "CivilianItems", "CUPCivilianHeadgear", "CivilianClothing", "Food", "CivilianHeadgear", "CUPCivilianHeadgear", "CivilianClothing", "PistolAmmo", "CUPTrash", "CUPRifleAmmo", "CUPRifles", "CivilianHeadgear", "CUPRifleAttachments", "Food", "Food", "Food", "CUPShotguns", "CivilianVests", "Food", "Food", "Drinks", "SMGAttachments", "Chemlights", "Food", "CivilianItems", "CUPPistols", "CUPSMG", "CUPCivilianHeadgear", "CivilianVests", "CivilianHeadgear", "RifleAttachments", "CUPTrash", "Trash", "CUPRifleAmmo", "CivilianClothing", "CivilianClothing", "Food", "Food", "CUPCivilianHeadgear", "CUPCivilianVests", "CUPCivilianHeadgear", "CUPPistolAttachments", "CivilianClothing", "Pistols", "CivilianClothing", "Chemlights", "Trash", "Trash", "RifleAmmo", "CUPPistolAttachments", "CUPPistols", "CUPCivilianClothing", "Food", "CivilianHeadgear", "CUPCivilianClothing", "CUPShotgunAmmo", "Trash", "CivilianHeadgear", "CUPCivilianHeadgear", "CUPCivilianItems", "Chemlights", "CivilianHeadgear", "CUPCivilianItems", "CUPTrash", "Food", "CUPCivilianVests", "CUPTrash", "RoadFlares", "RoadFlares", "CUPCivilianHeadgear", "CUPCivilianHeadgear", "Trash", "CUPCivilianItems", "CUPShotguns", "CUPCivilianVests", "CivilianItems", "Chemlights", "Drinks", "CUPPistolAmmo", "RifleAmmo", "CUPCivilianHeadgear", "CUPShotguns", "CUPPistols", "CUPCivilianHeadgear", "CUPSMGAttachments", "CUPCivilianBackpacks", "CUPCivilianClothing", "Food", "CUPCivilianClothing", "Trash", "CUPCivilianClothing", "CivilianHeadgear", "CUPCivilianBackpacks", "CUPSMGAttachments", "CivilianBackpacks", "CUPCivilianClothing", "RoadFlares", "CivilianItems", "Trash", "CUPCivilianItems", "Food", "Food", "Trash", "CivilianClothing", "Chemlights", "PistolAttachments", "CUPRifleAttachments", "CivilianBackpacks", "Drinks", "SMG", "CivilianItems", "CUPCivilianBackpacks", "CUPCivilianClothing", "CivilianClothing", "ShotgunAmmo", "Drinks", "CUPRifleAmmo", "RoadFlares", "CUPCivilianClothing", "CUPCivilianHeadgear", "CUPSMGAttachments", "Food", "CivilianHeadgear", "CivilianClothing", "CUPCivilianItems", "CivilianBackpacks", "CivilianVests", "CivilianClothing", "SMGAttachments", "CUPSMGAmmo", "RifleAttachments", "SMG", "CivilianBackpacks", "SMGAmmo", "Restraints", "CUPCivilianClothing", "CUPCivilianClothing", "RoadFlares", "CivilianHeadgear", "CUPCivilianItems", "Food", "CivilianBackpacks", "Pistols", "CUPSMG", "Food", "CivilianBackpacks", "RoadFlares", "CUPSMG", "CUPTrash", "ShotgunAmmo", "Trash", "CivilianHeadgear", "Food", "CUPCivilianVests", "Food", "CivilianHeadgear", "CUPPistols", "RoadFlares", "CUPTrash", "CUPCivilianClothing", "Food", "CivilianItems", "CUPCivilianItems", "CUPShotgunAmmo", "Drinks", "Trash", "CUPTrash", "PistolAmmo", "SMG", "PistolAmmo", "CUPCivilianClothing", "Food", "CivilianBackpacks", "CUPShotguns", "CivilianClothing", "CUPRifles", "SMG", "CivilianClothing", "Drinks", "CUPCivilianHeadgear", "Food", "Food", "Chemlights", "CivilianClothing", "CUPPistolAmmo", "CUPCivilianBackpacks", "SMGAttachments", "CUPPistolAmmo", "CUPCivilianItems", "CUPSMG", "CivilianVests", "CUPCivilianClothing", "CivilianHeadgear", "CUPCivilianHeadgear", "CUPCivilianClothing", "RifleAttachments", "CivilianHeadgear", "CUPCivilianBackpacks", "Food", "Trash", "CivilianClothing", "CUPPistolAmmo", "CUPSMGAmmo", "CUPCivilianBackpacks", "CUPCivilianHeadgear", "CivilianItems", "CivilianBackpacks", "Rifles", "CUPCivilianBackpacks", "Chemlights", "Shotguns", "CivilianClothing", "CivilianItems", "Shotguns", "CivilianHeadgear", "Trash", "CivilianBackpacks", "Pistols", "CivilianHeadgear", "CivilianBackpacks", "CUPCivilianClothing", "CivilianVests", "CivilianClothing", "Chemlights", "Food", "CUPCivilianClothing", "CUPCivilianBackpacks", "Shotguns", "Pistols", "Pistols", "Drinks", "CivilianItems", "CUPPistols"};

		/*
			Percental Item Group Spawn Chances of Shop:

			CivilianClothing     = 0,60%
			CUPCivilianClothing  = 0,60%
			CivilianVests        = 0,60%
			CUPCivilianVests     = 0,60%
			PistolAttachments    = 0,60%
			CUPPistolAttachments = 0,60%
			ShotgunAmmo          = 0,60%
			CUPShotgunAmmo       = 0,60%
			SMGAmmo              = 0,60%
			CUPSMGAmmo           = 0,60%
			SMGAttachments       = 0,60%
			CUPSMGAttachments    = 0,60%
			PistolAmmo           = 1,20%
			CUPPistolAmmo        = 1,20%
			CivilianHeadgear     = 1,80%
			CUPCivilianHeadgear  = 1,80%
			IndustrialItems      = 1,80%
			MedicalItems         = 1,80%
			Restraints           = 1,80%
			Shotguns             = 2,40%
			CUPShotguns          = 2,40%
			SmokeGrenades        = 2,40%
			Chemlights           = 2,99%
			CivilianBackpacks    = 2,99%
			CUPCivilianBackpacks = 2,99%
			RoadFlares           = 2,99%
			SMG                  = 2,99%
			CUPSMG               = 2,99%
			CivilianItems        = 4,19%
			CUPCivilianItems     = 4,19%
			Pistols              = 5,99%
			CUPPistols           = 5,99%
			Drinks               = 8,98%
			Food                 = 8,98%
			Trash                = 11,98%
			CUPTrash             = 5,99%
		*/
		Shop[] = {"Food", "Shotguns", "Pistols", "PistolAmmo", "Trash", "Drinks", "CUPCivilianItems", "Pistols", "CUPShotgunAmmo", "Food", "Trash", "RoadFlares", "SMGAmmo", "SmokeGrenades", "CivilianItems", "Restraints", "CUPCivilianBackpacks", "Trash", "Food", "CUPCivilianBackpacks", "CivilianClothing", "CUPShotguns", "CUPShotguns", "SMG", "CivilianHeadgear", "CUPTrash", "SMG", "CivilianItems", "Food", "CivilianBackpacks", "CivilianItems", "Trash", "PistolAmmo", "Pistols", "Shotguns", "Shotguns", "Drinks", "CUPShotguns", "CivilianBackpacks", "CUPCivilianHeadgear", "Food", "Trash", "Pistols", "CUPPistols", "Pistols", "CUPCivilianItems", "CUPTrash", "Trash", "CUPPistols", "CUPPistols", "CUPPistolAttachments", "RoadFlares", "RoadFlares", "Drinks", "CUPPistols", "Pistols", "CivilianBackpacks", "CUPTrash", "Trash", "Drinks", "Pistols", "Restraints", "CUPCivilianItems", "Food", "Trash", "Trash", "Food", "CivilianBackpacks", "CUPCivilianItems", "CivilianItems", "Drinks", "Chemlights", "SmokeGrenades", "MedicalItems", "Chemlights", "CivilianVests", "MedicalItems", "Trash", "Drinks", "CivilianHeadgear", "Pistols", "SmokeGrenades", "SMGAttachments", "SMG", "Trash", "Chemlights", "CUPPistols", "Trash", "Food", "Chemlights", "MedicalItems", "PistolAttachments", "Trash", "ShotgunAmmo", "CUPCivilianItems", "CUPSMG", "CUPTrash", "Drinks", "Pistols", "Shotguns", "CUPPistols", "CUPCivilianBackpacks", "Food", "Drinks", "CUPPistolAmmo", "CUPPistolAmmo", "Food", "CUPPistols", "CUPTrash", "CUPCivilianItems", "Drinks", "IndustrialItems", "IndustrialItems", "CUPCivilianHeadgear", "CivilianBackpacks", "CUPCivilianHeadgear", "Trash", "Trash", "RoadFlares", "CivilianItems", "Trash", "CivilianHeadgear", "Restraints", "Drinks", "RoadFlares", "CUPPistols", "CUPTrash", "Drinks", "CUPShotguns", "SmokeGrenades", "Drinks", "CUPSMG", "CUPPistols", "SMG", "CUPCivilianBackpacks", "Food", "Pistols", "Chemlights", "Trash", "CivilianItems", "CUPTrash", "Food", "CUPCivilianBackpacks", "CUPCivilianClothing", "SMG", "CUPTrash", "Food", "CUPSMG", "Trash", "IndustrialItems", "CUPCivilianVests", "Trash", "CUPCivilianItems", "CUPPistols", "Food", "Drinks", "CUPSMG", "CUPSMGAmmo", "CivilianItems", "Trash", "Drinks", "CUPSMG", "CUPTrash", "CUPSMGAttachments", "Food", "Drinks", "CUPTrash"};

		/*
			Percental Item Group Spawn Chances of Industrial:

			Restraints      = 3,45%
			RoadFlares      = 10,34%
			Vehicle         = 17,24%
			Trash           = 20,69%
			CUPTrash        = 20,69%
			IndustrialItems = 27,59%
		*/
		Industrial[] = {"Vehicle", "IndustrialItems", "CUPTrash", "Trash", "Trash", "RoadFlares", "Vehicle", "RoadFlares", "CUPTrash", "CUPTrash", "Vehicle", "Trash", "IndustrialItems", "IndustrialItems", "IndustrialItems", "Restraints", "IndustrialItems", "CUPTrash", "Vehicle", "CUPTrash", "CUPTrash", "Vehicle", "Trash", "Trash", "IndustrialItems", "Trash", "RoadFlares", "IndustrialItems", "IndustrialItems"};

		/*
			Percental Item Group Spawn Chances of Factories:

			Electronics     = 7,14%
			Trash           = 28,57%
			CUPTrash        = 28,57%
			IndustrialItems = 35,71%
		*/
		Factories[] = {"CUPTrash", "IndustrialItems", "IndustrialItems", "IndustrialItems", "Trash", "CUPTrash", "Electronics", "CUPTrash", "CUPTrash", "IndustrialItems", "Trash", "IndustrialItems", "Trash", "Trash"};

		/*
			Percental Item Group Spawn Chances of VehicleService:

			Restraints      = 3,45%
			RoadFlares      = 10,34%
			IndustrialItems = 17,24%
			Trash           = 20,69%
			CUPTrash        = 20,69%
			Vehicle         = 27,59%
		*/
		VehicleService[] = {"Vehicle", "Vehicle", "Vehicle", "Trash", "Trash", "IndustrialItems", "CUPTrash", "Restraints", "RoadFlares", "Trash", "Vehicle", "Trash", "IndustrialItems", "Vehicle", "Vehicle", "IndustrialItems", "Trash", "RoadFlares", "CUPTrash", "RoadFlares", "IndustrialItems", "CUPTrash", "CUPTrash", "CUPTrash", "IndustrialItems", "Trash", "CUPTrash", "Vehicle", "Vehicle"};

		/*
			Percental Item Group Spawn Chances of Military:

			DLCGhillies          = 0,44%
			Ghillies             = 0,44%
			Rebreathers          = 0,44%
			Bipods               = 0,87%
			CUPBipods            = 0,87%
			DLCAmmo              = 0,87%
			DLCOptics            = 0,87%
			DLCSupressor         = 0,87%
			LMGAmmo              = 0,87%
			CUPLMGAmmo           = 0,87%
			MedicalItems         = 0,87%
			Restraints           = 0,87%
			SniperAmmo           = 0,87%
			CUPSniperAmmo        = 0,87%
			SniperAttachments    = 0,87%
			CUPSniperAttachments = 0,87%
			DLCRifles            = 1,31%
			DLCVests             = 1,31%
			GuerillaHeadgear     = 1,31%
			CUPGuerillaHeadgear  = 1,31%
			GuerillaVests        = 1,31%
			CUPGuerillaVests     = 1,31%
			HandGrenades         = 1,31%
			HEGrenades           = 1,31%
			CUPHEGrenades        = 1,31%
			MilitaryBackpacks    = 1,31%
			CUPMilitaryBackpacks = 1,31%
			MilitaryHeadgear     = 1,31%
			CUPMilitaryHeadgear  = 1,31%
			MilitaryVests        = 1,31%
			CUPMilitaryVests     = 1,31%
			RifleAmmo            = 1,31%
			CUPRifleAmmo         = 1,31%
			RifleAttachments     = 1,31%
			CUPRifleAttachments  = 1,31%
			SmokeGrenades        = 1,31%
			Snipers              = 1,31%
			CUPSnipers           = 1,31%
			UGLFlares            = 1,31%
			CUPUGLFlares         = 1,31%
			UGLSmokes            = 1,31%
			CUPUGLSmokes         = 1,31%
			CivilianItems        = 1,75%
			CUPCivilianItems     = 1,75%
			GuerillaBackpacks    = 1,75%
			CUPGuerillaBackpacks = 1,75%
			GuerillaItems        = 1,75%
			CUPGuerillaItems     = 1,75%
			LMG                  = 1,75%
			CUPLMG               = 1,75%
			Explosives           = 2,18%
			CUPExplosives        = 2,18%
			GuerillaClothing     = 2,18%
			CUPGuerillaClothing  = 2,18%
			MilitaryClothing     = 2,18%
			CUPMilitaryClothing  = 2,18%
			Rifles               = 2,18%
			CUPRifles            = 2,18%
			Trash                = 13,10%
			CUPTrash             = 8,73%
		*/
		Military[] = {"Trash", "CUPUGLFlares", "HEGrenades", "Trash", "Trash", "CUPExplosives", "GuerillaHeadgear", "CUPMilitaryClothing", "SmokeGrenades", "MilitaryClothing", "CUPGuerillaClothing", "Rifles", "MilitaryBackpacks", "Trash", "CUPSniperAttachments", "CUPLMG", "CUPGuerillaBackpacks", "Trash", "Explosives", "GuerillaVests", "SniperAmmo", "Trash", "CUPTrash", "CUPSnipers", "CUPRifles", "MilitaryVests", "CUPMilitaryHeadgear", "GuerillaItems", "CUPMilitaryBackpacks", "UGLFlares", "Explosives", "CUPGuerillaHeadgear", "CUPTrash", "CUPCivilianItems", "Trash", "DLCRifles", "Trash", "CUPTrash", "DLCAmmo", "CUPGuerillaBackpacks", "CUPRifles", "Bipods", "CUPHEGrenades", "HEGrenades", "GuerillaClothing", "CUPSniperAttachments", "Trash", "SniperAttachments", "Rifles", "Trash", "CUPRifleAttachments", "HEGrenades", "SniperAmmo", "CUPGuerillaItems", "Rifles", "CUPTrash", "CUPRifles", "LMG", "CUPTrash", "Trash", "LMG", "GuerillaClothing", "GuerillaItems", "RifleAmmo", "Trash", "CUPLMGAmmo", "UGLSmokes", "DLCVests", "Trash", "LMGAmmo", "Bipods", "CUPLMGAmmo", "CUPUGLSmokes", "CUPLMG", "CUPMilitaryHeadgear", "Rifles", "Trash", "CUPGuerillaClothing", "Restraints", "CUPMilitaryHeadgear", "DLCRifles", "Explosives", "MilitaryClothing", "CUPRifleAttachments", "CUPTrash", "GuerillaBackpacks", "CUPGuerillaVests", "Explosives", "Trash", "GuerillaClothing", "GuerillaItems", "MilitaryHeadgear", "CUPHEGrenades", "RifleAttachments", "CUPBipods", "DLCSupressor", "CUPGuerillaClothing", "CivilianItems", "Trash", "GuerillaHeadgear", "CUPGuerillaVests", "DLCOptics", "CUPRifleAmmo", "CUPUGLSmokes", "Snipers", "Snipers", "Trash", "GuerillaClothing", "Rebreathers", "Trash", "CUPMilitaryClothing", "Trash", "CUPGuerillaItems", "CivilianItems", "CUPCivilianItems", "CUPRifleAttachments", "HandGrenades", "CUPTrash", "GuerillaHeadgear", "UGLFlares", "CUPMilitaryClothing", "CUPMilitaryVests", "CUPTrash", "Trash", "DLCAmmo", "GuerillaBackpacks", "DLCSupressor", "CUPLMG", "CUPRifleAmmo", "GuerillaBackpacks", "Explosives", "MilitaryHeadgear", "CUPGuerillaHeadgear", "CUPTrash", "CivilianItems", "HandGrenades", "LMG", "MilitaryBackpacks", "CUPMilitaryBackpacks", "Trash", "Trash", "Trash", "CUPRifles", "CUPTrash", "RifleAmmo", "Restraints", "CUPTrash", "CUPUGLFlares", "GuerillaVests", "UGLSmokes", "CUPBipods", "RifleAttachments", "CUPMilitaryBackpacks", "CUPTrash", "Trash", "Trash", "CUPMilitaryVests", "CUPCivilianItems", "GuerillaVests", "CUPGuerillaVests", "CUPGuerillaItems", "CUPTrash", "LMGAmmo", "GuerillaClothing", "Ghillies", "SmokeGrenades", "CUPTrash", "CUPGuerillaClothing", "CivilianItems", "Trash", "MilitaryVests", "CUPRifleAmmo", "CUPSniperAmmo", "CUPGuerillaBackpacks", "MilitaryClothing", "UGLFlares", "CUPExplosives", "DLCOptics", "UGLSmokes", "MilitaryBackpacks", "CUPGuerillaHeadgear", "MilitaryClothing", "MilitaryClothing", "CUPGuerillaItems", "CUPGuerillaClothing", "DLCRifles", "DLCGhillies", "DLCVests", "CUPSnipers", "SmokeGrenades", "GuerillaItems", "MilitaryVests", "CUPMilitaryClothing", "CUPCivilianItems", "CUPGuerillaBackpacks", "CUPUGLSmokes", "LMG", "CUPExplosives", "CUPTrash", "MedicalItems", "CUPTrash", "CUPTrash", "GuerillaBackpacks", "DLCVests", "Trash", "CUPRifles", "CUPTrash", "RifleAttachments", "MilitaryHeadgear", "CUPSnipers", "CUPExplosives", "CUPSniperAmmo", "CUPTrash", "SniperAttachments", "Trash", "Snipers", "CUPTrash", "CUPMilitaryClothing", "CUPExplosives", "CUPHEGrenades", "CUPLMG", "RifleAmmo", "Rifles", "HandGrenades", "CUPUGLFlares", "Trash", "CUPMilitaryVests", "Trash", "MedicalItems"};

		/*
			Percental Item Group Spawn Chances of Medical:

			Trash        = 23,08%
			CUPTrash     = 23,08%
			MedicalItems = 53,85%
		*/
		Medical[] = {"CUPTrash", "MedicalItems", "CUPTrash", "MedicalItems", "CUPTrash", "Trash", "Trash", "MedicalItems", "MedicalItems", "MedicalItems", "MedicalItems", "Trash", "MedicalItems"};

		/*
			Percental Item Group Spawn Chances of Tourist:

			DLCAmmo              = 1,49%
			DLCOptics            = 1,49%
			DLCSupressor         = 1,49%
			SniperAmmo           = 1,49%
			CUPSniperAmmo        = 1,49%
			SniperAttachments    = 1,49%
			CUPSniperAttachments = 1,49%
			CivilianItems        = 2,99%
			CUPCivilianItems     = 2,99%
			Explosives           = 2,99%
			CUPExplosives        = 2,99%
			HandGrenades         = 2,99%
			MedicalItems         = 2,99%
			Restraints           = 2,99%
			DLCGhillies          = 4,48%
			Ghillies             = 4,48%
			MilitaryBackpacks    = 5,97%
			CUPMilitaryBackpacks = 5,97%
			MilitaryHeadgear     = 5,97%
			CUPMilitaryHeadgear  = 5,97%
			DLCRifles            = 11,94%
			Snipers              = 11,94%
			CUPSnipers           = 11,94%
		*/
		Tourist[] = {"MilitaryBackpacks", "MilitaryHeadgear", "Explosives", "Ghillies", "Snipers", "CUPExplosives", "Snipers", "MilitaryBackpacks", "MilitaryBackpacks", "MedicalItems", "MilitaryHeadgear", "CUPMilitaryHeadgear", "CUPSnipers", "Ghillies", "CUPMilitaryHeadgear", "Snipers", "Snipers", "DLCRifles", "Explosives", "MilitaryHeadgear", "CUPMilitaryHeadgear", "DLCGhillies", "DLCRifles", "DLCRifles", "SniperAttachments", "DLCRifles", "DLCRifles", "CUPCivilianItems", "DLCSupressor", "DLCRifles", "DLCRifles", "Restraints", "CUPSnipers", "CUPSnipers", "CUPExplosives", "CUPSnipers", "DLCGhillies", "CUPSniperAttachments", "CUPMilitaryHeadgear", "DLCOptics", "Snipers", "CUPSnipers", "CUPSnipers", "Snipers", "HandGrenades", "CUPSniperAmmo", "CUPMilitaryBackpacks", "MedicalItems", "DLCRifles", "Snipers", "Snipers", "MilitaryBackpacks", "HandGrenades", "CivilianItems", "CivilianItems", "CUPMilitaryBackpacks", "CUPSnipers", "DLCAmmo", "CUPMilitaryBackpacks", "CUPMilitaryBackpacks", "Restraints", "MilitaryHeadgear", "CUPCivilianItems", "SniperAmmo", "CUPSnipers", "DLCGhillies", "Ghillies"};

		/*
			Percental Item Group Spawn Chances of Radiation:

			DLCAmmo              = 1,52%
			DLCOptics            = 1,52%
			DLCSupressor         = 1,52%
			SniperAmmo           = 1,52%
			CUPSniperAmmo        = 1,52%
			SniperAttachments    = 1,52%
			CUPSniperAttachments = 1,52%
			EpicWeapons          = 3,03%
			HandGrenades         = 3,03%
			MedicalItems         = 3,03%
			Restraints           = 3,03%
			DLCGhillies          = 4,55%
			Ghillies             = 4,55%
			Explosives           = 7,58%
			CUPExplosives        = 7,58%
			MilitaryBackpacks    = 7,58%
			CUPMilitaryBackpacks = 7,58%
			MilitaryHeadgear     = 7,58%
			CUPMilitaryHeadgear  = 7,58%
			DLCRifles            = 7,58%
			Snipers              = 7,58%
			CUPSnipers           = 7,58%
		*/
		Radiation[] = {"CUPExplosives", "DLCRifles", "MilitaryBackpacks", "SniperAmmo", "DLCGhillies", "Ghillies", "CUPMilitaryHeadgear", "MilitaryBackpacks", "CUPSnipers", "MedicalItems", "CUPSniperAttachments", "Ghillies", "CUPSniperAmmo", "HandGrenades", "MilitaryHeadgear", "CUPSnipers", "Explosives", "DLCGhillies", "CUPMilitaryHeadgear", "MilitaryHeadgear", "DLCRifles", "MilitaryHeadgear", "DLCRifles", "MilitaryBackpacks", "DLCSupressor", "CUPMilitaryBackpacks", "Explosives", "Restraints", "CUPExplosives", "DLCRifles", "CUPMilitaryBackpacks", "Explosives", "Snipers", "CUPSnipers", "CUPExplosives", "CUPMilitaryHeadgear", "Snipers", "HandGrenades", "Snipers", "CUPSnipers", "EpicWeapons", "CUPMilitaryHeadgear", "Snipers", "CUPMilitaryBackpacks", "CUPExplosives", "EpicWeapons", "DLCOptics", "CUPExplosives", "MilitaryHeadgear", "Ghillies", "Explosives", "SniperAttachments", "MilitaryBackpacks", "Snipers", "CUPSnipers", "CUPMilitaryHeadgear", "Restraints", "CUPMilitaryBackpacks", "DLCAmmo", "DLCGhillies", "CUPMilitaryBackpacks", "Explosives", "MilitaryHeadgear", "DLCRifles", "MilitaryBackpacks", "MedicalItems"};
	};

	class ItemGroups
	{

		/*
			Percental Item Spawn Chances of Food:

			Exile_Item_CookingPot        = 2,08%
			Exile_Item_CanOpener         = 3,47%
			Exile_Item_Matches           = 3,47%
			Exile_Item_EMRE              = 2,08%
			Exile_Item_GloriousKnakworst = 4,17%
			Exile_Item_Surstromming      = 4,86%
			Exile_Item_SausageGravy      = 4,86%
			Exile_Item_ChristmasTinner   = 4,86%
			Exile_Item_MacasCheese       = 4,86%
			Exile_Item_BBQSandwich       = 4,86%
			Exile_Item_CatFood           = 4,86%
			Exile_Item_Dogfood           = 4,86%
			Exile_Item_BeefParts         = 4,86%
			Exile_Item_Cheathas          = 4,86%
			Exile_Item_DsNuts            = 4,86%
			Exile_Item_Noodles           = 4,86%
			Exile_Item_CockONut          = 5,56%
			Exile_Item_SeedAstics        = 5,56%
			Exile_Item_Raisins           = 6,25%
			Exile_Item_Moobar            = 6,25%
			Exile_Item_InstantCoffee     = 7,64%
		*/
		Food[] = {"Exile_Item_Matches", "Exile_Item_GloriousKnakworst", "Exile_Item_Raisins", "Exile_Item_SeedAstics", "Exile_Item_CockONut", "Exile_Item_GloriousKnakworst", "Exile_Item_CockONut", "Exile_Item_Dogfood", "Exile_Item_CanOpener", "Exile_Item_DsNuts", "Exile_Item_Dogfood", "Exile_Item_Moobar", "Exile_Item_GloriousKnakworst", "Exile_Item_Surstromming", "Exile_Item_GloriousKnakworst", "Exile_Item_DsNuts", "Exile_Item_Moobar", "Exile_Item_SausageGravy", "Exile_Item_MacasCheese", "Exile_Item_BeefParts", "Exile_Item_Noodles", "Exile_Item_SeedAstics", "Exile_Item_SeedAstics", "Exile_Item_Matches", "Exile_Item_Surstromming", "Exile_Item_Cheathas", "Exile_Item_Matches", "Exile_Item_ChristmasTinner", "Exile_Item_InstantCoffee", "Exile_Item_DsNuts", "Exile_Item_MacasCheese", "Exile_Item_Surstromming", "Exile_Item_BeefParts", "Exile_Item_MacasCheese", "Exile_Item_CatFood", "Exile_Item_Raisins", "Exile_Item_CatFood", "Exile_Item_BeefParts", "Exile_Item_Dogfood", "Exile_Item_CatFood", "Exile_Item_BeefParts", "Exile_Item_Cheathas", "Exile_Item_Raisins", "Exile_Item_BBQSandwich", "Exile_Item_InstantCoffee", "Exile_Item_BeefParts", "Exile_Item_SeedAstics", "Exile_Item_BBQSandwich", "Exile_Item_Raisins", "Exile_Item_Cheathas", "Exile_Item_SausageGravy", "Exile_Item_EMRE", "Exile_Item_EMRE", "Exile_Item_BBQSandwich", "Exile_Item_Surstromming", "Exile_Item_CatFood", "Exile_Item_Dogfood", "Exile_Item_EMRE", "Exile_Item_MacasCheese", "Exile_Item_CockONut", "Exile_Item_ChristmasTinner", "Exile_Item_DsNuts", "Exile_Item_SeedAstics", "Exile_Item_InstantCoffee", "Exile_Item_Moobar", "Exile_Item_Moobar", "Exile_Item_GloriousKnakworst", "Exile_Item_InstantCoffee", "Exile_Item_BBQSandwich", "Exile_Item_CookingPot", "Exile_Item_SausageGravy", "Exile_Item_InstantCoffee", "Exile_Item_CatFood", "Exile_Item_SausageGravy", "Exile_Item_Noodles", "Exile_Item_Matches", "Exile_Item_ChristmasTinner", "Exile_Item_Cheathas", "Exile_Item_BBQSandwich", "Exile_Item_InstantCoffee", "Exile_Item_Cheathas", "Exile_Item_CanOpener", "Exile_Item_BBQSandwich", "Exile_Item_Cheathas", "Exile_Item_Dogfood", "Exile_Item_BBQSandwich", "Exile_Item_Moobar", "Exile_Item_SeedAstics", "Exile_Item_InstantCoffee", "Exile_Item_Noodles", "Exile_Item_CockONut", "Exile_Item_SeedAstics", "Exile_Item_Raisins", "Exile_Item_SausageGravy", "Exile_Item_Raisins", "Exile_Item_DsNuts", "Exile_Item_Surstromming", "Exile_Item_SausageGravy", "Exile_Item_CookingPot", "Exile_Item_Moobar", "Exile_Item_CockONut", "Exile_Item_CockONut", "Exile_Item_Dogfood", "Exile_Item_InstantCoffee", "Exile_Item_Moobar", "Exile_Item_Moobar", "Exile_Item_Raisins", "Exile_Item_InstantCoffee", "Exile_Item_GloriousKnakworst", "Exile_Item_MacasCheese", "Exile_Item_SeedAstics", "Exile_Item_Noodles", "Exile_Item_ChristmasTinner", "Exile_Item_CanOpener", "Exile_Item_DsNuts", "Exile_Item_ChristmasTinner", "Exile_Item_Moobar", "Exile_Item_ChristmasTinner", "Exile_Item_CockONut", "Exile_Item_Surstromming", "Exile_Item_Noodles", "Exile_Item_Raisins", "Exile_Item_Matches", "Exile_Item_CatFood", "Exile_Item_InstantCoffee", "Exile_Item_Cheathas", "Exile_Item_CookingPot", "Exile_Item_Noodles", "Exile_Item_Dogfood", "Exile_Item_Surstromming", "Exile_Item_BeefParts", "Exile_Item_ChristmasTinner", "Exile_Item_BeefParts", "Exile_Item_CanOpener", "Exile_Item_Noodles", "Exile_Item_CockONut", "Exile_Item_MacasCheese", "Exile_Item_CatFood", "Exile_Item_MacasCheese", "Exile_Item_InstantCoffee", "Exile_Item_Raisins", "Exile_Item_DsNuts", "Exile_Item_SausageGravy", "Exile_Item_CanOpener"};

		/*
			Percental Item Spawn Chances of Drinks:

			Exile_Item_Beer                    = 7,14%
			Exile_Item_EnergyDrink             = 7,14%
			Exile_Item_PlasticBottleFreshWater = 7,14%
			Exile_Item_PowerDrink              = 7,14%
			Exile_Item_MountainDupe            = 14,29%
			Exile_Item_ChocolateMilk           = 21,43%
			Exile_Item_PlasticBottleDirtyWater = 35,71%
		*/
		Drinks[] = {"Exile_Item_PlasticBottleDirtyWater", "Exile_Item_MountainDupe", "Exile_Item_MountainDupe", "Exile_Item_ChocolateMilk", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleFreshWater", "Exile_Item_ChocolateMilk", "Exile_Item_PowerDrink", "Exile_Item_Beer", "Exile_Item_ChocolateMilk", "Exile_Item_EnergyDrink"};

		/*
			Percental Item Spawn Chances of Pistols:

			Exile_Weapon_Colt1911   = 5,88%
			Exile_Weapon_Makarov    = 5,88%
			Exile_Weapon_Taurus     = 5,88%
			Exile_Weapon_TaurusGold = 5,88%
			hgun_P07_khk_F          = 5,88%
			hgun_Pistol_01_F        = 5,88%
			hgun_Pistol_heavy_01_F  = 5,88%
			hgun_Pistol_heavy_02_F  = 5,88%
			hgun_Pistol_Signal_F    = 5,88%
			hgun_ACPC2_F            = 11,76%
			hgun_P07_F              = 11,76%
			hgun_Rook40_F           = 11,76%
			Exile_Weapon_SA61       = 11,76%
		*/
		Pistols[] = {"hgun_ACPC2_F", "Exile_Weapon_Makarov", "hgun_P07_F", "hgun_Pistol_Signal_F", "Exile_Weapon_TaurusGold", "hgun_Rook40_F", "hgun_P07_khk_F", "hgun_Pistol_heavy_01_F", "Exile_Weapon_Taurus", "hgun_ACPC2_F", "Exile_Weapon_SA61", "hgun_Pistol_heavy_02_F", "Exile_Weapon_Colt1911", "hgun_Rook40_F", "hgun_P07_F", "hgun_Pistol_01_F", "Exile_Weapon_SA61"};

		/*
			Percental Item Spawn Chances of PistolAmmo:

			6Rnd_GreenSignal_F               = 2,44%
			6Rnd_RedSignal_F                 = 2,44%
			16Rnd_9x21_Mag                   = 2,44%
			6Rnd_45ACP_Cylinder              = 4,88%
			10Rnd_9x21_Mag                   = 9,76%
			11Rnd_45ACP_Mag                  = 9,76%
			30Rnd_9x21_Mag                   = 9,76%
			9Rnd_45ACP_Mag                   = 9,76%
			Exile_Magazine_6Rnd_45ACP        = 9,76%
			Exile_Magazine_7Rnd_45ACP        = 9,76%
			Exile_Magazine_8Rnd_9x18         = 9,76%
			Exile_Magazine_10Rnd_765x17_SA61 = 9,76%
			Exile_Magazine_20Rnd_765x17_SA61 = 9,76%
		*/
		PistolAmmo[] = {"Exile_Magazine_20Rnd_765x17_SA61", "Exile_Magazine_7Rnd_45ACP", "9Rnd_45ACP_Mag", "30Rnd_9x21_Mag", "9Rnd_45ACP_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "Exile_Magazine_6Rnd_45ACP", "10Rnd_9x21_Mag", "Exile_Magazine_10Rnd_765x17_SA61", "11Rnd_45ACP_Mag", "16Rnd_9x21_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "Exile_Magazine_6Rnd_45ACP", "11Rnd_45ACP_Mag", "Exile_Magazine_8Rnd_9x18", "11Rnd_45ACP_Mag", "30Rnd_9x21_Mag", "Exile_Magazine_10Rnd_765x17_SA61", "6Rnd_45ACP_Cylinder", "Exile_Magazine_10Rnd_765x17_SA61", "30Rnd_9x21_Mag", "6Rnd_45ACP_Cylinder", "Exile_Magazine_20Rnd_765x17_SA61", "Exile_Magazine_7Rnd_45ACP", "30Rnd_9x21_Mag", "Exile_Magazine_20Rnd_765x17_SA61", "6Rnd_GreenSignal_F", "Exile_Magazine_8Rnd_9x18", "Exile_Magazine_20Rnd_765x17_SA61", "Exile_Magazine_6Rnd_45ACP", "Exile_Magazine_7Rnd_45ACP", "6Rnd_RedSignal_F", "10Rnd_9x21_Mag", "Exile_Magazine_8Rnd_9x18", "11Rnd_45ACP_Mag", "Exile_Magazine_8Rnd_9x18", "Exile_Magazine_7Rnd_45ACP", "Exile_Magazine_6Rnd_45ACP", "Exile_Magazine_10Rnd_765x17_SA61"};

		/*
			Percental Item Spawn Chances of PistolAttachments:

			optic_MRD       = 16,67%
			optic_Yorris    = 16,67%
			muzzle_snds_acp = 33,33%
			muzzle_snds_L   = 33,33%
		*/
		PistolAttachments[] = {"muzzle_snds_acp", "muzzle_snds_L", "muzzle_snds_L", "optic_MRD", "muzzle_snds_acp", "optic_Yorris"};

		/*
			Percental Item Spawn Chances of Shotguns:

			Exile_Weapon_M1014 = 100,00%
		*/
		Shotguns[] = {"Exile_Weapon_M1014"};

		/*
			Percental Item Spawn Chances of ShotgunAmmo:

			Exile_Magazine_8Rnd_74Slug = 100,00%
		*/
		ShotgunAmmo[] = {"Exile_Magazine_8Rnd_74Slug"};

		/*
			Percental Item Spawn Chances of SMG:

			SMG_01_F       = 25,00%
			SMG_02_F       = 25,00%
			SMG_05_F       = 25,00%
			hgun_PDW2000_F = 25,00%
		*/
		SMG[] = {"SMG_05_F", "SMG_01_F", "SMG_02_F", "hgun_PDW2000_F"};

		/*
			Percental Item Spawn Chances of SMGAmmo:

			30Rnd_45ACP_Mag_SMG_01              = 16,67%
			30Rnd_45ACP_Mag_SMG_01_Tracer_Green = 16,67%
			30Rnd_9x21_Mag_SMG_02               = 16,67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Red    = 16,67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Yellow = 16,67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Green  = 16,67%
		*/
		SMGAmmo[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"};

		/*
			Percental Item Spawn Chances of SMGAttachments:

			optic_Holosight_smg       = 16,67%
			optic_Holosight_smg_blk_F = 16,67%
			optic_ACO_grn_smg         = 16,67%
			optic_Aco_smg             = 16,67%
			optic_ACO_grn             = 16,67%
			optic_Aco                 = 16,67%
		*/
		SMGAttachments[] = {"optic_Aco_smg", "optic_Aco", "optic_ACO_grn", "optic_Holosight_smg_blk_F", "optic_ACO_grn_smg", "optic_Holosight_smg"};

		/*
			Percental Item Spawn Chances of Rifles:

			arifle_Katiba_GL_F       = 0,71%
			arifle_Mk20_GL_F         = 0,71%
			arifle_MX_GL_Black_F     = 0,71%
			arifle_MX_GL_F           = 0,71%
			arifle_MXM_F             = 0,71%
			arifle_TRG21_GL_F        = 0,71%
			Exile_Weapon_AK107_GL    = 0,71%
			Exile_Weapon_AK74_GL     = 0,71%
			arifle_AK12_GL_F         = 1,43%
			arifle_AKM_F             = 1,43%
			arifle_AKM_FL_F          = 1,43%
			arifle_AKS_F             = 1,43%
			arifle_ARX_blk_F         = 1,43%
			arifle_ARX_ghex_F        = 1,43%
			arifle_ARX_hex_F         = 1,43%
			arifle_CTAR_blk_F        = 1,43%
			arifle_CTAR_ghex_F       = 1,43%
			arifle_CTAR_GL_blk_F     = 1,43%
			arifle_CTAR_hex_F        = 1,43%
			arifle_CTARS_blk_F       = 1,43%
			arifle_CTARS_ghex_F      = 1,43%
			arifle_CTARS_hex_F       = 1,43%
			arifle_Katiba_F          = 1,43%
			arifle_Mk20_F            = 1,43%
			arifle_Mk20C_F           = 1,43%
			arifle_MX_Black_F        = 1,43%
			arifle_MX_F              = 1,43%
			arifle_MXC_Black_F       = 1,43%
			arifle_MXC_F             = 1,43%
			arifle_MXM_Black_F       = 1,43%
			arifle_SDAR_F            = 1,43%
			arifle_SPAR_01_blk_F     = 1,43%
			arifle_SPAR_01_GL_blk_F  = 1,43%
			arifle_SPAR_01_GL_khk_F  = 1,43%
			arifle_SPAR_01_GL_snd_F  = 1,43%
			arifle_SPAR_01_khk_F     = 1,43%
			arifle_SPAR_01_snd_F     = 1,43%
			arifle_SPAR_02_blk_F     = 1,43%
			arifle_SPAR_02_khk_F     = 1,43%
			arifle_SPAR_02_snd_F     = 1,43%
			arifle_SPAR_03_blk_F     = 1,43%
			arifle_SPAR_03_khk_F     = 1,43%
			arifle_SPAR_03_snd_F     = 1,43%
			arifle_TRG20_F           = 1,43%
			arifle_TRG21_F           = 1,43%
			Exile_Weapon_AK107       = 1,43%
			Exile_Weapon_AK74        = 1,43%
			Exile_Weapon_DMR         = 1,43%
			arifle_MXM_khk_F         = 2,14%
			Exile_Weapon_AK47        = 2,14%
			Exile_Weapon_AKS_Gold    = 2,14%
			Exile_Weapon_SVD         = 2,14%
			Exile_Weapon_SVDCamo     = 2,14%
			Exile_Weapon_VSSVintorez = 2,14%
			arifle_MX_GL_khk_F       = 2,14%
			arifle_AK12_F            = 2,14%
			Exile_Weapon_CZ550       = 2,14%
			arifle_MX_khk_F          = 2,14%
			arifle_MXC_khk_F         = 2,14%
			Exile_Weapon_M4          = 2,14%
			Exile_Weapon_M16A4       = 2,14%
			Exile_Weapon_M16A2       = 2,14%
			Exile_Weapon_LeeEnfield  = 7,14%
		*/
		Rifles[] = {"arifle_AK12_GL_F", "Exile_Weapon_AK74", "arifle_ARX_blk_F", "arifle_SPAR_01_GL_khk_F", "Exile_Weapon_SVDCamo", "arifle_SPAR_02_khk_F", "arifle_CTAR_blk_F", "Exile_Weapon_AKS_Gold", "arifle_CTARS_hex_F", "arifle_TRG20_F", "arifle_CTAR_hex_F", "arifle_Mk20_F", "Exile_Weapon_CZ550", "Exile_Weapon_SVD", "Exile_Weapon_VSSVintorez", "arifle_CTAR_blk_F", "Exile_Weapon_AK74_GL", "Exile_Weapon_SVDCamo", "arifle_AK12_F", "arifle_SPAR_02_blk_F", "arifle_Katiba_F", "Exile_Weapon_LeeEnfield", "arifle_CTARS_hex_F", "arifle_SDAR_F", "arifle_SPAR_02_snd_F", "arifle_MXC_khk_F", "arifle_MX_F", "arifle_MX_F", "arifle_Katiba_F", "Exile_Weapon_AKS_Gold", "arifle_MXM_khk_F", "Exile_Weapon_DMR", "arifle_Mk20_GL_F", "arifle_SPAR_01_GL_snd_F", "arifle_CTAR_GL_blk_F", "arifle_SPAR_02_blk_F", "arifle_MX_GL_khk_F", "Exile_Weapon_LeeEnfield", "arifle_MXC_Black_F", "arifle_MX_GL_Black_F", "arifle_MXC_khk_F", "arifle_AKM_FL_F", "arifle_Mk20C_F", "arifle_ARX_hex_F", "Exile_Weapon_LeeEnfield", "arifle_TRG21_GL_F", "arifle_AK12_GL_F", "Exile_Weapon_AK47", "arifle_MXC_F", "arifle_CTAR_hex_F", "arifle_CTARS_blk_F", "Exile_Weapon_LeeEnfield", "arifle_AK12_F", "arifle_AKS_F", "arifle_MXM_Black_F", "arifle_SPAR_02_snd_F", "arifle_AKM_F", "arifle_TRG21_F", "arifle_SPAR_01_khk_F", "arifle_SPAR_03_snd_F", "arifle_SPAR_01_snd_F", "arifle_MX_khk_F", "arifle_AK12_F", "arifle_Mk20_F", "arifle_SPAR_03_snd_F", "Exile_Weapon_LeeEnfield", "arifle_SPAR_01_GL_blk_F", "Exile_Weapon_M16A4", "Exile_Weapon_M16A2", "arifle_CTAR_ghex_F", "arifle_SPAR_01_GL_snd_F", "Exile_Weapon_M16A2", "Exile_Weapon_AKS_Gold", "Exile_Weapon_AK74", "Exile_Weapon_VSSVintorez", "Exile_Weapon_AK107", "Exile_Weapon_M16A2", "arifle_CTARS_blk_F", "arifle_SPAR_01_blk_F", "arifle_CTARS_ghex_F", "arifle_SPAR_03_khk_F", "arifle_MXM_F", "Exile_Weapon_M4", "arifle_CTAR_GL_blk_F", "arifle_MX_Black_F", "arifle_Mk20C_F", "arifle_MX_GL_khk_F", "arifle_MXC_khk_F", "arifle_MX_GL_F", "Exile_Weapon_SVDCamo", "arifle_MX_Black_F", "Exile_Weapon_M4", "Exile_Weapon_SVD", "Exile_Weapon_LeeEnfield", "arifle_SPAR_01_GL_khk_F", "arifle_Katiba_GL_F", "Exile_Weapon_AK47", "Exile_Weapon_LeeEnfield", "Exile_Weapon_SVD", "Exile_Weapon_CZ550", "Exile_Weapon_M4", "arifle_AKM_FL_F", "arifle_SPAR_03_blk_F", "arifle_ARX_blk_F", "Exile_Weapon_M16A4", "arifle_AKM_F", "arifle_MX_khk_F", "arifle_AKS_F", "Exile_Weapon_CZ550", "Exile_Weapon_VSSVintorez", "arifle_MXM_Black_F", "arifle_SPAR_03_khk_F", "Exile_Weapon_DMR", "arifle_ARX_ghex_F", "Exile_Weapon_AK107", "arifle_MX_khk_F", "arifle_MXC_Black_F", "arifle_CTAR_ghex_F", "arifle_CTARS_ghex_F", "Exile_Weapon_LeeEnfield", "arifle_SPAR_02_khk_F", "arifle_MXC_F", "arifle_SPAR_01_blk_F", "Exile_Weapon_M16A4", "Exile_Weapon_LeeEnfield", "Exile_Weapon_AK47", "arifle_ARX_hex_F", "arifle_SPAR_01_GL_blk_F", "arifle_MXM_khk_F", "arifle_SDAR_F", "arifle_TRG20_F", "arifle_ARX_ghex_F", "Exile_Weapon_AK107_GL", "arifle_SPAR_01_snd_F", "arifle_TRG21_F", "arifle_MXM_khk_F", "arifle_SPAR_01_khk_F", "Exile_Weapon_LeeEnfield", "arifle_SPAR_03_blk_F", "arifle_MX_GL_khk_F"};

		/*
			Percental Item Spawn Chances of RifleAmmo:

			20Rnd_556x45_UW_mag                    = 2,20%
			30Rnd_556x45_Stanag                    = 2,20%
			30Rnd_556x45_Stanag_green              = 2,20%
			30Rnd_556x45_Stanag_red                = 2,20%
			30Rnd_556x45_Stanag_Tracer_Green       = 2,20%
			30Rnd_556x45_Stanag_Tracer_Red         = 2,20%
			30Rnd_556x45_Stanag_Tracer_Yellow      = 2,20%
			30Rnd_65x39_caseless_green             = 2,20%
			30Rnd_65x39_caseless_green_mag_Tracer  = 2,20%
			30Rnd_65x39_caseless_mag               = 2,20%
			30Rnd_65x39_caseless_mag_Tracer        = 2,20%
			Exile_Magazine_10Rnd_303               = 10,99%
			Exile_Magazine_30Rnd_762x39_AK         = 2,20%
			Exile_Magazine_30Rnd_545x39_AK         = 2,20%
			Exile_Magazine_30Rnd_545x39_AK_Green   = 2,20%
			Exile_Magazine_30Rnd_545x39_AK_Red     = 2,20%
			Exile_Magazine_30Rnd_545x39_AK_White   = 2,20%
			Exile_Magazine_30Rnd_545x39_AK_Yellow  = 2,20%
			Exile_Magazine_20Rnd_762x51_DMR        = 1,10%
			Exile_Magazine_20Rnd_762x51_DMR_Yellow = 1,10%
			Exile_Magazine_20Rnd_762x51_DMR_Red    = 1,10%
			Exile_Magazine_20Rnd_762x51_DMR_Green  = 1,10%
			Exile_Magazine_20Rnd_762x51_DMR_White  = 1,10%
			Exile_Magazine_5Rnd_22LR               = 2,20%
			Exile_Magazine_10Rnd_762x54            = 2,20%
			Exile_Magazine_10Rnd_9x39              = 2,20%
			Exile_Magazine_20Rnd_9x39              = 2,20%
			30Rnd_762x39_Mag_F                     = 2,20%
			30Rnd_762x39_Mag_Green_F               = 2,20%
			30Rnd_762x39_Mag_Tracer_F              = 2,20%
			30Rnd_762x39_Mag_Tracer_Green_F        = 2,20%
			30Rnd_762x39_AK47_M                    = 2,20%
			30Rnd_545x39_Mag_F                     = 2,20%
			30Rnd_545x39_Mag_Green_F               = 2,20%
			30Rnd_545x39_Mag_Tracer_F              = 2,20%
			30Rnd_545x39_Mag_Tracer_Green_F        = 2,20%
			10Rnd_50BW_Mag_F                       = 2,20%
			30Rnd_580x42_Mag_F                     = 2,20%
			30Rnd_580x42_Mag_Tracer_F              = 2,20%
			100Rnd_580x42_Mag_F                    = 2,20%
			100Rnd_580x42_Mag_Tracer_F             = 2,20%
			150Rnd_556x45_Drum_Mag_F               = 2,20%
			150Rnd_556x45_Drum_Mag_Tracer_F        = 2,20%
			20Rnd_762x51_Mag                       = 2,20%
		*/
		RifleAmmo[] = {"30Rnd_545x39_Mag_Green_F", "20Rnd_556x45_UW_mag", "30Rnd_580x42_Mag_F", "30Rnd_545x39_Mag_F", "Exile_Magazine_10Rnd_303", "Exile_Magazine_10Rnd_762x54", "Exile_Magazine_5Rnd_22LR", "20Rnd_762x51_Mag", "Exile_Magazine_20Rnd_762x51_DMR_White", "Exile_Magazine_10Rnd_9x39", "Exile_Magazine_30Rnd_545x39_AK", "Exile_Magazine_30Rnd_762x39_AK", "30Rnd_556x45_Stanag_red", "Exile_Magazine_5Rnd_22LR", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_762x39_Mag_Tracer_Green_F", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_545x39_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_762x39_Mag_F", "Exile_Magazine_20Rnd_762x51_DMR_Yellow", "Exile_Magazine_20Rnd_9x39", "30Rnd_556x45_Stanag_Tracer_Green", "Exile_Magazine_10Rnd_303", "30Rnd_556x45_Stanag", "30Rnd_762x39_Mag_Green_F", "Exile_Magazine_20Rnd_762x51_DMR_Green", "Exile_Magazine_10Rnd_303", "30Rnd_762x39_Mag_F", "30Rnd_545x39_Mag_Tracer_Green_F", "10Rnd_50BW_Mag_F", "Exile_Magazine_30Rnd_545x39_AK_White", "Exile_Magazine_10Rnd_303", "30Rnd_762x39_Mag_Tracer_F", "30Rnd_762x39_AK47_M", "Exile_Magazine_30Rnd_545x39_AK_Yellow", "150Rnd_556x45_Drum_Mag_F", "Exile_Magazine_10Rnd_303", "20Rnd_556x45_UW_mag", "20Rnd_762x51_Mag", "30Rnd_556x45_Stanag_Tracer_Red", "Exile_Magazine_10Rnd_303", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_556x45_Stanag_green", "Exile_Magazine_10Rnd_9x39", "30Rnd_545x39_Mag_Tracer_Green_F", "30Rnd_65x39_caseless_green_mag_Tracer", "Exile_Magazine_10Rnd_762x54", "10Rnd_50BW_Mag_F", "Exile_Magazine_30Rnd_545x39_AK_Red", "Exile_Magazine_30Rnd_545x39_AK_Green", "Exile_Magazine_30Rnd_545x39_AK_Red", "30Rnd_556x45_Stanag", "150Rnd_556x45_Drum_Mag_F", "Exile_Magazine_10Rnd_303", "30Rnd_762x39_Mag_Green_F", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_545x39_Mag_Green_F", "Exile_Magazine_30Rnd_545x39_AK_Yellow", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "Exile_Magazine_30Rnd_545x39_AK_Green", "30Rnd_556x45_Stanag_red", "30Rnd_65x39_caseless_green", "30Rnd_545x39_Mag_F", "Exile_Magazine_20Rnd_9x39", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_545x39_Mag_Tracer_F", "100Rnd_580x42_Mag_Tracer_F", "150Rnd_556x45_Drum_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "Exile_Magazine_10Rnd_303", "30Rnd_556x45_Stanag_Tracer_Yellow", "Exile_Magazine_30Rnd_545x39_AK", "30Rnd_762x39_AK47_M", "150Rnd_556x45_Drum_Mag_Tracer_F", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_65x39_caseless_mag", "Exile_Magazine_30Rnd_545x39_AK_White", "30Rnd_580x42_Mag_F", "30Rnd_762x39_Mag_Tracer_Green_F", "100Rnd_580x42_Mag_Tracer_F", "Exile_Magazine_30Rnd_762x39_AK", "Exile_Magazine_20Rnd_762x51_DMR", "30Rnd_762x39_Mag_Tracer_F", "Exile_Magazine_10Rnd_303", "Exile_Magazine_20Rnd_762x51_DMR_Red", "Exile_Magazine_10Rnd_303", "30Rnd_65x39_caseless_mag", "30Rnd_556x45_Stanag_green"};

		/*
			Percental Item Spawn Chances of RifleAttachments:

			muzzle_snds_M            = 3,39%
			muzzle_snds_H            = 3,39%
			muzzle_snds_H_khk_F      = 3,39%
			muzzle_snds_H_snd_F      = 3,39%
			muzzle_snds_58_blk_F     = 3,39%
			muzzle_snds_m_khk_F      = 3,39%
			muzzle_snds_m_snd_F      = 3,39%
			muzzle_snds_58_wdm_F     = 3,39%
			muzzle_snds_65_TI_blk_F  = 3,39%
			muzzle_snds_65_TI_hex_F  = 3,39%
			muzzle_snds_65_TI_ghex_F = 3,39%
			muzzle_snds_H_MG_blk_F   = 3,39%
			muzzle_snds_H_MG_khk_F   = 3,39%
			optic_Arco               = 3,39%
			optic_Arco_blk_F         = 3,39%
			optic_Arco_ghex_F        = 3,39%
			optic_Hamr               = 3,39%
			optic_Hamr_khk_F         = 3,39%
			optic_Holosight          = 3,39%
			optic_Holosight_blk_F    = 3,39%
			optic_Holosight_khk_F    = 3,39%
			acc_flashlight           = 3,39%
			acc_pointer_IR           = 3,39%
			optic_MRCO               = 3,39%
			optic_DMS                = 3,39%
			optic_DMS_ghex_F         = 3,39%
			optic_ERCO_blk_F         = 3,39%
			optic_ERCO_khk_F         = 3,39%
			optic_ERCO_snd_F         = 3,39%
			optic_NVS                = 1,69%
		*/
		RifleAttachments[] = {"optic_ERCO_khk_F", "muzzle_snds_H_snd_F", "acc_flashlight", "muzzle_snds_H_MG_blk_F", "optic_Holosight_khk_F", "muzzle_snds_m_snd_F", "optic_Hamr", "muzzle_snds_m_snd_F", "muzzle_snds_m_khk_F", "optic_MRCO", "muzzle_snds_H", "muzzle_snds_H_MG_khk_F", "optic_Arco_blk_F", "muzzle_snds_H", "muzzle_snds_H_MG_blk_F", "muzzle_snds_M", "muzzle_snds_58_blk_F", "muzzle_snds_65_TI_blk_F", "muzzle_snds_H_snd_F", "optic_Arco_blk_F", "muzzle_snds_58_blk_F", "optic_ERCO_snd_F", "acc_pointer_IR", "optic_Hamr_khk_F", "muzzle_snds_H_khk_F", "muzzle_snds_M", "optic_ERCO_blk_F", "optic_NVS", "muzzle_snds_65_TI_blk_F", "muzzle_snds_65_TI_ghex_F", "muzzle_snds_65_TI_hex_F", "optic_Holosight_blk_F", "optic_Holosight_blk_F", "optic_Arco", "optic_Arco", "optic_Hamr", "optic_Holosight", "muzzle_snds_58_wdm_F", "optic_ERCO_snd_F", "optic_ERCO_blk_F", "optic_DMS_ghex_F", "muzzle_snds_58_wdm_F", "optic_Arco_ghex_F", "optic_Holosight", "optic_DMS", "optic_ERCO_khk_F", "muzzle_snds_H_khk_F", "optic_DMS", "optic_MRCO", "muzzle_snds_H_MG_khk_F", "optic_Hamr_khk_F", "acc_pointer_IR", "optic_Arco_ghex_F", "muzzle_snds_65_TI_hex_F", "muzzle_snds_m_khk_F", "acc_flashlight", "muzzle_snds_65_TI_ghex_F", "optic_Holosight_khk_F", "optic_DMS_ghex_F"};

		/*
			Percental Item Spawn Chances of LMG:

			arifle_MX_SW_Black_F = 12,50%
			arifle_MX_SW_F       = 12,50%
			LMG_Mk200_F          = 12,50%
			LMG_Zafir_F          = 12,50%
			Exile_Weapon_RPK     = 12,50%
			Exile_Weapon_PK      = 12,50%
			Exile_Weapon_PKP     = 12,50%
			LMG_03_F             = 12,50%
		*/
		LMG[] = {"LMG_Mk200_F", "Exile_Weapon_PK", "arifle_MX_SW_Black_F", "arifle_MX_SW_F", "Exile_Weapon_PKP", "Exile_Weapon_RPK", "LMG_Zafir_F", "LMG_03_F"};

		/*
			Percental Item Spawn Chances of LMGAmmo:

			100Rnd_65x39_caseless_mag             = 7,69%
			100Rnd_65x39_caseless_mag_Tracer      = 11,54%
			150Rnd_762x54_Box                     = 11,54%
			150Rnd_762x54_Box_Tracer              = 3,85%
			130Rnd_338_Mag                        = 19,23%
			150Rnd_93x64_Mag                      = 19,23%
			Exile_Magazine_45Rnd_545x39_RPK_Green = 3,85%
			Exile_Magazine_75Rnd_545x39_RPK_Green = 3,85%
			Exile_Magazine_100Rnd_762x54_PK_Green = 3,85%
			200Rnd_556x45_Box_F                   = 3,85%
			200Rnd_556x45_Box_Red_F               = 3,85%
			200Rnd_556x45_Box_Tracer_F            = 3,85%
			200Rnd_556x45_Box_Tracer_Red_F        = 3,85%
		*/
		LMGAmmo[] = {"100Rnd_65x39_caseless_mag_Tracer", "200Rnd_556x45_Box_Tracer_Red_F", "100Rnd_65x39_caseless_mag_Tracer", "Exile_Magazine_45Rnd_545x39_RPK_Green", "150Rnd_93x64_Mag", "150Rnd_93x64_Mag", "Exile_Magazine_100Rnd_762x54_PK_Green", "130Rnd_338_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "150Rnd_762x54_Box", "100Rnd_65x39_caseless_mag", "150Rnd_762x54_Box", "130Rnd_338_Mag", "150Rnd_762x54_Box_Tracer", "150Rnd_93x64_Mag", "200Rnd_556x45_Box_Tracer_F", "Exile_Magazine_75Rnd_545x39_RPK_Green", "200Rnd_556x45_Box_F", "150Rnd_93x64_Mag", "100Rnd_65x39_caseless_mag_Tracer", "200Rnd_556x45_Box_Red_F", "100Rnd_65x39_caseless_mag", "150Rnd_762x54_Box", "150Rnd_93x64_Mag"};

		/*
			Percental Item Spawn Chances of Snipers:

			srifle_DMR_01_F      = 9,09%
			srifle_EBR_F         = 9,09%
			srifle_GM6_F         = 9,09%
			srifle_LRR_F         = 9,09%
			srifle_LRR_tna_F     = 9,09%
			srifle_GM6_ghex_F    = 9,09%
			srifle_DMR_07_blk_F  = 9,09%
			srifle_DMR_07_hex_F  = 9,09%
			srifle_DMR_07_ghex_F = 9,09%
			Exile_Weapon_m107    = 9,09%
			Exile_Weapon_ksvk    = 9,09%
		*/
		Snipers[] = {"srifle_DMR_07_ghex_F", "srifle_GM6_F", "srifle_DMR_07_hex_F", "Exile_Weapon_ksvk", "srifle_LRR_F", "srifle_LRR_tna_F", "Exile_Weapon_m107", "srifle_DMR_01_F", "srifle_DMR_07_blk_F", "srifle_GM6_ghex_F", "srifle_EBR_F"};

		/*
			Percental Item Spawn Chances of SniperAmmo:

			Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag      = 0,74%
			Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag = 0,74%
			Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag      = 1,48%
			Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag           = 1,48%
			Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag      = 2,22%
			Exile_Magazine_7Rnd_408_Bullet_Cam_Mag               = 2,22%
			Exile_Magazine_10Rnd_338_Bullet_Cam_Mag              = 3,70%
			Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag     = 3,70%
			Exile_Magazine_5Rnd_127x108_APDS_KSVK                = 5,93%
			5Rnd_127x108_APDS_Mag                                = 5,93%
			5Rnd_127x108_Mag                                     = 7,41%
			Exile_Magazine_10Rnd_127x99_m107                     = 7,41%
			Exile_Magazine_5Rnd_127x108_KSVK                     = 7,41%
			7Rnd_408_Mag                                         = 7,41%
			10Rnd_762x54_Mag                                     = 12,59%
			20Rnd_762x51_Mag                                     = 14,07%
			20Rnd_650x39_Cased_Mag_F                             = 15,56%
		*/
		SniperAmmo[] = {"Exile_Magazine_10Rnd_127x99_m107", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "10Rnd_762x54_Mag", "5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_KSVK", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "Exile_Magazine_10Rnd_127x99_m107", "20Rnd_762x51_Mag", "5Rnd_127x108_Mag", "Exile_Magazine_10Rnd_127x99_m107", "5Rnd_127x108_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_127x99_m107", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "5Rnd_127x108_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag", "5Rnd_127x108_APDS_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "10Rnd_762x54_Mag", "7Rnd_408_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "10Rnd_762x54_Mag", "7Rnd_408_Mag", "20Rnd_762x51_Mag", "10Rnd_762x54_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_KSVK", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "5Rnd_127x108_Mag", "20Rnd_762x51_Mag", "10Rnd_762x54_Mag", "5Rnd_127x108_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "20Rnd_762x51_Mag", "Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "5Rnd_127x108_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "5Rnd_127x108_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "Exile_Magazine_10Rnd_127x99_m107", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "7Rnd_408_Mag", "20Rnd_762x51_Mag", "7Rnd_408_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_127x99_m107", "Exile_Magazine_10Rnd_127x99_m107", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_127x99_m107", "Exile_Magazine_5Rnd_127x108_KSVK", "20Rnd_762x51_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "5Rnd_127x108_Mag", "10Rnd_762x54_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "10Rnd_762x54_Mag", "5Rnd_127x108_APDS_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag", "10Rnd_762x54_Mag", "7Rnd_408_Mag", "Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "5Rnd_127x108_Mag", "Exile_Magazine_10Rnd_127x99_m107", "5Rnd_127x108_Mag", "20Rnd_762x51_Mag", "7Rnd_408_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "Exile_Magazine_10Rnd_127x99_m107", "Exile_Magazine_5Rnd_127x108_KSVK", "5Rnd_127x108_APDS_Mag", "10Rnd_762x54_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F"};

		/*
			Percental Item Spawn Chances of SniperAttachments:

			muzzle_snds_B_khk_F = 11,11%
			muzzle_snds_B_snd_F = 11,11%
			muzzle_snds_B       = 11,11%
			optic_LRPS          = 11,11%
			optic_LRPS_ghex_F   = 11,11%
			optic_LRPS_tna_F    = 11,11%
			optic_SOS           = 11,11%
			optic_SOS_khk_F     = 11,11%
			optic_DMS           = 11,11%
		*/
		SniperAttachments[] = {"optic_SOS", "optic_SOS_khk_F", "muzzle_snds_B", "optic_LRPS_tna_F", "optic_LRPS_ghex_F", "muzzle_snds_B_snd_F", "optic_LRPS", "optic_DMS", "muzzle_snds_B_khk_F"};

		/*
			Percental Item Spawn Chances of DLCRifles:

			srifle_DMR_03_F          = 4,05%
			srifle_DMR_03_khaki_F    = 4,05%
			srifle_DMR_03_tan_F      = 4,05%
			srifle_DMR_03_woodland_F = 4,05%
			srifle_DMR_06_camo_F     = 4,05%
			srifle_DMR_06_olive_F    = 4,05%
			srifle_DMR_02_camo_F     = 8,11%
			srifle_DMR_02_F          = 8,11%
			srifle_DMR_02_sniper_F   = 8,11%
			srifle_DMR_04_F          = 9,46%
			srifle_DMR_04_Tan_F      = 9,46%
			srifle_DMR_05_blk_F      = 10,81%
			srifle_DMR_05_hex_F      = 10,81%
			srifle_DMR_05_tan_F      = 10,81%
		*/
		DLCRifles[] = {"srifle_DMR_05_tan_F", "srifle_DMR_04_Tan_F", "srifle_DMR_04_F", "srifle_DMR_05_hex_F", "srifle_DMR_02_camo_F", "srifle_DMR_06_olive_F", "srifle_DMR_04_Tan_F", "srifle_DMR_05_tan_F", "srifle_DMR_05_tan_F", "srifle_DMR_04_F", "srifle_DMR_02_F", "srifle_DMR_02_F", "srifle_DMR_05_hex_F", "srifle_DMR_03_khaki_F", "srifle_DMR_04_F", "srifle_DMR_05_tan_F", "srifle_DMR_03_tan_F", "srifle_DMR_02_F", "srifle_DMR_03_F", "srifle_DMR_06_camo_F", "srifle_DMR_05_hex_F", "srifle_DMR_04_F", "srifle_DMR_02_camo_F", "srifle_DMR_02_sniper_F", "srifle_DMR_05_tan_F", "srifle_DMR_03_F", "srifle_DMR_03_khaki_F", "srifle_DMR_02_sniper_F", "srifle_DMR_05_blk_F", "srifle_DMR_03_F", "srifle_DMR_02_sniper_F", "srifle_DMR_03_woodland_F", "srifle_DMR_05_hex_F", "srifle_DMR_02_camo_F", "srifle_DMR_05_hex_F", "srifle_DMR_05_blk_F", "srifle_DMR_02_camo_F", "srifle_DMR_04_F", "srifle_DMR_04_Tan_F", "srifle_DMR_03_tan_F", "srifle_DMR_05_tan_F", "srifle_DMR_03_woodland_F", "srifle_DMR_05_hex_F", "srifle_DMR_05_hex_F", "srifle_DMR_06_camo_F", "srifle_DMR_06_olive_F", "srifle_DMR_06_olive_F", "srifle_DMR_05_blk_F", "srifle_DMR_05_blk_F", "srifle_DMR_03_woodland_F", "srifle_DMR_06_camo_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_F", "srifle_DMR_02_camo_F", "srifle_DMR_04_Tan_F", "srifle_DMR_05_hex_F", "srifle_DMR_03_tan_F", "srifle_DMR_04_Tan_F", "srifle_DMR_04_Tan_F", "srifle_DMR_03_khaki_F", "srifle_DMR_05_blk_F", "srifle_DMR_02_camo_F", "srifle_DMR_02_F", "srifle_DMR_05_blk_F", "srifle_DMR_05_tan_F", "srifle_DMR_04_F", "srifle_DMR_02_F", "srifle_DMR_04_Tan_F", "srifle_DMR_05_blk_F", "srifle_DMR_02_sniper_F", "srifle_DMR_02_sniper_F", "srifle_DMR_05_blk_F", "srifle_DMR_02_sniper_F", "srifle_DMR_04_F"};

		/*
			Percental Item Spawn Chances of DLCAmmo:

			10Rnd_127x54_Mag       = 20,00%
			20Rnd_762x51_Mag       = 20,00%
			10Rnd_338_Mag          = 30,00%
			10Rnd_93x64_DMR_05_Mag = 30,00%
		*/
		DLCAmmo[] = {"10Rnd_338_Mag", "20Rnd_762x51_Mag", "10Rnd_127x54_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_338_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_127x54_Mag", "10Rnd_338_Mag", "10Rnd_93x64_DMR_05_Mag", "20Rnd_762x51_Mag"};

		/*
			Percental Item Spawn Chances of DLCOptics:

			optic_AMS     = 14,29%
			optic_AMS_khk = 14,29%
			optic_AMS_snd = 14,29%
			optic_KHS_blk = 14,29%
			optic_KHS_hex = 14,29%
			optic_KHS_old = 14,29%
			optic_KHS_tan = 14,29%
		*/
		DLCOptics[] = {"optic_AMS_khk", "optic_KHS_old", "optic_AMS", "optic_KHS_tan", "optic_KHS_hex", "optic_KHS_blk", "optic_AMS_snd"};

		/*
			Percental Item Spawn Chances of DLCSupressor:

			muzzle_snds_338_black = 16,67%
			muzzle_snds_338_green = 16,67%
			muzzle_snds_338_sand  = 16,67%
			muzzle_snds_93mmg     = 16,67%
			muzzle_snds_93mmg_tan = 16,67%
			muzzle_snds_B         = 16,67%
		*/
		DLCSupressor[] = {"muzzle_snds_338_sand", "muzzle_snds_93mmg_tan", "muzzle_snds_93mmg", "muzzle_snds_338_green", "muzzle_snds_338_black", "muzzle_snds_B"};

		/*
			Percental Item Spawn Chances of EpicWeapons:

			MMG_01_hex_F   = 20,00%
			MMG_01_tan_F   = 20,00%
			MMG_02_black_F = 20,00%
			MMG_02_camo_F  = 20,00%
			MMG_02_sand_F  = 20,00%
		*/
		EpicWeapons[] = {"MMG_02_sand_F", "MMG_01_tan_F", "MMG_01_hex_F", "MMG_02_camo_F", "MMG_02_black_F"};

		/*
			Percental Item Spawn Chances of Bipods:

			bipod_03_F_oli = 11,11%
			bipod_03_F_blk = 11,11%
			bipod_02_F_tan = 11,11%
			bipod_02_F_hex = 11,11%
			bipod_02_F_blk = 11,11%
			bipod_01_F_snd = 11,11%
			bipod_01_F_mtp = 11,11%
			bipod_01_F_blk = 11,11%
			bipod_01_F_khk = 11,11%
		*/
		Bipods[] = {"bipod_01_F_mtp", "bipod_01_F_blk", "bipod_02_F_blk", "bipod_01_F_snd", "bipod_03_F_oli", "bipod_03_F_blk", "bipod_02_F_tan", "bipod_02_F_hex", "bipod_01_F_khk"};

		/*
			Percental Item Spawn Chances of HEGrenades:

			3Rnd_HE_Grenade_shell = 25,00%
			1Rnd_HE_Grenade_shell = 75,00%
		*/
		HEGrenades[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell"};

		/*
			Percental Item Spawn Chances of UGLFlares:

			3Rnd_UGL_FlareGreen_F  = 6,25%
			3Rnd_UGL_FlareRed_F    = 6,25%
			3Rnd_UGL_FlareWhite_F  = 6,25%
			3Rnd_UGL_FlareYellow_F = 6,25%
			UGL_FlareGreen_F       = 18,75%
			UGL_FlareRed_F         = 18,75%
			UGL_FlareWhite_F       = 18,75%
			UGL_FlareYellow_F      = 18,75%
		*/
		UGLFlares[] = {"UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareWhite_F", "UGL_FlareYellow_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareWhite_F", "UGL_FlareRed_F", "UGL_FlareRed_F", "3Rnd_UGL_FlareWhite_F", "UGL_FlareGreen_F", "3Rnd_UGL_FlareYellow_F", "3Rnd_UGL_FlareGreen_F", "UGL_FlareYellow_F", "3Rnd_UGL_FlareRed_F", "UGL_FlareYellow_F"};

		/*
			Percental Item Spawn Chances of UGLSmokes:

			3Rnd_Smoke_Grenade_shell       = 3,57%
			3Rnd_SmokeBlue_Grenade_shell   = 3,57%
			3Rnd_SmokeGreen_Grenade_shell  = 3,57%
			3Rnd_SmokeOrange_Grenade_shell = 3,57%
			3Rnd_SmokePurple_Grenade_shell = 3,57%
			3Rnd_SmokeRed_Grenade_shell    = 3,57%
			3Rnd_SmokeYellow_Grenade_shell = 3,57%
			1Rnd_Smoke_Grenade_shell       = 10,71%
			1Rnd_SmokeBlue_Grenade_shell   = 10,71%
			1Rnd_SmokeGreen_Grenade_shell  = 10,71%
			1Rnd_SmokeOrange_Grenade_shell = 10,71%
			1Rnd_SmokePurple_Grenade_shell = 10,71%
			1Rnd_SmokeRed_Grenade_shell    = 10,71%
			1Rnd_SmokeYellow_Grenade_shell = 10,71%
		*/
		UGLSmokes[] = {"3Rnd_SmokePurple_Grenade_shell", "3Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "3Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "3Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};

		/*
			Percental Item Spawn Chances of HandGrenades:

			HandGrenade = 50,00%
			MiniGrenade = 50,00%
		*/
		HandGrenades[] = {"MiniGrenade", "HandGrenade"};

		/*
			Percental Item Spawn Chances of Explosives:

			SatchelCharge_Remote_Mag    = 5,26%
			APERSBoundingMine_Range_Mag = 15,79%
			APERSMine_Range_Mag         = 15,79%
			APERSTripMine_Wire_Mag      = 15,79%
			DemoCharge_Remote_Mag       = 15,79%
			IEDLandSmall_Remote_Mag     = 15,79%
			IEDUrbanSmall_Remote_Mag    = 15,79%
		*/
		Explosives[] = {"IEDUrbanSmall_Remote_Mag", "SatchelCharge_Remote_Mag", "IEDLandSmall_Remote_Mag", "APERSTripMine_Wire_Mag", "IEDLandSmall_Remote_Mag", "APERSTripMine_Wire_Mag", "DemoCharge_Remote_Mag", "APERSBoundingMine_Range_Mag", "APERSTripMine_Wire_Mag", "APERSBoundingMine_Range_Mag", "APERSMine_Range_Mag", "DemoCharge_Remote_Mag", "IEDUrbanSmall_Remote_Mag", "APERSMine_Range_Mag", "APERSBoundingMine_Range_Mag", "IEDLandSmall_Remote_Mag", "IEDUrbanSmall_Remote_Mag", "DemoCharge_Remote_Mag", "APERSMine_Range_Mag"};

		/*
			Percental Item Spawn Chances of CivilianItems:

			Exile_Item_MobilePhone = 2,78%
			Binocular              = 11,11%
			ItemGPS                = 11,11%
			ItemRadio              = 16,67%
			ItemWatch              = 16,67%
			ItemMap                = 19,44%
			Exile_Item_Heatpack    = 22,22%
		*/
		CivilianItems[] = {"ItemRadio", "ItemWatch", "ItemWatch", "ItemWatch", "Exile_Item_Heatpack", "ItemGPS", "ItemGPS", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "ItemGPS", "Exile_Item_Heatpack", "ItemWatch", "Binocular", "ItemWatch", "Binocular", "ItemWatch", "Exile_Item_Heatpack", "ItemRadio", "ItemRadio", "ItemRadio", "ItemGPS", "ItemRadio", "ItemMap", "Binocular", "Exile_Item_Heatpack", "ItemRadio", "ItemMap", "ItemMap", "Exile_Item_Heatpack", "ItemMap", "ItemMap", "ItemMap", "ItemMap", "Exile_Item_MobilePhone", "Binocular"};

		/*
			Percental Item Spawn Chances of CivilianClothing:

			U_NikosAgedBody          = 0,58%
			U_NikosBody              = 0,58%
			U_OrestesBody            = 0,58%
			U_C_Man_casual_1_F       = 2,92%
			U_C_Man_casual_2_F       = 2,92%
			U_C_Man_casual_3_F       = 2,92%
			U_C_Man_casual_4_F       = 2,92%
			U_C_Man_casual_5_F       = 2,92%
			U_C_Man_casual_6_F       = 2,92%
			U_C_man_sport_1_F        = 2,92%
			U_C_man_sport_2_F        = 2,92%
			U_C_man_sport_3_F        = 2,92%
			U_I_C_Soldier_Bandit_1_F = 2,92%
			U_I_C_Soldier_Bandit_2_F = 2,92%
			U_I_C_Soldier_Bandit_3_F = 2,92%
			U_I_C_Soldier_Bandit_4_F = 2,92%
			U_I_C_Soldier_Bandit_5_F = 2,92%
			U_C_Poloshirt_blue       = 4,09%
			U_C_Poloshirt_burgundy   = 4,09%
			U_C_Poloshirt_salmon     = 4,09%
			U_C_Poloshirt_stripped   = 4,09%
			U_C_Poloshirt_tricolour  = 4,09%
			U_C_HunterBody_grn       = 5,26%
			U_C_Journalist           = 5,26%
			U_C_Poor_1               = 5,26%
			U_C_Poor_2               = 5,26%
			U_C_Poor_shorts_1        = 5,26%
			U_C_Scientist            = 5,26%
			U_Rangemaster            = 5,26%
		*/
		CivilianClothing[] = {"U_I_C_Soldier_Bandit_2_F", "U_C_Poloshirt_salmon", "U_C_Man_casual_1_F", "U_I_C_Soldier_Bandit_3_F", "U_C_Scientist", "U_I_C_Soldier_Bandit_2_F", "U_C_man_sport_2_F", "U_C_Poloshirt_burgundy", "U_C_Poor_shorts_1", "U_C_Poloshirt_salmon", "U_NikosBody", "U_I_C_Soldier_Bandit_1_F", "U_C_Poor_1", "U_C_man_sport_2_F", "U_I_C_Soldier_Bandit_3_F", "U_C_Scientist", "U_C_Man_casual_6_F", "U_C_Poor_shorts_1", "U_C_Man_casual_2_F", "U_I_C_Soldier_Bandit_2_F", "U_C_Poloshirt_blue", "U_C_Man_casual_3_F", "U_C_Man_casual_6_F", "U_Rangemaster", "U_C_Poor_2", "U_C_man_sport_2_F", "U_Rangemaster", "U_C_Man_casual_3_F", "U_I_C_Soldier_Bandit_4_F", "U_C_man_sport_1_F", "U_C_man_sport_1_F", "U_C_Scientist", "U_I_C_Soldier_Bandit_1_F", "U_C_Poor_shorts_1", "U_C_Poor_1", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_burgundy", "U_C_Man_casual_1_F", "U_C_Poor_2", "U_C_Man_casual_4_F", "U_C_Journalist", "U_Rangemaster", "U_C_Scientist", "U_I_C_Soldier_Bandit_5_F", "U_C_Man_casual_5_F", "U_C_Poloshirt_salmon", "U_C_Poloshirt_tricolour", "U_C_Scientist", "U_C_Poor_1", "U_C_Man_casual_2_F", "U_C_Journalist", "U_C_man_sport_3_F", "U_C_Man_casual_2_F", "U_C_HunterBody_grn", "U_I_C_Soldier_Bandit_4_F", "U_C_HunterBody_grn", "U_C_Poloshirt_salmon", "U_I_C_Soldier_Bandit_2_F", "U_C_Man_casual_4_F", "U_C_man_sport_3_F", "U_I_C_Soldier_Bandit_3_F", "U_I_C_Soldier_Bandit_5_F", "U_C_Poloshirt_blue", "U_C_HunterBody_grn", "U_C_Poor_2", "U_C_Poloshirt_salmon", "U_Rangemaster", "U_C_Poor_2", "U_C_Poor_1", "U_C_Poor_shorts_1", "U_C_man_sport_2_F", "U_C_HunterBody_grn", "U_C_Man_casual_5_F", "U_C_HunterBody_grn", "U_C_Journalist", "U_C_HunterBody_grn", "U_C_Poor_2", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_blue", "U_C_man_sport_3_F", "U_C_Poloshirt_burgundy", "U_C_Poor_1", "U_C_HunterBody_grn", "U_C_Journalist", "U_C_Poloshirt_blue", "U_C_Man_casual_1_F", "U_C_Scientist", "U_C_HunterBody_grn", "U_C_Poloshirt_salmon", "U_I_C_Soldier_Bandit_4_F", "U_C_HunterBody_grn", "U_C_Poloshirt_blue", "U_Rangemaster", "U_Rangemaster", "U_C_Journalist", "U_C_Man_casual_5_F", "U_C_Man_casual_1_F", "U_Rangemaster", "U_C_Poor_shorts_1", "U_C_Journalist", "U_C_man_sport_1_F", "U_I_C_Soldier_Bandit_1_F", "U_C_Journalist", "U_Rangemaster", "U_C_Poloshirt_burgundy", "U_C_Man_casual_5_F", "U_C_Poloshirt_stripped", "U_C_Poor_2", "U_I_C_Soldier_Bandit_1_F", "U_C_Poloshirt_stripped", "U_C_Poloshirt_tricolour", "U_C_Man_casual_3_F", "U_C_Poloshirt_burgundy", "U_I_C_Soldier_Bandit_5_F", "U_OrestesBody", "U_C_Man_casual_2_F", "U_C_Poor_2", "U_C_Poloshirt_stripped", "U_C_man_sport_3_F", "U_C_Scientist", "U_C_Poor_2", "U_C_Man_casual_3_F", "U_C_Poloshirt_tricolour", "U_I_C_Soldier_Bandit_5_F", "U_C_Journalist", "U_C_man_sport_3_F", "U_I_C_Soldier_Bandit_3_F", "U_C_man_sport_1_F", "U_C_Poloshirt_stripped", "U_C_Man_casual_3_F", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_tricolour", "U_NikosAgedBody", "U_C_Poor_shorts_1", "U_C_Scientist", "U_C_Poor_1", "U_C_Poor_shorts_1", "U_C_Poloshirt_blue", "U_I_C_Soldier_Bandit_2_F", "U_C_man_sport_2_F", "U_C_Man_casual_2_F", "U_C_Man_casual_4_F", "U_C_Man_casual_4_F", "U_C_Poloshirt_blue", "U_C_man_sport_1_F", "U_C_Poloshirt_stripped", "U_C_Man_casual_4_F", "U_C_Journalist", "U_C_Poloshirt_burgundy", "U_C_Poor_2", "U_I_C_Soldier_Bandit_3_F", "U_C_Poor_1", "U_I_C_Soldier_Bandit_4_F", "U_C_Poor_1", "U_C_Man_casual_6_F", "U_C_Poloshirt_salmon", "U_Rangemaster", "U_C_Poor_shorts_1", "U_C_Man_casual_6_F", "U_C_Man_casual_5_F", "U_C_Poloshirt_burgundy", "U_C_Scientist", "U_I_C_Soldier_Bandit_1_F", "U_C_Poloshirt_stripped", "U_I_C_Soldier_Bandit_4_F", "U_C_Man_casual_6_F", "U_C_Poor_1", "U_C_Poor_shorts_1", "U_I_C_Soldier_Bandit_5_F", "U_C_Poloshirt_stripped", "U_C_Man_casual_1_F"};

		/*
			Percental Item Spawn Chances of CivilianBackpacks:

			B_Kitbag_cbr        = 6,67%
			B_Kitbag_mcamo      = 6,67%
			B_Kitbag_sgg        = 6,67%
			B_AssaultPack_blk   = 6,67%
			B_AssaultPack_cbr   = 6,67%
			B_AssaultPack_dgtl  = 6,67%
			B_AssaultPack_khk   = 6,67%
			B_AssaultPack_mcamo = 6,67%
			B_AssaultPack_rgr   = 6,67%
			B_AssaultPack_sgg   = 6,67%
			B_AssaultPack_tna_F = 6,67%
			B_HuntingBackpack   = 6,67%
			B_OutdoorPack_blu   = 6,67%
			B_OutdoorPack_tan   = 6,67%
			B_OutdoorPack_blk   = 6,67%
		*/
		CivilianBackpacks[] = {"B_AssaultPack_rgr", "B_Kitbag_cbr", "B_AssaultPack_blk", "B_AssaultPack_mcamo", "B_AssaultPack_dgtl", "B_OutdoorPack_blk", "B_OutdoorPack_tan", "B_OutdoorPack_blu", "B_AssaultPack_cbr", "B_Kitbag_sgg", "B_AssaultPack_sgg", "B_AssaultPack_tna_F", "B_Kitbag_mcamo", "B_HuntingBackpack", "B_AssaultPack_khk"};

		/*
			Percental Item Spawn Chances of CivilianVests:

			V_Press_F            = 25,00%
			V_TacVest_blk_POLICE = 25,00%
			V_Rangemaster_belt   = 50,00%
		*/
		CivilianVests[] = {"V_Rangemaster_belt", "V_Rangemaster_belt", "V_Press_F", "V_TacVest_blk_POLICE"};

		/*
			Percental Item Spawn Chances of CivilianHeadgear:

			H_Bandanna_surfer  = 5,56%
			H_Beret_blk_POLICE = 5,56%
			H_Cap_blk          = 5,56%
			H_Cap_blk_Raven    = 5,56%
			H_Cap_blu          = 5,56%
			H_Cap_grn          = 5,56%
			H_Cap_headphones   = 5,56%
			H_Cap_oli          = 5,56%
			H_Cap_press        = 5,56%
			H_Cap_red          = 5,56%
			H_Cap_tan          = 5,56%
			H_Hat_blue         = 5,56%
			H_Hat_brown        = 5,56%
			H_Hat_checker      = 5,56%
			H_Hat_grey         = 5,56%
			H_Hat_tan          = 5,56%
			H_StrawHat         = 5,56%
			H_StrawHat_dark    = 5,56%
		*/
		CivilianHeadgear[] = {"H_Cap_headphones", "H_Cap_blk", "H_Hat_grey", "H_Cap_red", "H_Hat_brown", "H_StrawHat", "H_Hat_tan", "H_Bandanna_surfer", "H_Cap_tan", "H_StrawHat_dark", "H_Beret_blk_POLICE", "H_Cap_blk_Raven", "H_Cap_press", "H_Cap_grn", "H_Hat_blue", "H_Hat_checker", "H_Cap_blu", "H_Cap_oli"};

		/*
			Percental Item Spawn Chances of GuerillaItems:

			Rangefinder        = 6,25%
			ItemCompass        = 62,50%
			NVGoggles          = 6,25%
			NVGoggles_tna_F    = 6,25%
			O_NVGoggles_ghex_F = 6,25%
			O_NVGoggles_hex_F  = 6,25%
			O_NVGoggles_urb_F  = 6,25%
		*/
		GuerillaItems[] = {"O_NVGoggles_ghex_F", "NVGoggles", "ItemCompass", "ItemCompass", "ItemCompass", "ItemCompass", "ItemCompass", "Rangefinder", "O_NVGoggles_urb_F", "ItemCompass", "ItemCompass", "NVGoggles_tna_F", "ItemCompass", "ItemCompass", "O_NVGoggles_hex_F", "ItemCompass"};

		/*
			Percental Item Spawn Chances of GuerillaClothing:

			U_I_G_resistanceLeader_F = 1,75%
			U_I_C_Soldier_Camo_F     = 5,26%
			U_I_C_Soldier_Para_1_F   = 5,26%
			U_I_C_Soldier_Para_2_F   = 5,26%
			U_I_C_Soldier_Para_3_F   = 5,26%
			U_I_C_Soldier_Para_4_F   = 5,26%
			U_I_C_Soldier_Para_5_F   = 5,26%
			U_IG_leader              = 7,02%
			U_IG_Guerilla3_1         = 8,77%
			U_IG_Guerilla3_2         = 8,77%
			U_IG_Guerilla1_1         = 10,53%
			U_IG_Guerilla2_1         = 10,53%
			U_IG_Guerilla2_2         = 10,53%
			U_IG_Guerilla2_3         = 10,53%
		*/
		GuerillaClothing[] = {"U_IG_Guerilla3_2", "U_IG_Guerilla2_1", "U_IG_Guerilla3_2", "U_I_C_Soldier_Camo_F", "U_IG_leader", "U_IG_Guerilla1_1", "U_IG_Guerilla2_3", "U_I_C_Soldier_Camo_F", "U_IG_Guerilla2_2", "U_IG_Guerilla2_2", "U_I_C_Soldier_Para_4_F", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla2_2", "U_IG_Guerilla3_2", "U_IG_Guerilla2_3", "U_IG_Guerilla3_1", "U_I_C_Soldier_Para_1_F", "U_IG_Guerilla3_1", "U_I_C_Soldier_Para_1_F", "U_IG_Guerilla2_3", "U_IG_Guerilla2_3", "U_IG_Guerilla3_2", "U_IG_Guerilla2_1", "U_IG_Guerilla1_1", "U_IG_Guerilla1_1", "U_I_C_Soldier_Camo_F", "U_I_C_Soldier_Para_3_F", "U_IG_leader", "U_IG_Guerilla2_1", "U_IG_Guerilla1_1", "U_I_C_Soldier_Para_3_F", "U_IG_Guerilla3_2", "U_IG_Guerilla2_3", "U_IG_Guerilla3_1", "U_IG_Guerilla2_1", "U_IG_Guerilla2_2", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla1_1", "U_I_C_Soldier_Para_3_F", "U_I_C_Soldier_Para_2_F", "U_I_C_Soldier_Para_5_F", "U_I_G_resistanceLeader_F", "U_IG_Guerilla3_1", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_5_F", "U_I_C_Soldier_Para_1_F", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla1_1", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla2_2", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla2_2", "U_IG_Guerilla2_3", "U_IG_leader", "U_IG_leader", "U_IG_Guerilla3_1"};

		/*
			Percental Item Spawn Chances of GuerillaBackpacks:

			B_Bergen_blk               = 1,82%
			B_Bergen_mcamo             = 1,82%
			B_Bergen_rgr               = 1,82%
			B_Bergen_sgg               = 1,82%
			B_FieldPack_ghex_F         = 1,82%
			B_ViperHarness_base_F      = 3,64%
			B_ViperHarness_blk_F       = 3,64%
			B_ViperHarness_ghex_F      = 3,64%
			B_ViperHarness_hex_F       = 3,64%
			B_ViperHarness_khk_F       = 3,64%
			B_ViperHarness_oli_F       = 3,64%
			B_ViperLightHarness_base_F = 5,45%
			B_ViperLightHarness_blk_F  = 5,45%
			B_ViperLightHarness_ghex_F = 5,45%
			B_ViperLightHarness_hex_F  = 5,45%
			B_ViperLightHarness_khk_F  = 5,45%
			B_ViperLightHarness_oli_F  = 5,45%
			B_FieldPack_blk            = 9,09%
			B_FieldPack_cbr            = 9,09%
			B_FieldPack_ocamo          = 9,09%
			B_FieldPack_oucamo         = 9,09%
		*/
		GuerillaBackpacks[] = {"B_ViperLightHarness_blk_F", "B_FieldPack_ocamo", "B_ViperHarness_hex_F", "B_FieldPack_oucamo", "B_FieldPack_blk", "B_FieldPack_cbr", "B_ViperHarness_oli_F", "B_FieldPack_oucamo", "B_FieldPack_blk", "B_ViperLightHarness_hex_F", "B_ViperLightHarness_oli_F", "B_FieldPack_cbr", "B_ViperLightHarness_blk_F", "B_Bergen_sgg", "B_ViperLightHarness_base_F", "B_ViperHarness_ghex_F", "B_Bergen_blk", "B_ViperHarness_base_F", "B_FieldPack_ocamo", "B_ViperHarness_blk_F", "B_ViperLightHarness_khk_F", "B_FieldPack_cbr", "B_ViperLightHarness_hex_F", "B_FieldPack_oucamo", "B_ViperLightHarness_base_F", "B_ViperLightHarness_ghex_F", "B_ViperLightHarness_base_F", "B_ViperLightHarness_hex_F", "B_FieldPack_blk", "B_FieldPack_cbr", "B_ViperHarness_khk_F", "B_FieldPack_ocamo", "B_FieldPack_blk", "B_ViperLightHarness_ghex_F", "B_FieldPack_oucamo", "B_ViperLightHarness_blk_F", "B_ViperLightHarness_ghex_F", "B_ViperHarness_ghex_F", "B_ViperLightHarness_oli_F", "B_ViperHarness_hex_F", "B_Bergen_mcamo", "B_ViperHarness_blk_F", "B_FieldPack_ghex_F", "B_ViperLightHarness_khk_F", "B_FieldPack_blk", "B_ViperHarness_base_F", "B_ViperHarness_khk_F", "B_Bergen_rgr", "B_FieldPack_cbr", "B_ViperLightHarness_khk_F", "B_FieldPack_ocamo", "B_FieldPack_oucamo", "B_ViperHarness_oli_F", "B_ViperLightHarness_oli_F", "B_FieldPack_ocamo"};

		/*
			Percental Item Spawn Chances of GuerillaVests:

			V_I_G_resistanceLeader_F = 3,23%
			V_BandollierB_blk        = 6,45%
			V_BandollierB_cbr        = 6,45%
			V_BandollierB_khk        = 6,45%
			V_BandollierB_oli        = 6,45%
			V_BandollierB_rgr        = 6,45%
			V_Chestrig_blk           = 6,45%
			V_Chestrig_khk           = 6,45%
			V_Chestrig_oli           = 6,45%
			V_Chestrig_rgr           = 6,45%
			V_HarnessO_brn           = 6,45%
			V_HarnessO_gry           = 6,45%
			V_HarnessOGL_brn         = 6,45%
			V_HarnessOGL_gry         = 6,45%
			V_HarnessOSpec_brn       = 6,45%
			V_HarnessOSpec_gry       = 6,45%
		*/
		GuerillaVests[] = {"V_HarnessOGL_brn", "V_BandollierB_khk", "V_Chestrig_khk", "V_HarnessOSpec_gry", "V_BandollierB_blk", "V_HarnessOGL_gry", "V_Chestrig_blk", "V_Chestrig_oli", "V_BandollierB_blk", "V_BandollierB_oli", "V_Chestrig_khk", "V_Chestrig_rgr", "V_HarnessOSpec_brn", "V_HarnessOGL_brn", "V_HarnessO_gry", "V_HarnessOSpec_gry", "V_Chestrig_blk", "V_I_G_resistanceLeader_F", "V_Chestrig_rgr", "V_HarnessO_brn", "V_BandollierB_rgr", "V_HarnessOSpec_brn", "V_BandollierB_oli", "V_HarnessO_gry", "V_HarnessO_brn", "V_HarnessOGL_gry", "V_Chestrig_oli", "V_BandollierB_cbr", "V_BandollierB_khk", "V_BandollierB_cbr", "V_BandollierB_rgr"};

		/*
			Percental Item Spawn Chances of GuerillaHeadgear:

			H_Beret_02                = 0,82%
			H_Beret_blk               = 0,82%
			H_Beret_brn_SF            = 0,82%
			H_Beret_Colonel           = 0,82%
			H_Beret_grn               = 0,82%
			H_Beret_grn_SF            = 0,82%
			H_Beret_ocamo             = 0,82%
			H_Beret_red               = 0,82%
			H_Booniehat_tna_F         = 1,64%
			H_Cap_blk_Syndikat_F      = 1,64%
			H_Cap_grn_Syndikat_F      = 1,64%
			H_Cap_oli_Syndikat_F      = 1,64%
			H_Cap_tan_Syndikat_F      = 1,64%
			H_FakeHeadgear_Syndikat_F = 1,64%
			H_MilCap_gen_F            = 1,64%
			H_MilCap_ghex_F           = 1,64%
			H_MilCap_tna_F            = 1,64%
			H_Shemag_khk              = 1,64%
			H_Shemag_olive            = 1,64%
			H_Shemag_olive_hs         = 1,64%
			H_Shemag_tan              = 1,64%
			H_ShemagOpen_khk          = 1,64%
			H_ShemagOpen_tan          = 1,64%
			H_TurbanO_blk             = 1,64%
			H_Watchcap_camo           = 1,64%
			H_Watchcap_sgg            = 1,64%
			H_Bandanna_camo           = 2,46%
			H_Bandanna_cbr            = 2,46%
			H_Bandanna_gry            = 2,46%
			H_Bandanna_khk            = 2,46%
			H_Bandanna_khk_hs         = 2,46%
			H_Bandanna_mcamo          = 2,46%
			H_Bandanna_sgg            = 2,46%
			H_BandMask_blk            = 2,46%
			H_Cap_brn_SPECOPS         = 2,46%
			H_Cap_khaki_specops_UK    = 2,46%
			H_Cap_tan_specops_US      = 2,46%
			H_Hat_camo                = 2,46%
			H_Watchcap_blk            = 2,46%
			H_Watchcap_khk            = 2,46%
			Exile_Headgear_GasMask    = 3,28%
			H_Booniehat_dgtl          = 3,28%
			H_Booniehat_dirty         = 3,28%
			H_Booniehat_grn           = 3,28%
			H_Booniehat_indp          = 3,28%
			H_Booniehat_khk           = 3,28%
			H_Booniehat_khk_hs        = 3,28%
			H_Booniehat_mcamo         = 3,28%
			H_Booniehat_tan           = 3,28%
		*/
		GuerillaHeadgear[] = {"H_Bandanna_khk_hs", "H_Bandanna_mcamo", "H_Bandanna_sgg", "H_Booniehat_khk_hs", "H_Bandanna_gry", "H_BandMask_blk", "H_Watchcap_sgg", "H_Bandanna_mcamo", "H_Bandanna_camo", "H_Bandanna_camo", "H_Watchcap_blk", "H_Cap_blk_Syndikat_F", "H_BandMask_blk", "H_Cap_tan_Syndikat_F", "H_Bandanna_khk", "H_Shemag_olive", "H_Cap_tan_specops_US", "H_Cap_blk_Syndikat_F", "H_Shemag_olive_hs", "H_Hat_camo", "H_Booniehat_khk_hs", "H_Cap_tan_specops_US", "H_Cap_khaki_specops_UK", "H_Shemag_khk", "Exile_Headgear_GasMask", "H_Shemag_tan", "H_ShemagOpen_khk", "H_Shemag_khk", "H_Beret_grn_SF", "H_Bandanna_camo", "H_Bandanna_khk", "H_Beret_Colonel", "H_Booniehat_grn", "H_Booniehat_khk", "H_Booniehat_tna_F", "H_Booniehat_indp", "H_Hat_camo", "H_Beret_grn", "H_Booniehat_khk_hs", "H_Bandanna_sgg", "H_Booniehat_mcamo", "H_Shemag_tan", "Exile_Headgear_GasMask", "H_Booniehat_tan", "H_Beret_02", "H_FakeHeadgear_Syndikat_F", "H_Cap_oli_Syndikat_F", "H_Booniehat_grn", "H_Booniehat_grn", "H_Cap_khaki_specops_UK", "H_Booniehat_khk", "H_TurbanO_blk", "H_Booniehat_dirty", "H_Cap_brn_SPECOPS", "H_Watchcap_khk", "H_Bandanna_cbr", "H_Shemag_olive_hs", "H_Booniehat_khk", "H_Bandanna_gry", "H_Beret_brn_SF", "H_Beret_blk", "H_MilCap_ghex_F", "H_Beret_ocamo", "H_ShemagOpen_tan", "H_Bandanna_khk_hs", "H_Booniehat_khk_hs", "H_Booniehat_grn", "H_Booniehat_tan", "H_Booniehat_indp", "H_Booniehat_dirty", "H_Watchcap_camo", "H_Bandanna_khk_hs", "H_Watchcap_blk", "H_Cap_oli_Syndikat_F", "H_Watchcap_blk", "H_Booniehat_indp", "H_Booniehat_tan", "H_Booniehat_indp", "H_BandMask_blk", "H_Booniehat_dirty", "H_Booniehat_mcamo", "H_TurbanO_blk", "H_Shemag_olive", "H_MilCap_tna_F", "H_Bandanna_gry", "H_ShemagOpen_khk", "H_Booniehat_mcamo", "H_Hat_camo", "H_ShemagOpen_tan", "H_MilCap_gen_F", "H_MilCap_tna_F", "H_Cap_grn_Syndikat_F", "H_Watchcap_khk", "H_Bandanna_khk", "H_Cap_grn_Syndikat_F", "H_Booniehat_khk", "H_Bandanna_mcamo", "H_Cap_tan_specops_US", "H_Booniehat_mcamo", "H_Watchcap_khk", "H_Booniehat_tan", "H_MilCap_gen_F", "H_Cap_brn_SPECOPS", "H_Bandanna_sgg", "H_Booniehat_dgtl", "Exile_Headgear_GasMask", "H_Cap_tan_Syndikat_F", "H_Booniehat_dgtl", "H_MilCap_ghex_F", "H_Booniehat_dirty", "H_Beret_red", "H_Booniehat_dgtl", "H_Bandanna_cbr", "H_Booniehat_dgtl", "H_Cap_khaki_specops_UK", "H_FakeHeadgear_Syndikat_F", "H_Watchcap_camo", "Exile_Headgear_GasMask", "H_Watchcap_sgg", "H_Booniehat_tna_F", "H_Cap_brn_SPECOPS", "H_Bandanna_cbr"};

		/*
			Percental Item Spawn Chances of MilitaryClothing:

			U_B_Wetsuit                   = 1,32%
			U_I_OfficerUniform            = 1,32%
			U_I_Wetsuit                   = 1,32%
			U_O_CombatUniform_ocamo       = 1,32%
			U_O_CombatUniform_oucamo      = 1,32%
			U_O_OfficerUniform_ocamo      = 1,32%
			U_O_SpecopsUniform_blk        = 1,32%
			U_O_SpecopsUniform_ocamo      = 1,32%
			U_O_V_Soldier_Viper_F         = 1,32%
			U_O_V_Soldier_Viper_hex_F     = 1,32%
			U_O_Wetsuit                   = 1,32%
			U_B_SpecopsUniform_sgg        = 1,97%
			U_B_HeliPilotCoveralls        = 2,63%
			U_B_PilotCoveralls            = 2,63%
			U_I_CombatUniform             = 2,63%
			U_I_CombatUniform_shortsleeve = 2,63%
			U_I_CombatUniform_tshirt      = 2,63%
			U_I_HeliPilotCoveralls        = 2,63%
			U_I_pilotCoveralls            = 2,63%
			U_O_PilotCoveralls            = 2,63%
			U_B_CombatUniform_mcam        = 3,29%
			U_B_CombatUniform_mcam_tshirt = 3,29%
			U_B_CombatUniform_mcam_vest   = 3,29%
			U_B_CombatUniform_mcam_worn   = 3,29%
			U_B_CTRG_1                    = 3,29%
			U_B_CTRG_2                    = 3,29%
			U_B_CTRG_3                    = 3,29%
			U_B_CTRG_Soldier_2_F          = 3,29%
			U_B_CTRG_Soldier_3_F          = 3,29%
			U_B_CTRG_Soldier_F            = 3,29%
			U_B_CTRG_Soldier_urb_1_F      = 3,29%
			U_B_CTRG_Soldier_urb_2_F      = 3,29%
			U_B_CTRG_Soldier_urb_3_F      = 3,29%
			U_B_GEN_Commander_F           = 3,29%
			U_B_GEN_Soldier_F             = 3,29%
			U_B_T_Soldier_AR_F            = 3,29%
			U_B_T_Soldier_SL_F            = 3,29%
			U_O_T_Officer_F               = 3,29%
			U_O_T_Soldier_F               = 3,29%
		*/
		MilitaryClothing[] = {"U_B_SpecopsUniform_sgg", "U_B_CombatUniform_mcam", "U_B_CTRG_1", "U_O_CombatUniform_oucamo", "U_O_T_Officer_F", "U_O_T_Soldier_F", "U_B_SpecopsUniform_sgg", "U_B_Wetsuit", "U_O_CombatUniform_oucamo", "U_B_GEN_Soldier_F", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_2", "U_B_CombatUniform_mcam_vest", "U_B_HeliPilotCoveralls", "U_B_GEN_Commander_F", "U_I_CombatUniform_tshirt", "U_B_GEN_Commander_F", "U_I_CombatUniform_tshirt", "U_B_CTRG_Soldier_urb_3_F", "U_B_CombatUniform_mcam_worn", "U_I_CombatUniform_tshirt", "U_B_CTRG_Soldier_3_F", "U_O_V_Soldier_Viper_F", "U_B_CTRG_Soldier_2_F", "U_B_T_Soldier_SL_F", "U_O_T_Soldier_F", "U_B_T_Soldier_SL_F", "U_B_CombatUniform_mcam_worn", "U_O_SpecopsUniform_blk", "U_O_V_Soldier_Viper_hex_F", "U_O_T_Soldier_F", "U_I_pilotCoveralls", "U_B_CTRG_Soldier_F", "U_I_pilotCoveralls", "U_B_GEN_Soldier_F", "U_B_CTRG_Soldier_3_F", "U_B_CTRG_1", "U_B_CTRG_Soldier_urb_2_F", "U_O_SpecopsUniform_ocamo", "U_O_PilotCoveralls", "U_B_GEN_Commander_F", "U_B_CTRG_3", "U_B_CTRG_Soldier_2_F", "U_B_T_Soldier_AR_F", "U_B_CombatUniform_mcam", "U_B_GEN_Soldier_F", "U_B_CTRG_3", "U_I_CombatUniform", "U_B_CTRG_Soldier_F", "U_O_Wetsuit", "U_B_CombatUniform_mcam_vest", "U_B_T_Soldier_AR_F", "U_I_CombatUniform_shortsleeve", "U_B_HeliPilotCoveralls", "U_B_CTRG_2", "U_O_T_Soldier_F", "U_O_CombatUniform_ocamo", "U_B_CTRG_Soldier_F", "U_B_T_Soldier_AR_F", "U_B_CTRG_3", "U_B_T_Soldier_SL_F", "U_B_CTRG_Soldier_urb_3_F", "U_B_T_Soldier_AR_F", "U_I_OfficerUniform", "U_B_GEN_Commander_F", "U_B_CTRG_2", "U_B_CTRG_Soldier_3_F", "U_I_OfficerUniform", "U_I_CombatUniform", "U_B_CombatUniform_mcam_vest", "U_O_T_Officer_F", "U_B_CombatUniform_mcam", "U_O_OfficerUniform_ocamo", "U_O_T_Soldier_F", "U_O_Wetsuit", "U_B_CTRG_Soldier_3_F", "U_B_HeliPilotCoveralls", "U_B_CTRG_Soldier_urb_1_F", "U_B_SpecopsUniform_sgg", "U_O_SpecopsUniform_blk", "U_B_CTRG_Soldier_urb_2_F", "U_B_PilotCoveralls", "U_B_CombatUniform_mcam_tshirt", "U_B_CTRG_Soldier_urb_1_F", "U_B_GEN_Soldier_F", "U_B_CombatUniform_mcam", "U_B_CTRG_Soldier_2_F", "U_I_CombatUniform_shortsleeve", "U_B_CTRG_Soldier_3_F", "U_O_T_Officer_F", "U_B_CTRG_Soldier_urb_2_F", "U_O_PilotCoveralls", "U_B_CombatUniform_mcam_tshirt", "U_I_HeliPilotCoveralls", "U_I_Wetsuit", "U_I_pilotCoveralls", "U_O_SpecopsUniform_ocamo", "U_I_HeliPilotCoveralls", "U_O_V_Soldier_Viper_hex_F", "U_O_V_Soldier_Viper_F", "U_B_T_Soldier_SL_F", "U_B_GEN_Soldier_F", "U_B_GEN_Commander_F", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_3", "U_B_CTRG_1", "U_B_HeliPilotCoveralls", "U_I_CombatUniform", "U_O_T_Officer_F", "U_O_CombatUniform_ocamo", "U_I_CombatUniform_shortsleeve", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_Soldier_urb_2_F", "U_I_HeliPilotCoveralls", "U_B_PilotCoveralls", "U_B_CTRG_Soldier_urb_1_F", "U_B_CombatUniform_mcam_vest", "U_O_OfficerUniform_ocamo", "U_B_CombatUniform_mcam_tshirt", "U_B_CTRG_Soldier_2_F", "U_I_Wetsuit", "U_B_Wetsuit", "U_I_HeliPilotCoveralls", "U_B_CombatUniform_mcam_worn", "U_B_CTRG_Soldier_urb_1_F", "U_B_CTRG_1", "U_B_CombatUniform_mcam_worn", "U_I_pilotCoveralls", "U_B_CTRG_2", "U_B_PilotCoveralls", "U_B_CombatUniform_mcam", "U_B_CTRG_Soldier_2_F", "U_B_T_Soldier_SL_F", "U_B_CTRG_1", "U_B_CombatUniform_mcam_worn", "U_B_CTRG_Soldier_F", "U_O_T_Officer_F", "U_O_PilotCoveralls", "U_B_CombatUniform_mcam_vest", "U_B_PilotCoveralls", "U_B_CombatUniform_mcam_tshirt", "U_B_CTRG_2", "U_B_CombatUniform_mcam_tshirt", "U_B_CTRG_Soldier_F", "U_I_CombatUniform_tshirt", "U_O_PilotCoveralls", "U_I_CombatUniform_shortsleeve", "U_I_CombatUniform", "U_B_T_Soldier_AR_F", "U_B_CTRG_Soldier_urb_1_F", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_3"};

		/*
			Percental Item Spawn Chances of MilitaryBackpacks:

			B_Bergen_Base_F   = 5,26%
			B_Bergen_dgtl_F   = 5,26%
			B_Bergen_hex_F    = 5,26%
			B_Bergen_mcamo_F  = 5,26%
			B_Bergen_tna_F    = 5,26%
			B_Carryall_mcamo  = 10,53%
			B_Carryall_ocamo  = 10,53%
			B_Carryall_oucamo = 10,53%
			B_Carryall_khk    = 10,53%
			B_Carryall_oli    = 10,53%
			B_Carryall_cbr    = 10,53%
			B_Carryall_ghex_F = 10,53%
		*/
		MilitaryBackpacks[] = {"B_Carryall_ghex_F", "B_Carryall_oli", "B_Carryall_khk", "B_Carryall_mcamo", "B_Bergen_Base_F", "B_Carryall_oucamo", "B_Bergen_mcamo_F", "B_Carryall_oucamo", "B_Carryall_cbr", "B_Carryall_cbr", "B_Bergen_hex_F", "B_Bergen_tna_F", "B_Carryall_khk", "B_Carryall_ghex_F", "B_Carryall_ocamo", "B_Bergen_dgtl_F", "B_Carryall_oli", "B_Carryall_mcamo", "B_Carryall_ocamo"};

		/*
			Percental Item Spawn Chances of MilitaryVests:

			V_PlateCarrierH_CTRG    = 5,00%
			V_PlateCarrierL_CTRG    = 5,00%
			V_PlateCarrier1_blk     = 10,00%
			V_PlateCarrier1_rgr     = 10,00%
			V_PlateCarrier2_rgr     = 10,00%
			V_PlateCarrier3_rgr     = 10,00%
			V_PlateCarrierGL_rgr    = 10,00%
			V_PlateCarrierIA1_dgtl  = 10,00%
			V_PlateCarrierIA2_dgtl  = 10,00%
			V_PlateCarrierIAGL_dgtl = 10,00%
			V_PlateCarrierSpec_rgr  = 10,00%
		*/
		MilitaryVests[] = {"V_PlateCarrier2_rgr", "V_PlateCarrier2_rgr", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrierIA2_dgtl", "V_PlateCarrierH_CTRG", "V_PlateCarrier1_rgr", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrierGL_rgr", "V_PlateCarrierIA2_dgtl", "V_PlateCarrierIA1_dgtl", "V_PlateCarrier1_blk", "V_PlateCarrier3_rgr", "V_PlateCarrierGL_rgr", "V_PlateCarrierSpec_rgr", "V_PlateCarrier1_blk", "V_PlateCarrierSpec_rgr", "V_PlateCarrier1_rgr", "V_PlateCarrierIA1_dgtl", "V_PlateCarrier3_rgr", "V_PlateCarrierL_CTRG"};

		/*
			Percental Item Spawn Chances of MilitaryHeadgear:

			H_CrewHelmetHeli_B        = 0,81%
			H_CrewHelmetHeli_I        = 0,81%
			H_CrewHelmetHeli_O        = 0,81%
			H_HelmetB_camo            = 0,81%
			H_HelmetCrew_B            = 0,81%
			H_HelmetCrew_I            = 0,81%
			H_HelmetCrew_O            = 0,81%
			H_HelmetLeaderO_ocamo     = 0,81%
			H_HelmetLeaderO_oucamo    = 0,81%
			H_HelmetO_ghex_F          = 0,81%
			H_HelmetO_ocamo           = 0,81%
			H_HelmetO_oucamo          = 0,81%
			H_HelmetSpecO_blk         = 0,81%
			H_HelmetSpecO_ocamo       = 0,81%
			H_PilotHelmetFighter_B    = 0,81%
			H_PilotHelmetFighter_I    = 0,81%
			H_PilotHelmetFighter_O    = 0,81%
			H_PilotHelmetHeli_B       = 0,81%
			H_PilotHelmetHeli_I       = 0,81%
			H_PilotHelmetHeli_O       = 0,81%
			H_BandMask_demon          = 1,63%
			H_BandMask_khk            = 1,63%
			H_BandMask_reaper         = 1,63%
			H_Beret_gen_F             = 1,63%
			H_Helmet_Skate            = 1,63%
			H_HelmetB_black           = 1,63%
			H_HelmetB_desert          = 1,63%
			H_HelmetB_Enh_tna_F       = 1,63%
			H_HelmetB_grass           = 1,63%
			H_HelmetB_light_black     = 1,63%
			H_HelmetB_light_desert    = 1,63%
			H_HelmetB_light_grass     = 1,63%
			H_HelmetB_light_sand      = 1,63%
			H_HelmetB_light_snakeskin = 1,63%
			H_HelmetB_Light_tna_F     = 1,63%
			H_HelmetB_sand            = 1,63%
			H_HelmetB_snakeskin       = 1,63%
			H_HelmetB_TI_tna_F        = 1,63%
			H_HelmetB_tna_F           = 1,63%
			H_HelmetCrew_O_ghex_F     = 1,63%
			H_HelmetIA_camo           = 1,63%
			H_HelmetIA_net            = 1,63%
			H_HelmetLeaderO_ghex_F    = 1,63%
			H_HelmetSpecO_ghex_F      = 1,63%
			H_HelmetB                 = 2,44%
			H_HelmetB_light           = 2,44%
			H_HelmetB_paint           = 2,44%
			H_HelmetB_plain_blk       = 2,44%
			H_HelmetIA                = 2,44%
			H_HelmetSpecB             = 2,44%
			H_HelmetSpecB_blk         = 2,44%
			H_HelmetSpecB_paint1      = 2,44%
			H_HelmetSpecB_paint2      = 2,44%
			Exile_Headgear_GasMask    = 3,25%
			H_MilCap_blue             = 3,25%
			H_MilCap_dgtl             = 3,25%
			H_MilCap_mcamo            = 3,25%
			H_MilCap_ocamo            = 3,25%
			H_MilCap_oucamo           = 3,25%
			H_MilCap_rucamo           = 3,25%
		*/
		MilitaryHeadgear[] = {"H_MilCap_ocamo", "H_MilCap_oucamo", "H_HelmetO_ghex_F", "H_HelmetCrew_I", "H_HelmetIA_camo", "H_HelmetCrew_O", "H_PilotHelmetFighter_B", "H_MilCap_oucamo", "H_HelmetSpecB", "H_MilCap_rucamo", "H_CrewHelmetHeli_I", "Exile_Headgear_GasMask", "H_MilCap_blue", "H_HelmetB_paint", "H_HelmetSpecB", "H_HelmetB_light_sand", "H_MilCap_mcamo", "H_MilCap_dgtl", "H_Helmet_Skate", "H_HelmetB_tna_F", "H_HelmetSpecO_ghex_F", "H_HelmetB_light_black", "H_HelmetB_tna_F", "H_HelmetB_TI_tna_F", "H_HelmetB_paint", "Exile_Headgear_GasMask", "H_HelmetB_light_grass", "H_PilotHelmetHeli_I", "H_HelmetB_grass", "H_HelmetB_light_desert", "H_MilCap_mcamo", "H_HelmetB_camo", "H_HelmetSpecB_paint1", "H_HelmetB_snakeskin", "H_HelmetSpecO_ghex_F", "Exile_Headgear_GasMask", "H_HelmetB_Enh_tna_F", "H_HelmetB", "H_MilCap_dgtl", "H_HelmetIA_camo", "H_CrewHelmetHeli_O", "H_HelmetB_desert", "H_HelmetB_light_black", "H_HelmetSpecB_paint2", "H_BandMask_khk", "H_HelmetB_desert", "H_Beret_gen_F", "H_HelmetSpecB_blk", "H_HelmetB_plain_blk", "H_BandMask_demon", "H_HelmetSpecB_paint2", "H_MilCap_dgtl", "H_HelmetCrew_B", "H_HelmetB_light_snakeskin", "H_Helmet_Skate", "H_HelmetSpecB_blk", "H_PilotHelmetFighter_O", "H_HelmetIA", "H_Beret_gen_F", "H_HelmetIA", "H_HelmetLeaderO_ghex_F", "H_HelmetB_plain_blk", "H_MilCap_blue", "H_MilCap_ocamo", "H_HelmetB_Light_tna_F", "H_MilCap_rucamo", "H_HelmetSpecB", "H_MilCap_ocamo", "H_BandMask_khk", "H_CrewHelmetHeli_B", "Exile_Headgear_GasMask", "H_BandMask_demon", "H_MilCap_mcamo", "H_HelmetB_snakeskin", "H_HelmetB_TI_tna_F", "H_HelmetSpecO_ocamo", "H_HelmetB_light_sand", "H_PilotHelmetHeli_O", "H_PilotHelmetFighter_I", "H_HelmetB_plain_blk", "H_HelmetB", "H_BandMask_reaper", "H_HelmetIA", "H_HelmetCrew_O_ghex_F", "H_BandMask_reaper", "H_HelmetLeaderO_oucamo", "H_MilCap_blue", "H_HelmetIA_net", "H_HelmetB_sand", "H_MilCap_oucamo", "H_HelmetB", "H_MilCap_oucamo", "H_HelmetB_black", "H_MilCap_dgtl", "H_PilotHelmetHeli_B", "H_HelmetB_paint", "H_HelmetSpecB_paint1", "H_HelmetB_sand", "H_HelmetIA_net", "H_HelmetB_light", "H_HelmetB_light", "H_HelmetB_light_grass", "H_MilCap_mcamo", "H_HelmetB_black", "H_HelmetSpecO_blk", "H_MilCap_ocamo", "H_HelmetB_grass", "H_HelmetSpecB_blk", "H_MilCap_rucamo", "H_MilCap_rucamo", "H_HelmetB_Enh_tna_F", "H_HelmetLeaderO_ocamo", "H_HelmetCrew_O_ghex_F", "H_HelmetSpecB_paint1", "H_HelmetSpecB_paint2", "H_MilCap_blue", "H_HelmetO_oucamo", "H_HelmetB_light", "H_HelmetB_Light_tna_F", "H_HelmetB_light_snakeskin", "H_HelmetB_light_desert", "H_HelmetO_ocamo", "H_HelmetLeaderO_ghex_F"};

		/*
			Percental Item Spawn Chances of Ghillies:

			U_B_GhillieSuit = 33,33%
			U_O_GhillieSuit = 33,33%
			U_I_GhillieSuit = 33,33%
		*/
		Ghillies[] = {"U_I_GhillieSuit", "U_B_GhillieSuit", "U_O_GhillieSuit"};

		/*
			Percental Item Spawn Chances of DLCGhillies:

			U_B_FullGhillie_ard     = 2,94%
			U_B_FullGhillie_lsh     = 2,94%
			U_B_FullGhillie_sard    = 2,94%
			U_O_FullGhillie_ard     = 2,94%
			U_O_FullGhillie_lsh     = 2,94%
			U_O_FullGhillie_sard    = 2,94%
			U_I_FullGhillie_ard     = 2,94%
			U_I_FullGhillie_lsh     = 2,94%
			U_I_FullGhillie_sard    = 2,94%
			U_B_T_Sniper_F          = 14,71%
			U_B_T_Soldier_F         = 14,71%
			U_B_T_FullGhillie_tna_F = 14,71%
			U_O_T_Sniper_F          = 14,71%
			U_O_T_FullGhillie_tna_F = 14,71%
		*/
		DLCGhillies[] = {"U_B_T_FullGhillie_tna_F", "U_B_T_FullGhillie_tna_F", "U_O_T_FullGhillie_tna_F", "U_I_FullGhillie_sard", "U_O_T_FullGhillie_tna_F", "U_O_T_Sniper_F", "U_I_FullGhillie_lsh", "U_O_T_FullGhillie_tna_F", "U_B_T_Soldier_F", "U_B_T_Soldier_F", "U_B_T_FullGhillie_tna_F", "U_B_FullGhillie_ard", "U_B_T_Sniper_F", "U_B_T_Sniper_F", "U_B_T_Soldier_F", "U_B_T_FullGhillie_tna_F", "U_O_T_Sniper_F", "U_O_T_Sniper_F", "U_B_T_Sniper_F", "U_O_T_Sniper_F", "U_O_FullGhillie_lsh", "U_B_FullGhillie_sard", "U_B_FullGhillie_lsh", "U_B_T_Sniper_F", "U_B_T_Soldier_F", "U_O_FullGhillie_sard", "U_O_FullGhillie_ard", "U_B_T_FullGhillie_tna_F", "U_O_T_FullGhillie_tna_F", "U_B_T_Sniper_F", "U_I_FullGhillie_ard", "U_O_T_Sniper_F", "U_O_T_FullGhillie_tna_F", "U_B_T_Soldier_F"};

		/*
			Percental Item Spawn Chances of DLCVests:

			V_PlateCarrierGL_blk         = 4,76%
			V_PlateCarrierGL_mtp         = 4,76%
			V_PlateCarrierGL_rgr         = 4,76%
			V_PlateCarrierIAGL_dgtl      = 4,76%
			V_PlateCarrierIAGL_oli       = 4,76%
			V_PlateCarrierSpec_blk       = 4,76%
			V_PlateCarrierSpec_mtp       = 4,76%
			V_PlateCarrierSpec_rgr       = 4,76%
			V_TacChestrig_grn_F          = 4,76%
			V_TacChestrig_oli_F          = 4,76%
			V_TacChestrig_cbr_F          = 4,76%
			V_PlateCarrier1_tna_F        = 4,76%
			V_PlateCarrier2_tna_F        = 4,76%
			V_PlateCarrierSpec_tna_F     = 4,76%
			V_PlateCarrierGL_tna_F       = 4,76%
			V_HarnessO_ghex_F            = 4,76%
			V_HarnessOGL_ghex_F          = 4,76%
			V_BandollierB_ghex_F         = 4,76%
			V_TacVest_gen_F              = 4,76%
			V_PlateCarrier1_rgr_noflag_F = 4,76%
			V_PlateCarrier2_rgr_noflag_F = 4,76%
		*/
		DLCVests[] = {"V_PlateCarrier1_tna_F", "V_PlateCarrierGL_rgr", "V_TacChestrig_cbr_F", "V_PlateCarrierSpec_rgr", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrierGL_mtp", "V_PlateCarrierGL_tna_F", "V_HarnessO_ghex_F", "V_HarnessOGL_ghex_F", "V_TacChestrig_oli_F", "V_PlateCarrierSpec_tna_F", "V_TacVest_gen_F", "V_BandollierB_ghex_F", "V_PlateCarrierIAGL_oli", "V_PlateCarrierGL_blk", "V_PlateCarrier1_rgr_noflag_F", "V_TacChestrig_grn_F", "V_PlateCarrierSpec_blk", "V_PlateCarrier2_rgr_noflag_F", "V_PlateCarrierSpec_mtp", "V_PlateCarrier2_tna_F"};

		/*
			Percental Item Spawn Chances of Rebreathers:

			V_RebreatherB  = 33,33%
			V_RebreatherIR = 33,33%
			V_RebreatherIA = 33,33%
		*/
		Rebreathers[] = {"V_RebreatherIR", "V_RebreatherIA", "V_RebreatherB"};

		/*
			Percental Item Spawn Chances of MedicalItems:

			Exile_Item_InstaDoc  = 9,09%
			Exile_Item_Bandage   = 18,18%
			Exile_Item_Vishpirin = 36,36%
			Exile_Item_Heatpack  = 36,36%
		*/
		MedicalItems[] = {"Exile_Item_Vishpirin", "Exile_Item_Bandage", "Exile_Item_Vishpirin", "Exile_Item_InstaDoc", "Exile_Item_Vishpirin", "Exile_Item_Heatpack", "Exile_Item_Bandage", "Exile_Item_Vishpirin", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "Exile_Item_Heatpack"};

		/*
			Percental Item Spawn Chances of IndustrialItems:

			Exile_Item_ThermalScannerPro    = 0,66%
			Exile_Item_Knife                = 1,32%
			Exile_Item_Cement               = 1,97%
			Exile_Item_FloodLightKit        = 1,97%
			Exile_Item_PortableGeneratorKit = 1,97%
			Exile_Item_CamoTentKit          = 2,63%
			Exile_Item_MetalBoard           = 2,63%
			Exile_Item_Foolbox              = 2,63%
			Exile_Item_Sand                 = 2,63%
			Exile_Item_Grinder              = 3,29%
			Exile_Item_MetalScrews          = 3,29%
			Exile_Melee_SledgeHammer        = 3,29%
			Exile_Item_ExtensionCord        = 5,26%
			Exile_Item_LightBulb            = 5,92%
			Exile_Item_WaterCanisterEmpty   = 6,58%
			Exile_Melee_Shovel              = 6,58%
			Exile_Item_JunkMetal            = 7,24%
			Exile_Item_Handsaw              = 8,55%
			Exile_Item_Pliers               = 8,55%
			Exile_Item_ScrewDriver          = 8,55%
			Exile_Melee_Axe                 = 14,47%
		*/
		IndustrialItems[] = {"Exile_Item_Handsaw", "Exile_Melee_Shovel", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Item_Foolbox", "Exile_Item_Handsaw", "Exile_Item_LightBulb", "Exile_Item_ExtensionCord", "Exile_Item_ScrewDriver", "Exile_Item_Handsaw", "Exile_Item_Grinder", "Exile_Item_JunkMetal", "Exile_Item_ScrewDriver", "Exile_Item_WaterCanisterEmpty", "Exile_Item_FloodLightKit", "Exile_Item_JunkMetal", "Exile_Item_MetalBoard", "Exile_Item_Pliers", "Exile_Item_JunkMetal", "Exile_Melee_Shovel", "Exile_Melee_Shovel", "Exile_Melee_Axe", "Exile_Item_Grinder", "Exile_Item_Cement", "Exile_Item_JunkMetal", "Exile_Item_Pliers", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Item_FloodLightKit", "Exile_Item_Sand", "Exile_Item_Foolbox", "Exile_Item_Handsaw", "Exile_Item_LightBulb", "Exile_Item_LightBulb", "Exile_Item_ExtensionCord", "Exile_Item_Pliers", "Exile_Item_Pliers", "Exile_Item_Knife", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_SledgeHammer", "Exile_Item_ExtensionCord", "Exile_Item_JunkMetal", "Exile_Item_Pliers", "Exile_Melee_Axe", "Exile_Item_Sand", "Exile_Item_Pliers", "Exile_Item_Handsaw", "Exile_Item_MetalScrews", "Exile_Item_MetalScrews", "Exile_Item_LightBulb", "Exile_Item_Pliers", "Exile_Item_MetalScrews", "Exile_Melee_Axe", "Exile_Melee_Shovel", "Exile_Item_Handsaw", "Exile_Item_Sand", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Item_ScrewDriver", "Exile_Melee_Axe", "Exile_Item_LightBulb", "Exile_Item_LightBulb", "Exile_Item_ScrewDriver", "Exile_Item_Cement", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Handsaw", "Exile_Item_JunkMetal", "Exile_Item_Sand", "Exile_Item_Handsaw", "Exile_Item_ScrewDriver", "Exile_Melee_Shovel", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_SledgeHammer", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Item_ExtensionCord", "Exile_Melee_Axe", "Exile_Item_Knife", "Exile_Item_Handsaw", "Exile_Melee_Shovel", "Exile_Item_JunkMetal", "Exile_Item_ScrewDriver", "Exile_Item_ScrewDriver", "Exile_Item_JunkMetal", "Exile_Item_Grinder", "Exile_Melee_Shovel", "Exile_Item_Pliers", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Axe", "Exile_Item_Pliers", "Exile_Item_Pliers", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Melee_Shovel", "Exile_Item_ScrewDriver", "Exile_Item_Foolbox", "Exile_Melee_Axe", "Exile_Item_PortableGeneratorKit", "Exile_Item_PortableGeneratorKit", "Exile_Item_JunkMetal", "Exile_Item_Handsaw", "Exile_Item_Grinder", "Exile_Item_ScrewDriver", "Exile_Melee_Axe", "Exile_Item_WaterCanisterEmpty", "Exile_Item_WaterCanisterEmpty", "Exile_Item_ExtensionCord", "Exile_Item_ExtensionCord", "Exile_Item_ExtensionCord", "Exile_Item_MetalScrews", "Exile_Item_ExtensionCord", "Exile_Item_CamoTentKit", "Exile_Item_CamoTentKit", "Exile_Melee_SledgeHammer", "Exile_Item_CamoTentKit", "Exile_Item_Pliers", "Exile_Item_Cement", "Exile_Melee_SledgeHammer", "Exile_Item_Foolbox", "Exile_Item_PortableGeneratorKit", "Exile_Item_Pliers", "Exile_Item_CamoTentKit", "Exile_Item_JunkMetal", "Exile_Item_LightBulb", "Exile_Item_Handsaw", "Exile_Item_WaterCanisterEmpty", "Exile_Item_WaterCanisterEmpty", "Exile_Item_ScrewDriver", "Exile_Item_ScrewDriver", "Exile_Item_MetalBoard", "Exile_Melee_Axe", "Exile_Item_MetalBoard", "Exile_Item_MetalBoard", "Exile_Item_LightBulb", "Exile_Melee_SledgeHammer", "Exile_Item_WaterCanisterEmpty", "Exile_Item_FloodLightKit", "Exile_Item_JunkMetal", "Exile_Item_MetalScrews", "Exile_Melee_Shovel", "Exile_Item_ScrewDriver", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Item_Pliers", "Exile_Item_LightBulb", "Exile_Item_Grinder", "Exile_Melee_Axe", "Exile_Melee_Shovel", "Exile_Item_ScrewDriver", "Exile_Item_ThermalScannerPro"};

		/*
			Percental Item Spawn Chances of Vehicle:

			Exile_Item_FuelCanisterFull  = 40,00%
			Exile_Item_FuelCanisterEmpty = 50,00%
			Exile_Item_DuctTape          = 10,00%
		*/
		Vehicle[] = {"Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterEmpty", "Exile_Item_DuctTape", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterFull"};

		/*
			Percental Item Spawn Chances of Chemlights:

			Chemlight_blue   = 25,00%
			Chemlight_green  = 25,00%
			Chemlight_red    = 25,00%
			Chemlight_yellow = 25,00%
		*/
		Chemlights[] = {"Chemlight_green", "Chemlight_blue", "Chemlight_red", "Chemlight_yellow"};

		/*
			Percental Item Spawn Chances of RoadFlares:

			FlareGreen_F  = 25,00%
			FlareRed_F    = 25,00%
			FlareWhite_F  = 25,00%
			FlareYellow_F = 25,00%
		*/
		RoadFlares[] = {"FlareWhite_F", "FlareYellow_F", "FlareRed_F", "FlareGreen_F"};

		/*
			Percental Item Spawn Chances of SmokeGrenades:

			SmokeShell       = 14,29%
			SmokeShellRed    = 14,29%
			SmokeShellGreen  = 14,29%
			SmokeShellYellow = 14,29%
			SmokeShellPurple = 14,29%
			SmokeShellBlue   = 14,29%
			SmokeShellOrange = 14,29%
		*/
		SmokeGrenades[] = {"SmokeShellBlue", "SmokeShell", "SmokeShellYellow", "SmokeShellPurple", "SmokeShellRed", "SmokeShellOrange", "SmokeShellGreen"};

		/*
			Percental Item Spawn Chances of Restraints:

			Exile_Item_ZipTie = 100,00%
		*/
		Restraints[] = {"Exile_Item_ZipTie"};

		/*
			Percental Item Spawn Chances of Electronics:

			Exile_Item_Laptop        = 50,00%
			Exile_Item_BaseCameraKit = 50,00%
		*/
		Electronics[] = {"Exile_Item_BaseCameraKit", "Exile_Item_Laptop"};

		/*
			Percental Item Spawn Chances of Trash:

			Exile_Item_Magazine01         = 6,25%
			Exile_Item_Magazine02         = 6,25%
			Exile_Item_Magazine03         = 6,25%
			Exile_Item_Magazine04         = 6,25%
			Exile_Item_Can_Empty          = 25,00%
			Exile_Item_PlasticBottleEmpty = 25,00%
			Exile_Item_ToiletPaper        = 25,00%
		*/
		Trash[] = {"Exile_Item_Can_Empty", "Exile_Item_PlasticBottleEmpty", "Exile_Item_Magazine03", "Exile_Item_Can_Empty", "Exile_Item_Can_Empty", "Exile_Item_Magazine02", "Exile_Item_PlasticBottleEmpty", "Exile_Item_ToiletPaper", "Exile_Item_Magazine04", "Exile_Item_ToiletPaper", "Exile_Item_PlasticBottleEmpty", "Exile_Item_Can_Empty", "Exile_Item_Magazine01", "Exile_Item_ToiletPaper", "Exile_Item_ToiletPaper", "Exile_Item_PlasticBottleEmpty"};

		/*
			Percental Item Spawn Chances of Unused:

			Exile_Item_CordlessScrewdriver = 11,11%
			Exile_Item_FireExtinguisher    = 11,11%
			Exile_Item_Rope                = 11,11%
			Exile_Item_Carwheel            = 11,11%
			Exile_Item_Defibrillator       = 11,11%
			Exile_Item_SleepingMat         = 11,11%
			Exile_Item_Wrench              = 11,11%
			Exile_Item_OilCanister         = 11,11%
			Exile_Item_Hammer              = 11,11%
		*/
		Unused[] = {"Exile_Item_Defibrillator", "Exile_Item_CordlessScrewdriver", "Exile_Item_FireExtinguisher", "Exile_Item_Carwheel", "Exile_Item_SleepingMat", "Exile_Item_OilCanister", "Exile_Item_Hammer", "Exile_Item_Rope", "Exile_Item_Wrench"};

		/*
			Percental Item Spawn Chances of CUPBipods:

			CUP_bipod_Harris_1A2_L = 50,00%
			CUP_bipod_VLTOR_Modpod = 50,00%
		*/
		CUPBipods[] = {"CUP_bipod_Harris_1A2_L", "CUP_bipod_VLTOR_Modpod", "CUP_bipod_VLTOR_Modpod", "CUP_bipod_Harris_1A2_L"};

		/*
			Percental Item Spawn Chances of CUPPistolAttachments:

			CUP_muzzle_snds_M9         = 12,50%
			CUP_acc_Glock17_Flashlight = 12,50%
			CUP_acc_Flashlight         = 12,50%
			CUP_acc_Flashlight_wdl     = 12,50%
			CUP_acc_Flashlight_desert  = 12,50%
			CUP_acc_CZ_M3X             = 12,50%
			CUP_optic_Eotech533        = 12,50%
			CUP_optic_Eotech533Grey    = 12,50%
		*/
		CUPPistolAttachments[] = {"CUP_acc_Flashlight", "CUP_optic_Eotech533Grey", "CUP_acc_Flashlight_wdl", "CUP_acc_Glock17_Flashlight", "CUP_acc_CZ_M3X", "CUP_optic_Eotech533", "CUP_acc_Flashlight_desert", "CUP_muzzle_snds_M9"};

		/*
			Percental Item Spawn Chances of CUPSMGAttachments:

			CUP_muzzle_PBS4          = 6,25%
			CUP_muzzle_PB6P9         = 6,25%
			CUP_muzzle_Bizon         = 6,25%
			CUP_muzzle_snds_MicroUzi = 6,25%
			CUP_optic_ElcanM145      = 6,25%
			CUP_optic_ZDDot          = 6,25%
			CUP_optic_MRad           = 6,25%
			CUP_optic_CompM4         = 6,25%
			CUP_optic_SUSAT          = 6,25%
			CUP_optic_ACOG           = 6,25%
			CUP_optic_CWS            = 6,25%
			CUP_optic_Elcan          = 6,25%
			CUP_optic_Elcan_reflex   = 6,25%
			CUP_optic_PGO7V          = 6,25%
			CUP_optic_PGO7V2         = 6,25%
			CUP_optic_PGO7V3         = 6,25%
		*/
		CUPSMGAttachments[] = {"CUP_muzzle_Bizon", "CUP_optic_MRad", "CUP_muzzle_PB6P9", "CUP_muzzle_PBS4", "CUP_optic_Elcan", "CUP_optic_PGO7V2", "CUP_optic_PGO7V3", "CUP_optic_SUSAT", "CUP_optic_CompM4", "CUP_optic_ZDDot", "CUP_optic_ElcanM145", "CUP_optic_CWS", "CUP_muzzle_snds_MicroUzi", "CUP_optic_PGO7V", "CUP_optic_ACOG", "CUP_optic_Elcan_reflex"};

		/*
			Percental Item Spawn Chances of CUPRifleAttachments:

			CUP_muzzle_snds_M110       = 3,23%
			CUP_muzzle_snds_M14        = 3,23%
			CUP_muzzle_snds_M16_camo   = 3,23%
			CUP_muzzle_snds_M16        = 3,23%
			CUP_muzzle_snds_Mk12       = 3,23%
			CUP_muzzle_snds_SCAR_L     = 3,23%
			CUP_muzzle_mfsup_SCAR_L    = 3,23%
			CUP_muzzle_snds_SCAR_H     = 3,23%
			CUP_muzzle_mfsup_SCAR_H    = 3,23%
			CUP_muzzle_snds_G36_black  = 3,23%
			CUP_muzzle_snds_G36_desert = 3,23%
			CUP_acc_sffh               = 3,23%
			CUP_acc_bfa                = 3,23%
			CUP_acc_LLM                = 3,23%
			CUP_acc_ANPEQ_2_camo       = 3,23%
			CUP_acc_ANPEQ_2_desert     = 3,23%
			CUP_acc_ANPEQ_2_grey       = 3,23%
			CUP_acc_ANPEQ_15           = 3,23%
			CUP_acc_ANPEQ_2            = 3,23%
			CUP_optic_PSO_1            = 3,23%
			CUP_optic_PSO_3            = 3,23%
			CUP_optic_Kobra            = 3,23%
			CUP_optic_GOSHAWK          = 3,23%
			CUP_optic_NSPU             = 3,23%
			CUP_optic_PechenegScope    = 3,23%
			CUP_optic_RCO              = 3,23%
			CUP_optic_RCO_desert       = 3,23%
			CUP_optic_CompM2_Black     = 3,23%
			CUP_optic_CompM2_Woodland  = 3,23%
			CUP_optic_CompM2_Woodland2 = 3,23%
			CUP_optic_CompM2_Desert    = 3,23%
		*/
		CUPRifleAttachments[] = {"CUP_muzzle_snds_G36_black", "CUP_muzzle_snds_M16_camo", "CUP_optic_CompM2_Black", "CUP_muzzle_snds_SCAR_L", "CUP_acc_ANPEQ_15", "CUP_acc_bfa", "CUP_optic_PSO_1", "CUP_muzzle_snds_Mk12", "CUP_optic_RCO", "CUP_muzzle_snds_M14", "CUP_optic_Kobra", "CUP_muzzle_snds_M110", "CUP_muzzle_snds_SCAR_H", "CUP_optic_CompM2_Woodland2", "CUP_acc_ANPEQ_2", "CUP_optic_PSO_3", "CUP_muzzle_snds_G36_desert", "CUP_optic_CompM2_Desert", "CUP_acc_ANPEQ_2_desert", "CUP_acc_LLM", "CUP_muzzle_mfsup_SCAR_H", "CUP_optic_CompM2_Woodland", "CUP_optic_PechenegScope", "CUP_optic_NSPU", "CUP_acc_ANPEQ_2_camo", "CUP_acc_ANPEQ_2_grey", "CUP_muzzle_snds_M16", "CUP_acc_sffh", "CUP_optic_RCO_desert", "CUP_optic_GOSHAWK", "CUP_muzzle_mfsup_SCAR_L"};

		/*
			Percental Item Spawn Chances of CUPSniperAttachments:

			CUP_muzzle_snds_XM8                     = 4,00%
			CUP_muzzle_snds_L85                     = 4,00%
			CUP_muzzle_snds_AWM                     = 4,00%
			CUP_acc_XM8_light_module                = 4,00%
			CUP_SVD_camo_g                          = 4,00%
			CUP_SVD_camo_g_half                     = 4,00%
			CUP_SVD_camo_d                          = 4,00%
			CUP_SVD_camo_d_half                     = 4,00%
			CUP_Mxx_camo                            = 4,00%
			CUP_Mxx_camo_half                       = 4,00%
			CUP_optic_SB_3_12x50_PMII               = 4,00%
			CUP_optic_LeupoldMk4                    = 4,00%
			CUP_optic_HoloBlack                     = 4,00%
			CUP_optic_HoloWdl                       = 4,00%
			CUP_optic_HoloDesert                    = 4,00%
			CUP_optic_LeupoldM3LR                   = 4,00%
			CUP_optic_LeupoldMk4_10x40_LRT_Desert   = 4,00%
			CUP_optic_LeupoldMk4_10x40_LRT_Woodland = 4,00%
			CUP_optic_LeupoldMk4_MRT_tan            = 4,00%
			CUP_optic_Leupold_VX3                   = 4,00%
			CUP_optic_LeupoldMk4_CQ_T               = 4,00%
			CUP_optic_ELCAN_SpecterDR               = 4,00%
			CUP_optic_SB_11_4x20_PM                 = 4,00%
			CUP_optic_TrijiconRx01_desert           = 4,00%
			CUP_optic_TrijiconRx01_black            = 4,00%
		*/
		CUPSniperAttachments[] = {"CUP_SVD_camo_g_half", "CUP_optic_ELCAN_SpecterDR", "CUP_Mxx_camo", "CUP_optic_LeupoldMk4_10x40_LRT_Woodland", "CUP_optic_LeupoldMk4", "CUP_optic_Leupold_VX3", "CUP_muzzle_snds_AWM", "CUP_optic_TrijiconRx01_black", "CUP_optic_HoloWdl", "CUP_SVD_camo_d_half", "CUP_optic_SB_11_4x20_PM", "CUP_muzzle_snds_L85", "CUP_optic_HoloDesert", "CUP_optic_LeupoldMk4_CQ_T", "CUP_acc_XM8_light_module", "CUP_optic_TrijiconRx01_desert", "CUP_SVD_camo_d", "CUP_optic_LeupoldM3LR", "CUP_optic_LeupoldMk4_MRT_tan", "CUP_muzzle_snds_XM8", "CUP_Mxx_camo_half", "CUP_optic_LeupoldMk4_10x40_LRT_Desert", "CUP_SVD_camo_g", "CUP_optic_SB_3_12x50_PMII", "CUP_optic_HoloBlack"};

		/*
			Percental Item Spawn Chances of CUPPistols:

			CUP_hgun_Compact               = 3,70%
			CUP_hgun_Duty                  = 3,70%
			CUP_hgun_Duty_M3X              = 3,70%
			CUP_hgun_Phantom               = 3,70%
			CUP_hgun_Glock17               = 3,70%
			CUP_hgun_M9                    = 3,70%
			CUP_hgun_M9_snds               = 3,70%
			CUP_hgun_Makarov               = 3,70%
			CUP_hgun_MicroUzi              = 3,70%
			CUP_hgun_PB6P9                 = 3,70%
			CUP_hgun_TaurusTracker455      = 3,70%
			CUP_hgun_TaurusTracker455_gold = 3,70%
			CUP_hgun_Colt1911              = 3,70%
			CUP_hgun_SA61                  = 3,70%
			CUP_Colt1911                   = 3,70%
			CUP_CZ_75_D_COMPACT            = 3,70%
			CUP_CZ_75_P_07_DUTY            = 3,70%
			CUP_Glock17_EP1                = 3,70%
			CUP_M9                         = 3,70%
			CUP_M9SD                       = 3,70%
			CUP_Makarov                    = 3,70%
			CUP_MakarovSD                  = 3,70%
			CUP_UZI_EP1                    = 3,70%
			CUP_UZI_SD_EP1                 = 3,70%
			CUP_Revolver_EP1               = 3,70%
			CUP_Revolver_gold_EP1          = 3,70%
			CUP_Sa61_EP1                   = 3,70%
		*/
		CUPPistols[] = {"CUP_hgun_Duty_M3X", "CUP_Revolver_EP1", "CUP_UZI_SD_EP1", "CUP_Revolver_gold_EP1", "CUP_UZI_EP1", "CUP_hgun_Phantom", "CUP_CZ_75_P_07_DUTY", "CUP_MakarovSD", "CUP_hgun_SA61", "CUP_hgun_Colt1911", "CUP_hgun_M9", "CUP_M9SD", "CUP_hgun_TaurusTracker455_gold", "CUP_hgun_Duty", "CUP_hgun_M9_snds", "CUP_CZ_75_D_COMPACT", "CUP_hgun_TaurusTracker455", "CUP_hgun_Glock17", "CUP_M9", "CUP_Colt1911", "CUP_Glock17_EP1", "CUP_hgun_Makarov", "CUP_Makarov", "CUP_hgun_PB6P9", "CUP_hgun_MicroUzi", "CUP_Sa61_EP1", "CUP_hgun_Compact"};

		/*
			Percental Item Spawn Chances of CUPRifles:

			CUP_arifle_AK47                   = 0,88%
			CUP_arifle_AK74                   = 0,88%
			CUP_arifle_AK74M                  = 0,88%
			CUP_arifle_AK74M_GL               = 0,88%
			CUP_arifle_AK107                  = 0,88%
			CUP_arifle_AK107_GL               = 0,88%
			CUP_arifle_AKS74                  = 0,88%
			CUP_arifle_AKS74U                 = 0,88%
			CUP_arifle_AK74_GL                = 0,88%
			CUP_arifle_AKM                    = 0,88%
			CUP_arifle_AKS                    = 0,88%
			CUP_arifle_AKS_Gold               = 0,88%
			CUP_arifle_RPK74                  = 0,88%
			CUP_arifle_RPK74_45               = 0,88%
			CUP_arifle_RPK74M                 = 0,88%
			CUP_arifle_CZ805_A2               = 0,88%
			CUP_arifle_CZ805_A1               = 0,88%
			CUP_arifle_CZ805_GL               = 0,88%
			CUP_arifle_CZ805_B_GL             = 0,88%
			CUP_arifle_CZ805_B                = 0,88%
			CUP_arifle_FNFAL                  = 0,88%
			CUP_arifle_FNFAL5061              = 0,88%
			CUP_arifle_FNFAL5062              = 0,88%
			CUP_arifle_FNFAL_OSW              = 0,88%
			CUP_arifle_FNFAL_railed           = 0,88%
			CUP_arifle_G36A                   = 0,88%
			CUP_arifle_G36A_camo              = 0,88%
			CUP_arifle_G36K                   = 0,88%
			CUP_arifle_G36K_camo              = 0,88%
			CUP_arifle_G36C                   = 0,88%
			CUP_arifle_G36C_camo              = 0,88%
			CUP_arifle_MG36                   = 0,88%
			CUP_arifle_MG36_camo              = 0,88%
			CUP_l85a2                         = 0,88%
			CUP_l85a2_ris                     = 0,88%
			CUP_l85a2_ris_ng                  = 0,88%
			CUP_l85a2_ugl                     = 0,88%
			CUP_arifle_L85A2                  = 0,88%
			CUP_arifle_L85A2_G                = 0,88%
			CUP_arifle_L85A2_NG               = 0,88%
			CUP_arifle_L85A2_GL               = 0,88%
			CUP_arifle_L86A2                  = 0,88%
			CUP_arifle_M16A2                  = 0,88%
			CUP_arifle_M4A1                   = 0,88%
			CUP_arifle_Sa58P                  = 0,88%
			CUP_arifle_Sa58P_v2               = 0,88%
			CUP_arifle_Sa58P_des              = 0,88%
			CUP_arifle_Sa58V                  = 0,88%
			CUP_arifle_Sa58V_camo             = 0,88%
			CUP_arifle_Sa58RIS1               = 0,88%
			CUP_arifle_Sa58RIS2_gl            = 0,88%
			CUP_arifle_Sa58RIS1_des           = 0,88%
			CUP_arifle_Sa58RIS2               = 0,88%
			CUP_arifle_Sa58V_ACOG_Laser       = 0,88%
			CUP_arifle_Mk16_CQC               = 0,88%
			CUP_arifle_Mk16_CQC_FG            = 0,88%
			CUP_arifle_Mk16_CQC_SFG           = 0,88%
			CUP_arifle_Mk16_CQC_EGLM          = 0,88%
			CUP_arifle_Mk16_STD               = 0,88%
			CUP_arifle_Mk16_STD_FG            = 0,88%
			CUP_arifle_Mk16_STD_SFG           = 0,88%
			CUP_arifle_Mk16_STD_EGLM          = 0,88%
			CUP_arifle_Mk16_SV                = 0,88%
			CUP_arifle_Mk17_CQC               = 0,88%
			CUP_arifle_Mk17_CQC_FG            = 0,88%
			CUP_arifle_Mk17_CQC_SFG           = 0,88%
			CUP_arifle_Mk17_CQC_EGLM          = 0,88%
			CUP_arifle_Mk17_STD               = 0,88%
			CUP_arifle_Mk17_STD_FG            = 0,88%
			CUP_arifle_Mk17_STD_SFG           = 0,88%
			CUP_arifle_Mk17_STD_EGLM          = 0,88%
			CUP_arifle_Mk20                   = 0,88%
			CUP_arifle_Mk20_LeupoldMk4MRT     = 0,88%
			CUP_arifle_Mk20_SB11420_snds      = 0,88%
			CUP_arifle_Mk16_CQC_woodland      = 0,88%
			CUP_arifle_Mk16_CQC_FG_woodland   = 0,88%
			CUP_arifle_Mk16_CQC_SFG_woodland  = 0,88%
			CUP_arifle_Mk16_CQC_EGLM_woodland = 0,88%
			CUP_arifle_Mk16_STD_woodland      = 0,88%
			CUP_arifle_Mk16_STD_FG_woodland   = 0,88%
			CUP_arifle_Mk16_STD_SFG_woodland  = 0,88%
			CUP_arifle_Mk16_STD_EGLM_woodland = 0,88%
			CUP_arifle_Mk16_SV_woodland       = 0,88%
			CUP_arifle_Mk17_CQC_woodland      = 0,88%
			CUP_arifle_Mk17_CQC_FG_woodland   = 0,88%
			CUP_arifle_Mk17_CQC_SFG_woodland  = 0,88%
			CUP_arifle_Mk17_CQC_EGLM_woodland = 0,88%
			CUP_arifle_Mk17_STD_woodland      = 0,88%
			CUP_arifle_Mk17_STD_FG_woodland   = 0,88%
			CUP_arifle_Mk17_STD_SFG_woodland  = 0,88%
			CUP_arifle_Mk17_STD_EGLM_woodland = 0,88%
			CUP_arifle_Mk16_CQC_black         = 0,88%
			CUP_arifle_Mk16_CQC_FG_black      = 0,88%
			CUP_arifle_Mk16_CQC_SFG_black     = 0,88%
			CUP_arifle_Mk16_CQC_EGLM_black    = 0,88%
			CUP_arifle_Mk16_STD_black         = 0,88%
			CUP_arifle_Mk16_STD_FG_black      = 0,88%
			CUP_arifle_Mk16_STD_SFG_black     = 0,88%
			CUP_arifle_Mk16_STD_EGLM_black    = 0,88%
			CUP_arifle_Mk16_SV_black          = 0,88%
			CUP_arifle_Mk17_CQC_Black         = 0,88%
			CUP_arifle_Mk17_CQC_FG_black      = 0,88%
			CUP_arifle_Mk17_CQC_SFG_black     = 0,88%
			CUP_arifle_Mk17_CQC_EGLM_black    = 0,88%
			CUP_arifle_Mk17_STD_black         = 0,88%
			CUP_arifle_Mk17_STD_FG_black      = 0,88%
			CUP_arifle_Mk17_STD_SFG_black     = 0,88%
			CUP_arifle_Mk17_STD_EGLM_black    = 0,88%
			CUP_arifle_XM8_Carbine            = 0,88%
			CUP_arifle_XM8_Carbine_GL         = 0,88%
			CUP_arifle_xm8_sharpshooter       = 0,88%
			CUP_arifle_xm8_SAW                = 0,88%
			CUP_arifle_XM8_Compact            = 0,88%
			CUP_arifle_XM8_Railed             = 0,88%
		*/
		CUPRifles[] = {"CUP_arifle_Mk16_STD_FG_black", "CUP_arifle_AK107_GL", "CUP_arifle_Mk17_STD_FG_black", "CUP_arifle_Mk16_CQC_EGLM", "CUP_arifle_L85A2_G", "CUP_l85a2", "CUP_arifle_xm8_sharpshooter", "CUP_arifle_Mk16_CQC_black", "CUP_arifle_AK74M_GL", "CUP_arifle_Mk17_CQC_EGLM_woodland", "CUP_arifle_Mk17_STD_FG", "CUP_arifle_Sa58P_v2", "CUP_arifle_Mk16_STD_EGLM_woodland", "CUP_arifle_CZ805_B", "CUP_arifle_Mk16_CQC_woodland", "CUP_arifle_AK74M", "CUP_arifle_FNFAL_OSW", "CUP_arifle_FNFAL_railed", "CUP_arifle_Sa58V_ACOG_Laser", "CUP_arifle_Mk17_STD_SFG_woodland", "CUP_arifle_Mk16_CQC_SFG", "CUP_arifle_Mk16_CQC_FG", "CUP_arifle_Mk16_CQC_SFG_black", "CUP_arifle_M16A2", "CUP_arifle_Sa58P_des", "CUP_arifle_RPK74M", "CUP_arifle_CZ805_B_GL", "CUP_arifle_G36C", "CUP_arifle_Mk16_STD_woodland", "CUP_arifle_AKS_Gold", "CUP_arifle_XM8_Carbine", "CUP_arifle_xm8_SAW", "CUP_l85a2_ris_ng", "CUP_arifle_G36C_camo", "CUP_arifle_FNFAL5061", "CUP_arifle_Mk17_STD_EGLM", "CUP_arifle_Mk16_CQC_SFG_woodland", "CUP_arifle_Mk17_STD", "CUP_arifle_Mk16_STD", "CUP_arifle_Mk16_CQC_FG_black", "CUP_arifle_AK74", "CUP_arifle_Mk17_CQC_SFG_black", "CUP_arifle_Mk17_STD_FG_woodland", "CUP_arifle_Mk16_STD_SFG_black", "CUP_arifle_Sa58V", "CUP_l85a2_ris", "CUP_arifle_Mk17_STD_SFG_black", "CUP_arifle_Mk17_STD_EGLM_black", "CUP_arifle_G36K_camo", "CUP_arifle_Mk20_SB11420_snds", "CUP_arifle_CZ805_GL", "CUP_arifle_L85A2_GL", "CUP_arifle_Mk17_CQC_Black", "CUP_arifle_XM8_Railed", "CUP_arifle_Mk17_CQC_EGLM_black", "CUP_arifle_Mk16_CQC_EGLM_woodland", "CUP_arifle_L85A2", "CUP_arifle_Mk16_STD_EGLM", "CUP_arifle_CZ805_A1", "CUP_arifle_Mk17_CQC_FG_woodland", "CUP_arifle_L85A2_NG", "CUP_arifle_M4A1", "CUP_arifle_Mk16_STD_black", "CUP_arifle_Mk17_CQC_SFG_woodland", "CUP_arifle_FNFAL", "CUP_arifle_Mk16_SV_black", "CUP_arifle_Mk16_SV_woodland", "CUP_arifle_Sa58RIS1", "CUP_arifle_Mk17_CQC_FG", "CUP_arifle_Mk17_STD_EGLM_woodland", "CUP_arifle_MG36_camo", "CUP_arifle_Mk16_STD_FG_woodland", "CUP_arifle_Mk16_SV", "CUP_arifle_Mk17_CQC_woodland", "CUP_arifle_XM8_Compact", "CUP_arifle_XM8_Carbine_GL", "CUP_arifle_AK107", "CUP_arifle_FNFAL5062", "CUP_arifle_Mk16_CQC_EGLM_black", "CUP_arifle_G36A_camo", "CUP_arifle_AK74_GL", "CUP_arifle_G36K", "CUP_arifle_AKM", "CUP_arifle_RPK74_45", "CUP_arifle_MG36", "CUP_arifle_Mk17_STD_SFG", "CUP_arifle_Mk16_STD_FG", "CUP_arifle_RPK74", "CUP_arifle_Mk16_CQC", "CUP_arifle_Mk17_CQC_FG_black", "CUP_arifle_Mk20_LeupoldMk4MRT", "CUP_arifle_Sa58RIS2", "CUP_arifle_Mk17_CQC_EGLM", "CUP_arifle_G36A", "CUP_arifle_L86A2", "CUP_arifle_Sa58RIS1_des", "CUP_arifle_AKS74", "CUP_arifle_Mk17_CQC_SFG", "CUP_arifle_Sa58V_camo", "CUP_arifle_Mk16_STD_SFG_woodland", "CUP_arifle_AKS74U", "CUP_arifle_Mk16_STD_EGLM_black", "CUP_arifle_Mk16_STD_SFG", "CUP_arifle_Mk20", "CUP_arifle_Sa58P", "CUP_arifle_Mk16_CQC_FG_woodland", "CUP_arifle_Mk17_CQC", "CUP_arifle_Mk17_STD_woodland", "CUP_arifle_CZ805_A2", "CUP_arifle_AKS", "CUP_arifle_Mk17_STD_black", "CUP_arifle_Sa58RIS2_gl", "CUP_l85a2_ugl", "CUP_arifle_AK47"};

		/*
			Percental Item Spawn Chances of CUPShotguns:

			CUP_sgun_AA12     = 33,33%
			CUP_sgun_Saiga12K = 33,33%
			CUP_sgun_M1014    = 33,33%
		*/
		CUPShotguns[] = {"CUP_sgun_AA12", "CUP_sgun_Saiga12K", "CUP_sgun_M1014"};

		/*
			Percental Item Spawn Chances of CUPSMG:

			CUP_smg_MP5SD6 = 20,00%
			CUP_smg_MP5A5  = 20,00%
			CUP_smg_bizon  = 20,00%
			CUP_smg_EVO    = 20,00%
			CUP_smg_SA61   = 20,00%
		*/
		CUPSMG[] = {"CUP_smg_EVO", "CUP_smg_MP5A5", "CUP_smg_SA61", "CUP_smg_bizon", "CUP_smg_MP5SD6"};

		/*
			Percental Item Spawn Chances of CUPLMG:

			CUP_lmg_UK59                 = 3,57%
			CUP_lmg_L110A1               = 3,57%
			CUP_lmg_L110A1_Aim_Laser     = 3,57%
			CUP_lmg_M240                 = 3,57%
			CUP_lmg_M240_ElcanM143       = 3,57%
			CUP_lmg_L7A2                 = 3,57%
			CUP_lmg_minimipara           = 3,57%
			CUP_lmg_minimi               = 3,57%
			CUP_lmg_m249_para            = 3,57%
			CUP_lmg_M249_E2              = 3,57%
			CUP_lmg_minimi_railed        = 3,57%
			CUP_lmg_m249_pip1            = 3,57%
			CUP_lmg_M249                 = 3,57%
			CUP_lmg_m249_pip2            = 3,57%
			CUP_lmg_m249_pip3            = 3,57%
			CUP_lmg_m249_pip4            = 3,57%
			CUP_lmg_m249_SQuantoon       = 3,57%
			CUP_lmg_M249_ElcanM145_Laser = 3,57%
			CUP_lmg_M249_Laser           = 3,57%
			CUP_lmg_M249_ANPAS13c2_Laser = 3,57%
			CUP_lmg_M60E4                = 3,57%
			CUP_lmg_Mk48_des             = 3,57%
			CUP_lmg_Mk48_wdl             = 3,57%
			CUP_lmg_Mk48_des_Aim_Laser   = 3,57%
			CUP_lmg_Mk48_wdl_Aim_Laser   = 3,57%
			CUP_lmg_PKM                  = 3,57%
			CUP_lmg_Pecheneg             = 3,57%
			CUP_lmg_Pecheneg_PScope      = 3,57%
		*/
		CUPLMG[] = {"CUP_lmg_M249_Laser", "CUP_lmg_L110A1_Aim_Laser", "CUP_lmg_M249_E2", "CUP_lmg_m249_pip4", "CUP_lmg_L110A1", "CUP_lmg_Pecheneg_PScope", "CUP_lmg_PKM", "CUP_lmg_Mk48_wdl", "CUP_lmg_M249_ElcanM145_Laser", "CUP_lmg_Mk48_wdl_Aim_Laser", "CUP_lmg_minimipara", "CUP_lmg_UK59", "CUP_lmg_Mk48_des", "CUP_lmg_m249_para", "CUP_lmg_m249_pip2", "CUP_lmg_Mk48_des_Aim_Laser", "CUP_lmg_M249_ANPAS13c2_Laser", "CUP_lmg_M240", "CUP_lmg_minimi_railed", "CUP_lmg_L7A2", "CUP_lmg_M60E4", "CUP_lmg_M249", "CUP_lmg_m249_pip1", "CUP_lmg_m249_SQuantoon", "CUP_lmg_minimi", "CUP_lmg_m249_pip3", "CUP_lmg_M240_ElcanM143", "CUP_lmg_Pecheneg"};

		/*
			Percental Item Spawn Chances of CUPSnipers:

			CUP_srifle_CZ750           = 4,35%
			CUP_srifle_CZ550           = 4,35%
			CUP_srifle_CZ550_rail      = 4,35%
			CUP_srifle_LeeEnfield      = 4,35%
			CUP_srifle_LeeEnfield_rail = 4,35%
			CUP_srifle_M14_DMR         = 4,35%
			CUP_srifle_DMR             = 4,35%
			CUP_srifle_M24_des         = 4,35%
			CUP_srifle_M24_wdl         = 4,35%
			CUP_srifle_M40A3           = 4,35%
			CUP_srifle_M40A3_bipod     = 4,35%
			CUP_srifle_SVD             = 4,35%
			CUP_srifle_SVD_des         = 4,35%
			CUP_srifle_VSSVintorez     = 4,35%
			CUP_srifle_AWM_des         = 4,35%
			CUP_srifle_AWM_wdl         = 4,35%
			CUP_srifle_G22_des         = 4,35%
			CUP_srifle_L129A1_HG       = 4,35%
			CUP_srifle_M110            = 4,35%
			CUP_srifle_M14             = 4,35%
			CUP_srifle_Mk12SPR         = 4,35%
			CUP_srifle_AS50            = 4,35%
			CUP_M107                   = 4,35%
		*/
		CUPSnipers[] = {"CUP_srifle_AS50", "CUP_srifle_DMR", "CUP_srifle_SVD_des", "CUP_srifle_L129A1_HG", "CUP_srifle_SVD", "CUP_srifle_VSSVintorez", "CUP_srifle_CZ750", "CUP_srifle_AWM_wdl", "CUP_srifle_M40A3_bipod", "CUP_srifle_M14_DMR", "CUP_srifle_LeeEnfield", "CUP_srifle_M110", "CUP_srifle_M24_des", "CUP_srifle_G22_des", "CUP_srifle_CZ550_rail", "CUP_srifle_LeeEnfield_rail", "CUP_M107", "CUP_srifle_AWM_des", "CUP_srifle_M24_wdl", "CUP_srifle_M40A3", "CUP_srifle_CZ550", "CUP_srifle_M14", "CUP_srifle_Mk12SPR"};

		/*
			Percental Item Spawn Chances of CUPCivilianBackpacks:

			CUP_B_HikingPack_Civ       = 7,69%
			CUP_T10_Parachute_backpack = 7,69%
			CUP_B_CivPack_WDL          = 7,69%
			CUP_B_AssaultPack_ACU      = 7,69%
			CUP_B_AssaultPack_Coyote   = 7,69%
			CUP_B_AssaultPack_Black    = 7,69%
			CUP_TK_Assault_Pack_EP1    = 7,69%
			CUP_US_Assault_Pack_EP1    = 7,69%
			CUP_TK_ALICE_Pack_EP1      = 7,69%
			CUP_B_AlicePack_Khaki      = 7,69%
			CUP_B_AlicePack_Bedroll    = 7,69%
			CUP_B_ACRPara_m95          = 7,69%
			CUP_B_ACRScout_m95         = 7,69%
		*/
		CUPCivilianBackpacks[] = {"CUP_B_AssaultPack_Black", "CUP_B_HikingPack_Civ", "CUP_B_AlicePack_Bedroll", "CUP_B_ACRScout_m95", "CUP_T10_Parachute_backpack", "CUP_B_CivPack_WDL", "CUP_B_AssaultPack_ACU", "CUP_US_Assault_Pack_EP1", "CUP_B_AlicePack_Khaki", "CUP_TK_ALICE_Pack_EP1", "CUP_B_AssaultPack_Coyote", "CUP_TK_Assault_Pack_EP1", "CUP_B_ACRPara_m95"};

		/*
			Percental Item Spawn Chances of CUPGuerillaBackpacks:

			CUP_B_USMC_AssaultPack     = 5,88%
			CUP_B_USMC_MOLLE           = 5,88%
			CUP_B_USMC_MOLLE_WDL       = 5,88%
			CUP_B_TK_Medic_Desert      = 5,88%
			CUP_B_SLA_Medicbag         = 5,88%
			CUP_B_RUS_Backpack         = 5,88%
			CUP_B_DShkM_Gun_Bag        = 5,88%
			CUP_B_DShkM_TripodHigh_Bag = 5,88%
			CUP_B_DShkM_TripodLow_Bag  = 5,88%
			CUP_B_Kord_Gun_Bag         = 5,88%
			CUP_B_Kord_Tripod_Bag      = 5,88%
			CUP_B_Metis_Gun_Bag        = 5,88%
			CUP_B_Metis_Tripod_Bag     = 5,88%
			CUP_B_AGS30_Gun_Bag        = 5,88%
			CUP_B_AGS30_Tripod_Bag     = 5,88%
			CUP_B_SPG9_Gun_Bag         = 5,88%
			CUP_B_SPG9_Tripod_Bag      = 5,88%
		*/
		CUPGuerillaBackpacks[] = {"CUP_B_USMC_AssaultPack", "CUP_B_Kord_Tripod_Bag", "CUP_B_SLA_Medicbag", "CUP_B_DShkM_TripodHigh_Bag", "CUP_B_AGS30_Gun_Bag", "CUP_B_RUS_Backpack", "CUP_B_DShkM_TripodLow_Bag", "CUP_B_Metis_Tripod_Bag", "CUP_B_TK_Medic_Desert", "CUP_B_SPG9_Tripod_Bag", "CUP_B_AGS30_Tripod_Bag", "CUP_B_DShkM_Gun_Bag", "CUP_B_Kord_Gun_Bag", "CUP_B_SPG9_Gun_Bag", "CUP_B_USMC_MOLLE_WDL", "CUP_B_USMC_MOLLE", "CUP_B_Metis_Gun_Bag"};

		/*
			Percental Item Spawn Chances of CUPMilitaryBackpacks:

			CUP_B_GER_Medic_Desert     = 3,57%
			CUP_B_GER_Medic_Tropentarn = 3,57%
			CUP_B_GER_Medic_FLecktarn  = 3,57%
			CUP_B_USPack_Coyote        = 3,57%
			CUP_B_USPack_Black         = 3,57%
			CUP_B_GER_Pack_Tropentarn  = 3,57%
			CUP_B_GER_Pack_Flecktarn   = 3,57%
			CUP_US_Backpack_EP1        = 3,57%
			CUP_CZ_Backpack_EP1        = 3,57%
			CUP_CZ_VestPouch_EP1       = 3,57%
			CUP_US_Patrol_Pack_EP1     = 3,57%
			CUP_USBasicBag             = 3,57%
			CUP_B_RPGPack_Khaki        = 3,57%
			CUP_B_MedicPack_ACU        = 3,57%
			CUP_B_StaticX_cbr          = 3,57%
			CUP_B_StaticY_cbr          = 3,57%
			CUP_B_Bergen_BAF           = 3,57%
			CUP_B_Podnos_Gun_Bag       = 3,57%
			CUP_B_Podnos_Bipod_Bag     = 3,57%
			CUP_B_M2_Gun_Bag           = 3,57%
			CUP_B_M2_Tripod_Bag        = 3,57%
			CUP_B_M2_MiniTripod_Bag    = 3,57%
			CUP_B_Mk19_Gun_Bag         = 3,57%
			CUP_B_Mk19_Tripod_Bag      = 3,57%
			CUP_B_Tow_Gun_Bag          = 3,57%
			CUP_B_TOW_Tripod_Bag       = 3,57%
			CUP_B_M252_Gun_Bag         = 3,57%
			CUP_B_M252_Bipod_Bag       = 3,57%
		*/
		CUPMilitaryBackpacks[] = {"CUP_B_GER_Pack_Tropentarn", "CUP_US_Backpack_EP1", "CUP_B_GER_Pack_Flecktarn", "CUP_B_USPack_Black", "CUP_B_Tow_Gun_Bag", "CUP_B_Podnos_Gun_Bag", "CUP_B_M2_MiniTripod_Bag", "CUP_B_Bergen_BAF", "CUP_B_M252_Gun_Bag", "CUP_CZ_Backpack_EP1", "CUP_B_M2_Tripod_Bag", "CUP_B_M2_Gun_Bag", "CUP_B_Mk19_Tripod_Bag", "CUP_B_StaticX_cbr", "CUP_B_TOW_Tripod_Bag", "CUP_B_RPGPack_Khaki", "CUP_B_USPack_Coyote", "CUP_B_Mk19_Gun_Bag", "CUP_USBasicBag", "CUP_B_GER_Medic_Tropentarn", "CUP_US_Patrol_Pack_EP1", "CUP_B_GER_Medic_Desert", "CUP_B_StaticY_cbr", "CUP_CZ_VestPouch_EP1", "CUP_B_MedicPack_ACU", "CUP_B_M252_Bipod_Bag", "CUP_B_GER_Medic_FLecktarn", "CUP_B_Podnos_Bipod_Bag"};

		/*
			Percental Item Spawn Chances of CUPCivilianItems:

			CUP_Vector21Nite     = 50,00%
			CUP_Binocular_Vector = 50,00%
		*/
		CUPCivilianItems[] = {"CUP_Binocular_Vector", "CUP_Vector21Nite"};

		/*
			Percental Item Spawn Chances of CUPPistolAmmo:

			CUP_10Rnd_9x19_Compact    = 10,00%
			CUP_18Rnd_9x19_Phantom    = 10,00%
			CUP_17Rnd_9x19_glock17    = 10,00%
			CUP_15Rnd_9x19_M9         = 10,00%
			CUP_8Rnd_9x18_Makarov_M   = 10,00%
			CUP_8Rnd_9x18_MakarovSD_M = 10,00%
			CUP_10Rnd_B_765x17_Ball_M = 10,00%
			CUP_30Rnd_9x19_UZI        = 10,00%
			CUP_6Rnd_45ACP_M          = 10,00%
			CUP_7Rnd_45ACP_1911       = 10,00%
		*/
		CUPPistolAmmo[] = {"CUP_8Rnd_9x18_MakarovSD_M", "CUP_30Rnd_9x19_UZI", "CUP_10Rnd_B_765x17_Ball_M", "CUP_17Rnd_9x19_glock17", "CUP_15Rnd_9x19_M9", "CUP_7Rnd_45ACP_1911", "CUP_10Rnd_9x19_Compact", "CUP_6Rnd_45ACP_M", "CUP_8Rnd_9x18_Makarov_M", "CUP_18Rnd_9x19_Phantom"};

		/*
			Percental Item Spawn Chances of CUPShotgunAmmo:

			CUP_8Rnd_B_Saiga12_74Slug_M    = 14,29%
			CUP_8Rnd_B_Saiga12_74Pellets_M = 14,29%
			CUP_20Rnd_B_AA12_74Slug        = 14,29%
			CUP_20Rnd_B_AA12_Pellets       = 14,29%
			CUP_20Rnd_B_AA12_HE            = 14,29%
			CUP_8Rnd_B_Beneli_74Slug       = 14,29%
			CUP_8Rnd_B_Beneli_74Pellets    = 14,29%
		*/
		CUPShotgunAmmo[] = {"CUP_8Rnd_B_Saiga12_74Pellets_M", "CUP_20Rnd_B_AA12_Pellets", "CUP_20Rnd_B_AA12_74Slug", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_20Rnd_B_AA12_HE", "CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Saiga12_74Slug_M"};

		/*
			Percental Item Spawn Chances of CUPSMGAmmo:

			CUP_64Rnd_9x19_Bizon_M               = 12,50%
			CUP_64Rnd_Green_Tracer_9x19_Bizon_M  = 12,50%
			CUP_64Rnd_Red_Tracer_9x19_Bizon_M    = 12,50%
			CUP_64Rnd_White_Tracer_9x19_Bizon_M  = 12,50%
			CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M = 12,50%
			CUP_30Rnd_9x19_MP5                   = 12,50%
			CUP_20Rnd_B_765x17_Ball_M            = 12,50%
			CUP_30Rnd_9x19_EVO                   = 12,50%
		*/
		CUPSMGAmmo[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_EVO", "CUP_64Rnd_White_Tracer_9x19_Bizon_M", "CUP_64Rnd_Red_Tracer_9x19_Bizon_M", "CUP_20Rnd_B_765x17_Ball_M", "CUP_64Rnd_9x19_Bizon_M", "CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M", "CUP_64Rnd_Green_Tracer_9x19_Bizon_M"};

		/*
			Percental Item Spawn Chances of CUPRifleAmmo:

			CUP_30Rnd_545x39_AK_M                        = 2,94%
			CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M       = 2,94%
			CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M         = 2,94%
			CUP_30Rnd_TE1_White_Tracer_545x39_AK_M       = 2,94%
			CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M      = 2,94%
			CUP_30Rnd_Subsonic_545x39_AK_M               = 2,94%
			CUP_30Rnd_762x39_AK47_M                      = 2,94%
			CUP_30Rnd_Sa58_M                             = 2,94%
			CUP_30Rnd_Sa58_M_TracerG                     = 2,94%
			CUP_30Rnd_Sa58_M_TracerR                     = 2,94%
			CUP_30Rnd_Sa58_M_TracerY                     = 2,94%
			CUP_10x_303_M                                = 2,94%
			CUP_30Rnd_556x45_Stanag                      = 2,94%
			CUP_20Rnd_556x45_Stanag                      = 2,94%
			CUP_30Rnd_556x45_G36                         = 2,94%
			CUP_30Rnd_TE1_Red_Tracer_556x45_G36          = 2,94%
			CUP_30Rnd_TE1_Green_Tracer_556x45_G36        = 2,94%
			CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36       = 2,94%
			CUP_100Rnd_556x45_BetaCMag                   = 2,94%
			CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag    = 2,94%
			CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag  = 2,94%
			CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag = 2,94%
			CUP_20Rnd_762x51_FNFAL_M                     = 2,94%
			CUP_20Rnd_762x51_L129_M                      = 2,94%
			CUP_20Rnd_762x51_B_SCAR                      = 2,94%
			CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR      = 2,94%
			CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR         = 2,94%
			CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR       = 2,94%
			CUP_20Rnd_TE1_White_Tracer_762x51_SCAR       = 2,94%
			CUP_20Rnd_762x51_CZ805B                      = 2,94%
			CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B    = 2,94%
			CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B       = 2,94%
			CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B     = 2,94%
			CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B     = 2,94%
		*/
		CUPRifleAmmo[] = {"CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", "CUP_30Rnd_Subsonic_545x39_AK_M", "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag", "CUP_20Rnd_762x51_CZ805B", "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M", "CUP_30Rnd_Sa58_M_TracerY", "CUP_30Rnd_Sa58_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_30Rnd_556x45_G36", "CUP_100Rnd_556x45_BetaCMag", "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR", "CUP_20Rnd_762x51_B_SCAR", "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag", "CUP_20Rnd_762x51_L129_M", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M", "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M", "CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B", "CUP_30Rnd_Sa58_M_TracerR", "CUP_30Rnd_545x39_AK_M", "CUP_20Rnd_762x51_FNFAL_M", "CUP_30Rnd_Sa58_M_TracerG", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M", "CUP_20Rnd_556x45_Stanag", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_30Rnd_556x45_Stanag", "CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B", "CUP_10x_303_M", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"};

		/*
			Percental Item Spawn Chances of CUPLMGAmmo:

			CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M    = 4,35%
			CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M    = 4,35%
			CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M  = 4,35%
			CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M    = 4,35%
			CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M  = 4,35%
			CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M    = 4,35%
			CUP_200Rnd_TE1_LRT4_Red_Tracer_762x51_Belt_M    = 4,35%
			CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M  = 4,35%
			CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M = 4,35%
			CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M    = 4,35%
			CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M      = 4,35%
			CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M   = 4,35%
			CUP_200Rnd_TE4_Green_Tracer_556x45_M249         = 4,35%
			CUP_200Rnd_TE4_Red_Tracer_556x45_M249           = 4,35%
			CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249        = 4,35%
			CUP_200Rnd_TE1_Red_Tracer_556x45_M249           = 4,35%
			CUP_100Rnd_TE4_Green_Tracer_556x45_M249         = 4,35%
			CUP_100Rnd_TE4_Red_Tracer_556x45_M249           = 4,35%
			CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249        = 4,35%
			CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1       = 4,35%
			CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1         = 4,35%
			CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1      = 4,35%
			CUP_50Rnd_UK59_762x54R_Tracer                   = 4,35%
		*/
		CUPLMGAmmo[] = {"CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_200Rnd_TE1_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_100Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE1_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M", "CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M", "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M", "CUP_200Rnd_TE4_Green_Tracer_556x45_M249", "CUP_50Rnd_UK59_762x54R_Tracer", "CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1", "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_Green_Tracer_556x45_M249", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

		/*
			Percental Item Spawn Chances of CUPSniperAmmo:

			CUP_5Rnd_127x108_KSVK_M                 = 4,55%
			CUP_10Rnd_762x54_SVD_M                  = 4,55%
			CUP_10Rnd_9x39_SP5_VSS_M                = 4,55%
			CUP_20Rnd_9x39_SP5_VSS_M                = 4,55%
			CUP_5Rnd_127x99_as50_M                  = 4,55%
			CUP_20Rnd_762x51_DMR                    = 4,55%
			CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR  = 4,55%
			CUP_20Rnd_TE1_Red_Tracer_762x51_DMR     = 4,55%
			CUP_20Rnd_TE1_Green_Tracer_762x51_DMR   = 4,55%
			CUP_20Rnd_TE1_White_Tracer_762x51_DMR   = 4,55%
			CUP_5Rnd_762x51_M24                     = 4,55%
			CUP_20Rnd_762x51_B_M110                 = 4,55%
			CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110 = 4,55%
			CUP_20Rnd_TE1_Red_Tracer_762x51_M110    = 4,55%
			CUP_20Rnd_TE1_Green_Tracer_762x51_M110  = 4,55%
			CUP_20Rnd_TE1_White_Tracer_762x51_M110  = 4,55%
			CUP_10Rnd_127x99_M107                   = 4,55%
			CUP_10Rnd_762x51_CZ750                  = 4,55%
			CUP_10Rnd_762x51_CZ750_Tracer           = 4,55%
			CUP_5Rnd_86x70_L115A1                   = 4,55%
			CUP_5Rnd_762x67_G22                     = 4,55%
			CUP_5x_22_LR_17_HMR_M                   = 4,55%
		*/
		CUPSniperAmmo[] = {"CUP_5Rnd_86x70_L115A1", "CUP_20Rnd_TE1_Red_Tracer_762x51_M110", "CUP_20Rnd_762x51_DMR", "CUP_20Rnd_9x39_SP5_VSS_M", "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR", "CUP_20Rnd_TE1_White_Tracer_762x51_DMR", "CUP_20Rnd_TE1_White_Tracer_762x51_M110", "CUP_20Rnd_TE1_Red_Tracer_762x51_DMR", "CUP_5Rnd_762x67_G22", "CUP_5Rnd_127x108_KSVK_M", "CUP_10Rnd_127x99_M107", "CUP_5Rnd_762x51_M24", "CUP_10Rnd_762x51_CZ750_Tracer", "CUP_10Rnd_762x51_CZ750", "CUP_5x_22_LR_17_HMR_M", "CUP_5Rnd_127x99_as50_M", "CUP_20Rnd_762x51_B_M110", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110", "CUP_10Rnd_9x39_SP5_VSS_M", "CUP_10Rnd_762x54_SVD_M", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR", "CUP_20Rnd_TE1_Green_Tracer_762x51_M110"};

		/*
			Percental Item Spawn Chances of CUPUGLFlares:

			CUP_FlareWhite_GP25_M         = 5,56%
			CUP_FlareGreen_GP25_M         = 5,56%
			CUP_FlareRed_GP25_M           = 5,56%
			CUP_FlareYellow_GP25_M        = 5,56%
			CUP_IlumFlareWhite_GP25_M     = 5,56%
			CUP_IlumFlareRed_GP25_M       = 5,56%
			CUP_IlumFlareGreen_GP25_M     = 5,56%
			CUP_FlareWhite_M203           = 5,56%
			CUP_FlareGreen_M203           = 5,56%
			CUP_FlareRed_M203             = 5,56%
			CUP_FlareYellow_M203          = 5,56%
			CUP_1Rnd_StarFlare_White_M203 = 5,56%
			CUP_1Rnd_StarFlare_Red_M203   = 5,56%
			CUP_1Rnd_StarFlare_Green_M203 = 5,56%
			CUP_6Rnd_FlareWhite_M203      = 5,56%
			CUP_6Rnd_FlareGreen_M203      = 5,56%
			CUP_6Rnd_FlareRed_M203        = 5,56%
			CUP_6Rnd_FlareYellow_M203     = 5,56%
		*/
		CUPUGLFlares[] = {"CUP_FlareRed_GP25_M", "CUP_IlumFlareRed_GP25_M", "CUP_1Rnd_StarFlare_Red_M203", "CUP_FlareYellow_M203", "CUP_FlareWhite_GP25_M", "CUP_FlareRed_M203", "CUP_FlareGreen_M203", "CUP_1Rnd_StarFlare_White_M203", "CUP_IlumFlareWhite_GP25_M", "CUP_6Rnd_FlareWhite_M203", "CUP_6Rnd_FlareRed_M203", "CUP_6Rnd_FlareYellow_M203", "CUP_6Rnd_FlareGreen_M203", "CUP_IlumFlareGreen_GP25_M", "CUP_FlareGreen_GP25_M", "CUP_1Rnd_StarFlare_Green_M203", "CUP_FlareWhite_M203", "CUP_FlareYellow_GP25_M"};

		/*
			Percental Item Spawn Chances of CUPHEGrenades:

			CUP_HandGrenade_M67       = 9,09%
			CUP_HandGrenade_L109A1_HE = 9,09%
			CUP_HandGrenade_L109A2_HE = 9,09%
			CUP_HandGrenade_RGD5      = 9,09%
			CUP_HandGrenade_RGO       = 9,09%
			CUP_1Rnd_HE_GP25_M        = 9,09%
			CUP_1Rnd_HE_M203          = 9,09%
			CUP_1Rnd_HEDP_M203        = 9,09%
			CUP_6Rnd_HE_GP25_M        = 9,09%
			CUP_6Rnd_HE_M203          = 9,09%
			CUP_6Rnd_HE_M203_heli     = 9,09%
		*/
		CUPHEGrenades[] = {"CUP_1Rnd_HEDP_M203", "CUP_HandGrenade_L109A1_HE", "CUP_6Rnd_HE_M203", "CUP_HandGrenade_RGO", "CUP_HandGrenade_M67", "CUP_6Rnd_HE_GP25_M", "CUP_1Rnd_HE_M203", "CUP_6Rnd_HE_M203_heli", "CUP_HandGrenade_L109A2_HE", "CUP_HandGrenade_RGD5", "CUP_1Rnd_HE_GP25_M"};

		/*
			Percental Item Spawn Chances of CUPCivilianHeadgear:

			CUP_H_Ger_Boonie_desert    = 5,26%
			CUP_H_Ger_Boonie_Flecktarn = 5,26%
			CUP_H_NAPA_Fedora          = 5,26%
			CUP_H_C_MAGA_01            = 5,26%
			CUP_H_C_TrackIR_01         = 5,26%
			CUP_H_C_Ushanka_01         = 5,26%
			CUP_H_C_Ushanka_02         = 5,26%
			CUP_H_C_Ushanka_03         = 5,26%
			CUP_H_C_Ushanka_04         = 5,26%
			CUP_H_C_Beanie_01          = 5,26%
			CUP_H_C_Beanie_02          = 5,26%
			CUP_H_C_Beanie_03          = 5,26%
			CUP_H_C_Beanie_04          = 5,26%
			CUP_H_C_Beret_01           = 5,26%
			CUP_H_C_Beret_02           = 5,26%
			CUP_H_C_Beret_03           = 5,26%
			CUP_H_C_Beret_04           = 5,26%
			CUP_H_C_Policecap_01       = 5,26%
			CUP_H_C_Fireman_Helmet_01  = 5,26%
		*/
		CUPCivilianHeadgear[] = {"CUP_H_C_TrackIR_01", "CUP_H_C_Beret_03", "CUP_H_C_Policecap_01", "CUP_H_C_Beret_02", "CUP_H_C_Ushanka_02", "CUP_H_C_Ushanka_04", "CUP_H_C_Ushanka_03", "CUP_H_Ger_Boonie_Flecktarn", "CUP_H_C_Beanie_04", "CUP_H_C_Beret_01", "CUP_H_C_Beanie_01", "CUP_H_C_Ushanka_01", "CUP_H_C_Beret_04", "CUP_H_NAPA_Fedora", "CUP_H_C_Beanie_02", "CUP_H_C_Beanie_03", "CUP_H_Ger_Boonie_desert", "CUP_H_C_Fireman_Helmet_01", "CUP_H_C_MAGA_01"};

		/*
			Percental Item Spawn Chances of CUPGuerillaHeadgear:

			CUP_H_PMC_PRR_Headset           = 1,43%
			CUP_H_PMC_EP_Headset            = 1,43%
			CUP_H_PMC_Cap_Grey              = 1,43%
			CUP_H_PMC_Cap_Tan               = 1,43%
			CUP_H_PMC_Cap_Burberry          = 1,43%
			CUP_H_PMC_Cap_Back_Grey         = 1,43%
			CUP_H_PMC_Cap_Back_Tan          = 1,43%
			CUP_H_PMC_Cap_Back_Burberry     = 1,43%
			CUP_H_PMC_Cap_PRR_Grey          = 1,43%
			CUP_H_PMC_Cap_PRR_Tan           = 1,43%
			CUP_H_PMC_Cap_PRR_Burberry      = 1,43%
			CUP_H_PMC_Cap_Back_PRR_Grey     = 1,43%
			CUP_H_PMC_Cap_Back_PRR_Tan      = 1,43%
			CUP_H_PMC_Cap_Back_PRR_Burberry = 1,43%
			CUP_H_PMC_Cap_EP_Grey           = 1,43%
			CUP_H_PMC_Cap_EP_Tan            = 1,43%
			CUP_H_PMC_Cap_EP_Burberry       = 1,43%
			CUP_H_PMC_Cap_Back_EP_Grey      = 1,43%
			CUP_H_PMC_Cap_Back_EP_Tan       = 1,43%
			CUP_H_PMC_Cap_Back_EP_Burberry  = 1,43%
			CUP_H_TK_TankerHelmet           = 1,43%
			CUP_H_TK_PilotHelmet            = 1,43%
			CUP_H_TK_Helmet                 = 1,43%
			CUP_H_TK_Lungee                 = 1,43%
			CUP_H_TK_Beret                  = 1,43%
			CUP_H_TKI_SkullCap_01           = 1,43%
			CUP_H_TKI_SkullCap_02           = 1,43%
			CUP_H_TKI_SkullCap_03           = 1,43%
			CUP_H_TKI_SkullCap_04           = 1,43%
			CUP_H_TKI_SkullCap_05           = 1,43%
			CUP_H_TKI_SkullCap_06           = 1,43%
			CUP_H_TKI_Lungee_01             = 1,43%
			CUP_H_TKI_Lungee_02             = 1,43%
			CUP_H_TKI_Lungee_03             = 1,43%
			CUP_H_TKI_Lungee_04             = 1,43%
			CUP_H_TKI_Lungee_05             = 1,43%
			CUP_H_TKI_Lungee_06             = 1,43%
			CUP_H_TKI_Lungee_Open_01        = 1,43%
			CUP_H_TKI_Lungee_Open_02        = 1,43%
			CUP_H_TKI_Lungee_Open_03        = 1,43%
			CUP_H_TKI_Lungee_Open_04        = 1,43%
			CUP_H_TKI_Lungee_Open_05        = 1,43%
			CUP_H_TKI_Lungee_Open_06        = 1,43%
			CUP_H_TKI_Pakol_1_01            = 1,43%
			CUP_H_TKI_Pakol_1_02            = 1,43%
			CUP_H_TKI_Pakol_1_03            = 1,43%
			CUP_H_TKI_Pakol_1_04            = 1,43%
			CUP_H_TKI_Pakol_1_05            = 1,43%
			CUP_H_TKI_Pakol_1_06            = 1,43%
			CUP_H_TKI_Pakol_2_01            = 1,43%
			CUP_H_TKI_Pakol_2_02            = 1,43%
			CUP_H_TKI_Pakol_2_03            = 1,43%
			CUP_H_TKI_Pakol_2_04            = 1,43%
			CUP_H_TKI_Pakol_2_05            = 1,43%
			CUP_H_TKI_Pakol_2_06            = 1,43%
			CUP_H_RACS_Helmet_DES           = 1,43%
			CUP_H_RACS_Helmet_Goggles_DES   = 1,43%
			CUP_H_RACS_Helmet_Headset_DES   = 1,43%
			CUP_H_RACS_Helmet_DPAT          = 1,43%
			CUP_H_RACS_Helmet_Goggles_DPAT  = 1,43%
			CUP_H_RACS_Helmet_Headset_DPAT  = 1,43%
			CUP_H_RACS_Helmet_wdl           = 1,43%
			CUP_H_RACS_Helmet_Goggles_wdl   = 1,43%
			CUP_H_RACS_Helmet_Headset_wdl   = 1,43%
			CUP_H_RACS_Helmet_mech          = 1,43%
			CUP_H_RACS_Helmet_Goggles_mech  = 1,43%
			CUP_H_RACS_Helmet_Headset_mech  = 1,43%
			CUP_H_RACS_Helmet_olive         = 1,43%
			CUP_H_RACS_Helmet_tan           = 1,43%
			CUP_H_RACS_Beret_Blue           = 1,43%
		*/
		CUPGuerillaHeadgear[] = {"CUP_H_PMC_Cap_Tan", "CUP_H_RACS_Helmet_Headset_DES", "CUP_H_TKI_Lungee_05", "CUP_H_TKI_Pakol_2_04", "CUP_H_TKI_Lungee_06", "CUP_H_PMC_Cap_Back_PRR_Grey", "CUP_H_TKI_SkullCap_04", "CUP_H_PMC_Cap_Grey", "CUP_H_RACS_Helmet_Goggles_DES", "CUP_H_PMC_Cap_Back_PRR_Burberry", "CUP_H_PMC_Cap_Back_EP_Grey", "CUP_H_TKI_Lungee_Open_06", "CUP_H_TKI_Pakol_1_03", "CUP_H_TKI_Pakol_2_03", "CUP_H_PMC_Cap_Back_EP_Burberry", "CUP_H_TKI_Pakol_2_02", "CUP_H_RACS_Helmet_tan", "CUP_H_PMC_Cap_PRR_Burberry", "CUP_H_TKI_Lungee_01", "CUP_H_TKI_SkullCap_02", "CUP_H_TKI_Lungee_Open_05", "CUP_H_RACS_Beret_Blue", "CUP_H_RACS_Helmet_Headset_DPAT", "CUP_H_RACS_Helmet_Goggles_DPAT", "CUP_H_RACS_Helmet_wdl", "CUP_H_TKI_Lungee_02", "CUP_H_TKI_Pakol_2_01", "CUP_H_TKI_Lungee_Open_02", "CUP_H_TKI_Pakol_2_05", "CUP_H_PMC_Cap_Back_Burberry", "CUP_H_TK_PilotHelmet", "CUP_H_PMC_Cap_EP_Burberry", "CUP_H_PMC_Cap_Back_Grey", "CUP_H_RACS_Helmet_DPAT", "CUP_H_PMC_Cap_Back_EP_Tan", "CUP_H_TKI_SkullCap_05", "CUP_H_TKI_SkullCap_01", "CUP_H_TKI_SkullCap_03", "CUP_H_TKI_Lungee_Open_04", "CUP_H_TKI_Pakol_1_05", "CUP_H_PMC_Cap_PRR_Tan", "CUP_H_PMC_Cap_PRR_Grey", "CUP_H_RACS_Helmet_DES", "CUP_H_RACS_Helmet_olive", "CUP_H_TKI_Lungee_03", "CUP_H_RACS_Helmet_Goggles_mech", "CUP_H_RACS_Helmet_Headset_wdl", "CUP_H_PMC_Cap_Back_PRR_Tan", "CUP_H_RACS_Helmet_mech", "CUP_H_RACS_Helmet_Goggles_wdl", "CUP_H_TKI_Lungee_Open_03", "CUP_H_PMC_Cap_Back_Tan", "CUP_H_TK_Beret", "CUP_H_PMC_Cap_Burberry", "CUP_H_TKI_Pakol_1_01", "CUP_H_PMC_Cap_EP_Grey", "CUP_H_RACS_Helmet_Headset_mech", "CUP_H_TKI_Lungee_Open_01", "CUP_H_PMC_PRR_Headset", "CUP_H_PMC_Cap_EP_Tan", "CUP_H_TK_Helmet", "CUP_H_TKI_Pakol_2_06", "CUP_H_TKI_Lungee_04", "CUP_H_TKI_SkullCap_06", "CUP_H_TK_Lungee", "CUP_H_TKI_Pakol_1_02", "CUP_H_PMC_EP_Headset", "CUP_H_TKI_Pakol_1_04", "CUP_H_TKI_Pakol_1_06", "CUP_H_TK_TankerHelmet"};

		/*
			Percental Item Spawn Chances of CUPMilitaryHeadgear:

			CUP_H_USArmy_HelmetMICH              = 0,72%
			CUP_H_USArmy_HelmetMICH_ESS          = 0,72%
			CUP_H_USArmy_HelmetMICH_earpro       = 0,72%
			CUP_H_USArmy_HelmetMICH_earpro_ess   = 0,72%
			CUP_H_USArmy_HelmetMICH_headset      = 0,72%
			CUP_H_USArmy_HelmetMICH_headset_ess  = 0,72%
			CUP_H_USArmy_HelmetMICH_wdl          = 0,72%
			CUP_H_USArmy_Helmet_ECH1_Sand        = 0,72%
			CUP_H_USArmy_Helmet_ECH2_Sand        = 0,72%
			CUP_H_USArmy_Helmet_ECH1_Black       = 0,72%
			CUP_H_USArmy_Helmet_ECH2_Black       = 0,72%
			CUP_H_USArmy_Helmet_ECH1_Green       = 0,72%
			CUP_H_USArmy_Helmet_ECH2_GREEN       = 0,72%
			CUP_H_USArmy_Helmet_Pro              = 0,72%
			CUP_H_USArmy_Helmet_Pro_gog          = 0,72%
			CUP_H_USArmy_Helmet_M1_Olive         = 0,72%
			CUP_H_USArmy_Helmet_M1_Vine          = 0,72%
			CUP_H_USArmy_Helmet_M1_m81           = 0,72%
			CUP_H_USArmy_Helmet_M1_btp           = 0,72%
			CUP_H_USMC_ACVC_WDL                  = 0,72%
			CUP_H_USMC_ACVC_DES                  = 0,72%
			CUP_H_USMC_MICH2000_WDL              = 0,72%
			CUP_H_USMC_MICH2000_DES              = 0,72%
			CUP_H_USMC_MICH2000_ESS_COMM_WDL     = 0,72%
			CUP_H_USMC_MICH2000_ESS_COMM_DES     = 0,72%
			CUP_H_USMC_MICH2000_COMM_WDL         = 0,72%
			CUP_H_USMC_MICH2000_COMM_DES         = 0,72%
			CUP_H_USMC_MICH2000_DEF_WDL          = 0,72%
			CUP_H_USMC_MICH2000_DEF_DES          = 0,72%
			CUP_H_USMC_MICH2000_DEF_ESS_WDL      = 0,72%
			CUP_H_USMC_MICH2000_DEF_ESS_DES      = 0,72%
			CUP_H_USMC_LWH_NVGMOUNT_WDL          = 0,72%
			CUP_H_USMC_LWH_NVGMOUNT_DES          = 0,72%
			CUP_H_USMC_LWH_WDL                   = 0,72%
			CUP_H_USMC_LWH_DES                   = 0,72%
			CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_WDL   = 0,72%
			CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES   = 0,72%
			CUP_H_USMC_LWH_ESS_HS_WDL            = 0,72%
			CUP_H_USMC_LWH_ESS_HS_DES            = 0,72%
			CUP_H_USMC_LWH_NVGMOUNT_ESS_WDL      = 0,72%
			CUP_H_USMC_LWH_NVGMOUNT_ESS_DES      = 0,72%
			CUP_H_USMC_LWH_ESS_WDL               = 0,72%
			CUP_H_USMC_LWH_ESS_DES               = 0,72%
			CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_WDL   = 0,72%
			CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES   = 0,72%
			CUP_H_USMC_LWH_ESS_LR_WDL            = 0,72%
			CUP_H_USMC_LWH_ESS_LR_DES            = 0,72%
			CUP_H_USMC_BOONIE_WDL                = 0,72%
			CUP_H_USMC_BOONIE_DES                = 0,72%
			CUP_H_USMC_BOONIE_PRR_WDL            = 0,72%
			CUP_H_USMC_BOONIE_PRR_DES            = 0,72%
			CUP_H_USMC_CAP_WDL                   = 0,72%
			CUP_H_USMC_CAP_DES                   = 0,72%
			CUP_H_USMC_CAP_PRR_WDL               = 0,72%
			CUP_H_USMC_CAP_PRR_DES               = 0,72%
			CUP_H_BAF_Officer_Beret              = 0,72%
			CUP_H_BAF_Officer_Beret_PRR_U        = 0,72%
			CUP_H_BAF_Officer_Beret_PRR_O        = 0,72%
			CUP_H_BAF_Helmet_Pilot               = 0,72%
			CUP_H_BAF_Crew_Helmet_DDPM           = 0,72%
			CUP_H_BAF_Helmet_1_DDPM              = 0,72%
			CUP_H_BAF_Helmet_2_DDPM              = 0,72%
			CUP_H_BAF_Helmet_Net_2_DDPM          = 0,72%
			CUP_H_BAF_Helmet_3_DDPM              = 0,72%
			CUP_H_BAF_Helmet_4_DDPM              = 0,72%
			CUP_H_BAF_Crew_Helmet_DPM            = 0,72%
			CUP_H_BAF_Helmet_1_DPM               = 0,72%
			CUP_H_BAF_Helmet_Net_2_DPM           = 0,72%
			CUP_H_BAF_Helmet_2_DPM               = 0,72%
			CUP_H_BAF_Helmet_3_DPM               = 0,72%
			CUP_H_BAF_Helmet_4_DPM               = 0,72%
			CUP_H_BAF_Crew_Helmet_MTP            = 0,72%
			CUP_H_BAF_Helmet_Net_2_MTP           = 0,72%
			CUP_H_BAF_Helmet_1_MTP               = 0,72%
			CUP_H_BAF_Helmet_2_MTP               = 0,72%
			CUP_H_BAF_Helmet_3_MTP               = 0,72%
			CUP_H_BAF_Helmet_4_MTP               = 0,72%
			CUP_H_CDF_H_PASGT_MNT                = 0,72%
			CUP_H_CDF_H_PASGT_DST                = 0,72%
			CUP_H_CDF_H_PASGT_FST                = 0,72%
			CUP_H_CDF_H_PASGT_UN                 = 0,72%
			CUP_H_CDF_OfficerCap_MNT             = 0,72%
			CUP_H_CDF_OfficerCap_DST             = 0,72%
			CUP_H_CDF_OfficerCap_FST             = 0,72%
			CUP_H_CDF_OfficerCap_UN              = 0,72%
			CUP_H_CDF_Beret_UN                   = 0,72%
			CUP_H_ChDKZ_Beret                    = 0,72%
			CUP_H_ChDKZ_Beanie                   = 0,72%
			CUP_H_ChDKZ_Cap                      = 0,72%
			CUP_H_RUS_6B27_NVG                   = 0,72%
			CUP_H_RUS_6B27_NVG_olive             = 0,72%
			CUP_H_RUS_6B27                       = 0,72%
			CUP_H_RUS_6B27_olive                 = 0,72%
			CUP_H_RUS_TSH_4_Brown                = 0,72%
			CUP_H_RUS_ZSH_Shield_Up              = 0,72%
			CUP_H_RUS_ZSH_Shield_Down            = 0,72%
			CUP_H_RUS_Bandana_HS                 = 0,72%
			CUP_H_RUS_Beret_VDV                  = 0,72%
			CUP_H_RUS_Beret_Spetsnaz             = 0,72%
			CUP_H_RUS_ZSH_1_Goggles              = 0,72%
			CUP_H_RUS_ZSH_1                      = 0,72%
			CUP_H_SLA_TankerHelmet               = 0,72%
			CUP_H_SLA_Helmet                     = 0,72%
			CUP_H_SLA_Pilot_Helmet               = 0,72%
			CUP_H_SLA_OfficerCap                 = 0,72%
			CUP_H_SLA_SLCap                      = 0,72%
			CUP_H_SLA_Boonie                     = 0,72%
			CUP_H_SLA_Beret                      = 0,72%
			CUP_H_SLA_BeanieGreen                = 0,72%
			CUP_H_SLA_BeretRed                   = 0,72%
			CUP_H_USArmy_Boonie                  = 0,72%
			CUP_H_USA_Cap                        = 0,72%
			CUP_H_USMC_Officer_Cap               = 0,72%
			CUP_H_USMC_HelmetWDL                 = 0,72%
			CUP_H_USMC_Headset_HelmetWDL         = 0,72%
			CUP_H_USMC_Headset_GoggleW_HelmetWDL = 0,72%
			CUP_H_USMC_Crew_Helmet               = 0,72%
			CUP_H_USMC_Goggles_HelmetWDL         = 0,72%
			CUP_H_USMC_Helmet_Pilot              = 0,72%
			CUP_H_FR_Cap_Headset_Green           = 0,72%
			CUP_H_FR_Cap_Officer_Headset         = 0,72%
			CUP_H_FR_BandanaGreen                = 0,72%
			CUP_H_FR_BandanaWdl                  = 0,72%
			CUP_H_FR_ECH                         = 0,72%
			CUP_H_FR_BoonieMARPAT                = 0,72%
			CUP_H_FR_BoonieWDL                   = 0,72%
			CUP_H_FR_BeanieGreen                 = 0,72%
			CUP_H_FR_Headset                     = 0,72%
			CUP_H_FR_Bandana_Headset             = 0,72%
			CUP_H_FR_Headband_Headset            = 0,72%
			CUP_H_FR_PRR_BoonieWDL               = 0,72%
			CUP_H_Navy_CrewHelmet_Blue           = 0,72%
			CUP_H_Navy_CrewHelmet_Brown          = 0,72%
			CUP_H_Navy_CrewHelmet_Green          = 0,72%
			CUP_H_Navy_CrewHelmet_Red            = 0,72%
			CUP_H_Navy_CrewHelmet_Violet         = 0,72%
			CUP_H_Navy_CrewHelmet_White          = 0,72%
			CUP_H_Navy_CrewHelmet_Yellow         = 0,72%
		*/
		CUPMilitaryHeadgear[] = {"CUP_H_USMC_BOONIE_DES", "CUP_H_BAF_Helmet_3_MTP", "CUP_H_USArmy_HelmetMICH_headset_ess", "CUP_H_CDF_OfficerCap_MNT", "CUP_H_USMC_LWH_ESS_HS_DES", "CUP_H_FR_BandanaGreen", "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_WDL", "CUP_H_BAF_Helmet_1_DDPM", "CUP_H_RUS_Beret_VDV", "CUP_H_USMC_CAP_WDL", "CUP_H_USArmy_Helmet_M1_m81", "CUP_H_BAF_Helmet_2_DDPM", "CUP_H_SLA_TankerHelmet", "CUP_H_Navy_CrewHelmet_Brown", "CUP_H_SLA_Helmet", "CUP_H_USMC_LWH_ESS_LR_DES", "CUP_H_Navy_CrewHelmet_Violet", "CUP_H_USArmy_Helmet_ECH1_Sand", "CUP_H_SLA_SLCap", "CUP_H_USMC_MICH2000_DEF_DES", "CUP_H_USMC_Officer_Cap", "CUP_H_USMC_MICH2000_COMM_DES", "CUP_H_BAF_Helmet_Pilot", "CUP_H_CDF_OfficerCap_DST", "CUP_H_USArmy_Helmet_M1_Olive", "CUP_H_CDF_OfficerCap_FST", "CUP_H_SLA_OfficerCap", "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES", "CUP_H_RUS_Bandana_HS", "CUP_H_USMC_Crew_Helmet", "CUP_H_USMC_LWH_NVGMOUNT_DES", "CUP_H_USMC_MICH2000_DEF_ESS_WDL", "CUP_H_Navy_CrewHelmet_Red", "CUP_H_FR_BandanaWdl", "CUP_H_FR_Headband_Headset", "CUP_H_FR_BoonieWDL", "CUP_H_CDF_OfficerCap_UN", "CUP_H_BAF_Officer_Beret", "CUP_H_Navy_CrewHelmet_Yellow", "CUP_H_USArmy_Helmet_ECH2_GREEN", "CUP_H_FR_ECH", "CUP_H_Navy_CrewHelmet_Green", "CUP_H_SLA_Boonie", "CUP_H_USMC_BOONIE_WDL", "CUP_H_FR_BoonieMARPAT", "CUP_H_USMC_MICH2000_ESS_COMM_DES", "CUP_H_USArmy_HelmetMICH_wdl", "CUP_H_FR_Cap_Headset_Green", "CUP_H_RUS_6B27", "CUP_H_USMC_MICH2000_DEF_WDL", "CUP_H_CDF_H_PASGT_MNT", "CUP_H_USArmy_HelmetMICH_headset", "CUP_H_USMC_LWH_ESS_WDL", "CUP_H_USMC_Goggles_HelmetWDL", "CUP_H_USMC_ACVC_WDL", "CUP_H_BAF_Helmet_2_MTP", "CUP_H_BAF_Helmet_1_MTP", "CUP_H_USArmy_HelmetMICH_earpro_ess", "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES", "CUP_H_USArmy_Helmet_ECH2_Sand", "CUP_H_USMC_MICH2000_ESS_COMM_WDL", "CUP_H_USMC_Headset_GoggleW_HelmetWDL", "CUP_H_RUS_6B27_NVG_olive", "CUP_H_USMC_LWH_ESS_LR_WDL", "CUP_H_USMC_MICH2000_COMM_WDL", "CUP_H_CDF_H_PASGT_FST", "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_WDL", "CUP_H_Navy_CrewHelmet_White", "CUP_H_USMC_Helmet_Pilot", "CUP_H_FR_BeanieGreen", "CUP_H_USMC_HelmetWDL", "CUP_H_USMC_LWH_NVGMOUNT_WDL", "CUP_H_USMC_LWH_ESS_HS_WDL", "CUP_H_USMC_ACVC_DES", "CUP_H_BAF_Helmet_3_DPM", "CUP_H_ChDKZ_Beret", "CUP_H_RUS_ZSH_Shield_Up", "CUP_H_CDF_H_PASGT_DST", "CUP_H_USMC_LWH_WDL", "CUP_H_ChDKZ_Cap", "CUP_H_SLA_BeanieGreen", "CUP_H_BAF_Helmet_3_DDPM", "CUP_H_USMC_CAP_DES", "CUP_H_SLA_Beret", "CUP_H_USArmy_HelmetMICH_ESS", "CUP_H_USMC_LWH_ESS_DES", "CUP_H_USMC_LWH_DES", "CUP_H_USMC_CAP_PRR_DES", "CUP_H_USMC_MICH2000_DEF_ESS_DES", "CUP_H_USMC_BOONIE_PRR_WDL", "CUP_H_BAF_Helmet_Net_2_DPM", "CUP_H_RUS_TSH_4_Brown", "CUP_H_SLA_BeretRed", "CUP_H_USArmy_Boonie", "CUP_H_BAF_Officer_Beret_PRR_U", "CUP_H_CDF_Beret_UN", "CUP_H_BAF_Helmet_4_DDPM", "CUP_H_USMC_MICH2000_DES", "CUP_H_USMC_LWH_NVGMOUNT_ESS_WDL", "CUP_H_USArmy_Helmet_M1_Vine", "CUP_H_RUS_6B27_olive", "CUP_H_RUS_ZSH_1", "CUP_H_BAF_Helmet_1_DPM", "CUP_H_USMC_MICH2000_WDL", "CUP_H_CDF_H_PASGT_UN", "CUP_H_Navy_CrewHelmet_Blue", "CUP_H_BAF_Helmet_Net_2_DDPM", "CUP_H_FR_PRR_BoonieWDL", "CUP_H_BAF_Helmet_2_DPM", "CUP_H_FR_Cap_Officer_Headset", "CUP_H_RUS_6B27_NVG", "CUP_H_USArmy_Helmet_ECH2_Black", "CUP_H_USArmy_HelmetMICH_earpro", "CUP_H_BAF_Crew_Helmet_DPM", "CUP_H_USArmy_Helmet_ECH1_Green", "CUP_H_USMC_Headset_HelmetWDL", "CUP_H_USArmy_Helmet_ECH1_Black", "CUP_H_USArmy_HelmetMICH", "CUP_H_USA_Cap", "CUP_H_RUS_ZSH_Shield_Down", "CUP_H_BAF_Helmet_4_MTP", "CUP_H_USMC_CAP_PRR_WDL", "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES", "CUP_H_RUS_Beret_Spetsnaz", "CUP_H_USMC_BOONIE_PRR_DES", "CUP_H_ChDKZ_Beanie", "CUP_H_USArmy_Helmet_Pro_gog", "CUP_H_USArmy_Helmet_Pro", "CUP_H_BAF_Officer_Beret_PRR_O", "CUP_H_BAF_Helmet_Net_2_MTP", "CUP_H_USArmy_Helmet_M1_btp", "CUP_H_BAF_Crew_Helmet_MTP", "CUP_H_BAF_Helmet_4_DPM", "CUP_H_BAF_Crew_Helmet_DDPM", "CUP_H_FR_Bandana_Headset", "CUP_H_FR_Headset", "CUP_H_SLA_Pilot_Helmet", "CUP_H_RUS_ZSH_1_Goggles"};

		/*
			Percental Item Spawn Chances of CUPExplosives:

			CUP_TimeBomb_M = 14,29%
			CUP_Mine_M     = 14,29%
			CUP_MineE_M    = 14,29%
			CUP_IED_V1_M   = 14,29%
			CUP_IED_V2_M   = 14,29%
			CUP_IED_V3_M   = 14,29%
			CUP_IED_V4_M   = 14,29%
		*/
		CUPExplosives[] = {"CUP_IED_V4_M", "CUP_TimeBomb_M", "CUP_MineE_M", "CUP_IED_V1_M", "CUP_IED_V2_M", "CUP_Mine_M", "CUP_IED_V3_M"};

		/*
			Percental Item Spawn Chances of CUPGuerillaItems:

			CUP_NVG_PVS7  = 33,33%
			CUP_NVG_HMNVS = 33,33%
			CUP_NVG_PVS14 = 33,33%
		*/
		CUPGuerillaItems[] = {"CUP_NVG_HMNVS", "CUP_NVG_PVS7", "CUP_NVG_PVS14"};

		/*
			Percental Item Spawn Chances of CUPUGLSmokes:

			CUP_1Rnd_SMOKE_GP25_M       = 8,33%
			CUP_1Rnd_SmokeRed_GP25_M    = 8,33%
			CUP_1Rnd_SmokeGreen_GP25_M  = 8,33%
			CUP_1Rnd_SmokeYellow_GP25_M = 8,33%
			CUP_1Rnd_Smoke_M203         = 8,33%
			CUP_1Rnd_SmokeRed_M203      = 8,33%
			CUP_1Rnd_SmokeGreen_M203    = 8,33%
			CUP_1Rnd_SmokeYellow_M203   = 8,33%
			CUP_6Rnd_Smoke_M203         = 8,33%
			CUP_6Rnd_SmokeRed_M203      = 8,33%
			CUP_6Rnd_SmokeGreen_M203    = 8,33%
			CUP_6Rnd_SmokeYellow_M203   = 8,33%
		*/
		CUPUGLSmokes[] = {"CUP_1Rnd_SmokeGreen_GP25_M", "CUP_1Rnd_SmokeRed_GP25_M", "CUP_6Rnd_SmokeGreen_M203", "CUP_6Rnd_SmokeRed_M203", "CUP_6Rnd_SmokeYellow_M203", "CUP_1Rnd_SmokeGreen_M203", "CUP_1Rnd_SMOKE_GP25_M", "CUP_1Rnd_SmokeYellow_M203", "CUP_1Rnd_SmokeYellow_GP25_M", "CUP_6Rnd_Smoke_M203", "CUP_1Rnd_Smoke_M203", "CUP_1Rnd_SmokeRed_M203"};

		/*
			Percental Item Spawn Chances of CUPCivilianClothing:

			CUP_U_I_Pilot_01      = 1,92%
			CUP_U_I_Leader_01     = 1,92%
			CUP_U_I_Worker_02     = 1,92%
			CUP_U_I_Woodlander_01 = 1,92%
			CUP_U_I_Woodlander_02 = 1,92%
			CUP_U_I_Woodlander_03 = 1,92%
			CUP_U_I_Villager_03   = 1,92%
			CUP_U_I_Villager_04   = 1,92%
			CUP_U_O_Pilot_01      = 1,92%
			CUP_U_O_Worker_02     = 1,92%
			CUP_U_O_Woodlander_01 = 1,92%
			CUP_U_O_Woodlander_02 = 1,92%
			CUP_U_O_Woodlander_03 = 1,92%
			CUP_U_O_Villager_03   = 1,92%
			CUP_U_O_Villager_04   = 1,92%
			CUP_U_C_Pilot_01      = 1,92%
			CUP_U_C_Citizen_01    = 1,92%
			CUP_U_C_Citizen_02    = 1,92%
			CUP_U_C_Citizen_03    = 1,92%
			CUP_U_C_Citizen_04    = 1,92%
			CUP_U_C_Worker_01     = 1,92%
			CUP_U_C_Worker_02     = 1,92%
			CUP_U_C_Worker_03     = 1,92%
			CUP_U_C_Worker_04     = 1,92%
			CUP_U_C_Profiteer_01  = 1,92%
			CUP_U_C_Profiteer_02  = 1,92%
			CUP_U_C_Profiteer_03  = 1,92%
			CUP_U_C_Profiteer_04  = 1,92%
			CUP_U_C_Woodlander_01 = 1,92%
			CUP_U_C_Woodlander_02 = 1,92%
			CUP_U_C_Woodlander_03 = 1,92%
			CUP_U_C_Woodlander_04 = 1,92%
			CUP_U_C_Villager_01   = 1,92%
			CUP_U_C_Villager_02   = 1,92%
			CUP_U_C_Villager_03   = 1,92%
			CUP_U_C_Villager_04   = 1,92%
			CUP_U_C_Priest_01     = 1,92%
			CUP_U_C_Policeman_01  = 1,92%
			CUP_U_C_Suit_01       = 1,92%
			CUP_U_C_Suit_02       = 1,92%
			CUP_U_C_Labcoat_01    = 1,92%
			CUP_U_C_Labcoat_02    = 1,92%
			CUP_U_C_Labcoat_03    = 1,92%
			CUP_U_C_Rocker_01     = 1,92%
			CUP_U_C_Rocker_02     = 1,92%
			CUP_U_C_Rocker_03     = 1,92%
			CUP_U_C_Rocker_04     = 1,92%
			CUP_U_C_Mechanic_01   = 1,92%
			CUP_U_C_Mechanic_02   = 1,92%
			CUP_U_C_Mechanic_03   = 1,92%
			CUP_U_C_Fireman_01    = 1,92%
			CUP_U_C_Rescuer_01    = 1,92%
		*/
		CUPCivilianClothing[] = {"CUP_U_C_Profiteer_04", "CUP_U_C_Worker_04", "CUP_U_O_Woodlander_03", "CUP_U_C_Suit_02", "CUP_U_C_Villager_04", "CUP_U_C_Citizen_03", "CUP_U_C_Profiteer_01", "CUP_U_I_Leader_01", "CUP_U_I_Villager_04", "CUP_U_C_Profiteer_02", "CUP_U_C_Profiteer_03", "CUP_U_C_Woodlander_03", "CUP_U_O_Pilot_01", "CUP_U_C_Citizen_01", "CUP_U_C_Citizen_02", "CUP_U_O_Woodlander_02", "CUP_U_C_Woodlander_02", "CUP_U_C_Mechanic_03", "CUP_U_C_Citizen_04", "CUP_U_C_Rocker_01", "CUP_U_I_Woodlander_03", "CUP_U_I_Woodlander_01", "CUP_U_I_Pilot_01", "CUP_U_C_Rocker_02", "CUP_U_C_Fireman_01", "CUP_U_C_Policeman_01", "CUP_U_I_Worker_02", "CUP_U_C_Worker_01", "CUP_U_C_Villager_02", "CUP_U_C_Pilot_01", "CUP_U_C_Worker_02", "CUP_U_C_Labcoat_02", "CUP_U_C_Suit_01", "CUP_U_C_Priest_01", "CUP_U_C_Rescuer_01", "CUP_U_C_Woodlander_01", "CUP_U_C_Worker_03", "CUP_U_C_Rocker_04", "CUP_U_O_Villager_04", "CUP_U_C_Mechanic_02", "CUP_U_C_Labcoat_01", "CUP_U_O_Villager_03", "CUP_U_O_Woodlander_01", "CUP_U_C_Villager_01", "CUP_U_C_Mechanic_01", "CUP_U_C_Woodlander_04", "CUP_U_O_Worker_02", "CUP_U_I_Woodlander_02", "CUP_U_C_Labcoat_03", "CUP_U_I_Villager_03", "CUP_U_C_Rocker_03", "CUP_U_C_Villager_03"};

		/*
			Percental Item Spawn Chances of CUPGuerillaClothing:

			CUP_O_TKI_Khet_Partug_01 = 1,79%
			CUP_O_TKI_Khet_Partug_02 = 1,79%
			CUP_O_TKI_Khet_Partug_03 = 1,79%
			CUP_O_TKI_Khet_Partug_04 = 1,79%
			CUP_O_TKI_Khet_Partug_05 = 1,79%
			CUP_O_TKI_Khet_Partug_06 = 1,79%
			CUP_O_TKI_Khet_Partug_07 = 1,79%
			CUP_O_TKI_Khet_Partug_08 = 1,79%
			CUP_O_TKI_Khet_Jeans_01  = 1,79%
			CUP_O_TKI_Khet_Jeans_02  = 1,79%
			CUP_O_TKI_Khet_Jeans_03  = 1,79%
			CUP_O_TKI_Khet_Jeans_04  = 1,79%
			CUP_I_TKG_Khet_Partug_01 = 1,79%
			CUP_I_TKG_Khet_Partug_02 = 1,79%
			CUP_I_TKG_Khet_Partug_03 = 1,79%
			CUP_I_TKG_Khet_Partug_04 = 1,79%
			CUP_I_TKG_Khet_Partug_05 = 1,79%
			CUP_I_TKG_Khet_Partug_06 = 1,79%
			CUP_I_TKG_Khet_Partug_07 = 1,79%
			CUP_I_TKG_Khet_Partug_08 = 1,79%
			CUP_I_TKG_Khet_Jeans_01  = 1,79%
			CUP_I_TKG_Khet_Jeans_02  = 1,79%
			CUP_I_TKG_Khet_Jeans_03  = 1,79%
			CUP_I_TKG_Khet_Jeans_04  = 1,79%
			CUP_I_B_PMC_Unit_1       = 1,79%
			CUP_I_B_PMC_Unit_2       = 1,79%
			CUP_I_B_PMC_Unit_3       = 1,79%
			CUP_I_B_PMC_Unit_4       = 1,79%
			CUP_I_B_PMC_Unit_5       = 1,79%
			CUP_I_B_PMC_Unit_6       = 1,79%
			CUP_I_B_PMC_Unit_7       = 1,79%
			CUP_I_B_PMC_Unit_8       = 1,79%
			CUP_I_B_PMC_Unit_9       = 1,79%
			CUP_I_B_PMC_Unit_10      = 1,79%
			CUP_I_B_PMC_Unit_11      = 1,79%
			CUP_I_B_PMC_Unit_12      = 1,79%
			CUP_I_B_PMC_Unit_13      = 1,79%
			CUP_I_B_PMC_Unit_14      = 1,79%
			CUP_I_B_PMC_Unit_15      = 1,79%
			CUP_I_B_PMC_Unit_16      = 1,79%
			CUP_I_B_PMC_Unit_17      = 1,79%
			CUP_I_B_PMC_Unit_18      = 1,79%
			CUP_I_B_PMC_Unit_19      = 1,79%
			CUP_I_B_PMC_Unit_20      = 1,79%
			CUP_I_B_PMC_Unit_21      = 1,79%
			CUP_I_B_PMC_Unit_22      = 1,79%
			CUP_I_B_PMC_Unit_23      = 1,79%
			CUP_I_B_PMC_Unit_24      = 1,79%
			CUP_I_B_PMC_Unit_25      = 1,79%
			CUP_I_B_PMC_Unit_26      = 1,79%
			CUP_I_B_PMC_Unit_27      = 1,79%
			CUP_I_B_PMC_Unit_28      = 1,79%
			CUP_U_I_GUE_Flecktarn    = 1,79%
			CUP_U_I_GUE_Flecktarn2   = 1,79%
			CUP_U_I_GUE_Woodland1    = 1,79%
			CUP_U_I_GUE_Flecktarn3   = 1,79%
		*/
		CUPGuerillaClothing[] = {"CUP_I_TKG_Khet_Partug_04", "CUP_U_I_GUE_Flecktarn2", "CUP_I_B_PMC_Unit_3", "CUP_I_B_PMC_Unit_5", "CUP_I_TKG_Khet_Partug_03", "CUP_I_B_PMC_Unit_2", "CUP_I_TKG_Khet_Jeans_01", "CUP_I_B_PMC_Unit_15", "CUP_I_B_PMC_Unit_4", "CUP_I_TKG_Khet_Partug_02", "CUP_I_B_PMC_Unit_9", "CUP_I_B_PMC_Unit_6", "CUP_I_TKG_Khet_Jeans_04", "CUP_I_B_PMC_Unit_17", "CUP_I_B_PMC_Unit_20", "CUP_O_TKI_Khet_Partug_06", "CUP_U_I_GUE_Woodland1", "CUP_I_B_PMC_Unit_11", "CUP_U_I_GUE_Flecktarn", "CUP_I_B_PMC_Unit_23", "CUP_O_TKI_Khet_Partug_02", "CUP_O_TKI_Khet_Partug_03", "CUP_I_TKG_Khet_Partug_05", "CUP_I_B_PMC_Unit_28", "CUP_I_TKG_Khet_Jeans_03", "CUP_O_TKI_Khet_Jeans_01", "CUP_I_B_PMC_Unit_12", "CUP_I_B_PMC_Unit_25", "CUP_I_TKG_Khet_Partug_06", "CUP_I_B_PMC_Unit_27", "CUP_I_B_PMC_Unit_1", "CUP_O_TKI_Khet_Partug_05", "CUP_I_B_PMC_Unit_21", "CUP_I_B_PMC_Unit_13", "CUP_I_B_PMC_Unit_22", "CUP_I_B_PMC_Unit_14", "CUP_I_B_PMC_Unit_10", "CUP_I_TKG_Khet_Partug_01", "CUP_O_TKI_Khet_Partug_01", "CUP_I_TKG_Khet_Jeans_02", "CUP_O_TKI_Khet_Jeans_04", "CUP_I_B_PMC_Unit_19", "CUP_U_I_GUE_Flecktarn3", "CUP_I_B_PMC_Unit_8", "CUP_I_B_PMC_Unit_18", "CUP_O_TKI_Khet_Partug_07", "CUP_I_B_PMC_Unit_16", "CUP_I_B_PMC_Unit_24", "CUP_O_TKI_Khet_Partug_08", "CUP_I_TKG_Khet_Partug_07", "CUP_I_TKG_Khet_Partug_08", "CUP_I_B_PMC_Unit_26", "CUP_O_TKI_Khet_Jeans_03", "CUP_I_B_PMC_Unit_7", "CUP_O_TKI_Khet_Jeans_02", "CUP_O_TKI_Khet_Partug_04"};

		/*
			Percental Item Spawn Chances of CUPMilitaryClothing:

			CUP_U_B_GER_Tropentarn_1              = 0,78%
			CUP_U_B_GER_Tropentarn_2              = 0,78%
			CUP_U_B_GER_Ghillie                   = 0,78%
			CUP_U_B_GER_Flecktarn_1               = 0,78%
			CUP_U_B_GER_Flecktarn_2               = 0,78%
			CUP_U_B_GER_Fleck_Ghillie             = 0,78%
			CUP_U_I_Ghillie_Top                   = 0,78%
			CUP_U_I_GUE_Anorak_01                 = 0,78%
			CUP_U_I_GUE_Anorak_02                 = 0,78%
			CUP_U_I_GUE_Anorak_03                 = 0,78%
			CUP_U_I_RACS_Desert_1                 = 0,78%
			CUP_U_I_RACS_Desert_2                 = 0,78%
			CUP_U_I_RACS_PilotOverall             = 0,78%
			CUP_U_I_RACS_Urban_1                  = 0,78%
			CUP_U_I_RACS_Urban_2                  = 0,78%
			CUP_U_I_RACS_WDL_1                    = 0,78%
			CUP_U_I_RACS_WDL_2                    = 0,78%
			CUP_U_I_RACS_mech_1                   = 0,78%
			CUP_U_I_RACS_mech_2                   = 0,78%
			CUP_U_O_RUS_Flora_1                   = 0,78%
			CUP_U_O_RUS_EMR_1                     = 0,78%
			CUP_U_O_RUS_Flora_2                   = 0,78%
			CUP_U_O_RUS_EMR_2                     = 0,78%
			CUP_U_O_RUS_Flora_1_VDV               = 0,78%
			CUP_U_O_RUS_EMR_1_VDV                 = 0,78%
			CUP_U_O_RUS_Flora_2_VDV               = 0,78%
			CUP_U_O_RUS_EMR_2_VDV                 = 0,78%
			CUP_U_O_RUS_Commander                 = 0,78%
			CUP_U_O_RUS_Gorka_Partizan            = 0,78%
			CUP_U_O_RUS_Gorka_Partizan_A          = 0,78%
			CUP_U_O_RUS_Gorka_Green               = 0,78%
			CUP_U_O_RUS_Ghillie                   = 0,78%
			CUP_U_O_SLA_Officer                   = 0,78%
			CUP_U_O_SLA_MixedCamo                 = 0,78%
			CUP_U_O_SLA_Green                     = 0,78%
			CUP_U_O_SLA_Urban                     = 0,78%
			CUP_U_O_SLA_Desert                    = 0,78%
			CUP_U_O_Partisan_TTsKO                = 0,78%
			CUP_U_O_Partisan_TTsKO_Mixed          = 0,78%
			CUP_U_O_Partisan_VSR_Mixed1           = 0,78%
			CUP_U_O_Partisan_VSR_Mixed2           = 0,78%
			CUP_U_O_SLA_Overalls_Pilot            = 0,78%
			CUP_U_O_SLA_Overalls_Tank             = 0,78%
			CUP_U_O_SLA_Officer_Suit              = 0,78%
			CUP_U_O_TK_Officer                    = 0,78%
			CUP_U_O_TK_MixedCamo                  = 0,78%
			CUP_U_O_TK_Green                      = 0,78%
			CUP_U_O_TK_Ghillie                    = 0,78%
			CUP_U_O_TK_Ghillie_Top                = 0,78%
			CUP_U_B_USA06_Officer_m81             = 0,78%
			CUP_U_B_USArmy_TwoKnee                = 0,78%
			CUP_U_B_USArmy_UBACS                  = 0,78%
			CUP_U_B_USArmy_Soft                   = 0,78%
			CUP_U_B_USArmy_Ghillie                = 0,78%
			CUP_U_B_USArmy_PilotOverall           = 0,78%
			CUP_U_B_USMC_Officer                  = 0,78%
			CUP_U_B_USMC_MARPAT_WDL_Sleeves       = 0,78%
			CUP_U_B_USMC_MARPAT_WDL_RolledUp      = 0,78%
			CUP_U_B_USMC_MARPAT_WDL_Kneepad       = 0,78%
			CUP_U_B_USMC_MARPAT_WDL_TwoKneepads   = 0,78%
			CUP_U_B_USMC_PilotOverall             = 0,78%
			CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad = 0,78%
			CUP_U_B_USMC_Ghillie_WDL              = 0,78%
			CUP_U_B_FR_SpecOps                    = 0,78%
			CUP_U_B_FR_Scout                      = 0,78%
			CUP_U_B_FR_Officer                    = 0,78%
			CUP_U_B_FR_Corpsman                   = 0,78%
			CUP_U_B_FR_DirAction                  = 0,78%
			CUP_U_B_FR_DirAction2                 = 0,78%
			CUP_U_B_FR_Light                      = 0,78%
			CUP_U_B_FR_Scout1                     = 0,78%
			CUP_U_B_FR_Scout2                     = 0,78%
			CUP_U_B_FR_Scout3                     = 0,78%
			CUP_B_USMC_Navy_Blue                  = 0,78%
			CUP_B_USMC_Navy_Brown                 = 0,78%
			CUP_B_USMC_Navy_Green                 = 0,78%
			CUP_B_USMC_Navy_Red                   = 0,78%
			CUP_B_USMC_Navy_Violet                = 0,78%
			CUP_B_USMC_Navy_White                 = 0,78%
			CUP_B_USMC_Navy_Yellow                = 0,78%
			CUP_U_B_USMC_FROG1_WMARPAT            = 0,78%
			CUP_U_B_USMC_FROG1_DMARPAT            = 0,78%
			CUP_U_B_USMC_FROG2_WMARPAT            = 0,78%
			CUP_U_B_USMC_FROG2_DMARPAT            = 0,78%
			CUP_U_B_USMC_FROG3_WMARPAT            = 0,78%
			CUP_U_B_USMC_FROG3_DMARPAT            = 0,78%
			CUP_U_B_USMC_FROG4_WMARPAT            = 0,78%
			CUP_U_B_USMC_FROG4_DMARPAT            = 0,78%
			CUP_U_B_CZ_WDL_TShirt                 = 0,78%
			CUP_U_B_BAF_DDPM_S1_RolledUp          = 0,78%
			CUP_U_B_BAF_DDPM_S2_UnRolled          = 0,78%
			CUP_U_B_BAF_DDPM_Tshirt               = 0,78%
			CUP_U_B_BAF_DPM_S1_RolledUp           = 0,78%
			CUP_U_B_BAF_DPM_S2_UnRolled           = 0,78%
			CUP_U_B_BAF_DPM_Tshirt                = 0,78%
			CUP_U_B_BAF_MTP_S1_RolledUp           = 0,78%
			CUP_U_B_BAF_MTP_S2_UnRolled           = 0,78%
			CUP_U_B_BAF_MTP_Tshirt                = 0,78%
			CUP_U_B_BAF_MTP_Ghillie               = 0,78%
			CUP_U_B_BAF_DPM_Ghillie               = 0,78%
			CUP_U_B_BAF_DDPM_Ghillie              = 0,78%
			CUP_U_B_BAF_MTP_S3_RolledUp           = 0,78%
			CUP_U_B_BAF_MTP_S4_UnRolled           = 0,78%
			CUP_U_B_BAF_MTP_S5_UnRolled           = 0,78%
			CUP_U_B_BAF_MTP_S6_UnRolled           = 0,78%
			CUP_U_B_CDF_MNT_1                     = 0,78%
			CUP_U_B_CDF_MNT_2                     = 0,78%
			CUP_U_B_CDF_DST_1                     = 0,78%
			CUP_U_B_CDF_DST_2                     = 0,78%
			CUP_U_B_CDF_FST_1                     = 0,78%
			CUP_U_B_CDF_FST_2                     = 0,78%
			CUP_U_I_UNO_MNT_1                     = 0,78%
			CUP_U_I_UNO_MNT_2                     = 0,78%
			CUP_U_I_UNO_DST_1                     = 0,78%
			CUP_U_I_UNO_DST_2                     = 0,78%
			CUP_U_I_UNO_FST_1                     = 0,78%
			CUP_U_I_UNO_FST_2                     = 0,78%
			CUP_U_O_CHDKZ_Bardak                  = 0,78%
			CUP_U_O_CHDKZ_Commander               = 0,78%
			CUP_U_O_CHDKZ_Lopotev                 = 0,78%
			CUP_U_O_CHDKZ_Kam_01                  = 0,78%
			CUP_U_O_CHDKZ_Kam_02                  = 0,78%
			CUP_U_O_CHDKZ_Kam_03                  = 0,78%
			CUP_U_O_CHDKZ_Kam_04                  = 0,78%
			CUP_U_O_CHDKZ_Kam_05                  = 0,78%
			CUP_U_O_CHDKZ_Kam_06                  = 0,78%
			CUP_U_O_CHDKZ_Kam_07                  = 0,78%
			CUP_U_O_CHDKZ_Kam_08                  = 0,78%
		*/
		CUPMilitaryClothing[] = {"CUP_B_USMC_Navy_Green", "CUP_U_B_GER_Fleck_Ghillie", "CUP_U_O_SLA_Desert", "CUP_U_I_UNO_FST_2", "CUP_U_B_USA06_Officer_m81", "CUP_U_B_USMC_FROG3_DMARPAT", "CUP_U_B_USMC_Officer", "CUP_U_O_RUS_Ghillie", "CUP_U_I_RACS_WDL_2", "CUP_U_O_CHDKZ_Kam_04", "CUP_U_O_TK_Ghillie_Top", "CUP_U_I_RACS_Urban_2", "CUP_U_B_FR_Scout3", "CUP_U_B_FR_DirAction2", "CUP_U_O_SLA_Officer", "CUP_U_O_TK_Ghillie", "CUP_U_B_BAF_MTP_S5_UnRolled", "CUP_U_O_Partisan_VSR_Mixed1", "CUP_U_O_RUS_Gorka_Partizan_A", "CUP_U_O_RUS_Flora_1", "CUP_U_I_RACS_Desert_2", "CUP_U_B_CDF_MNT_1", "CUP_U_O_CHDKZ_Kam_03", "CUP_U_B_BAF_DDPM_Tshirt", "CUP_U_O_RUS_EMR_1_VDV", "CUP_U_B_BAF_DDPM_Ghillie", "CUP_U_B_BAF_MTP_S3_RolledUp", "CUP_U_O_CHDKZ_Lopotev", "CUP_U_I_GUE_Anorak_02", "CUP_U_B_CDF_FST_1", "CUP_U_B_GER_Flecktarn_2", "CUP_U_O_TK_MixedCamo", "CUP_U_I_RACS_Desert_1", "CUP_U_O_CHDKZ_Kam_06", "CUP_U_O_CHDKZ_Kam_02", "CUP_U_B_BAF_MTP_S2_UnRolled", "CUP_B_USMC_Navy_Violet", "CUP_U_B_BAF_MTP_Tshirt", "CUP_U_B_USMC_MARPAT_WDL_RolledUp", "CUP_U_B_BAF_DPM_Tshirt", "CUP_U_O_CHDKZ_Kam_01", "CUP_U_B_USMC_FROG4_DMARPAT", "CUP_U_O_SLA_Overalls_Tank", "CUP_U_I_RACS_PilotOverall", "CUP_U_B_GER_Ghillie", "CUP_U_B_CDF_FST_2", "CUP_U_O_TK_Green", "CUP_U_B_FR_Corpsman", "CUP_B_USMC_Navy_Red", "CUP_U_I_UNO_DST_2", "CUP_U_B_BAF_MTP_S4_UnRolled", "CUP_U_B_GER_Flecktarn_1", "CUP_B_USMC_Navy_Brown", "CUP_U_B_USArmy_Soft", "CUP_U_B_USMC_FROG1_WMARPAT", "CUP_U_O_RUS_Flora_1_VDV", "CUP_U_O_RUS_Gorka_Green", "CUP_U_O_RUS_Commander", "CUP_B_USMC_Navy_Yellow", "CUP_U_O_TK_Officer", "CUP_U_I_RACS_Urban_1", "CUP_U_B_USArmy_Ghillie", "CUP_U_O_Partisan_VSR_Mixed2", "CUP_U_B_FR_Scout", "CUP_U_I_GUE_Anorak_03", "CUP_U_B_USArmy_PilotOverall", "CUP_U_B_USMC_FROG1_DMARPAT", "CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad", "CUP_U_O_SLA_Overalls_Pilot", "CUP_U_B_BAF_DDPM_S1_RolledUp", "CUP_U_O_SLA_Urban", "CUP_U_B_CZ_WDL_TShirt", "CUP_U_B_BAF_MTP_Ghillie", "CUP_U_B_FR_Officer", "CUP_U_B_FR_Scout1", "CUP_U_B_CDF_MNT_2", "CUP_U_O_CHDKZ_Bardak", "CUP_U_I_Ghillie_Top", "CUP_U_I_UNO_DST_1", "CUP_U_B_BAF_MTP_S6_UnRolled", "CUP_U_B_FR_DirAction", "CUP_U_B_BAF_DPM_S1_RolledUp", "CUP_U_O_CHDKZ_Kam_08", "CUP_B_USMC_Navy_White", "CUP_U_B_BAF_MTP_S1_RolledUp", "CUP_U_O_RUS_Flora_2_VDV", "CUP_U_O_SLA_MixedCamo", "CUP_U_B_USArmy_UBACS", "CUP_U_B_FR_Scout2", "CUP_U_I_RACS_mech_2", "CUP_U_O_SLA_Officer_Suit", "CUP_U_B_USMC_Ghillie_WDL", "CUP_U_B_USMC_FROG2_WMARPAT", "CUP_U_O_RUS_Flora_2", "CUP_B_USMC_Navy_Blue", "CUP_U_O_RUS_EMR_2_VDV", "CUP_U_B_USMC_MARPAT_WDL_Kneepad", "CUP_U_O_SLA_Green", "CUP_U_O_Partisan_TTsKO", "CUP_U_B_CDF_DST_1", "CUP_U_B_USArmy_TwoKnee", "CUP_U_B_USMC_FROG3_WMARPAT", "CUP_U_O_CHDKZ_Commander", "CUP_U_B_USMC_FROG2_DMARPAT", "CUP_U_B_BAF_DPM_Ghillie", "CUP_U_O_RUS_EMR_1", "CUP_U_O_Partisan_TTsKO_Mixed", "CUP_U_O_CHDKZ_Kam_05", "CUP_U_B_USMC_PilotOverall", "CUP_U_B_USMC_FROG4_WMARPAT", "CUP_U_B_FR_Light", "CUP_U_B_GER_Tropentarn_1", "CUP_U_I_RACS_mech_1", "CUP_U_B_GER_Tropentarn_2", "CUP_U_I_UNO_MNT_1", "CUP_U_I_UNO_FST_1", "CUP_U_I_RACS_WDL_1", "CUP_U_O_RUS_Gorka_Partizan", "CUP_U_B_USMC_MARPAT_WDL_TwoKneepads", "CUP_U_B_FR_SpecOps", "CUP_U_B_CDF_DST_2", "CUP_U_B_BAF_DPM_S2_UnRolled", "CUP_U_B_BAF_DDPM_S2_UnRolled", "CUP_U_O_CHDKZ_Kam_07", "CUP_U_I_GUE_Anorak_01", "CUP_U_B_USMC_MARPAT_WDL_Sleeves", "CUP_U_O_RUS_EMR_2", "CUP_U_I_UNO_MNT_2"};

		/*
			Percental Item Spawn Chances of CUPCivilianVests:

			CUP_V_OI_TKI_Jacket1_01 = 3,85%
			CUP_V_OI_TKI_Jacket1_02 = 3,85%
			CUP_V_OI_TKI_Jacket1_03 = 3,85%
			CUP_V_OI_TKI_Jacket1_04 = 3,85%
			CUP_V_OI_TKI_Jacket1_05 = 3,85%
			CUP_V_OI_TKI_Jacket1_06 = 3,85%
			CUP_V_OI_TKI_Jacket2_01 = 3,85%
			CUP_V_OI_TKI_Jacket2_02 = 3,85%
			CUP_V_OI_TKI_Jacket2_03 = 3,85%
			CUP_V_OI_TKI_Jacket2_04 = 3,85%
			CUP_V_OI_TKI_Jacket2_05 = 3,85%
			CUP_V_OI_TKI_Jacket2_06 = 3,85%
			CUP_V_OI_TKI_Jacket3_01 = 3,85%
			CUP_V_OI_TKI_Jacket3_02 = 3,85%
			CUP_V_OI_TKI_Jacket3_03 = 3,85%
			CUP_V_OI_TKI_Jacket3_04 = 3,85%
			CUP_V_OI_TKI_Jacket3_05 = 3,85%
			CUP_V_OI_TKI_Jacket3_06 = 3,85%
			CUP_V_OI_TKI_Jacket4_01 = 3,85%
			CUP_V_OI_TKI_Jacket4_02 = 3,85%
			CUP_V_OI_TKI_Jacket4_03 = 3,85%
			CUP_V_OI_TKI_Jacket4_04 = 3,85%
			CUP_V_OI_TKI_Jacket4_05 = 3,85%
			CUP_V_OI_TKI_Jacket4_06 = 3,85%
			CUP_V_B_PilotVest       = 3,85%
			CUP_V_C_Police_Holster  = 3,85%
		*/
		CUPCivilianVests[] = {"CUP_V_OI_TKI_Jacket3_01", "CUP_V_OI_TKI_Jacket2_03", "CUP_V_OI_TKI_Jacket4_02", "CUP_V_OI_TKI_Jacket1_06", "CUP_V_OI_TKI_Jacket1_02", "CUP_V_OI_TKI_Jacket3_02", "CUP_V_OI_TKI_Jacket4_01", "CUP_V_OI_TKI_Jacket2_04", "CUP_V_OI_TKI_Jacket4_05", "CUP_V_OI_TKI_Jacket2_06", "CUP_V_OI_TKI_Jacket1_04", "CUP_V_OI_TKI_Jacket3_06", "CUP_V_OI_TKI_Jacket1_01", "CUP_V_OI_TKI_Jacket2_05", "CUP_V_OI_TKI_Jacket3_05", "CUP_V_OI_TKI_Jacket2_02", "CUP_V_C_Police_Holster", "CUP_V_OI_TKI_Jacket2_01", "CUP_V_OI_TKI_Jacket1_05", "CUP_V_OI_TKI_Jacket3_03", "CUP_V_OI_TKI_Jacket4_06", "CUP_V_OI_TKI_Jacket4_03", "CUP_V_B_PilotVest", "CUP_V_OI_TKI_Jacket3_04", "CUP_V_OI_TKI_Jacket1_03", "CUP_V_OI_TKI_Jacket4_04"};

		/*
			Percental Item Spawn Chances of CUPGuerillaVests:

			CUP_V_PMC_IOTV_Coyote_Empty      = 4,00%
			CUP_V_PMC_IOTV_Coyote_Patrol     = 4,00%
			CUP_V_PMC_IOTV_Coyote_AR         = 4,00%
			CUP_V_PMC_IOTV_Coyote_Gren       = 4,00%
			CUP_V_PMC_IOTV_Coyote_TL         = 4,00%
			CUP_V_PMC_IOTV_Black_Empty       = 4,00%
			CUP_V_PMC_IOTV_Black_Patrol      = 4,00%
			CUP_V_PMC_IOTV_Black_AR          = 4,00%
			CUP_V_PMC_IOTV_Black_Gren        = 4,00%
			CUP_V_PMC_IOTV_Black_TL          = 4,00%
			CUP_V_PMC_CIRAS_Coyote_Empty     = 4,00%
			CUP_V_PMC_CIRAS_Coyote_Patrol    = 4,00%
			CUP_V_PMC_CIRAS_Coyote_Grenadier = 4,00%
			CUP_V_PMC_CIRAS_Coyote_TL        = 4,00%
			CUP_V_PMC_CIRAS_Coyote_Veh       = 4,00%
			CUP_V_PMC_CIRAS_Black_Empty      = 4,00%
			CUP_V_PMC_CIRAS_Black_Patrol     = 4,00%
			CUP_V_PMC_CIRAS_Black_Grenadier  = 4,00%
			CUP_V_PMC_CIRAS_Black_TL         = 4,00%
			CUP_V_PMC_CIRAS_Black_Veh        = 4,00%
			CUP_V_PMC_CIRAS_Winter_Empty     = 4,00%
			CUP_V_PMC_CIRAS_Winter_Patrol    = 4,00%
			CUP_V_PMC_CIRAS_Winter_Grenadier = 4,00%
			CUP_V_PMC_CIRAS_Winter_TL        = 4,00%
			CUP_V_PMC_CIRAS_Winter_Veh       = 4,00%
		*/
		CUPGuerillaVests[] = {"CUP_V_PMC_IOTV_Black_Empty", "CUP_V_PMC_CIRAS_Coyote_Empty", "CUP_V_PMC_IOTV_Black_Gren", "CUP_V_PMC_IOTV_Black_TL", "CUP_V_PMC_CIRAS_Coyote_Grenadier", "CUP_V_PMC_IOTV_Coyote_AR", "CUP_V_PMC_IOTV_Coyote_Empty", "CUP_V_PMC_CIRAS_Coyote_Patrol", "CUP_V_PMC_IOTV_Coyote_Gren", "CUP_V_PMC_CIRAS_Winter_Veh", "CUP_V_PMC_CIRAS_Winter_Empty", "CUP_V_PMC_CIRAS_Winter_Patrol", "CUP_V_PMC_CIRAS_Black_Empty", "CUP_V_PMC_CIRAS_Black_Patrol", "CUP_V_PMC_IOTV_Black_Patrol", "CUP_V_PMC_CIRAS_Black_Veh", "CUP_V_PMC_CIRAS_Winter_Grenadier", "CUP_V_PMC_IOTV_Coyote_TL", "CUP_V_PMC_CIRAS_Coyote_Veh", "CUP_V_PMC_IOTV_Coyote_Patrol", "CUP_V_PMC_CIRAS_Coyote_TL", "CUP_V_PMC_CIRAS_Black_TL", "CUP_V_PMC_CIRAS_Black_Grenadier", "CUP_V_PMC_CIRAS_Winter_TL", "CUP_V_PMC_IOTV_Black_AR"};

		/*
			Percental Item Spawn Chances of CUPMilitaryVests:

			CUP_V_B_GER_Carrier_Rig                = 0,69%
			CUP_V_B_GER_Carrier_Rig_2              = 0,69%
			CUP_V_B_GER_Carrier_Rig_2_Brown        = 0,69%
			CUP_V_B_GER_Carrier_Rig_3_Brown        = 0,69%
			CUP_V_B_GER_Carrier_Vest               = 0,69%
			CUP_V_B_GER_Carrier_Vest_2             = 0,69%
			CUP_V_B_GER_Carrier_Vest_3             = 0,69%
			CUP_V_B_GER_Vest_1                     = 0,69%
			CUP_V_B_GER_Vest_2                     = 0,69%
			CUP_V_I_Carrier_Belt                   = 0,69%
			CUP_V_I_Guerilla_Jacket                = 0,69%
			CUP_V_I_RACS_Carrier_Rig_2             = 0,69%
			CUP_V_I_RACS_Carrier_Rig_3             = 0,69%
			CUP_V_I_RACS_Carrier_Vest              = 0,69%
			CUP_V_I_RACS_Carrier_Vest_2            = 0,69%
			CUP_V_I_RACS_Carrier_Vest_3            = 0,69%
			CUP_V_I_RACS_Carrier_Rig_wdl_2         = 0,69%
			CUP_V_I_RACS_Carrier_Rig_wdl_3         = 0,69%
			CUP_V_I_RACS_Carrier_Vest_wdl          = 0,69%
			CUP_V_I_RACS_Carrier_Vest_wdl_2        = 0,69%
			CUP_V_I_RACS_Carrier_Vest_wdl_3        = 0,69%
			CUP_V_RUS_6B3_1                        = 0,69%
			CUP_V_RUS_6B3_2                        = 0,69%
			CUP_V_RUS_6B3_3                        = 0,69%
			CUP_V_RUS_6B3_4                        = 0,69%
			CUP_V_RUS_Smersh_1                     = 0,69%
			CUP_V_RUS_Smersh_2                     = 0,69%
			CUP_V_O_SLA_Carrier_Belt               = 0,69%
			CUP_V_O_SLA_Carrier_Belt02             = 0,69%
			CUP_V_O_SLA_Carrier_Belt03             = 0,69%
			CUP_V_O_SLA_Flak_Vest01                = 0,69%
			CUP_V_O_SLA_Flak_Vest02                = 0,69%
			CUP_V_O_SLA_Flak_Vest03                = 0,69%
			CUP_V_O_TK_CrewBelt                    = 0,69%
			CUP_V_O_TK_OfficerBelt                 = 0,69%
			CUP_V_O_TK_OfficerBelt2                = 0,69%
			CUP_V_O_TK_Vest_1                      = 0,69%
			CUP_V_O_TK_Vest_2                      = 0,69%
			CUP_V_B_IOTV_SL                        = 0,69%
			CUP_V_B_IOTV_Medic                     = 0,69%
			CUP_V_B_IOTV_Rifleman                  = 0,69%
			CUP_V_B_IOTV_AT                        = 0,69%
			CUP_V_B_IOTV_MG                        = 0,69%
			CUP_V_B_IOTV_saw                       = 0,69%
			CUP_V_B_IOTV_tl                        = 0,69%
			CUP_V_B_IOTV_gl                        = 0,69%
			CUP_V_B_USArmy_PilotVest               = 0,69%
			CUP_V_B_RangerVest                     = 0,69%
			CUP_V_B_Interceptor_Rifleman           = 0,69%
			CUP_V_B_MTV                            = 0,69%
			CUP_V_B_MTV_Patrol                     = 0,69%
			CUP_V_B_MTV_Pouches                    = 0,69%
			CUP_V_B_MTV_noCB                       = 0,69%
			CUP_V_B_MTV_Marksman                   = 0,69%
			CUP_V_B_MTV_PistolBlack                = 0,69%
			CUP_V_B_MTV_LegPouch                   = 0,69%
			CUP_V_B_MTV_MG                         = 0,69%
			CUP_V_B_MTV_Mine                       = 0,69%
			CUP_V_B_MTV_TL                         = 0,69%
			CUP_V_B_RRV_TL                         = 0,69%
			CUP_V_B_RRV_Officer                    = 0,69%
			CUP_V_B_RRV_Medic                      = 0,69%
			CUP_V_B_RRV_DA1                        = 0,69%
			CUP_V_B_RRV_DA2                        = 0,69%
			CUP_V_B_RRV_MG                         = 0,69%
			CUP_V_B_RRV_Light                      = 0,69%
			CUP_V_B_RRV_Scout                      = 0,69%
			CUP_V_B_RRV_Scout2                     = 0,69%
			CUP_V_B_RRV_Scout3                     = 0,69%
			CUP_V_B_Eagle_SPC_Rifleman             = 0,69%
			CUP_V_B_Eagle_SPC_Empty                = 0,69%
			CUP_V_B_Eagle_SPC_Patrol               = 0,69%
			CUP_V_B_Eagle_SPC_GL                   = 0,69%
			CUP_V_B_Eagle_SPC_MG                   = 0,69%
			CUP_V_B_Eagle_SPC_AR                   = 0,69%
			CUP_V_B_Eagle_SPC_AT                   = 0,69%
			CUP_V_B_Eagle_SPC_Corpsman             = 0,69%
			CUP_V_B_Eagle_SPC_Crew                 = 0,69%
			CUP_V_B_Eagle_SPC_DMR                  = 0,69%
			CUP_V_B_Eagle_SPC_Officer              = 0,69%
			CUP_V_B_Eagle_SPC_RTO                  = 0,69%
			CUP_V_B_Eagle_SPC_SL                   = 0,69%
			CUP_V_B_Eagle_SPC_Scout                = 0,69%
			CUP_V_B_Eagle_SPC_TL                   = 0,69%
			CUP_V_B_LHDVest_Blue                   = 0,69%
			CUP_V_B_LHDVest_Brown                  = 0,69%
			CUP_V_B_LHDVest_Green                  = 0,69%
			CUP_V_B_LHDVest_Red                    = 0,69%
			CUP_V_B_LHDVest_Violet                 = 0,69%
			CUP_V_B_LHDVest_White                  = 0,69%
			CUP_V_B_LHDVest_Yellow                 = 0,69%
			CUP_V_BAF_Osprey_Mk2_DDPM_Empty        = 0,69%
			CUP_V_BAF_Osprey_Mk2_DDPM_Pilot        = 0,69%
			CUP_V_BAF_Osprey_Mk2_DDPM_Scout        = 0,69%
			CUP_V_BAF_Osprey_Mk2_DDPM_Crewman      = 0,69%
			CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1     = 0,69%
			CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2     = 0,69%
			CUP_V_BAF_Osprey_Mk2_DDPM_Grenadier    = 0,69%
			CUP_V_BAF_Osprey_Mk2_DDPM_Sapper       = 0,69%
			CUP_V_BAF_Osprey_Mk2_DDPM_Medic        = 0,69%
			CUP_V_BAF_Osprey_Mk2_DDPM_Officer      = 0,69%
			CUP_V_BAF_Osprey_Mk2_DPM_Empty         = 0,69%
			CUP_V_BAF_Osprey_Mk2_DPM_Pilot         = 0,69%
			CUP_V_BAF_Osprey_Mk2_DPM_Scout         = 0,69%
			CUP_V_BAF_Osprey_Mk2_DPM_Crewman       = 0,69%
			CUP_V_BAF_Osprey_Mk2_DPM_Soldier1      = 0,69%
			CUP_V_BAF_Osprey_Mk2_DPM_Soldier2      = 0,69%
			CUP_V_BAF_Osprey_Mk2_DPM_Grenadier     = 0,69%
			CUP_V_BAF_Osprey_Mk2_DPM_Sapper        = 0,69%
			CUP_V_BAF_Osprey_Mk2_DPM_Medic         = 0,69%
			CUP_V_BAF_Osprey_Mk2_DPM_Officer       = 0,69%
			CUP_V_BAF_Osprey_Mk4_MTP_Grenadier     = 0,69%
			CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner = 0,69%
			CUP_V_BAF_Osprey_Mk4_MTP_Rifleman      = 0,69%
			CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader   = 0,69%
			CUP_V_CDF_6B3_1_Green                  = 0,69%
			CUP_V_CDF_6B3_1_MNT                    = 0,69%
			CUP_V_CDF_6B3_1_DST                    = 0,69%
			CUP_V_CDF_6B3_1_FST                    = 0,69%
			CUP_V_CDF_6B3_2_Green                  = 0,69%
			CUP_V_CDF_6B3_2_MNT                    = 0,69%
			CUP_V_CDF_6B3_2_DST                    = 0,69%
			CUP_V_CDF_6B3_2_FST                    = 0,69%
			CUP_V_CDF_6B3_3_Green                  = 0,69%
			CUP_V_CDF_6B3_3_MNT                    = 0,69%
			CUP_V_CDF_6B3_3_DST                    = 0,69%
			CUP_V_CDF_6B3_3_FST                    = 0,69%
			CUP_V_CDF_6B3_4_Green                  = 0,69%
			CUP_V_CDF_6B3_4_MNT                    = 0,69%
			CUP_V_CDF_6B3_4_DST                    = 0,69%
			CUP_V_CDF_6B3_4_FST                    = 0,69%
			CUP_V_CDF_6B3_5_Green                  = 0,69%
			CUP_V_CDF_6B3_5_MNT                    = 0,69%
			CUP_V_CDF_6B3_5_DST                    = 0,69%
			CUP_V_CDF_6B3_5_FST                    = 0,69%
			CUP_V_CDF_CrewBelt                     = 0,69%
			CUP_V_CDF_OfficerBelt                  = 0,69%
			CUP_V_CDF_OfficerBelt2                 = 0,69%
			CUP_V_O_Ins_Carrier_Rig                = 0,69%
			CUP_V_O_Ins_Carrier_Rig_MG             = 0,69%
			CUP_V_O_Ins_Carrier_Rig_Com            = 0,69%
			CUP_V_O_Ins_Carrier_Rig_Light          = 0,69%
			CUP_V_B_Delta_1                        = 0,69%
			CUP_V_B_Delta_2                        = 0,69%
		*/
		CUPMilitaryVests[] = {"CUP_V_O_TK_Vest_2", "CUP_V_B_MTV_PistolBlack", "CUP_V_CDF_OfficerBelt2", "CUP_V_CDF_6B3_5_FST", "CUP_V_CDF_6B3_3_Green", "CUP_V_BAF_Osprey_Mk2_DPM_Crewman", "CUP_V_B_Eagle_SPC_AT", "CUP_V_B_Eagle_SPC_Patrol", "CUP_V_BAF_Osprey_Mk2_DDPM_Grenadier", "CUP_V_B_Delta_1", "CUP_V_B_MTV_Marksman", "CUP_V_CDF_6B3_4_DST", "CUP_V_B_RangerVest", "CUP_V_B_LHDVest_Red", "CUP_V_RUS_Smersh_2", "CUP_V_CDF_6B3_2_MNT", "CUP_V_B_IOTV_SL", "CUP_V_B_USArmy_PilotVest", "CUP_V_RUS_6B3_3", "CUP_V_BAF_Osprey_Mk2_DPM_Scout", "CUP_V_O_TK_OfficerBelt2", "CUP_V_CDF_CrewBelt", "CUP_V_B_MTV_TL", "CUP_V_B_IOTV_Medic", "CUP_V_CDF_6B3_3_MNT", "CUP_V_O_SLA_Carrier_Belt03", "CUP_V_O_SLA_Flak_Vest01", "CUP_V_I_RACS_Carrier_Vest_wdl", "CUP_V_B_Eagle_SPC_Crew", "CUP_V_I_RACS_Carrier_Vest_wdl_3", "CUP_V_B_IOTV_saw", "CUP_V_B_GER_Carrier_Vest_2", "CUP_V_I_Carrier_Belt", "CUP_V_B_GER_Vest_2", "CUP_V_B_GER_Carrier_Vest", "CUP_V_O_TK_OfficerBelt", "CUP_V_RUS_6B3_2", "CUP_V_BAF_Osprey_Mk2_DDPM_Scout", "CUP_V_B_IOTV_AT", "CUP_V_RUS_Smersh_1", "CUP_V_BAF_Osprey_Mk4_MTP_Rifleman", "CUP_V_B_LHDVest_Violet", "CUP_V_O_SLA_Carrier_Belt", "CUP_V_O_Ins_Carrier_Rig_Com", "CUP_V_B_RRV_Scout2", "CUP_V_CDF_6B3_2_DST", "CUP_V_B_LHDVest_Brown", "CUP_V_CDF_6B3_1_DST", "CUP_V_B_Eagle_SPC_DMR", "CUP_V_B_Eagle_SPC_MG", "CUP_V_B_IOTV_gl", "CUP_V_I_RACS_Carrier_Vest_3", "CUP_V_B_Eagle_SPC_Corpsman", "CUP_V_B_RRV_Light", "CUP_V_BAF_Osprey_Mk2_DPM_Medic", "CUP_V_CDF_6B3_5_MNT", "CUP_V_BAF_Osprey_Mk2_DPM_Pilot", "CUP_V_O_Ins_Carrier_Rig", "CUP_V_O_SLA_Flak_Vest02", "CUP_V_CDF_6B3_1_Green", "CUP_V_CDF_6B3_2_Green", "CUP_V_BAF_Osprey_Mk2_DDPM_Medic", "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2", "CUP_V_B_GER_Carrier_Rig_2_Brown", "CUP_V_B_MTV", "CUP_V_B_MTV_LegPouch", "CUP_V_B_Eagle_SPC_AR", "CUP_V_B_RRV_TL", "CUP_V_B_MTV_Pouches", "CUP_V_I_RACS_Carrier_Rig_wdl_3", "CUP_V_BAF_Osprey_Mk2_DDPM_Pilot", "CUP_V_B_IOTV_tl", "CUP_V_O_SLA_Carrier_Belt02", "CUP_V_B_IOTV_Rifleman", "CUP_V_CDF_6B3_4_FST", "CUP_V_B_Eagle_SPC_TL", "CUP_V_BAF_Osprey_Mk2_DPM_Empty", "CUP_V_B_Eagle_SPC_Rifleman", "CUP_V_BAF_Osprey_Mk2_DPM_Soldier2", "CUP_V_BAF_Osprey_Mk2_DPM_Officer", "CUP_V_B_Eagle_SPC_SL", "CUP_V_I_Guerilla_Jacket", "CUP_V_B_Eagle_SPC_RTO", "CUP_V_B_MTV_MG", "CUP_V_B_RRV_DA1", "CUP_V_O_Ins_Carrier_Rig_MG", "CUP_V_B_GER_Carrier_Rig_2", "CUP_V_B_GER_Vest_1", "CUP_V_I_RACS_Carrier_Rig_3", "CUP_V_BAF_Osprey_Mk2_DDPM_Officer", "CUP_V_I_RACS_Carrier_Vest_wdl_2", "CUP_V_CDF_6B3_1_MNT", "CUP_V_CDF_6B3_4_MNT", "CUP_V_CDF_6B3_1_FST", "CUP_V_BAF_Osprey_Mk4_MTP_Grenadier", "CUP_V_I_RACS_Carrier_Rig_wdl_2", "CUP_V_CDF_6B3_2_FST", "CUP_V_CDF_6B3_5_DST", "CUP_V_B_RRV_MG", "CUP_V_CDF_6B3_4_Green", "CUP_V_B_Eagle_SPC_Officer", "CUP_V_I_RACS_Carrier_Vest_2", "CUP_V_O_TK_Vest_1", "CUP_V_B_RRV_Scout3", "CUP_V_B_MTV_Patrol", "CUP_V_B_RRV_Scout", "CUP_V_O_TK_CrewBelt", "CUP_V_CDF_6B3_3_FST", "CUP_V_B_GER_Carrier_Rig", "CUP_V_B_Eagle_SPC_GL", "CUP_V_B_LHDVest_Blue", "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1", "CUP_V_RUS_6B3_1", "CUP_V_CDF_6B3_5_Green", "CUP_V_B_GER_Carrier_Vest_3", "CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner", "CUP_V_B_MTV_Mine", "CUP_V_I_RACS_Carrier_Rig_2", "CUP_V_BAF_Osprey_Mk2_DPM_Soldier1", "CUP_V_B_Interceptor_Rifleman", "CUP_V_B_LHDVest_White", "CUP_V_B_Eagle_SPC_Empty", "CUP_V_B_GER_Carrier_Rig_3_Brown", "CUP_V_CDF_OfficerBelt", "CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader", "CUP_V_B_RRV_Medic", "CUP_V_O_SLA_Flak_Vest03", "CUP_V_B_LHDVest_Yellow", "CUP_V_O_Ins_Carrier_Rig_Light", "CUP_V_BAF_Osprey_Mk2_DDPM_Empty", "CUP_V_B_MTV_noCB", "CUP_V_CDF_6B3_3_DST", "CUP_V_BAF_Osprey_Mk2_DDPM_Sapper", "CUP_V_B_Eagle_SPC_Scout", "CUP_V_B_IOTV_MG", "CUP_V_B_Delta_2", "CUP_V_I_RACS_Carrier_Vest", "CUP_V_B_RRV_DA2", "CUP_V_BAF_Osprey_Mk2_DPM_Grenadier", "CUP_V_B_LHDVest_Green", "CUP_V_B_RRV_Officer", "CUP_V_BAF_Osprey_Mk2_DPM_Sapper", "CUP_V_BAF_Osprey_Mk2_DDPM_Crewman", "CUP_V_RUS_6B3_4"};

		/*
			Percental Item Spawn Chances of CUPTrash:

			CUP_item_Money               = 14,29%
			CUP_item_Kostey_photos       = 14,29%
			CUP_item_Kostey_map_case     = 14,29%
			CUP_item_Kostey_notebook     = 14,29%
			CUP_item_CDF_dogtags         = 14,29%
			CUP_item_Moscow_Bombing_File = 14,29%
			CUP_item_Cobalt_File         = 14,29%
		*/
		CUPTrash[] = {"CUP_item_Cobalt_File", "CUP_item_Kostey_map_case", "CUP_item_CDF_dogtags", "CUP_item_Money", "CUP_item_Kostey_notebook", "CUP_item_Kostey_photos", "CUP_item_Moscow_Bombing_File"};

		/*
			Percental Item Spawn Chances of CUPUnused:

			CUP_optic_MAAWS_Scope           = 0,48%
			CUP_optic_SMAW_Scope            = 0,48%
			CUP_optic_AN_PVS_4              = 0,48%
			CUP_optic_AN_PAS_13c1           = 0,48%
			CUP_optic_AN_PVS_10             = 0,48%
			CUP_optic_AN_PAS_13c2           = 0,48%
			CUP_optic_NSPU_RPG              = 0,48%
			CUP_1Rnd_StarCluster_White_M203 = 0,48%
			CUP_1Rnd_StarCluster_Red_M203   = 0,48%
			CUP_1Rnd_StarCluster_Green_M203 = 0,48%
			CUP_glaunch_M32                 = 0,48%
			CUP_glaunch_M79                 = 0,48%
			CUP_glaunch_Mk13                = 0,48%
			CUP_glaunch_6G30                = 0,48%
			CUP_hgun_BallisticShield_Armed  = 0,48%
			CUP_AA12_PMC                    = 0,48%
			CUP_AK_74                       = 0,48%
			CUP_AK_107                      = 0,48%
			CUP_AKS_74                      = 0,48%
			CUP_AKS_74_U                    = 0,48%
			CUP_AK_74_GL                    = 0,48%
			CUP_AK_47_M                     = 0,48%
			CUP_AK_47_S                     = 0,48%
			CUP_AKS_GOLD                    = 0,48%
			CUP_RPK_74                      = 0,48%
			CUP_AK_107_GL_kobra             = 0,48%
			CUP_AK_107_kobra                = 0,48%
			CUP_AK_107_GL_pso               = 0,48%
			CUP_AK_107_pso                  = 0,48%
			CUP_AKS_74_kobra                = 0,48%
			CUP_AKS_74_pso                  = 0,48%
			CUP_AKS_74_UN_kobra             = 0,48%
			CUP_AKS_74_GOSHAWK              = 0,48%
			CUP_AKS_74_NSPU                 = 0,48%
			CUP_AK_74_GL_kobra              = 0,48%
			CUP_BAF_LRR_scoped              = 0,48%
			CUP_BAF_LRR_scoped_W            = 0,48%
			CUP_bizon                       = 0,48%
			CUP_bizon_silenced              = 0,48%
			CUP_CZ_750_S1_ACR               = 0,48%
			CUP_CZ805_A1_ACR                = 0,48%
			CUP_CZ805_A1_GL_ACR             = 0,48%
			CUP_CZ805_A2_ACR                = 0,48%
			CUP_CZ805_A2_SD_ACR             = 0,48%
			CUP_CZ805_B_GL_ACR              = 0,48%
			CUP_DMR                         = 0,48%
			CUP_Evo_mrad_ACR                = 0,48%
			CUP_Evo_sd_ACR                  = 0,48%
			CUP_FN_FAL                      = 0,48%
			CUP_FN_FAL_ANPVS4               = 0,48%
			CUP_G36a                        = 0,48%
			CUP_G36A_camo                   = 0,48%
			CUP_G36K                        = 0,48%
			CUP_G36K_camo                   = 0,48%
			CUP_G36C                        = 0,48%
			CUP_G36C_camo                   = 0,48%
			CUP_MG36                        = 0,48%
			CUP_MG36_camo                   = 0,48%
			CUP_G36_C_SD_eotech             = 0,48%
			CUP_G36_C_SD_camo               = 0,48%
			CUP_M32_EP1                     = 0,48%
			CUP_M79_EP1                     = 0,48%
			CUP_Mk13_EP1                    = 0,48%
			CUP_huntingrifle                = 0,48%
			CUP_ksvk                        = 0,48%
			CUP_BAF_L85A2_RIS_Holo          = 0,48%
			CUP_BAF_L85A2_UGL_Holo          = 0,48%
			CUP_BAF_L85A2_RIS_SUSAT         = 0,48%
			CUP_BAF_L85A2_UGL_SUSAT         = 0,48%
			CUP_BAF_L85A2_RIS_CWS           = 0,48%
			CUP_BAF_L85A2_RIS_ACOG          = 0,48%
			CUP_BAF_L85A2_UGL_ACOG          = 0,48%
			CUP_BAF_L86A2_ACOG              = 0,48%
			CUP_LeeEnfield                  = 0,48%
			CUP_M16A2                       = 0,48%
			CUP_M16A2GL                     = 0,48%
			CUP_M16A4                       = 0,48%
			CUP_m16a4_acg                   = 0,48%
			CUP_M16A4_GL                    = 0,48%
			CUP_M16A4_ACG_GL                = 0,48%
			CUP_M4A1                        = 0,48%
			CUP_M4A1_camo                   = 0,48%
			CUP_M4A1_Aim_camo               = 0,48%
			CUP_M4A3_CCO_EP1                = 0,48%
			CUP_M4A3_RCO_GL_EP1             = 0,48%
			CUP_M4A1_Aim                    = 0,48%
			CUP_M4A1_AIM_SD_camo            = 0,48%
			CUP_M4A1_HWS_GL                 = 0,48%
			CUP_M4A1_RCO_GL                 = 0,48%
			CUP_M4A1_HWS_GL_camo            = 0,48%
			CUP_M4A1_HWS_GL_SD_Camo         = 0,48%
			CUP_M4SPR                       = 0,48%
			CUP_M24                         = 0,48%
			CUP_M24_des_EP1                 = 0,48%
			CUP_M40A3                       = 0,48%
			CUP_M110_TWS_EP1                = 0,48%
			CUP_M110_NVG_EP1                = 0,48%
			CUP_M1014                       = 0,48%
			CUP_MP5SD                       = 0,48%
			CUP_MP5A5                       = 0,48%
			CUP_Sa58P_EP1                   = 0,48%
			CUP_Sa58V_EP1                   = 0,48%
			CUP_Sa58V_RCO_EP1               = 0,48%
			CUP_Sa58V_CCO_EP1               = 0,48%
			CUP_Saiga12K                    = 0,48%
			CUP_SCAR_L_CQC                  = 0,48%
			CUP_SCAR_L_CQC_CCO_SD           = 0,48%
			CUP_SCAR_L_CQC_EGLM_Holo        = 0,48%
			CUP_SCAR_L_CQC_Holo             = 0,48%
			CUP_SCAR_L_STD_EGLM_RCO         = 0,48%
			CUP_SCAR_L_STD_EGLM_TWS         = 0,48%
			CUP_SCAR_L_STD_HOLO             = 0,48%
			CUP_SCAR_L_STD_Mk4CQT           = 0,48%
			CUP_SCAR_H_CQC_CCO              = 0,48%
			CUP_SCAR_H_CQC_CCO_SD           = 0,48%
			CUP_SCAR_H_LNG_Sniper           = 0,48%
			CUP_SCAR_H_LNG_Sniper_SD        = 0,48%
			CUP_SCAR_H_STD_EGLM_Spect       = 0,48%
			CUP_SCAR_H_STD_TWS_SD           = 0,48%
			CUP_Evo_ACR                     = 0,48%
			CUP_SVD                         = 0,48%
			CUP_SVD_CAMO                    = 0,48%
			CUP_SVD_des_EP1                 = 0,48%
			CUP_SVD_NSPU_EP1                = 0,48%
			CUP_VSS_vintorez                = 0,48%
			CUP_m8_carbine                  = 0,48%
			CUP_m8_carbine_pmc              = 0,48%
			CUP_m8_carbineGL                = 0,48%
			CUP_m8_compact                  = 0,48%
			CUP_m8_compact_pmc              = 0,48%
			CUP_m8_holo_sd                  = 0,48%
			CUP_m8_SAW                      = 0,48%
			CUP_m8_sharpshooter             = 0,48%
			CUP_m8_tws                      = 0,48%
			CUP_m8_tws_sd                   = 0,48%
			CUP_US_UAV_Pack_EP1             = 0,48%
			CUP_B_UAVTerminal_Black         = 0,48%
			CUP_BAF_L7A2_GPMG               = 0,48%
			CUP_BAF_L110A1_Aim              = 0,48%
			CUP_M240                        = 0,48%
			CUP_m240_scoped_EP1             = 0,48%
			CUP_M249_m145_EP1               = 0,48%
			CUP_M249_EP1                    = 0,48%
			CUP_M249_TWS_EP1                = 0,48%
			CUP_M249                        = 0,48%
			CUP_Mk_48_DES_EP1               = 0,48%
			CUP_Mk_48                       = 0,48%
			CUP_PK                          = 0,48%
			CUP_Pecheneg                    = 0,48%
			CUP_UK59_ACR                    = 0,48%
			CUP_Strela_2_M                  = 0,48%
			CUP_Igla_M                      = 0,48%
			CUP_2Rnd_Igla_M                 = 0,48%
			CUP_4Rnd_Igla_M                 = 0,48%
			CUP_1Rnd_RBS70_M                = 0,48%
			CUP_Stinger_M                   = 0,48%
			CUP_4Rnd_Stinger_M              = 0,48%
			CUP_8Rnd_Stinger_M              = 0,48%
			CUP_Javelin_M                   = 0,48%
			CUP_Dragon_EP1_M                = 0,48%
			CUP_AT13_M                      = 0,48%
			CUP_NLAW_M                      = 0,48%
			CUP_launch_Igla                 = 0,48%
			CUP_launch_Javelin              = 0,48%
			CUP_launch_M136                 = 0,48%
			CUP_launch_M47                  = 0,48%
			CUP_launch_NLAW                 = 0,48%
			CUP_launch_FIM92Stinger         = 0,48%
			CUP_launch_9K32Strela           = 0,48%
			CUP_Igla                        = 0,48%
			CUP_Javelin                     = 0,48%
			CUP_M47Launcher_EP1             = 0,48%
			CUP_M136                        = 0,48%
			CUP_BAF_NLAW_Launcher           = 0,48%
			CUP_Stinger                     = 0,48%
			CUP_Strela                      = 0,48%
			CUP_M136_M                      = 0,48%
			CUP_MAAWS_HEDP_M                = 0,48%
			CUP_MAAWS_HEAT_M                = 0,48%
			CUP_RPG18_M                     = 0,48%
			CUP_PG7V_M                      = 0,48%
			CUP_PG7VM_M                     = 0,48%
			CUP_PG7VL_M                     = 0,48%
			CUP_PG7VR_M                     = 0,48%
			CUP_TBG7V_M                     = 0,48%
			CUP_OG7_M                       = 0,48%
			CUP_SMAW_HEDP_M                 = 0,48%
			CUP_SMAW_HEAA_M                 = 0,48%
			CUP_M72A6_M                     = 0,48%
			CUP_SMAW_Spotting               = 0,48%
			CUP_launch_M72A6                = 0,48%
			CUP_launch_M72A6_Special        = 0,48%
			CUP_launch_MAAWS                = 0,48%
			CUP_launch_MAAWS_Scope          = 0,48%
			CUP_launch_Metis                = 0,48%
			CUP_launch_RPG18                = 0,48%
			CUP_launch_Mk153Mod0            = 0,48%
			CUP_launch_Mk153Mod0_SMAWOptics = 0,48%
			CUP_launch_RPG7V                = 0,48%
			CUP_launch_RPG7V_PGO7V          = 0,48%
			CUP_launch_RPG7V_PGO7V2         = 0,48%
			CUP_launch_RPG7V_PGO7V3         = 0,48%
			CUP_launch_RPG7V_NSPU           = 0,48%
			CUP_MAAWS                       = 0,48%
			CUP_MetisLauncher               = 0,48%
			CUP_RPG7V                       = 0,48%
			CUP_RPG18                       = 0,48%
			CUP_SMAW                        = 0,48%
		*/
		CUPUnused[] = {"CUP_DMR", "CUP_m8_carbine_pmc", "CUP_M136", "CUP_RPG7V", "CUP_M4A3_CCO_EP1", "CUP_AKS_74_NSPU", "CUP_BAF_LRR_scoped_W", "CUP_M249", "CUP_AK_107_GL_kobra", "CUP_MG36", "CUP_MetisLauncher", "CUP_M4A1_Aim", "CUP_Strela", "CUP_MAAWS_HEDP_M", "CUP_SCAR_H_CQC_CCO", "CUP_M16A2", "CUP_M47Launcher_EP1", "CUP_ksvk", "CUP_1Rnd_StarCluster_White_M203", "CUP_2Rnd_Igla_M", "CUP_G36K", "CUP_m8_compact", "CUP_PG7VM_M", "CUP_NLAW_M", "CUP_RPG18", "CUP_G36_C_SD_eotech", "CUP_SCAR_H_LNG_Sniper_SD", "CUP_Evo_sd_ACR", "CUP_M4A1_RCO_GL", "CUP_m8_carbineGL", "CUP_AKS_74_U", "CUP_1Rnd_RBS70_M", "CUP_AKS_74", "CUP_M24_des_EP1", "CUP_Sa58V_EP1", "CUP_launch_Metis", "CUP_RPK_74", "CUP_Igla", "CUP_M4A1_HWS_GL", "CUP_G36K_camo", "CUP_M4A1_HWS_GL_camo", "CUP_M4A3_RCO_GL_EP1", "CUP_CZ805_A2_SD_ACR", "CUP_RPG18_M", "CUP_SCAR_L_CQC_CCO_SD", "CUP_Mk_48", "CUP_BAF_L85A2_RIS_Holo", "CUP_SVD_CAMO", "CUP_BAF_NLAW_Launcher", "CUP_CZ_750_S1_ACR", "CUP_4Rnd_Igla_M", "CUP_Mk13_EP1", "CUP_CZ805_B_GL_ACR", "CUP_launch_9K32Strela", "CUP_launch_RPG18", "CUP_SVD", "CUP_BAF_L85A2_RIS_ACOG", "CUP_M4SPR", "CUP_SCAR_H_CQC_CCO_SD", "CUP_AK_47_S", "CUP_M24", "CUP_m8_sharpshooter", "CUP_m8_tws", "CUP_AK_107_GL_pso", "CUP_Pecheneg", "CUP_M1014", "CUP_FN_FAL_ANPVS4", "CUP_TBG7V_M", "CUP_optic_AN_PVS_10", "CUP_BAF_L85A2_UGL_ACOG", "CUP_BAF_L85A2_UGL_Holo", "CUP_UK59_ACR", "CUP_SMAW_Spotting", "CUP_m8_SAW", "CUP_G36_C_SD_camo", "CUP_SCAR_L_CQC_EGLM_Holo", "CUP_bizon_silenced", "CUP_M249_TWS_EP1", "CUP_Sa58P_EP1", "CUP_optic_AN_PAS_13c2", "CUP_Mk_48_DES_EP1", "CUP_M40A3", "CUP_launch_NLAW", "CUP_VSS_vintorez", "CUP_BAF_L7A2_GPMG", "CUP_Evo_mrad_ACR", "CUP_SCAR_L_STD_EGLM_RCO", "CUP_AK_107_kobra", "CUP_CZ805_A1_GL_ACR", "CUP_AT13_M", "CUP_M110_TWS_EP1", "CUP_M240", "CUP_SCAR_L_STD_HOLO", "CUP_optic_MAAWS_Scope", "CUP_MG36_camo", "CUP_BAF_LRR_scoped", "CUP_M32_EP1", "CUP_PG7VL_M", "CUP_BAF_L85A2_RIS_SUSAT", "CUP_MP5SD", "CUP_OG7_M", "CUP_M79_EP1", "CUP_BAF_L110A1_Aim", "CUP_4Rnd_Stinger_M", "CUP_launch_RPG7V_NSPU", "CUP_hgun_BallisticShield_Armed", "CUP_AK_74_GL_kobra", "CUP_launch_Mk153Mod0_SMAWOptics", "CUP_Strela_2_M", "CUP_Evo_ACR", "CUP_BAF_L85A2_RIS_CWS", "CUP_M249_EP1", "CUP_huntingrifle", "CUP_optic_AN_PAS_13c1", "CUP_Dragon_EP1_M", "CUP_glaunch_M32", "CUP_Sa58V_RCO_EP1", "CUP_AKS_74_GOSHAWK", "CUP_launch_MAAWS_Scope", "CUP_BAF_L86A2_ACOG", "CUP_Igla_M", "CUP_SCAR_L_STD_EGLM_TWS", "CUP_optic_NSPU_RPG", "CUP_AA12_PMC", "CUP_M72A6_M", "CUP_MAAWS", "CUP_launch_Javelin", "CUP_M4A1_Aim_camo", "CUP_launch_M47", "CUP_FN_FAL", "CUP_M4A1", "CUP_AK_107", "CUP_AKS_74_UN_kobra", "CUP_Saiga12K", "CUP_glaunch_6G30", "CUP_launch_RPG7V_PGO7V2", "CUP_SCAR_L_CQC_Holo", "CUP_B_UAVTerminal_Black", "CUP_SVD_des_EP1", "CUP_G36C_camo", "CUP_M249_m145_EP1", "CUP_AK_74_GL", "CUP_launch_M136", "CUP_M16A2GL", "CUP_launch_RPG7V_PGO7V", "CUP_SCAR_H_LNG_Sniper", "CUP_launch_RPG7V", "CUP_Javelin", "CUP_M110_NVG_EP1", "CUP_launch_M72A6_Special", "CUP_SCAR_L_STD_Mk4CQT", "CUP_bizon", "CUP_SMAW_HEAA_M", "CUP_m240_scoped_EP1", "CUP_SCAR_H_STD_TWS_SD", "CUP_SMAW", "CUP_AK_74", "CUP_launch_Igla", "CUP_AKS_GOLD", "CUP_launch_Mk153Mod0", "CUP_M4A1_AIM_SD_camo", "CUP_M16A4", "CUP_PG7VR_M", "CUP_m8_compact_pmc", "CUP_M136_M", "CUP_launch_MAAWS", "CUP_1Rnd_StarCluster_Green_M203", "CUP_M4A1_camo", "CUP_SVD_NSPU_EP1", "CUP_optic_AN_PVS_4", "CUP_launch_RPG7V_PGO7V3", "CUP_PG7V_M", "CUP_MAAWS_HEAT_M", "CUP_optic_SMAW_Scope", "CUP_M4A1_HWS_GL_SD_Camo", "CUP_glaunch_Mk13", "CUP_AKS_74_kobra", "CUP_AK_107_pso", "CUP_Stinger", "CUP_launch_M72A6", "CUP_SCAR_L_CQC", "CUP_launch_FIM92Stinger", "CUP_AK_47_M", "CUP_m8_tws_sd", "CUP_AKS_74_pso", "CUP_PK", "CUP_8Rnd_Stinger_M", "CUP_G36C", "CUP_G36a", "CUP_Javelin_M", "CUP_MP5A5", "CUP_m16a4_acg", "CUP_SCAR_H_STD_EGLM_Spect", "CUP_M16A4_GL", "CUP_M16A4_ACG_GL", "CUP_m8_holo_sd", "CUP_CZ805_A2_ACR", "CUP_LeeEnfield", "CUP_US_UAV_Pack_EP1", "CUP_glaunch_M79", "CUP_BAF_L85A2_UGL_SUSAT", "CUP_Sa58V_CCO_EP1", "CUP_m8_carbine", "CUP_Stinger_M", "CUP_G36A_camo", "CUP_SMAW_HEDP_M", "CUP_1Rnd_StarCluster_Red_M203", "CUP_CZ805_A1_ACR"};
	};
};