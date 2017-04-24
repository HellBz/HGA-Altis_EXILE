/*
	///////////////////////////////////////////////////////////////////////////////
	// Class Names
	///////////////////////////////////////////////////////////////////////////////

	Remember that item class names, group names and loot table names cannot 
	contain spaces. Also be 100% sure to have the exact same name as in Arma,
	as they are *case sensive*.

	///////////////////////////////////////////////////////////////////////////////
	// Item Groups
	///////////////////////////////////////////////////////////////////////////////

	You can link one group of items to loot tables.
	One item should only be in one group.

	Syntax:
	> <Group Name>
	<Spawn Chance Within Group>,<Item Class Name>

	///////////////////////////////////////////////////////////////////////////////
	// Propability
	///////////////////////////////////////////////////////////////////////////////

	<Spawn Chance>,<Item>

	10, Banana
	20, Tomato
	30, Cherry

	Sum of chances:
	10 + 20 + 30 = 60 = 100%

	Spawn chances:
	Banana	10 : 60 = 10 * 100 / 60 = 16.67%
	Tomato	20 : 60 = 20 * 100 / 60 = 33.33%
	Cherry	30 : 60 = 30 * 100 / 60 = 50%

	In words: 
	If Exile should spawn an item of the above group, it has a 33.33%
	chance to spawn a Tomato.
*/
	
/*
	Item Groups
*/

///////////////////////////////////////////////////////////////////////////////
// Food & Drinks
///////////////////////////////////////////////////////////////////////////////

> Food
3, Exile_Item_CookingPot
5, Exile_Item_CanOpener
5, Exile_Item_Matches
3, Exile_Item_EMRE						// 75% Hunger
6, Exile_Item_GloriousKnakworst			// 60% Hunger
7, Exile_Item_Surstromming				// 55% Hunger
7, Exile_Item_SausageGravy				// 50% Hunger
7, Exile_Item_ChristmasTinner			// 40% Hunger
7, Exile_Item_MacasCheese				// 40% Hunger
7, Exile_Item_BBQSandwich				// 40% Hunger
7, Exile_Item_CatFood					// 40% Hunger
7, Exile_Item_Dogfood					// 30% Hunger
7, Exile_Item_BeefParts					// 30% Hunger
7, Exile_Item_Cheathas					// 30% Hunger
7, Exile_Item_DsNuts					// 30% Hunger
7, Exile_Item_Noodles					// 25% Hunger
8, Exile_Item_CockONut					// 20% Hunger
8, Exile_Item_SeedAstics				// 20% Hunger
9, Exile_Item_Raisins					// 15% Hunger
9, Exile_Item_Moobar					// 10% Hunger
11, Exile_Item_InstantCoffee			//  5% Hunger

> Drinks
7, Exile_Item_PowerDrink					// +95% Thirst
12, Exile_Item_PlasticBottleFreshWater		// +80% Thirst
14, Exile_Item_Beer							// +75% Thirst
17, Exile_Item_EnergyDrink					// +75% Thirst
20, Exile_Item_MountainDupe					// +50% Thirst, spawns always twice!	
25, Exile_Item_ChocolateMilk				// +35% Thirst
30, Exile_Item_PlasticBottleDirtyWater		// +10% Thirst


///////////////////////////////////////////////////////////////////////////////
// Weapons & Attachments
///////////////////////////////////////////////////////////////////////////////

> Pistols
20, hgun_ACPC2_F			// ACP-C2 .45
21, hgun_P07_F				// P07 9 mm
20, hgun_Rook40_F			// Rook-40 9 mm
13, hgun_Pistol_heavy_01_F	// 4-five .45
13, hgun_Pistol_heavy_02_F	// Zubr .45
13, hgun_Pistol_Signal_F	// Starter Pistol
13, Exile_Weapon_Colt1911   // Colt 1911
13, Exile_Weapon_Makarov	// Makarov
13, Exile_Weapon_Taurus		// Taurus
13, Exile_Weapon_TaurusGold	// Taurus (Gold)
13, hgun_Pistol_01_F		// PM 9 mm
13, hgun_P07_khk_F			// P07 9 mm (Khaki)
13, CUP_hgun_Duty
13, CUP_hgun_Duty_M3X
13, CUP_hgun_Phantom
13, CUP_hgun_Phantom_Flashlight
13, CUP_hgun_Phantom_Flashlight_snds
13, CUP_hgun_Glock17
13, CUP_hgun_glock17_flashlight
13, CUP_hgun_glock17_flashlight_snds
13, CUP_hgun_glock17_snds
13, CUP_hgun_M9
13, CUP_hgun_M9_snds
13, CUP_hgun_Makarov
13, CUP_hgun_MicroUzi
13, CUP_hgun_MicroUzi_snds
13, CUP_hgun_PB6P9
13, CUP_hgun_PB6P9_snds
13, CUP_hgun_TaurusTracker455
13, CUP_hgun_TaurusTracker455_gold
13, CUP_hgun_Colt1911
13, CUP_hgun_Colt1911_snds
13, CUP_hgun_SA61
13, CUP_Colt1911
13, CUP_CZ_75_D_COMPACT
13, CUP_CZ_75_P_07_DUTY
13, CUP_Glock17_EP1
13, CUP_M9
13, CUP_M9SD
13, CUP_Makarov
13, CUP_MakarovSD
13, CUP_UZI_EP1
13, CUP_UZI_SD_EP1
13, CUP_CZ_75_SP_01_PHANTOM
13, CUP_CZ_75_SP_01_PHANTOM_SD
13, CUP_Revolver_EP1

> PistolAmmo
20, 11Rnd_45ACP_Mag				// 4-five
10, 16Rnd_9x21_Mag				// PDW2000, P07, ROOK-40
20, 30Rnd_9x21_Mag				// Sting, PDW2000, P07, ROOK-40
16, 6Rnd_45ACP_Cylinder			// Zubr
7, 6Rnd_GreenSignal_F			// Starter Pistol
7, 6Rnd_RedSignal_F				// Starter Pistol 
20, 9Rnd_45ACP_Mag				// ACP-C2
20, Exile_Magazine_7Rnd_45ACP	// Colt 1911
20, Exile_Magazine_8Rnd_9x18	// Makarov
20, Exile_Magazine_6Rnd_45ACP	// Taurus
20, 10Rnd_9x21_Mag				// PM 9 mm

> PistolAttachments
36, muzzle_snds_L
36, muzzle_snds_acp
14, optic_MRD
36, CUP_muzzle_snds_M9
36, CUP_muzzle_snds_MicroUzi
36, CUP_muzzle_snds_AWM
36, CUP_muzzle_snds_G36_black
36, CUP_muzzle_snds_G36_desert
36, CUP_muzzle_snds_L85
36, CUP_muzzle_snds_XM8
36, CUP_muzzle_snds_M110
36, CUP_muzzle_snds_M14
36, CUP_muzzle_snds_M16_camo
36, CUP_muzzle_snds_M16
36, CUP_muzzle_snds_Mk12
36, CUP_muzzle_snds_SCAR_L

> Shotguns
1, Exile_Weapon_M1014	//M1014

> ShotgunAmmo
1, Exile_Magazine_8Rnd_74Slug		//M1014
5, CUP_8Rnd_B_Saiga12_74Pellets_M
5, CUP_20Rnd_B_AA12_Pellets
5, CUP_8Rnd_B_Beneli_74Pellets

> SMG
34, SMG_01_F		// Vermin SMG .45 ACP
33, SMG_02_F		// Sting 9 mm
33, SMG_05_F		// Protector 9mm
33, hgun_PDW2000_F	// PDW2000 9 mm

> SMGAmmo
50, 30Rnd_45ACP_Mag_SMG_01					// Vermin SMG
50, 30Rnd_45ACP_Mag_SMG_01_Tracer_Green		// Vermin SMG
50, 30Rnd_9x21_Mag_SMG_02					// Sting, Protector
50, 30Rnd_9x21_Mag_SMG_02_Tracer_Red        // Sting, Protector
50, 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow     // Sting, Protector
50, 30Rnd_9x21_Mag_SMG_02_Tracer_Green      // Sting, Protector

> SMGAttachments
20, optic_Holosight_smg
20, optic_Holosight_smg_blk_F
20, optic_ACO_grn_smg
20, optic_Aco_smg
20, optic_ACO_grn
20, optic_Aco

> Rifles
10, arifle_Katiba_F			// Katiba 6.5 mm
8, arifle_Katiba_GL_F		// Katiba GL 6.5 mm
8, arifle_MXC_F				// MXC 6.5 mm
8, arifle_MX_F				// MX 6.5 mm
4, arifle_MX_GL_F			// MX 3GL 6.5 mm
6, arifle_MXM_F				// MXM 6.5 mm
3, arifle_MXM_Black_F		// MXM 6.5 mm (Black)
6, arifle_SDAR_F			// SDAR 5.56 mm
8, arifle_TRG21_F			// TRG-21 5.56 mm
8, arifle_TRG20_F			// TRG-20 5.56 mm
4, arifle_TRG21_GL_F		// TRG-21 EGLM 5.56 mm
7, arifle_Mk20_F			// Mk20 5.56 mm
7, arifle_Mk20C_F			// Mk20C 5.56 mm
4, arifle_Mk20_GL_F			// Mk20 EGLM 5.56 mm
3, arifle_MXC_Black_F		// MXC 6.5 mm (Black)
3, arifle_MX_Black_F		// MX 6.5 mm (Black)
3, arifle_MX_GL_Black_F		// MX 3GL 6.5 mm (Black)
10, Exile_Weapon_AK107	
10, Exile_Weapon_AK107_GL	
10, Exile_Weapon_AK74_GL
10, Exile_Weapon_AK74
10, Exile_Weapon_AK47				
10, Exile_Weapon_AKS_Gold	
10, Exile_Weapon_DMR		
10, Exile_Weapon_LeeEnfield
10, Exile_Weapon_CZ550
10, Exile_Weapon_SVD
10, Exile_Weapon_SVDCamo
10, Exile_Weapon_VSSVintorez
8, arifle_MX_khk_F   			// MX 6.5 mm (Khaki)
4, arifle_MX_GL_khk_F			// MX 3GL 6.5 mm (Khaki)
8, arifle_MXC_khk_F  			// MXC 6.5 mm (Khaki)
3, arifle_MXM_khk_F  			// MXM 6.5 mm (Khaki)
5, arifle_AK12_F          		// AK-12 7.62 mm
5, arifle_AK12_GL_F             // AK-12 GL 7.62 mm
5, arifle_AKM_F                 // AKM 7.62 mm
5, arifle_AKM_FL_F              // AKM 7.62 mm
5, arifle_AKS_F                 // AKS
5, arifle_ARX_blk_F             // Type 115 6.5 mm (Black)
5, arifle_ARX_ghex_F            // Type 115 6.5 mm (Green Hex)
5, arifle_ARX_hex_F             // Type 115 6.5 mm (Hex)
5, arifle_CTAR_blk_F            // CAR-95 5.8 mm (Black)
5, arifle_CTAR_hex_F			// CAR-95 5.8 mm (Hex)
5, arifle_CTAR_ghex_F			// CAR-95 5.8 mm (Green Hex)
5, arifle_CTAR_GL_blk_F         // CAR-95 GL 5.8 mm (Black)
5, arifle_CTARS_blk_F           // CAR-95-1 5.8mm (Black)
5, arifle_CTARS_ghex_F			// CAR-95-1 5.8mm (Green Hex)
5, arifle_CTARS_hex_F			// CAR-95-1 5.8mm (Hex)
5, arifle_SPAR_01_blk_F         // SPAR-16 5.56 mm (Black)
5, arifle_SPAR_01_khk_F         // SPAR-16 5.56 mm (Khaki)
5, arifle_SPAR_01_snd_F         // SPAR-16 5.56 mm (Sand)
5, arifle_SPAR_01_GL_blk_F      // SPAR-16 GL 5.56 mm (Black)
5, arifle_SPAR_01_GL_khk_F      // SPAR-16 GL 5.56 mm (Khaki)
5, arifle_SPAR_01_GL_snd_F      // SPAR-16 GL 5.56 mm (Sand)
5, arifle_SPAR_02_blk_F         // SPAR-16S 5.56 mm (Black)
5, arifle_SPAR_02_khk_F         // SPAR-16S 5.56 mm (Khaki)
5, arifle_SPAR_02_snd_F         // SPAR-16S 5.56 mm (Sand)
5, arifle_SPAR_03_blk_F         // SPAR-17 7.62 mm (Black)
5, arifle_SPAR_03_khk_F         // SPAR-17 7.62 mm (Khaki)
5, arifle_SPAR_03_snd_F         // SPAR-17 7.62 mm (Sand)
5, CUP__srifle_CZ750
5, CUP__srifle_CZ750_SOS_bipod
5, CUP__srifle_CZ550
5, CUP__srifle_CZ550_rail
5, CUP__srifle_LeeEnfield
5, CUP__srifle_LeeEnfield_rail
5, CUP__srifle_M14_DMR
5, CUP__srifle_M14_DMR_LeupoldMk4
5, CUP__srifle_M14_DMR_LeupoldMk4_snds
5, CUP__srifle_DMR
5, CUP__srifle_DMR_LeupoldMk4
5, CUP__srifle_DMR_LeupoldMk4_snds
5, CUP__srifle_M24_des
5, CUP__srifle_M24_wdl
5, CUP__srifle_M24_ghillie
5, CUP__srifle_M40A3
5, CUP__srifle_M24_des_LeupoldMk4LRT
5, CUP__srifle_M24_wdl_LeupoldMk4LRT
5, CUP__srifle_M24_ghillie_bipod
5, CUP__srifle_M40A3_bipod
5, CUP__hgun_BallisticShield_Armed
5, CUP__srifle_SVD
5, CUP__srifle_SVD_wdl_ghillie
5, CUP__srifle_SVD_pso
5, CUP__srifle_SVD_NSPU
5, CUP__srifle_VSSVintorez
5, CUP__srifle_VSSVintorez_pso
5, CUP__arifle_AK74M_GL
5, CUP__arifle_AK107_GL
5, CUP__arifle_AK74_GL
5, CUP__arifle_RPK74
5, CUP__arifle_RPK74_45
5, CUP__arifle_RPK74M
5, CUP__arifle_AK107_GL_kobra
5, CUP__arifle_AK107_kobra
5, CUP__arifle_AK107_GL_pso
5, CUP__arifle_AK107_pso
5, CUP__arifle_AKS74_kobra
5, CUP__arifle_AKS74_pso
5, CUP__arifle_AKS74UN_kobra_snds
5, CUP__arifle_AKS74_Goshawk
5, CUP__arifle_AKS74_NSPU
5, CUP__arifle_AK74_GL_kobra
5, CUP__arifle_AKM_snds
5, CUP__arifle_AK74M_GL_kobra
5, CUP__arifle_AK74M_GL_kobra_snds
5, CUP__arifle_AK74M_kobra
5, CUP__arifle_AK74M_kobra_snds
5, CUP__arifle_AK74M_GL_pso
5, CUP__arifle_AK74M_pso
5, CUP__srifle_AWM_des
5, CUP__srifle_AWM_wdl
5, CUP__srifle_G22_des
5, CUP__srifle_AWM_des_SBPMII
5, CUP__srifle_G22_des_SBPMII
5, CUP__srifle_AWM_wdl_SBPMII
5, CUP__smg_bizon
5, CUP__smg_bizon_snds
5, CUP__arifle_CZ805_A2
5, CUP__arifle_CZ805_A1
5, CUP__arifle_CZ805_GL
5, CUP__arifle_CZ805_A2_Holo_Laser
5, CUP__arifle_CZ805_A1_Holo_Laser
5, CUP__arifle_CZ805_A2_Aco_Laser
5, CUP__arifle_CZ805_A1_Aco_Laser
5, CUP__arifle_CZ805_A1_MRCO_Laser
5, CUP__arifle_CZ805_A2_MRCO_Laser
5, CUP__arifle_CZ805_GL_Hamr_Laser
5, CUP__arifle_CZ805_A1_ZDDot_Laser
5, CUP__arifle_CZ805_GL_ZDDot_Laser
5, CUP__arifle_CZ805_A2_ZDDot_Flashlight_Snds
5, CUP__arifle_CZ805_B_GL
5, CUP__arifle_CZ805_B
5, CUP__arifle_CZ805B_GL_ACOG_Laser
5, CUP__smg_EVO
5, CUP__smg_EVO_MRad_Flashlight
5, CUP__smg_EVO_MRad_Flashlight_Snds
5, CUP__arifle_FNFAL5061
5, CUP__arifle_FNFAL5062
5, CUP__arifle_FNFAL_OSW
5, CUP__arifle_FNFAL_railed
5, CUP__arifle_FNFAL_ANPVS4
5, CUP__arifle_G36A
5, CUP__arifle_G36A_camo
5, CUP__arifle_G36K
5, CUP__arifle_G36K_camo
5, CUP__arifle_G36C
5, CUP__arifle_G36C_camo
5, CUP__arifle_MG36
5, CUP__arifle_MG36_camo
5, CUP__arifle_G36C_holo_snds
5, CUP__arifle_G36C_camo_holo_snds
5, CUP__arifle_MG36_holo
5, CUP__arifle_MG36_camo_holo
5, CUP__srifle_L129A1
5, CUP__srifle_L129A1_HG
5, CUP__l85a2
5, CUP__l85a2_ris
5, CUP__l85a2_ris_ng
5, CUP__l85a2_ugl
5, CUP__arifle_L85A2
5, CUP__arifle_L85A2_G
5, CUP__arifle_L85A2_NG
5, CUP__arifle_L85A2_GL
5, CUP__arifle_L86A2
5, CUP__arifle_L85A2_Holo_laser
5, CUP__arifle_L85A2_GL_Holo_Laser
5, CUP__arifle_L85A2_SUSAT_Laser
5, CUP__arifle_L85A2_GL_SUSAT_Laser
5, CUP__arifle_L85A2_CWS_Laser
5, CUP__arifle_L85A2_ACOG_Laser
5, CUP__arifle_L85A2_GL_ACOG_Laser
5, CUP__arifle_L86A2_ACOG
5, CUP__sgun_M1014
5, CUP__srifle_M110
5, CUP__srifle_M110_ANPAS13c2
5, CUP__srifle_M110_ANPVS10
5, CUP__srifle_M14
5, CUP__arifle_M16A2
5, CUP__arifle_M16A2_GL
5, CUP__arifle_M16A4_GL
5, CUP__arifle_M16A4_Aim_Laser
5, CUP__arifle_M16A4_ACOG_Laser
5, CUP__arifle_M16A4_GL_Laser
5, CUP__arifle_M16A4_GL_ACOG_Laser
5, CUP__arifle_M4A1_BUIS_GL
5, CUP__arifle_M4A1_BUIS_camo_GL
5, CUP__arifle_M4A1_BUIS_desert_GL
5, CUP__arifle_M4A1
5, CUP__arifle_M4A1_camo
5, CUP__arifle_M4A1_black
5, CUP__arifle_M4A1_desert
5, CUP__arifle_M4A3_desert
5, CUP__arifle_M4A1_camo_Aim
5, CUP__arifle_M4A3_desert_Aim_Flashlight
5, CUP__arifle_M4A3_desert_GL_ACOG_Laser
5, CUP__arifle_M4A1_Aim
5, CUP__arifle_M4A1_camo_AIM_snds
5, CUP__arifle_M4A1_GL_Holo_Flashlight
5, CUP__arifle_M4A1_GL_ACOG_Flashlight
5, CUP__arifle_M4A1_camo_GL_Holo_Flashlight
5, CUP__arifle_M4A1_camo_GL_Holo_Flashlight_Snds
5, CUP__srifle_Mk12SPR
5, CUP__srifle_Mk12SPR_LeupoldM3LR
5, CUP__srifle_Mk12SPR_LeupoldM3LR_bipod
5, CUP__arifle_M4A1_LeupoldMk4MRT
5, CUP__arifle_M4A1_Aim_Laser_snds
5, CUP__arifle_M4A1_M203_Holo_Laser
5, CUP__arifle_M4A1_Holo
5, CUP__arifle_M4A1_M203_ACOG_Laser
5, CUP__arifle_M4A1_M203_ANPAS13c1_Laser
5, CUP__arifle_M4A1_Holo_Laser
5, CUP__arifle_M4A1_LeupoldMk4CQT_Laser
5, CUP__arifle_M4A1_ACOG_Laser
5, CUP__arifle_M4A1_ACOG_flashlight
5, CUP__arifle_M4A1_CCO_Laser
5, CUP__arifle_M4A1_CCO_flashlight
5, CUP__arifle_Sa58P
5, CUP__arifle_Sa58P_v2
5, CUP__arifle_Sa58P_des
5, CUP__arifle_Sa58V
5, CUP__arifle_Sa58V_camo
5, CUP__arifle_Sa58RIS1
5, CUP__arifle_Sa58RIS2_gl
5, CUP__arifle_Sa58RIS1_des
5, CUP__arifle_Sa58RIS2
5, CUP__arifle_Sa58RIS2_camo
5, CUP__arifle_Sa58RIS1_Aco_Laser
5, CUP__arifle_Sa58RIS2_Arco_Laser
5, CUP__arifle_Sa58RIS1_camo_Aco_Laser
5, CUP__arifle_Sa58RIS2_camo_Arco_Laser
5, CUP__arifle_Sa58V_ACOG_Laser
5, CUP__arifle_Sa58V_Aim_Laser
5, CUP__smg_SA61
5, CUP__arifle_Mk16_CQC
5, CUP__arifle_Mk16_CQC_FG
5, CUP__arifle_Mk16_CQC_SFG
5, CUP__arifle_Mk16_CQC_EGLM
5, CUP__arifle_Mk16_STD
5, CUP__arifle_Mk16_STD_FG
5, CUP__arifle_Mk16_STD_SFG
5, CUP__arifle_Mk16_STD_EGLM
5, CUP__arifle_Mk16_SV
5, CUP__arifle_Mk16_LeupoldMk4MRT
5, CUP__arifle_Mk16_CQC_FG_Aim_Laser_snds
5, CUP__arifle_Mk16_CQC_EGLM_Holo_Laser_mfsup
5, CUP__arifle_Mk16_CQC_SFG_Holo
5, CUP__arifle_Mk16_STD_EGLM_ACOG_Laser
5, CUP__arifle_Mk16_STD_EGLM_ANPAS13c1_Laser_mfsup
5, CUP__arifle_Mk16_STD_FG_Holo_Laser
5, CUP__arifle_Mk16_STD_FG_LeupoldMk4CQT_Laser
5, CUP__arifle_Mk17_CQC
5, CUP__arifle_Mk17_CQC_FG
5, CUP__arifle_Mk17_CQC_SFG
5, CUP__arifle_Mk17_CQC_EGLM
5, CUP__arifle_Mk17_STD
5, CUP__arifle_Mk17_STD_FG
5, CUP__arifle_Mk17_STD_EGLM
5, CUP__arifle_Mk17_STD_SFG
5, CUP__arifle_Mk20
5, CUP__arifle_Mk17_CQC_SFG_Aim_mfsup
5, CUP__arifle_Mk17_STD_FG_Aim_Laser_snds
5, CUP__arifle_Mk17_STD_EGL_ElcanSpecter_Laser
5, CUP__arifle_Mk17_STD_FG_ANPAS13c1_Laser_Snds
5, CUP__arifle_Mk20_LeupoldMk4MRT
5, CUP__arifle_Mk20_SB11420_snds
5, CUP__arifle_Mk16_CQC_woodland
5, CUP__arifle_Mk16_CQC_FG_woodland
5, CUP__arifle_Mk16_CQC_SFG_woodland
5, CUP__arifle_Mk16_CQC_EGLM_woodland
5, CUP__arifle_Mk16_STD_woodland
5, CUP__arifle_Mk16_STD_FG_woodland
5, CUP__arifle_Mk16_STD_SFG_woodland
5, CUP__arifle_Mk16_STD_EGLM_woodland
5, CUP__arifle_Mk16_SV_woodland
5, CUP__arifle_Mk17_CQC_woodland
5, CUP__arifle_Mk17_CQC_FG_woodland
5, CUP__arifle_Mk17_CQC_SFG_woodland
5, CUP__arifle_Mk17_CQC_EGLM_woodland
5, CUP__arifle_Mk17_STD_woodland
5, CUP__arifle_Mk17_STD_FG_woodland
5, CUP__arifle_Mk17_STD_SFG_woodland
5, CUP__arifle_Mk17_STD_EGLM_woodland
5, CUP__arifle_Mk16_CQC_black
5, CUP__arifle_Mk16_CQC_FG_black
5, CUP__arifle_Mk16_CQC_SFG_black
5, CUP__arifle_Mk16_CQC_EGLM_black
5, CUP__arifle_Mk16_STD_black
5, CUP__arifle_Mk16_STD_FG_black
5, CUP__arifle_Mk16_STD_SFG_black
5, CUP__arifle_Mk16_STD_EGLM_black
5, CUP__arifle_Mk16_SV_black
5, CUP__arifle_Mk17_CQC_Black
5, CUP__arifle_Mk17_CQC_FG_black
5, CUP__arifle_Mk17_CQC_SFG_black
5, CUP__arifle_Mk17_CQC_EGLM_black
5, CUP__arifle_Mk17_STD_black
5, CUP__arifle_Mk17_STD_FG_black
5, CUP__arifle_Mk17_STD_SFG_black
5, CUP__arifle_Mk17_STD_EGLM_black
5, CUP__arifle_XM8_Carbine
5, CUP__arifle_XM8_Carbine_GL
5, CUP__arifle_xm8_sharpshooter
5, CUP__arifle_xm8_SAW
5, CUP__arifle_XM8_Compact
5, CUP__arifle_XM8_Compact_Rail
5, CUP__arifle_XM8_Compact_Holo_Flashlight
5, CUP__arifle_XM8_Railed
5, CUP__arifle_XM8_Railed_ANPAS13c1_Laser
5, CUP__arifle_XM8_Railed_ANPAS13c1_Laser_snds
5, CUP__arifle_XM8_Railed_Holo_Laser_snds
5, CUP__arifle_XM8_Carbine_FG
5, CUP__AA12_PMC
5, CUP__AK_74
5, CUP__AK_107
5, CUP__AKS_74
5, CUP__AKS_74_U
5, CUP__AK_74_GL
5, CUP__AK_47_M
5, CUP__AK_47_S
5, CUP__AKS_GOLD
5, CUP__RPK_74
5, CUP__AK_107_GL_kobra
5, CUP__AK_107_kobra
5, CUP__AK_107_GL_pso
5, CUP__AK_107_pso
5, CUP__AKS_74_kobra
5, CUP__AKS_74_pso
5, CUP__AKS_74_UN_kobra
5, CUP__AKS_74_GOSHAWK
5, CUP__AKS_74_NSPU
5, CUP__AK_74_GL_kobra
5, CUP__BAF_LRR_scoped
5, CUP__BAF_LRR_scoped_W
5, CUP__bizon
5, CUP__bizon_silenced
5, CUP__CZ_750_S1_ACR
5, CUP__CZ805_A1_ACR
5, CUP__CZ805_A1_GL_ACR
5, CUP__CZ805_A2_ACR
5, CUP__CZ805_A2_SD_ACR
5, CUP__CZ805_B_GL_ACR
5, CUP__DMR
5, CUP__Evo_mrad_ACR
5, CUP__Evo_sd_ACR
5, CUP__FN_FAL
5, CUP__FN_FAL_ANPVS4
5, CUP__G36a
5, CUP__G36A_camo
5, CUP__G36K
5, CUP__G36K_camo
5, CUP__G36C
5, CUP__MG36
5, CUP__G36C_camo
5, CUP__MG36_camo
5, CUP__G36_C_SD_eotech
5, CUP__G36_C_SD_camo
5, CUP__M32_EP1
5, CUP__M79_EP1
5, CUP__Mk13_EP1
5, CUP__huntingrifle
5, CUP__ksvk
5, CUP__BAF_L85A2_RIS_Holo
5, CUP__BAF_L85A2_UGL_Holo
5, CUP__BAF_L85A2_RIS_SUSAT
5, CUP__BAF_L85A2_UGL_SUSAT
5, CUP__BAF_L85A2_RIS_CWS
5, CUP__BAF_L85A2_RIS_ACOG
5, CUP__BAF_L85A2_UGL_ACOG
5, CUP__BAF_L86A2_ACOG
5, CUP__LeeEnfield
5, CUP__M16A2
5, CUP__M16A2GL
5, CUP__M16A4
5, CUP__M16A4_GL
5, CUP__m16a4_acg
5, CUP__M16A4_ACG_GL
5, CUP__M4A1
5, CUP__M4A1_camo
5, CUP__M4A1_Aim_camo
5, CUP__M4A3_CCO_EP1
5, CUP__M4A3_RCO_GL_EP1
5, CUP__M4A1_Aim
5, CUP__M4A1_AIM_SD_camo
5, CUP__M4A1_HWS_GL
5, CUP__M4A1_RCO_GL
5, CUP__M4A1_HWS_GL_camo
5, CUP__M4A1_HWS_GL_SD_Camo
5, CUP__M4SPR
5, CUP__M24
5, CUP__M24_des_EP1
5, CUP__M40A3
5, CUP__M110_TWS_EP1
5, CUP__M110_NVG_EP1
5, CUP__M1014
5, CUP__MP5SD
5, CUP__MP5A5
5, CUP__Sa58P_EP1
5, CUP__Sa58V_EP1
5, CUP__Sa58V_RCO_EP1
5, CUP__Sa58V_CCO_EP1
5, CUP__Saiga12K
5, CUP__SCAR_L_CQC
5, CUP__SCAR_L_CQC_CCO_SD
5, CUP__SCAR_L_CQC_EGLM_Holo
5, CUP__SCAR_L_CQC_Holo
5, CUP__SCAR_L_STD_EGLM_RCO
5, CUP__SCAR_L_STD_EGLM_TWS
5, CUP__SCAR_L_STD_HOLO
5, CUP__SCAR_L_STD_Mk4CQT
5, CUP__SCAR_H_CQC_CCO
5, CUP__SCAR_H_CQC_CCO_SD
5, CUP__SCAR_H_LNG_Sniper
5, CUP__SCAR_H_LNG_Sniper_SD
5, CUP__SCAR_H_STD_EGLM_Spect
5, CUP__SCAR_H_STD_TWS_SD
5, CUP__Evo_ACR
5, CUP__SVD
5, CUP__SVD_CAMO
5, CUP__SVD_des_EP1
5, CUP__SVD_NSPU_EP1
5, CUP__VSS_vintorez
5, CUP__m8_carbine
5, CUP__m8_carbine_pmc
5, CUP__m8_carbineGL
5, CUP__m8_compact
5, CUP__m8_compact_pmc
5, CUP__m8_holo_sd
5, CUP__m8_SAW
5, CUP__m8_sharpshooter
5, CUP__m8_tws
5, CUP__m8_tws_sd

> RifleAmmo
11, 20Rnd_556x45_UW_mag						// SDAR
15, 30Rnd_556x45_Stanag						// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16
15, 30Rnd_556x45_Stanag_green				// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16
15, 30Rnd_556x45_Stanag_red					// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16
9, 30Rnd_556x45_Stanag_Tracer_Green			// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16
9, 30Rnd_556x45_Stanag_Tracer_Red			// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16
9, 30Rnd_556x45_Stanag_Tracer_Yellow		// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16
15, 30Rnd_65x39_caseless_green				// Katiba, Type 115
9, 30Rnd_65x39_caseless_green_mag_Tracer	// Katiba, Type 115
9, 30Rnd_65x39_caseless_mag					// MX/C/M/SW/3GL
9, 30Rnd_65x39_caseless_mag_Tracer			// MX/C/M/SW/3GL
8, Exile_Magazine_10Rnd_303					// Lee-Enfield
9, Exile_Magazine_30Rnd_762x39_AK			// AK
9, Exile_Magazine_30Rnd_545x39_AK			// AK
9, Exile_Magazine_30Rnd_545x39_AK_Green		// AK
9, Exile_Magazine_30Rnd_545x39_AK_Red		// AK
9, Exile_Magazine_30Rnd_545x39_AK_White		// AK
9, Exile_Magazine_30Rnd_545x39_AK_Yellow	// AK
9, Exile_Magazine_20Rnd_762x51_DMR			// DMR
9, Exile_Magazine_20Rnd_762x51_DMR_Yellow	// DMR
9, Exile_Magazine_20Rnd_762x51_DMR_Red		// DMR
9, Exile_Magazine_20Rnd_762x51_DMR_Green	// DMR
9, Exile_Magazine_20Rnd_762x51_DMR_White	// DMR
9, Exile_Magazine_5Rnd_22LR					// CZ550
9, Exile_Magazine_10Rnd_762x54				// SVD
9, Exile_Magazine_10Rnd_9x39				// VSS
9, Exile_Magazine_20Rnd_9x39				// VSS
9, 30Rnd_762x39_Mag_F						// AK-12, AKM
9, 30Rnd_762x39_Mag_Green_F                 // AK-12, AKM
9, 30Rnd_762x39_Mag_Tracer_F                // AK-12, AKM
9, 30Rnd_762x39_Mag_Tracer_Green_F          // AK-12, AKM
9, 30Rnd_762x39_AK47_M						// AKS
9, 30Rnd_545x39_Mag_F						// AKS
9, 30Rnd_545x39_Mag_Green_F					// AKS
9, 30Rnd_545x39_Mag_Tracer_F				// AKS
9, 30Rnd_545x39_Mag_Tracer_Green_F			// AKS
5, 10Rnd_50BW_Mag_F							// Type 115
9, 30Rnd_580x42_Mag_F						// CAR-95
9, 30Rnd_580x42_Mag_Tracer_F				// CAR-95
9, 100Rnd_580x42_Mag_F						// CAR-95-1
9, 100Rnd_580x42_Mag_Tracer_F				// CAR-95-1
9, 150Rnd_556x45_Drum_Mag_F					// SPAR-16S 
9, 150Rnd_556x45_Drum_Mag_Tracer_F			// SPAR-16S 
9, 20Rnd_762x51_Mag							// SPAR-17
5, CUP_30Rnd_556x45_G36
5, CUP_30Rnd_TE1_Red_Tracer_556x45_G36
5, CUP_30Rnd_TE1_Green_Tracer_556x45_G36
5, CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36
5, CUP_100Rnd_556x45_BetaCMag
5, CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag
5, CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag
5, CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag
5, CUP_20Rnd_762x51_FNFAL_M
5, CUP_20Rnd_762x51_L129_M
5, CUP_20Rnd_762x51_B_SCAR
5, CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR
5, CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR
5, CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR
5, CUP_20Rnd_TE1_White_Tracer_762x51_SCAR
5, CUP_20Rnd_762x51_CZ805B
5, CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B
5, CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B
5, CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B
5, CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B
5, CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M
5, CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M
5, CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
5, CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
5, CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
5, CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
5, CUP_200Rnd_TE1_LRT4_Red_Tracer_762x51_Belt_M
5, CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
5, CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M
5, CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
5, CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M
5, CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M
5, CUP_200Rnd_TE4_Green_Tracer_556x45_M249
5, CUP_200Rnd_TE4_Red_Tracer_556x45_M249
5, CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249
5, CUP_200Rnd_TE1_Red_Tracer_556x45_M249
5, CUP_100Rnd_TE4_Green_Tracer_556x45_M249
5, CUP_100Rnd_TE4_Red_Tracer_556x45_M249
5, CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249
5, CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1
5, CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1
5, CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1
5, CUP_50Rnd_UK59_762x54R_Tracer
5, CUP_64Rnd_9x19_Bizon_M
5, CUP_64Rnd_Green_Tracer_9x19_Bizon_M
5, CUP_64Rnd_Red_Tracer_9x19_Bizon_M
5, CUP_64Rnd_White_Tracer_9x19_Bizon_M
5, CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M
5, CUP_30Rnd_9x19_MP5
5, CUP_10Rnd_B_765x17_Ball_M
5, CUP_20Rnd_B_765x17_Ball_M
5, CUP_30Rnd_9x19_EVO
5, CUP_30Rnd_9x19_UZI
5, CUP_5Rnd_127x108_KSVK_M
5, CUP_10Rnd_762x54_SVD_M
5, CUP_10Rnd_9x39_SP5_VSS_M
5, CUP_20Rnd_9x39_SP5_VSS_M
5, CUP_5Rnd_127x99_as50_M
5, CUP_20Rnd_762x51_DMR
5, CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR
5, CUP_20Rnd_TE1_Red_Tracer_762x51_DMR
5, CUP_20Rnd_TE1_Green_Tracer_762x51_DMR
5, CUP_20Rnd_TE1_White_Tracer_762x51_DMR
5, CUP_5Rnd_762x51_M24
5, CUP_20Rnd_762x51_B_M110
5, CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110
5, CUP_20Rnd_TE1_Red_Tracer_762x51_M110
5, CUP_20Rnd_TE1_Green_Tracer_762x51_M110
5, CUP_20Rnd_TE1_White_Tracer_762x51_M110
5, CUP_10Rnd_127x99_M107
5, CUP_10Rnd_762x51_CZ750
5, CUP_10Rnd_762x51_CZ750_Tracer
5, CUP_5Rnd_86x70_L115A1
5, CUP_5Rnd_762x67_G22
5, CUP_5x_22_LR_17_HMR_M
5, CUP_8Rnd_B_Saiga12_74Slug_M
5, CUP_20Rnd_B_AA12_74Slug
5, CUP_20Rnd_B_AA12_HE
5, CUP_8Rnd_B_Beneli_74Slug
5, CUP_8Rnd_9x18_Makarov_M
5, CUP_8Rnd_9x18_MakarovSD_M
5, CUP_6Rnd_45ACP_M
5, CUP_17Rnd_9x19_glock17
5, CUP_7Rnd_45ACP_1911
5, CUP_10Rnd_9x19_Compact
5, CUP_18Rnd_9x19_Phantom
5, CUP_15Rnd_9x19_M9

> RifleAttachments
10, muzzle_snds_M
10, muzzle_snds_H
10, muzzle_snds_H_khk_F
10, muzzle_snds_H_snd_F
10, muzzle_snds_58_blk_F
10, muzzle_snds_m_khk_F
10, muzzle_snds_m_snd_F
10, muzzle_snds_58_wdm_F
10, muzzle_snds_65_TI_blk_F
10, muzzle_snds_65_TI_hex_F
10, muzzle_snds_65_TI_ghex_F
10, muzzle_snds_H_MG_blk_F
10, muzzle_snds_H_MG_khk_F
10, optic_Arco
10, optic_Arco_blk_F
10, optic_Arco_ghex_F
10, optic_Hamr
10, optic_Hamr_khk_F
10, optic_Holosight
10, optic_Holosight_blk_F
10, optic_Holosight_khk_F
14, acc_flashlight
10, acc_pointer_IR
10, optic_MRCO
10, optic_DMS
10, optic_DMS_ghex_F
10, optic_ERCO_blk_F
10, optic_ERCO_khk_F
10, optic_ERCO_snd_F
5, optic_NVS
10, CUP_muzzle_PBS4
10, CUP_muzzle_PB6P9
10, CUP_muzzle_Bizon
10, CUP_acc_sffh
10, CUP_acc_bfa
10, CUP_muzzle_mfsup_SCAR_L
10, CUP_muzzle_snds_SCAR_H
10, CUP_muzzle_mfsup_SCAR_H
10, CUP_Mxx_camo
10, CUP_Mxx_camo_half
10, CUP_acc_Glock17_Flashlight
10, CUP_SVD_camo_g
10, CUP_SVD_camo_g_half
10, CUP_SVD_camo_d
10, CUP_SVD_camo_d_half
10, CUP_acc_ANPEQ_15
10, CUP_acc_ANPEQ_2
10, CUP_acc_Flashlight
10, CUP_acc_Flashlight_wdl
10, CUP_acc_Flashlight_desert
10, CUP_acc_XM8_light_module
10, CUP_acc_ANPEQ_2_camo
10, CUP_acc_ANPEQ_2_desert
10, CUP_acc_ANPEQ_2_grey
10, CUP_acc_CZ_M3X
10, CUP_acc_LLM
10, CUP_acc_rpg7_zero_50
10, CUP_acc_rpg7_zero_100
10, CUP_acc_rpg7_zero_150
10, CUP_acc_rpg7_zero_200
10, CUP_acc_rpg7_zero_300
10, CUP_acc_rpg7_zero_400
10, CUP_acc_rpg7_zero_500
10, CUP_optic_MAAWS_Scope
10, CUP_optic_SMAW_Scope
10, CUP_optic_PSO_1
10, CUP_optic_PSO_3
10, CUP_optic_Kobra
10, CUP_optic_GOSHAWK
10, CUP_optic_NSPU
10, CUP_optic_PechenegScope
10, CUP_optic_SB_3_12x50_PMII
10, CUP_optic_AN_PAS_13c2
10, CUP_optic_LeupoldMk4
10, CUP_optic_HoloBlack
10, CUP_optic_HoloWdl
10, CUP_optic_HoloDeser
10, CUP_optic_Eotech533
10, CUP_optic_Eotech533Grey
10, CUP_optic_CompM4
10, CUP_optic_SUSAT
10, CUP_optic_ACOG
10, CUP_optic_CWS
10, CUP_optic_Leupold_VX3
10, CUP_optic_AN_PVS_10
10, CUP_optic_CompM2_Black
10, CUP_optic_CompM2_Woodland
10, CUP_optic_CompM2_Woodland2
10, CUP_optic_CompM2_Desert
10, CUP_optic_RCO
10, CUP_optic_RCO_desert
10, CUP_optic_LeupoldM3LR
10, CUP_optic_LeupoldMk4_10x40_LRT_Desert
10, CUP_optic_LeupoldMk4_10x40_LRT_Woodland
10, CUP_optic_ElcanM145
10, CUP_optic_AN_PAS_13c1
10, CUP_optic_LeupoldMk4_CQ_T
10, CUP_optic_ELCAN_SpecterDR
10, CUP_optic_LeupoldMk4_MRT_tan
10, CUP_optic_SB_11_4x20_PM
10, CUP_optic_ZDDot
10, CUP_optic_MRad
10, CUP_optic_TrijiconRx01_desert
10, CUP_optic_TrijiconRx01_black
10, CUP_optic_AN_PVS_4
10, CUP_optic_Elcan
10, CUP_optic_Elcan_reflex
10, CUP_optic_PGO7V
10, CUP_optic_PGO7V2
10, CUP_optic_PGO7V3
10, CUP_optic_NSPU_RPG

//1, optic_tws

> LMG
25, arifle_MX_SW_Black_F	// MX SW 6.5 mm (Black)
25, arifle_MX_SW_F			// MX SW 6.5 mm
25, LMG_Mk200_F				// Mk200 6.5 mm
25, LMG_Zafir_F				// Zafir 7.62 mm
25, Exile_Weapon_RPK
25, Exile_Weapon_PK
25, Exile_Weapon_PKP
25, LMG_03_F				//= LIM-85 5.56 mm
25, CUP_lmg_L7A2
25, CUP_lmg_minimipara
25, CUP_lmg_minimi
25, CUP_lmg_m249_para
25, CUP_lmg_M249_E2
25, CUP_lmg_minimi_railed
25, CUP_lmg_m249_pip1
25, CUP_lmg_M249
25, CUP_lmg_m249_pip2
25, CUP_lmg_m249_pip3
25, CUP_lmg_m249_pip4
25, CUP_lmg_m249_SQuantoon
25, CUP_lmg_M249_ElcanM145_Laser
25, CUP_lmg_M249_Laser
25, CUP_lmg_M249_ANPAS13c2_Laser
25, CUP_lmg_M60E4
25, CUP_lmg_Mk48_des
25, CUP_lmg_Mk48_des_Aim_Laser
25, CUP_lmg_Mk48_wdl
25, CUP_lmg_Mk48_wdl_Aim_Laser
25, CUP_lmg_PKM
25, CUP_lmg_Pecheneg
25, CUP_lmg_Pecheneg_PScope
25, CUP_BAF_L7A2_GPMG

> LMGAmmo
12, 100Rnd_65x39_caseless_mag			// MX SW
10, 100Rnd_65x39_caseless_mag_Tracer	// MX SW
12, 150Rnd_762x54_Box					// Zafir
10, 150Rnd_762x54_Box_Tracer			// Zafir
5, 130Rnd_338_Mag
51, 150Rnd_93x64_Mag
10, Exile_Magazine_45Rnd_545x39_RPK_Green
10, Exile_Magazine_75Rnd_545x39_RPK_Green
10, Exile_Magazine_100Rnd_762x54_PK_Green
//10, 200Rnd_65x39_Belt					// Mk200
//10, 200Rnd_65x39_Belt_Tracer_Green	// Mk200
//10, 200Rnd_65x39_Belt_Tracer_Red		// Mk200
//10, 200Rnd_65x39_Belt_Tracer_Yellow	// Mk200
10, 200Rnd_556x45_Box_F				// LIM-85 	
10, 200Rnd_556x45_Box_Red_F         // LIM-85	
10, 200Rnd_556x45_Box_Tracer_F      // LIM-85	
10, 200Rnd_556x45_Box_Tracer_Red_F  // LIM-85	
10, CUP_BAF_L110A1_Aim
10, CUP_M240
10, CUP_m240_scoped_EP1
10, CUP_M249_m145_EP1
10, CUP_M249_EP1
10, CUP_M249_TWS_EP1
10, CUP_M249
10, CUP_Mk_48_DES_EP1
10, CUP_Mk_48
10, CUP_PK
10, CUP_Pecheneg
10, CUP_UK59_ACR

> Snipers
28, srifle_DMR_01_F			// Rahim 7.62 mm
28, srifle_EBR_F			// Mk18 ABR 7.62 mm
22, srifle_GM6_F			// GM6 Lynx 12.7 mm
22, srifle_LRR_F			// M320 LRR .408
22, srifle_LRR_tna_F    	// M320 LRR .408 (Tropic)
22, srifle_GM6_ghex_F   	// GM6 Lynx 12.7 mm (Green Hex)
22, srifle_DMR_07_blk_F     // CMR-76 6.5 mm (Black)
22, srifle_DMR_07_hex_F     // CMR-76 6.5 mm (Hex)
22, srifle_DMR_07_ghex_F    // CMR-76 6.5 mm (Green Hex)
20, CUP_srifle_AS50
20, CUP_srifle_AS50_SBPMII
20, CUP_srifle_AS50_AMPAS13c2
20, CUP_srifle_M107_LeupoldVX3
20, CUP_srifle_M107_ANPAS13c2
20, CUP_BAF_AS50_scoped
20, CUP_PMC_AS50_scoped
20, CUP_BAF_AS50_TWS
20, CUP_PMC_AS50_TWS
20, CUP_M107
20, CUP_M107_TWS_EP1

> SniperAmmo
10, 5Rnd_127x108_Mag									// GM6 Lynx
10, 7Rnd_408_Mag										// M320 LRR
17, 10Rnd_762x54_Mag									// Rahim
19, 20Rnd_762x51_Mag									// Mk18 ABR
8, 5Rnd_127x108_APDS_Mag								// GM6 Lynx 
21, 20Rnd_650x39_Cased_Mag_F							// CMR-76
2, Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag 			// GM6 Lynx 12.7 mm
5, Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag 	// Cyrus 9.3mm	
3, Exile_Magazine_7Rnd_408_Bullet_Cam_Mag 				// M320 LRR .408	
5, Exile_Magazine_10Rnd_338_Bullet_Cam_Mag 				// MAR-10 .338	

> SniperAttachments
19, muzzle_snds_B
10, muzzle_snds_B_khk_F
10, muzzle_snds_B_snd_F
//1, optic_tws
//1, optic_tws_mg
27, optic_DMS
26, optic_SOS
26, optic_SOS_khk_F
26, optic_LRPS
26, optic_LRPS_tna_F
26, optic_LRPS_ghex_F

> DLCRifles
// To overpowered. Do not use in vanilla Exile
//4, MMG_01_hex_F				//Navid
//4, MMG_01_tan_F				//Navid
//6, MMG_02_black_F				//SPMG
//6, MMG_02_camo_F				//SPMG
//6, MMG_02_sand_F				//SPMG
6, srifle_DMR_02_camo_F			//MAR10
6, srifle_DMR_02_F				//MAR10
6, srifle_DMR_02_sniper_F		//MAR10
3, srifle_DMR_03_F				//MK1EMR
3, srifle_DMR_03_khaki_F		//MK1EMR
3, srifle_DMR_03_tan_F			//MK1EMR
3, srifle_DMR_03_woodland_F		//MK1EMR
7, srifle_DMR_04_F				//ASP1KIR
7, srifle_DMR_04_Tan_F			//ASP1KIR
8, srifle_DMR_05_blk_F			//CYRUS
8, srifle_DMR_05_hex_F			//CYRUS
8, srifle_DMR_05_tan_F			//CYRUS
3, srifle_DMR_06_camo_F			//Mk14
3, srifle_DMR_06_olive_F		//Mk14

> DLCAmmo
//18, 150Rnd_93x64_Mag		//Navid
//25, 130Rnd_338_Mag			//SPMG
16, 10Rnd_338_Mag			//MAR10
11, 20Rnd_762x51_Mag		//MK1EMR
14, 10Rnd_127x54_Mag		//ASP1KIR
16, 10Rnd_93x64_DMR_05_Mag	//CYRUS

> DLCOptics
14, optic_AMS
14, optic_AMS_khk
14, optic_AMS_snd
14, optic_KHS_blk
14, optic_KHS_hex
14, optic_KHS_old
14, optic_KHS_tan

> DLCSupressor
40, muzzle_snds_338_black
40, muzzle_snds_338_green
40, muzzle_snds_338_sand
40, muzzle_snds_93mmg
40, muzzle_snds_93mmg_tan
40, muzzle_snds_B

> EpicWeapons
4, MMG_01_hex_F				//Navid
4, MMG_01_tan_F				//Navid
6, MMG_02_black_F			//SPMG
6, MMG_02_camo_F			//SPMG
6, MMG_02_sand_F			//SPMG

> Bipods
17, bipod_03_F_oli
17, bipod_03_F_blk
17, bipod_02_F_tan
16, bipod_02_F_hex
17, bipod_02_F_blk
17, bipod_01_F_snd
16, bipod_01_F_mtp
17, bipod_01_F_blk
17, bipod_01_F_khk
17, CUP_bipod_Harris_1A2_L
17, CUP_bipod_VLTOR_Modpod

> HEGrenades
67, 1Rnd_HE_Grenade_shell
33, 3Rnd_HE_Grenade_shell

> UGLFlares
8, 3Rnd_UGL_FlareGreen_F
8, 3Rnd_UGL_FlareRed_F
8, 3Rnd_UGL_FlareWhite_F
8, 3Rnd_UGL_FlareYellow_F
17, UGL_FlareGreen_F
17, UGL_FlareRed_F
17, UGL_FlareWhite_F
17, UGL_FlareYellow_F
// No Infrared for now
//UGL_FlareCIR_F
//3Rnd_UGL_FlareCIR_F

> UGLSmokes
10, 1Rnd_Smoke_Grenade_shell
10, 1Rnd_SmokeBlue_Grenade_shell
10, 1Rnd_SmokeGreen_Grenade_shell
10, 1Rnd_SmokeOrange_Grenade_shell
10, 1Rnd_SmokePurple_Grenade_shell
10, 1Rnd_SmokeRed_Grenade_shell
10, 1Rnd_SmokeYellow_Grenade_shell
4, 3Rnd_Smoke_Grenade_shell
4, 3Rnd_SmokeBlue_Grenade_shell
4, 3Rnd_SmokeGreen_Grenade_shell
4, 3Rnd_SmokeOrange_Grenade_shell
4, 3Rnd_SmokePurple_Grenade_shell
4, 3Rnd_SmokeRed_Grenade_shell
4, 3Rnd_SmokeYellow_Grenade_shell
6, CUP_1Rnd_SmokeRed_GP25_M
6, CUP_1Rnd_SmokeGreen_GP25_M
6, CUP_1Rnd_SmokeYellow_GP25_M
6, CUP_1Rnd_Smoke_M203
6, CUP_1Rnd_SmokeRed_M203
6, CUP_1Rnd_SmokeGreen_M203
6, CUP_1Rnd_SmokeYellow_M203
6, CUP_6Rnd_Smoke_M203
6, CUP_6Rnd_SmokeRed_M203
6, CUP_6Rnd_SmokeGreen_M203
6, CUP_6Rnd_SmokeYellow_M203


> HandGrenades
50, HandGrenade
50, MiniGrenade
50, CUP_HandGrenade_M67
50, CUP_HandGrenade_L109A1_HE
50, CUP_HandGrenade_L109A2_HE
50, CUP_HandGrenade_RGD5
50, CUP_HandGrenade_RGO

> Explosives
12, DemoCharge_Remote_Mag
12, IEDUrbanSmall_Remote_Mag
12, IEDLandSmall_Remote_Mag
20, APERSMine_Range_Mag
20, APERSBoundingMine_Range_Mag
20, APERSTripMine_Wire_Mag
4, SatchelCharge_Remote_Mag
20, CUP_TimeBomb_M
20, CUP_Mine_M
20, CUP_MineE_M
20, CUP_IED_V1_M
20, CUP_IED_V2_M
20, CUP_IED_V3_M
20, CUP_IED_V4_M

///////////////////////////////////////////////////////////////////////////////
// Clothing & Gear
///////////////////////////////////////////////////////////////////////////////

//Civilian

> CivilianItems
30, ItemWatch
30, ItemRadio
20, ItemGPS
20, Binocular
40, Exile_Item_Heatpack
35, ItemMap
5, Exile_Item_MobilePhone
10, CUP_Vector21Nite

> CivilianClothing
9, U_C_Poor_1
9, U_C_Poor_2
9, U_C_Poor_shorts_1
9, U_C_HunterBody_grn
7, U_C_Poloshirt_salmon
7, U_C_Poloshirt_tricolour
7, U_C_Poloshirt_stripped
7, U_C_Poloshirt_burgundy
7, U_C_Poloshirt_blue
9, U_C_Journalist
9, U_C_Scientist
9, U_Rangemaster
1, U_OrestesBody
1, U_NikosBody
1, U_NikosAgedBody
5, U_I_C_Soldier_Bandit_1_F         // Bandit Clothes (Polo Shirt)
5, U_I_C_Soldier_Bandit_2_F         // Bandit Clothes (Skull)
5, U_I_C_Soldier_Bandit_3_F         // Bandit Clothes (Tee)
5, U_I_C_Soldier_Bandit_4_F         // Bandit Clothes (Checkered)
5, U_I_C_Soldier_Bandit_5_F         // Bandit Clothes (Tank Top)
5, U_C_man_sport_1_F                // Sport Clothes (Beach)
5, U_C_man_sport_2_F                // Sport Clothes (Orange)
5, U_C_man_sport_3_F                // Sport Clothes (Blue)
5, U_C_Man_casual_1_F               // Casual Clothes (Navy)
5, U_C_Man_casual_2_F               // Casual Clothes (Blue)
5, U_C_Man_casual_3_F               // Casual Clothes (Green)
5, U_C_Man_casual_4_F               // Summer Clothes (Sky)
5, U_C_Man_casual_5_F               // Summer Clothes (Yellow)
5, U_C_Man_casual_6_F               // Summer Clothes (Red)
8, CUP_U_C_Pilot_01
8, CUP_U_C_Citizen_01
8, CUP_U_C_Citizen_02
8, CUP_U_C_Citizen_03
8, CUP_U_C_Citizen_04
8, CUP_U_C_Worker_01
8, CUP_U_C_Worker_02
8, CUP_U_C_Worker_03
8, CUP_U_C_Worker_04
8, CUP_U_C_Profiteer_01
8, CUP_U_C_Profiteer_02
8, CUP_U_C_Profiteer_03
8, CUP_U_C_Profiteer_04
8, CUP_U_C_Woodlander_01
8, CUP_U_C_Woodlander_02
8, CUP_U_C_Woodlander_03
8, CUP_U_C_Woodlander_04
8, CUP_U_C_Villager_01
8, CUP_U_C_Villager_02
8, CUP_U_C_Villager_03
8, CUP_U_C_Villager_04
8, CUP_U_C_Priest_01
8, CUP_U_C_Policeman_01
8, CUP_U_C_Suit_01
8, CUP_U_C_Suit_02
8, CUP_U_C_Labcoat_01
8, CUP_U_C_Labcoat_02
8, CUP_U_C_Labcoat_03
8, CUP_U_C_Rocker_01
8, CUP_U_C_Rocker_02
8, CUP_U_C_Rocker_03
8, CUP_U_C_Rocker_04
8, CUP_U_C_Mechanic_01
8, CUP_U_C_Mechanic_02
8, CUP_U_C_Mechanic_03
8, CUP_U_C_Fireman_01
8, CUP_U_C_Rescuer_01
8, CUP_U_B_CZ_WDL_TShirt
8, CUP_U_O_Pilot_01
8, CUP_U_O_Worker_02
8, CUP_U_O_Woodlander_01
8, CUP_U_O_Woodlander_02
8, CUP_U_O_Woodlander_03
8, CUP_U_O_Villager_03
8, CUP_U_O_Villager_04

> CivilianBackpacks
10, B_OutdoorPack_blk
9, B_OutdoorPack_tan
9, B_OutdoorPack_blu
8, B_HuntingBackpack
7, B_AssaultPack_khk
7, B_AssaultPack_dgtl
7, B_AssaultPack_rgr
7, B_AssaultPack_sgg
7, B_AssaultPack_blk
7, B_AssaultPack_cbr
7, B_AssaultPack_mcamo
5, B_Kitbag_mcamo
5, B_Kitbag_sgg
5, B_Kitbag_cbr
7, B_AssaultPack_tna_F 
5, CUP_B_USPack_Coyote
5, CUP_B_USPack_Black
5, CUP_B_GER_Pack_Tropentarn
5, CUP_B_GER_Pack_Flecktarn
5, CUP_B_ACRPara_m95
5, CUP_B_ACRScout_m95
5, CUP_B_CivPack_WDL
5, CUP_B_RPGPack_Khaki
5, CUP_B_AlicePack_Khaki
5, CUP_B_AlicePack_Bedroll
5, CUP_B_AssaultPack_ACU
5, CUP_B_AssaultPack_Coyote
5, CUP_B_AssaultPack_Black
5, CUP_B_MedicPack_ACU
5, CUP_B_UAVTerminal_Black
5, CUP_B_HikingPack_Civ
5, CUP_B_StaticX_cbr
5, CUP_B_StaticY_cbr
5, CUP_B_Bergen_BAF
5, CUP_B_USMC_AssaultPack
5, CUP_B_USMC_MOLLE
5, CUP_B_USMC_MOLLE_WDL
5, CUP_B_GER_Medic_Desert
5, CUP_B_GER_Medic_Tropentarn
5, CUP_B_GER_Medic_FLecktarn
5, CUP_B_TK_Medic_Desert
5, CUP_B_SLA_Medicbag
5, CUP_B_RUS_Backpack
5, CUP_B_DShkM_Gun_Bag
5, CUP_B_DShkM_TripodHigh_Bag
5, CUP_B_DShkM_TripodLow_Bag
5, CUP_B_Kord_Gun_Bag
5, CUP_B_Kord_Tripod_Bag
5, CUP_B_Metis_Gun_Bag
5, CUP_B_Metis_Tripod_Bag
5, CUP_B_AGS30_Gun_Bag
5, CUP_B_AGS30_Tripod_Bag
5, CUP_B_SPG9_Gun_Bag
5, CUP_B_SPG9_Tripod_Bag
5, CUP_B_Podnos_Gun_Bag
5, CUP_B_Podnos_Bipod_Bag
5, CUP_B_M2_Gun_Bag
5, CUP_B_M2_Tripod_Bag
5, CUP_B_M2_MiniTripod_Bag
5, CUP_B_Mk19_Gun_Bag
5, CUP_B_Mk19_Tripod_Bag
5, CUP_B_Tow_Gun_Bag
5, CUP_B_TOW_Tripod_Bag
5, CUP_B_M252_Gun_Bag
5, CUP_B_M252_Bipod_Bag
5, CUP_US_Backpack_EP1
5, CUP_CZ_Backpack_EP1
5, CUP_CZ_VestPouch_EP1
5, CUP_TK_Assault_Pack_EP1
5, CUP_TK_ALICE_Pack_EP1
5, CUP_US_Assault_Pack_EP1
5, CUP_US_Patrol_Pack_EP1
5, CUP_USBasicBag
5, CUP_US_UAV_Pack_EP1
5, CUP_B_ACRPara_m95_Ammo
5, CUP_B_ACRPara_m95_Specops
5, CUP_B_ACRPara_m95_AmmoMG
5, CUP_B_ACRScout_m95_Sa58
5, CUP_B_ACRScout_m95_M4
5, CUP_B_RPG_Backpack
5, CUP_B_AlicePack_Khaki_Explosives
5, CUP_B_AlicePack_Khaki_AmmoMG
5, CUP_B_AlicePack_Khaki_Ammo
5, CUP_B_AlicePack_Khaki_AmmoAK74
5, CUP_B_CivPack_WDL_Ammo
5, CUP_B_Backpack_SpecOps
5, CUP_B_GER_Backpack_AmmoBearer
5, CUP_B_GER_Backpack_ATAssist
5, CUP_B_GER_Backpack_AAAssist
5, CUP_B_GER_Backpack_Engineer
5, CUP_B_GER_Backpack_AA
5, CUP_B_GER_Backpack_AT
5, CUP_B_GER_Backpack_Medic
5, CUP_B_Backpack_SpecOps_Fleck
5, CUP_B_GER_Backpack_AmmoBearer_Fleck
5, CUP_B_GER_Backpack_ATAssist_Fleck
5, CUP_B_GER_Backpack_AAAssist_Fleck
5, CUP_B_GER_Backpack_Engineer_Fleck
5, CUP_B_GER_Backpack_AA_Fleck
5, CUP_B_GER_Backpack_AT_Fleck
5, CUP_B_GER_Backpack_Medic_Fleck
5, CUP_I_HikingPack_RPK
5, CUP_I_HikingPack_PKM
5, CUP_I_HikingPack_Ammo
5, CUP_B_PMC_AlicePack_Exp
5, CUP_B_PMC_Backpack_Medic
5, CUP_B_PMC_AlicePack_PKM
5, CUP_B_PMC_AlicePack_XM8Auto
5, CUP_B_PMC_Backpack_KSVK
5, CUP_B_PMC_Backpack_GL
5, CUP_B_RUS_Pack_MG
5, CUP_B_RUS_Pack_AR
5, CUP_B_RUS_Pack_AT
5, CUP_B_RUS_Pack_Medic
5, CUP_B_RUS_Pack_ExpSpec
5, CUP_B_RUS_Pack_Engineer
5, CUP_B_RUS_Pack_Saboteur
5, CUP_B_RUS_Pack_Saboteur_Assault
5, CUP_B_SLA_Medicbag_green
5, CUP_B_TK_AssaultPack_Medic
5, CUP_B_TK_AlicePack_Khaki_Explosives
5, CUP_B_TK_CivPack_WDL_RPK
5, CUP_B_TK_CivPack_WDL_Ammo
5, CUP_B_TK_RPG_Backpack
5, CUP_B_TK_RPG_Backpack_Single
5, CUP_B_TK_AlicePack_Khaki_AmmoMG
5, CUP_B_TK_AlicePack_Khaki_Ammo
5, CUP_B_TIK_CivPack_WDL_Ammo
5, CUP_B_TKI_Backpack_RPG
5, CUP_B_TKG_Backpack_RPG
5, CUP_B_TKI_Backpack_Gunner_RPG
5, CUP_B_TKI_CivPack_WDL_RPK
5, CUP_B_TKI_CivPack_WDL_RPK_45
5, CUP_B_TKI_AlicePack_Khaki_AmmoAK74
5, CUP_B_TKG_AlicePack_Khaki_AmmoAK47
5, CUP_B_TKI_AlicePack_MG
5, CUP_B_TKI_AlicePack_Mechanic
5, CUP_B_TKI_AlicePack_Exp
5, CUP_B_USArmy_Medic
5, CUP_B_USArmy_AR
5, CUP_B_USArmy_MG
5, CUP_B_USArmy_MG_SpecOp
5, CUP_B_USArmy_AR_SpecOp
5, CUP_B_USArmy_MinePack
5, CUP_B_USArmy_EOD
5, CUP_B_USArmy_Engineer
5, CUP_B_AssaultPack_ACU_Ammo
5, CUP_B_AssaultPack_ACU_AmmoSAW
5, CUP_B_AssaultPack_ACU_AT
5, CUP_B_AssaultPack_ACU_AT_1
5, CUP_B_AssaultPack_ACU_Explosives
5, CUP_B_AssaultPack_ACU_MG
5, CUP_B_AssaultPack_Coyote_Ammo
5, CUP_B_AssaultPack_Coyote_Specops
5, CUP_B_USPack_Coyote_AmmoMG
5, CUP_B_USPack_Coyote_AT
5, CUP_B_USPack_Coyote_Specops
5, CUP_B_USPack_Coyote_TL
5, CUP_B_USPack_Coyote_SL
5, CUP_B_USMC_AssaultPack_Medic
5, CUP_B_USMC_MOLLE_AR
5, CUP_B_USMC_MOLLE_MG
5, CUP_B_USMC_MOLLE_Exp
5, CUP_B_USMC_AssaultPack_SMAW
5, CUP_B_FR_MOLLE_Sab
5, CUP_B_FR_MOLLE_MG
5, CUP_T10_Parachute_backpack
5, CUP_C_EngineeringBag
5, CUP_B_AssaultPack_RifleAmmo
5, CUP_B_AssaultPack_ARAmmo
5, CUP_B_AssaultPack_MGAmmo
5, CUP_B_AssaultPack_ATAmmo
5, CUP_B_AssaultPack_HATAmmo
5, CUP_B_AssaultPack_Special
5, CUP_B_AssaultPack_FAC
5, CUP_B_AssaultPack_HAAAmmo
5, CUP_B_AssaultPack_LRRAmmo
5, CUP_B_AssaultPack_Medic
5, CUP_B_AssaultPack_LAT
5, CUP_B_AssaultPack_Engineer
5, CUP_B_AssaultPack_AR
5, CUP_B_AssaultPack_MG

> CivilianVests
50, V_Rangemaster_belt
25, V_Press_F
25, V_TacVest_blk_POLICE
20, CUP_V_RUS_6B3_1
20, CUP_V_RUS_6B3_2
20, CUP_V_RUS_6B3_3
20, CUP_V_RUS_6B3_4
20, CUP_V_RUS_Smersh_1
20, CUP_V_RUS_Smersh_2
20, CUP_V_O_SLA_Carrier_Belt
20, CUP_V_O_SLA_Carrier_Belt02
20, CUP_V_O_SLA_Carrier_Belt03
20, CUP_V_O_SLA_Flak_Vest01
20, CUP_V_O_SLA_Flak_Vest02
20, CUP_V_O_SLA_Flak_Vest03
20, CUP_V_O_TK_CrewBelt
20, CUP_V_O_TK_OfficerBelt
20, CUP_V_O_TK_OfficerBelt2
20, CUP_V_O_TK_Vest_1
20, CUP_V_O_TK_Vest_2
20, CUP_V_OI_TKI_Jacket1_01
20, CUP_V_OI_TKI_Jacket1_02
20, CUP_V_OI_TKI_Jacket1_03
20, CUP_V_OI_TKI_Jacket1_04
20, CUP_V_OI_TKI_Jacket1_05
20, CUP_V_OI_TKI_Jacket1_06
20, CUP_V_OI_TKI_Jacket2_01
20, CUP_V_OI_TKI_Jacket2_02
20, CUP_V_OI_TKI_Jacket2_03
20, CUP_V_OI_TKI_Jacket2_04
20, CUP_V_OI_TKI_Jacket2_05
20, CUP_V_OI_TKI_Jacket2_06
20, CUP_V_OI_TKI_Jacket3_01
20, CUP_V_OI_TKI_Jacket3_02
20, CUP_V_OI_TKI_Jacket3_03
20, CUP_V_OI_TKI_Jacket3_04
20, CUP_V_OI_TKI_Jacket3_05
20, CUP_V_OI_TKI_Jacket3_06
20, CUP_V_OI_TKI_Jacket4_01
20, CUP_V_OI_TKI_Jacket4_02
20, CUP_V_OI_TKI_Jacket4_03
20, CUP_V_OI_TKI_Jacket4_04
20, CUP_V_OI_TKI_Jacket4_05
20, CUP_V_OI_TKI_Jacket4_06
20, CUP_V_B_IOTV_SL
20, CUP_V_B_IOTV_Medic
20, CUP_V_B_IOTV_Rifleman
20, CUP_V_B_IOTV_AT
20, CUP_V_B_IOTV_MG
20, CUP_V_B_IOTV_saw
20, CUP_V_B_IOTV_tl
20, CUP_V_B_IOTV_gl


> CivilianHeadgear
5, H_Bandanna_surfer
5, H_Beret_blk_POLICE
5, H_Cap_blk
5, H_Cap_blk_Raven
5, H_Cap_blu
5, H_Cap_grn
5, H_Cap_headphones
5, H_Cap_oli
6, H_Cap_press
6, H_Cap_red
6, H_Cap_tan
6, H_Hat_blue
6, H_Hat_brown
6, H_Hat_checker
6, H_Hat_grey
6, H_Hat_tan
6, H_StrawHat
6, H_StrawHat_dark
2, CUP_H_Ger_Boonie_desert
2, CUP_H_Ger_Boonie_Flecktarn
2, CUP_H_NAPA_Fedora
2, CUP_H_PMC_PRR_Headset
2, CUP_H_PMC_EP_Headset
2, CUP_H_PMC_Cap_Grey
2, CUP_H_PMC_Cap_Tan
2, CUP_H_PMC_Cap_Burberry
2, CUP_H_PMC_Cap_Back_Grey
2, CUP_H_PMC_Cap_Back_Tan
2, CUP_H_PMC_Cap_Back_Burberry
2, CUP_H_PMC_Cap_PRR_Grey
2, CUP_H_PMC_Cap_PRR_Tan
2, CUP_H_PMC_Cap_PRR_Burberry
2, CUP_H_PMC_Cap_Back_PRR_Grey
2, CUP_H_PMC_Cap_Back_PRR_Tan
2, CUP_H_PMC_Cap_Back_PRR_Burberry
2, CUP_H_PMC_Cap_EP_Grey
2, CUP_H_PMC_Cap_EP_Tan
2, CUP_H_PMC_Cap_EP_Burberry
2, CUP_H_PMC_Cap_Back_EP_Grey
2, CUP_H_PMC_Cap_Back_EP_Tan
2, CUP_H_PMC_Cap_Back_EP_Burberry
2, CUP_H_RACS_Beret_Blue
2, CUP_H_RUS_6B27_NVG
2, CUP_H_RUS_6B27_NVG_olive
2, CUP_H_RUS_6B27
2, CUP_H_RUS_6B27_olive
2, CUP_H_RUS_TSH_4_Brown
2, CUP_H_RUS_ZSH_Shield_Up
2, CUP_H_RUS_ZSH_Shield_Down
2, CUP_H_RUS_Bandana_HS
2, CUP_H_RUS_Beret_VDV
2, CUP_H_RUS_Beret_Spetsnaz
2, CUP_H_RUS_ZSH_1_Goggles
2, CUP_H_RUS_ZSH_1
2, CUP_H_SLA_TankerHelmet
2, CUP_H_SLA_Helmet
2, CUP_H_SLA_Pilot_Helmet
2, CUP_H_SLA_OfficerCap
2, CUP_H_SLA_SLCap
2, CUP_H_SLA_Boonie
2, CUP_H_SLA_Beret
2, CUP_H_SLA_BeanieGreen
2, CUP_H_SLA_BeretRed
2, CUP_H_TK_TankerHelmet
2, CUP_H_TK_PilotHelmet
2, CUP_H_TK_Helmet
2, CUP_H_TK_Lungee
2, CUP_H_TK_Beret
2, CUP_H_TKI_SkullCap_01
2, CUP_H_TKI_SkullCap_02
2, CUP_H_TKI_SkullCap_03
2, CUP_H_TKI_SkullCap_04
2, CUP_H_TKI_SkullCap_05
2, CUP_H_TKI_SkullCap_06
2, CUP_H_TKI_Lungee_01
2, CUP_H_TKI_Lungee_02
2, CUP_H_TKI_Lungee_03
2, CUP_H_TKI_Lungee_04
2, CUP_H_TKI_Lungee_05
2, CUP_H_TKI_Lungee_06
2, CUP_H_TKI_Lungee_Open_01
2, CUP_H_TKI_Lungee_Open_02
2, CUP_H_TKI_Lungee_Open_03
2, CUP_H_TKI_Lungee_Open_04
2, CUP_H_TKI_Lungee_Open_05
2, CUP_H_TKI_Lungee_Open_06
2, CUP_H_TKI_Pakol_1_01
2, CUP_H_TKI_Pakol_1_02
2, CUP_H_TKI_Pakol_1_03
2, CUP_H_TKI_Pakol_1_04
2, CUP_H_TKI_Pakol_1_05
2, CUP_H_TKI_Pakol_1_06
2, CUP_H_TKI_Pakol_2_01
2, CUP_H_TKI_Pakol_2_02
2, CUP_H_TKI_Pakol_2_03
2, CUP_H_TKI_Pakol_2_04
2, CUP_H_TKI_Pakol_2_05
2, CUP_H_TKI_Pakol_2_06
2, CUP_H_USArmy_Boonie
2, CUP_H_USA_Cap
2, CUP_H_C_MAGA_01
2, CUP_H_C_TrackIR_01
2, CUP_H_C_Ushanka_01
2, CUP_H_C_Ushanka_02
2, CUP_H_C_Ushanka_03
2, CUP_H_C_Ushanka_04
2, CUP_H_C_Beanie_01
2, CUP_H_C_Beanie_02
2, CUP_H_C_Beanie_03
2, CUP_H_C_Beanie_04
2, CUP_H_C_Beret_01
2, CUP_H_C_Beret_02
2, CUP_H_C_Beret_03
2, CUP_H_C_Beret_04
2, CUP_H_CDF_H_PASGT_MNT
2, CUP_H_CDF_H_PASGT_DST
2, CUP_H_CDF_H_PASGT_FST
2, CUP_H_CDF_H_PASGT_UN
2, CUP_H_CDF_OfficerCap_MNT
2, CUP_H_CDF_OfficerCap_DST
2, CUP_H_CDF_OfficerCap_FST
2, CUP_H_CDF_OfficerCap_UN
2, CUP_H_CDF_Beret_UN
2, CUP_H_ChDKZ_Beret
2, CUP_H_ChDKZ_Beanie
2, CUP_H_ChDKZ_Cap

//Guerilla

> GuerillaItems
25, Rangefinder
25, CUP_Binocular_Vector
8, NVGoggles
8, O_NVGoggles_hex_F
8, O_NVGoggles_urb_F
8, O_NVGoggles_ghex_F
8, NVGoggles_tna_F
8, CUP_NVG_PVS7
8, CUP_NVG_PVS14
50, ItemCompass

> GuerillaClothing
16, U_IG_Guerilla1_1
16, U_IG_Guerilla2_1
16, U_IG_Guerilla2_2
16, U_IG_Guerilla2_3
15, U_IG_Guerilla3_1
15, U_IG_Guerilla3_2
4, U_IG_leader
2, U_I_G_resistanceLeader_F
5, U_I_C_Soldier_Para_1_F           // Paramilitary Garb (Tee)
5, U_I_C_Soldier_Para_2_F           // Paramilitary Garb (Jacket)
5, U_I_C_Soldier_Para_3_F           // Paramilitary Garb (Shirt)
5, U_I_C_Soldier_Para_4_F           // Paramilitary Garb (Tank Top)
5, U_I_C_Soldier_Para_5_F           // Paramilitary Garb (Shorts)
5, U_I_C_Soldier_Camo_F             // Syndikat Uniform
10, CUP_U_B_GER_Tropentarn_1
10, CUP_U_B_GER_Tropentarn_2
10, CUP_U_B_GER_Ghillie
10, CUP_U_B_GER_Flecktarn_1
10, CUP_U_B_GER_Flecktarn_2
10, CUP_U_B_GER_Fleck_Ghillie
10, CUP_U_I_GUE_Flecktarn
10, CUP_U_I_GUE_Flecktarn2
10, CUP_U_I_GUE_Woodland1
10, CUP_U_I_GUE_Flecktarn3
10, CUP_U_I_Ghillie_Top
10, CUP_U_I_Pilot_01
10, CUP_U_I_Leader_01
10, CUP_U_I_Worker_02
10, CUP_U_I_Woodlander_01
10, CUP_U_I_Woodlander_02
10, CUP_U_I_Woodlander_03
10, CUP_U_I_Villager_03
10, CUP_U_I_Villager_04
10, CUP_U_I_GUE_Anorak_01
10, CUP_U_I_GUE_Anorak_02
10, CUP_U_I_GUE_Anorak_03
10, CUP_I_B_PMC_Unit_1
10, CUP_I_B_PMC_Unit_2
10, CUP_I_B_PMC_Unit_3
10, CUP_I_B_PMC_Unit_4
10, CUP_I_B_PMC_Unit_5
10, CUP_I_B_PMC_Unit_6
10, CUP_I_B_PMC_Unit_7
10, CUP_I_B_PMC_Unit_8
10, CUP_I_B_PMC_Unit_9
10, CUP_I_B_PMC_Unit_10
10, CUP_I_B_PMC_Unit_11
10, CUP_I_B_PMC_Unit_12
10, CUP_I_B_PMC_Unit_13
10, CUP_I_B_PMC_Unit_14
10, CUP_I_B_PMC_Unit_15
10, CUP_I_B_PMC_Unit_16
10, CUP_I_B_PMC_Unit_17
10, CUP_I_B_PMC_Unit_18
10, CUP_I_B_PMC_Unit_19
10, CUP_I_B_PMC_Unit_20
10, CUP_I_B_PMC_Unit_21
10, CUP_I_B_PMC_Unit_22
10, CUP_I_B_PMC_Unit_23
10, CUP_I_B_PMC_Unit_24
10, CUP_I_B_PMC_Unit_25
10, CUP_I_B_PMC_Unit_26
10, CUP_I_B_PMC_Unit_27
10, CUP_I_B_PMC_Unit_28
10, CUP_U_I_RACS_Desert_1
10, CUP_U_I_RACS_Desert_2
10, CUP_U_I_RACS_PilotOverall
10, CUP_U_I_RACS_Urban_1
10, CUP_U_I_RACS_Urban_2
10, CUP_U_I_RACS_WDL_1
10, CUP_U_I_RACS_WDL_2
10, CUP_U_I_RACS_mech_1
10, CUP_U_I_RACS_mech_2
10, CUP_U_O_RUS_EMR_1
10, CUP_U_O_RUS_Flora_1
10, CUP_U_O_RUS_Flora_2
10, CUP_U_O_RUS_EMR_2
10, CUP_U_O_RUS_Flora_1_VDV
10, CUP_U_O_RUS_EMR_1_VDV
10, CUP_U_O_RUS_Flora_2_VDV
10, CUP_U_O_RUS_EMR_2_VDV
10, CUP_U_O_RUS_Commander
10, CUP_U_O_RUS_Gorka_Partizan
10, CUP_U_O_RUS_Gorka_Partizan_A
10, CUP_U_O_RUS_Gorka_Green
10, CUP_U_O_RUS_Ghillie
10, CUP_U_O_SLA_Officer
10, CUP_U_O_SLA_MixedCamo
10, CUP_U_O_SLA_Green
10, CUP_U_O_SLA_Urban
10, CUP_U_O_SLA_Desert
10, CUP_U_O_Partisan_TTsKO
10, CUP_U_O_Partisan_TTsKO_Mixed
10, CUP_U_O_Partisan_VSR_Mixed1
10, CUP_U_O_Partisan_VSR_Mixed2
10, CUP_U_O_SLA_Overalls_Pilot
10, CUP_U_O_SLA_Overalls_Tank
10, CUP_U_O_SLA_Officer_Suit
10, CUP_U_O_TK_Officer
10, CUP_U_O_TK_MixedCamo
10, CUP_U_O_TK_Green
10, CUP_U_O_TK_Ghillie
10, CUP_U_O_TK_Ghillie_Top
10, CUP_O_TKI_Khet_Partug_01
10, CUP_O_TKI_Khet_Partug_02
10, CUP_O_TKI_Khet_Partug_03
10, CUP_O_TKI_Khet_Partug_04
10, CUP_O_TKI_Khet_Partug_05
10, CUP_O_TKI_Khet_Partug_06
10, CUP_O_TKI_Khet_Partug_07
10, CUP_O_TKI_Khet_Partug_08
10, CUP_O_TKI_Khet_Jeans_01
10, CUP_O_TKI_Khet_Jeans_02
10, CUP_O_TKI_Khet_Jeans_03
10, CUP_O_TKI_Khet_Jeans_04
10, CUP_I_TKG_Khet_Partug_01
10, CUP_I_TKG_Khet_Partug_02
10, CUP_I_TKG_Khet_Partug_03
10, CUP_I_TKG_Khet_Partug_04
10, CUP_I_TKG_Khet_Partug_05
10, CUP_I_TKG_Khet_Partug_06
10, CUP_I_TKG_Khet_Partug_07
10, CUP_I_TKG_Khet_Partug_08
10, CUP_I_TKG_Khet_Jeans_01
10, CUP_I_TKG_Khet_Jeans_02
10, CUP_I_TKG_Khet_Jeans_03
10, CUP_I_TKG_Khet_Jeans_04

> GuerillaBackpacks
14, B_FieldPack_blk
14, B_FieldPack_ocamo
14, B_FieldPack_oucamo
14, B_FieldPack_cbr
11, B_Bergen_sgg
11, B_Bergen_mcamo
11, B_Bergen_rgr
11, B_Bergen_blk
11, B_FieldPack_ghex_F 
11, B_ViperHarness_base_F         
11, B_ViperHarness_blk_F          
11, B_ViperHarness_ghex_F         
11, B_ViperHarness_hex_F          
11, B_ViperHarness_khk_F          
11, B_ViperHarness_oli_F          
11, B_ViperLightHarness_base_F    
11, B_ViperLightHarness_blk_F     
11, B_ViperLightHarness_ghex_F    
11, B_ViperLightHarness_hex_F     
11, B_ViperLightHarness_khk_F     
11, B_ViperLightHarness_oli_F    

> GuerillaVests
7, V_BandollierB_khk
7, V_BandollierB_cbr
7, V_BandollierB_rgr
7, V_BandollierB_blk
7, V_BandollierB_oli
5, V_Chestrig_khk
5, V_Chestrig_rgr
5, V_Chestrig_blk
5, V_Chestrig_oli
7, V_HarnessO_brn
7, V_HarnessOGL_brn
7, V_HarnessO_gry
7, V_HarnessOGL_gry
7, V_HarnessOSpec_brn
7, V_HarnessOSpec_gry
3, V_I_G_resistanceLeader_F
6,  CUP_V_B_GER_Carrier_Rig_2
6,  CUP_V_B_GER_Carrier_Rig_2_Brown
6,  CUP_V_B_GER_Carrier_Rig_3_Brown
6,  CUP_V_B_GER_Carrier_Vest
6,  CUP_V_B_GER_Carrier_Vest_2
6,  CUP_V_B_GER_Carrier_Vest_3
6,  CUP_V_B_GER_Vest_1
6,  CUP_V_B_GER_Vest_2
6,  CUP_V_I_Carrier_Belt
6,  CUP_V_I_Guerilla_Jacket
6,  CUP_V_PMC_IOTV_Coyote_Empty
6,  CUP_V_PMC_IOTV_Coyote_Patrol
6,  CUP_V_PMC_IOTV_Coyote_AR
6,  CUP_V_PMC_IOTV_Coyote_Gren
6,  CUP_V_PMC_IOTV_Coyote_TL
6,  CUP_V_PMC_IOTV_Black_Empty
6,  CUP_V_PMC_IOTV_Black_Patrol
6,  CUP_V_PMC_IOTV_Black_AR
6,  CUP_V_PMC_IOTV_Black_Gren
6,  CUP_V_PMC_IOTV_Black_TL
6,  CUP_V_PMC_CIRAS_Coyote_Empty
6,  CUP_V_PMC_CIRAS_Coyote_Patrol
6,  CUP_V_PMC_CIRAS_Coyote_Grenadier
6,  CUP_V_PMC_CIRAS_Coyote_TL
6,  CUP_V_PMC_CIRAS_Coyote_Veh
6,  CUP_V_PMC_CIRAS_Black_Empty
6,  CUP_V_PMC_CIRAS_Black_Patrol
6,  CUP_V_PMC_CIRAS_Black_Grenadier
6,  CUP_V_PMC_CIRAS_Black_TL
6,  CUP_V_PMC_CIRAS_Black_Veh
6,  CUP_V_PMC_CIRAS_Winter_Empty
6,  CUP_V_PMC_CIRAS_Winter_Patrol
6,  CUP_V_PMC_CIRAS_Winter_Grenadier
6,  CUP_V_PMC_CIRAS_Winter_TL
6,  CUP_V_PMC_CIRAS_Winter_Veh
6,  CUP_V_I_RACS_Carrier_Rig_2
6,  CUP_V_I_RACS_Carrier_Rig_3
6,  CUP_V_I_RACS_Carrier_Vest
6,  CUP_V_I_RACS_Carrier_Vest_2
6,  CUP_V_I_RACS_Carrier_Vest_3
6,  CUP_V_I_RACS_Carrier_Rig_wdl_2
6,  CUP_V_I_RACS_Carrier_Rig_wdl_3
6,  CUP_V_I_RACS_Carrier_Vest_wdl
6,  CUP_V_I_RACS_Carrier_Vest_wdl_2
6,  CUP_V_I_RACS_Carrier_Vest_wdl_3

> GuerillaHeadgear
4, Exile_Headgear_GasMask
4, H_Booniehat_khk
4, H_Booniehat_indp
4, H_Booniehat_mcamo
4, H_Booniehat_grn
4, H_Booniehat_tan
4, H_Booniehat_dirty
4, H_Booniehat_dgtl
4, H_Booniehat_khk_hs
3, H_Bandanna_khk
3, H_Bandanna_khk_hs
3, H_Bandanna_cbr
3, H_Bandanna_sgg
3, H_Bandanna_gry
3, H_Bandanna_camo
3, H_Bandanna_mcamo
3, H_BandMask_blk
1, H_Beret_blk
1, H_Beret_red
1, H_Beret_grn
1, H_Beret_grn_SF
1, H_Beret_brn_SF
1, H_Beret_ocamo
1, H_Beret_02
1, H_Beret_Colonel
3, H_Hat_camo
3, H_Cap_brn_SPECOPS
3, H_Cap_tan_specops_US
3, H_Cap_khaki_specops_UK
3, H_Watchcap_blk
3, H_Watchcap_khk
2, H_Watchcap_camo
2, H_Watchcap_sgg
2, H_TurbanO_blk
2, H_Shemag_khk
2, H_Shemag_tan
2, H_Shemag_olive
2, H_Shemag_olive_hs
2, H_ShemagOpen_khk
2, H_ShemagOpen_tan  
2, H_MilCap_tna_F             
2, H_MilCap_ghex_F 
2, H_Booniehat_tna_F   
2, H_MilCap_gen_F             
2, H_Cap_oli_Syndikat_F       
2, H_Cap_tan_Syndikat_F       
2, H_Cap_blk_Syndikat_F       
2, H_Cap_grn_Syndikat_F       
2, H_FakeHeadgear_Syndikat_F    

2, CUP_H_USMC_Officer_Cap
2, CUP_H_USMC_HelmetWDL
2, CUP_H_USMC_Headset_HelmetWDL
2, CUP_H_USMC_Headset_GoggleW_HelmetWDL
2, CUP_H_USMC_Crew_Helmet
2, CUP_H_USMC_Goggles_HelmetWDL
2, CUP_H_USMC_Helmet_Pilot
2, CUP_H_FR_Cap_Headset_Green
2, CUP_H_FR_Cap_Officer_Headset
2, CUP_H_FR_BandanaGreen
2, CUP_H_FR_BandanaWdl
2, CUP_H_FR_ECH
2, CUP_H_FR_BoonieMARPAT
2, CUP_H_FR_BoonieWDL
2, CUP_H_FR_BeanieGreen
2, CUP_H_FR_Headset
2, CUP_H_FR_Bandana_Headset
2, CUP_H_FR_Headband_Headset
2, CUP_H_FR_PRR_BoonieWDL
2, CUP_H_Navy_CrewHelmet_Blue
2, CUP_H_Navy_CrewHelmet_Brown
2, CUP_H_Navy_CrewHelmet_Green
2, CUP_H_Navy_CrewHelmet_Red
2, CUP_H_Navy_CrewHelmet_Violet
2, CUP_H_Navy_CrewHelmet_White
2, CUP_H_Navy_CrewHelmet_Yellow
2, CUP_H_USMC_ACVC_WDL
2, CUP_H_USMC_ACVC_DES
2, CUP_H_USMC_MICH2000_WDL
2, CUP_H_USMC_MICH2000_DES
2, CUP_H_USMC_MICH2000_ESS_COMM_WDL
2, CUP_H_USMC_MICH2000_ESS_COMM_DES
2, CUP_H_USMC_MICH2000_COMM_WDL
2, CUP_H_USMC_MICH2000_COMM_DES
2, CUP_H_USMC_MICH2000_DEF_WDL
2, CUP_H_USMC_MICH2000_DEF_DES
2, CUP_H_USMC_MICH2000_DEF_ESS_WDL
2, CUP_H_USMC_MICH2000_DEF_ESS_DES
2, CUP_H_USMC_LWH_NVGMOUNT_WDL
2, CUP_H_USMC_LWH_NVGMOUNT_DES
2, CUP_H_USMC_LWH_WDL
2, CUP_H_USMC_LWH_DES
2, CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_WDL
2, CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES
2, CUP_H_USMC_LWH_ESS_HS_WDL
2, CUP_H_USMC_LWH_ESS_HS_DES
2, CUP_H_USMC_LWH_NVGMOUNT_ESS_WDL
2, CUP_H_USMC_LWH_NVGMOUNT_ESS_DES
2, CUP_H_USMC_LWH_ESS_WDL
2, CUP_H_USMC_LWH_ESS_DES
2, CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_WDL
2, CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES
2, CUP_H_USMC_LWH_ESS_LR_WDL
2, CUP_H_USMC_LWH_ESS_LR_DES
2, CUP_H_USMC_BOONIE_WDL
2, CUP_H_USMC_BOONIE_DES
2, CUP_H_USMC_BOONIE_PRR_WDL
2, CUP_H_USMC_BOONIE_PRR_DES
2, CUP_H_USMC_CAP_WDL
2, CUP_H_USMC_CAP_DES
2, CUP_H_USMC_CAP_PRR_WDL
2, CUP_H_USMC_CAP_PRR_DES

//Military

> MilitaryClothing
5, U_B_CTRG_1						// CTRG Combat Uniform (UBACS)
5, U_B_CTRG_2						// CTRG Combat Uniform (UBACS2)
5, U_B_CTRG_3						// CTRG Combat Uniform (Tee)
5, U_B_CombatUniform_mcam			// Combat Fatigues (MTP)
5, U_B_CombatUniform_mcam_tshirt	// Combat Fatigues (MTP) (Tee)
5, U_B_CombatUniform_mcam_vest		// Recon Fatigues (MTP)
5, U_B_CombatUniform_mcam_worn		// Worn Combat Fatigues (MTP)
3, U_B_SpecopsUniform_sgg			// Specop Fatigues (Sage)
2, U_O_OfficerUniform_ocamo			// Officer Fatigues (Hex)
2, U_I_OfficerUniform				// Combat Fatigues [AAF] (Tee)
4, U_I_CombatUniform				// Combat Fatigues [AAF]
4, U_I_CombatUniform_tshirt			// Combat Fatigues [AAF] (Tee)
4, U_I_CombatUniform_shortsleeve	// Combat Fatigues [AAF]
4, U_B_HeliPilotCoveralls			// Heli Pilot Coveralls
4, U_O_PilotCoveralls				// Pilot Coveralls [CSAT]
4, U_B_PilotCoveralls				// Pilot Coveralls [NATO]
4, U_I_pilotCoveralls				// Pilot Coveralls [AAF]
4, U_I_HeliPilotCoveralls			// Heli Pilot Coveralls
2, U_B_Wetsuit						// Wetsuit [NATO]
2, U_O_Wetsuit						// Wetsuit [CSAT]
2, U_I_Wetsuit						// Wetsuit [AAF]
2, U_O_CombatUniform_ocamo			// Heli Pilot Coveralls
2, U_O_CombatUniform_oucamo			// Fatigues (Urban) [CSAT]
2, U_O_SpecopsUniform_ocamo			// Recon Fatigues (Hex)
2, U_O_SpecopsUniform_blk			// Recon Fatigues (Black)
2, U_O_V_Soldier_Viper_F            // Special Purpose Suit (Green Hex)
2, U_O_V_Soldier_Viper_hex_F        // Special Purpose Suit (Hex)
5, U_B_T_Soldier_AR_F               // Combat Fatigues (Tropic, Tee)
5, U_B_T_Soldier_SL_F               // Recon Fatigues (Tropic)
5, U_B_CTRG_Soldier_F               // CTRG Stealth Uniform
5, U_B_CTRG_Soldier_2_F             // CTRG Stealth Uniform (Tee)
5, U_B_CTRG_Soldier_3_F             // CTRG Stealth Uniform (Rolled-up)
5, U_B_CTRG_Soldier_urb_1_F         // CTRG Urban Uniform
5, U_B_CTRG_Soldier_urb_2_F         // CTRG Urban Uniform (Tee)
5, U_B_CTRG_Soldier_urb_3_F         // CTRG Urban Uniform (Rolled-up)
5, U_B_GEN_Soldier_F                // Gendarmerie Uniform
5, U_B_GEN_Commander_F              // Gendarmerie Commander Uniform
5, U_O_T_Soldier_F                  // Fatigues (Green Hex) [CSAT]
5, U_O_T_Officer_F                  // Officer Fatigues (Green Hex) [CSAT]
5, CUP_U_B_USA06_Officer_m81
5, CUP_U_B_USArmy_TwoKnee
5, CUP_U_B_USArmy_UBACS
5, CUP_U_B_USArmy_Soft
5, CUP_U_B_USArmy_Ghillie
5, CUP_U_B_USArmy_PilotOverall
5, CUP_U_B_USMC_Officer
5, CUP_U_B_USMC_MARPAT_WDL_Sleeves
5, CUP_U_B_USMC_MARPAT_WDL_RolledUp
5, CUP_U_B_USMC_MARPAT_WDL_Kneepad
5, CUP_U_B_USMC_MARPAT_WDL_TwoKneepads
5, CUP_U_B_USMC_PilotOverall
5, CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad
5, CUP_U_B_USMC_Ghillie_WDL
5, CUP_U_B_FR_SpecOps
5, CUP_U_B_FR_Scout
5, CUP_U_B_FR_Officer
5, CUP_U_B_FR_Corpsman
5, CUP_U_B_FR_DirAction
5, CUP_U_B_FR_DirAction2
5, CUP_U_B_FR_Light
5, CUP_U_B_FR_Scout1
5, CUP_U_B_FR_Scout2
5, CUP_U_B_FR_Scout3
5, CUP_B_USMC_Navy_Blue
5, CUP_B_USMC_Navy_Brown
5, CUP_B_USMC_Navy_Green
5, CUP_B_USMC_Navy_Red
5, CUP_B_USMC_Navy_Violet
5, CUP_B_USMC_Navy_White
5, CUP_B_USMC_Navy_Yellow
5, CUP_U_B_USMC_FROG1_WMARPAT
5, CUP_U_B_USMC_FROG1_DMARPAT
5, CUP_U_B_USMC_FROG2_WMARPAT
5, CUP_U_B_USMC_FROG2_DMARPAT
5, CUP_U_B_USMC_FROG3_WMARPAT
5, CUP_U_B_USMC_FROG3_DMARPAT
5, CUP_U_B_USMC_FROG4_WMARPAT
5, CUP_U_B_USMC_FROG4_DMARPAT
5, CUP_U_B_BAF_DDPM_S1_RolledUp
5, CUP_U_B_BAF_DDPM_S2_UnRolled
5, CUP_U_B_BAF_DDPM_Tshirt
5, CUP_U_B_BAF_DPM_S1_RolledUp
5, CUP_U_B_BAF_DPM_S2_UnRolled
5, CUP_U_B_BAF_DPM_Tshirt
5, CUP_U_B_BAF_MTP_S1_RolledUp
5, CUP_U_B_BAF_MTP_S2_UnRolled
5, CUP_U_B_BAF_MTP_Tshirt
5, CUP_U_B_BAF_MTP_Ghillie
5, CUP_U_B_BAF_DPM_Ghillie
5, CUP_U_B_BAF_DDPM_Ghillie
5, CUP_U_B_BAF_MTP_S3_RolledUp
5, CUP_U_B_BAF_MTP_S4_UnRolled
5, CUP_U_B_BAF_MTP_S5_UnRolled
5, CUP_U_B_BAF_MTP_S6_UnRolled
5, CUP_U_B_CDF_MNT_1
5, CUP_U_B_CDF_MNT_2
5, CUP_U_B_CDF_DST_1
5, CUP_U_B_CDF_DST_2
5, CUP_U_B_CDF_FST_1
5, CUP_U_B_CDF_FST_2
5, CUP_U_I_UNO_MNT_1
5, CUP_U_I_UNO_MNT_2
5, CUP_U_I_UNO_DST_1
5, CUP_U_I_UNO_DST_2
5, CUP_U_I_UNO_FST_1
5, CUP_U_I_UNO_FST_2
5, CUP_U_O_CHDKZ_Bardak
5, CUP_U_O_CHDKZ_Commander
5, CUP_U_O_CHDKZ_Lopotev
5, CUP_U_O_CHDKZ_Kam_01
5, CUP_U_O_CHDKZ_Kam_02
5, CUP_U_O_CHDKZ_Kam_03
5, CUP_U_O_CHDKZ_Kam_04
5, CUP_U_O_CHDKZ_Kam_05
5, CUP_U_O_CHDKZ_Kam_06
5, CUP_U_O_CHDKZ_Kam_07
5, CUP_U_O_CHDKZ_Kam_08

> MilitaryBackpacks
15, B_Carryall_ocamo
15, B_Carryall_oucamo
15, B_Carryall_mcamo
18, B_Carryall_oli
18, B_Carryall_khk
19, B_Carryall_cbr
19, B_Carryall_ghex_F  
6, B_Bergen_Base_F				
6, B_Bergen_mcamo_F              
6, B_Bergen_dgtl_F               
6, B_Bergen_hex_F                
6, B_Bergen_tna_F  
5, CUP_B_CDF_MedicPack
5, CUP_B_CDF_RPG_Backpack
5, CUP_B_CDF_EngineerPack
5, CUP_B_CDF_MGPack
5, CUP_B_UN_MedicPack
5, CUP_B_UN_RPG_Backpack
5, CUP_B_UN_EngineerPack
5, CUP_B_UN_MGPack
5, CUP_B_UNO_AlicePack_Khaki_AmmoAK74
5, CUP_B_UN_AlicePack_Khaki_AmmoMG
5, CUP_B_INS_Backpack_Medic
5, CUP_B_INS_RPG_Backpack
5, CUP_B_INS_Backpack_AR
5, CUP_B_INS_Backpack_MG
5, CUP_B_INS_AlicePack_Exp
5, CUP_B_INS_AlicePack_Mines
5, CUP_B_INS_AlicePack_Engineer
5, CUP_B_INS_AlicePack_Ammo

> MilitaryVests
10, V_PlateCarrier1_blk
10, V_PlateCarrier1_rgr
10, V_PlateCarrier2_rgr
10, V_PlateCarrier3_rgr
10, V_PlateCarrierGL_rgr
10, V_PlateCarrierIA1_dgtl
10, V_PlateCarrierIA2_dgtl
10, V_PlateCarrierIAGL_dgtl
10, V_PlateCarrierSpec_rgr
5, V_PlateCarrierL_CTRG
5, V_PlateCarrierH_CTRG
6,  CUP_V_B_USArmy_PilotVest
6,  CUP_V_B_RangerVest
6,  CUP_V_B_Interceptor_Rifleman
6,  CUP_V_B_MTV
6,  CUP_V_B_MTV_Patrol
6,  CUP_V_B_MTV_Pouches
6,  CUP_V_B_MTV_noCB
6,  CUP_V_B_MTV_Marksman
6,  CUP_V_B_MTV_PistolBlack
6,  CUP_V_B_MTV_LegPouch
6,  CUP_V_B_MTV_MG
6,  CUP_V_B_MTV_Mine
6,  CUP_V_B_MTV_TL
6,  CUP_V_B_PilotVest
6,  CUP_V_B_RRV_TL
6,  CUP_V_B_RRV_Officer
6,  CUP_V_B_RRV_Medic
6,  CUP_V_B_RRV_DA1
6,  CUP_V_B_RRV_DA2
6,  CUP_V_B_RRV_MG
6,  CUP_V_B_RRV_Light
6,  CUP_V_B_RRV_Scout
6,  CUP_V_B_RRV_Scout2
6,  CUP_V_B_RRV_Scout3
6,  CUP_V_B_Eagle_SPC_Rifleman
6,  CUP_V_B_Eagle_SPC_Empty
6,  CUP_V_B_Eagle_SPC_Patrol
6,  CUP_V_B_Eagle_SPC_GL
6,  CUP_V_B_Eagle_SPC_MG
6,  CUP_V_B_Eagle_SPC_AR
6,  CUP_V_B_Eagle_SPC_AT
6,  CUP_V_B_Eagle_SPC_Corpsman
6,  CUP_V_B_Eagle_SPC_Crew
6,  CUP_V_B_Eagle_SPC_DMR
6,  CUP_V_B_Eagle_SPC_Officer
6,  CUP_V_B_Eagle_SPC_RTO
6,  CUP_V_B_Eagle_SPC_SL
6,  CUP_V_B_Eagle_SPC_Scout
6,  CUP_V_B_Eagle_SPC_TL
6,  CUP_V_B_LHDVest_Blue
6,  CUP_V_B_LHDVest_Brown
6,  CUP_V_B_LHDVest_Green
6,  CUP_V_B_LHDVest_Red
6,  CUP_V_B_LHDVest_Violet
6,  CUP_V_B_LHDVest_White
6,  CUP_V_B_LHDVest_Yellow
6,  CUP_V_C_Police_Holster
6,  CUP_V_BAF_Osprey_Mk2_DDPM_Empty
6,  CUP_V_BAF_Osprey_Mk2_DDPM_Pilot
6,  CUP_V_BAF_Osprey_Mk2_DDPM_Scout
6,  CUP_V_BAF_Osprey_Mk2_DDPM_Crewman
6,  CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1
6,  CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2
6,  CUP_V_BAF_Osprey_Mk2_DDPM_Grenadier
6,  CUP_V_BAF_Osprey_Mk2_DDPM_Sapper
6,  CUP_V_BAF_Osprey_Mk2_DDPM_Medic
6,  CUP_V_BAF_Osprey_Mk2_DDPM_Officer
6,  CUP_V_BAF_Osprey_Mk2_DPM_Empty
6,  CUP_V_BAF_Osprey_Mk2_DPM_Pilot
6,  CUP_V_BAF_Osprey_Mk2_DPM_Scout
6,  CUP_V_BAF_Osprey_Mk2_DPM_Crewman
6,  CUP_V_BAF_Osprey_Mk2_DPM_Soldier1
6,  CUP_V_BAF_Osprey_Mk2_DPM_Soldier2
6,  CUP_V_BAF_Osprey_Mk2_DPM_Grenadier
6,  CUP_V_BAF_Osprey_Mk2_DPM_Sapper
6,  CUP_V_BAF_Osprey_Mk2_DPM_Medic
6,  CUP_V_BAF_Osprey_Mk2_DPM_Officer
6,  CUP_V_BAF_Osprey_Mk4_MTP_Grenadier
6,  CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner
6,  CUP_V_BAF_Osprey_Mk4_MTP_Rifleman
6,  CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader
6,  CUP_V_CDF_6B3_1_Green
6,  CUP_V_CDF_6B3_1_MNT
6,  CUP_V_CDF_6B3_1_DST
6,  CUP_V_CDF_6B3_1_FST
6,  CUP_V_CDF_6B3_2_Green
6,  CUP_V_CDF_6B3_2_MNT
6,  CUP_V_CDF_6B3_2_DST
6,  CUP_V_CDF_6B3_2_FST
6,  CUP_V_CDF_6B3_3_Green
6,  CUP_V_CDF_6B3_3_MNT
6,  CUP_V_CDF_6B3_3_DST
6,  CUP_V_CDF_6B3_3_FST
6,  CUP_V_CDF_6B3_4_Green
6,  CUP_V_CDF_6B3_4_MNT
6,  CUP_V_CDF_6B3_4_DST
6,  CUP_V_CDF_6B3_4_FST
6,  CUP_V_CDF_6B3_5_Green
6,  CUP_V_CDF_6B3_5_MNT
6,  CUP_V_CDF_6B3_5_DST
6,  CUP_V_CDF_6B3_5_FST
6,  CUP_V_CDF_CrewBelt
6,  CUP_V_CDF_OfficerBelt
6,  CUP_V_CDF_OfficerBelt2
6,  CUP_V_O_Ins_Carrier_Rig
6,  CUP_V_O_Ins_Carrier_Rig_MG
6,  CUP_V_O_Ins_Carrier_Rig_Com
6,  CUP_V_O_Ins_Carrier_Rig_Light
6,  CUP_V_B_Delta_1
6,  CUP_V_B_Delta_2

> MilitaryHeadgear
4, Exile_Headgear_GasMask
4, H_MilCap_ocamo
4, H_MilCap_mcamo
4, H_MilCap_oucamo
4, H_MilCap_blue
4, H_MilCap_rucamo
4, H_MilCap_dgtl
3, H_HelmetB
3, H_HelmetB_paint
3, H_HelmetB_light
3, H_HelmetB_plain_blk
3, H_HelmetSpecB
3, H_HelmetSpecB_paint1
3, H_HelmetSpecB_paint2
3, H_HelmetSpecB_blk
3, H_HelmetIA
2, H_HelmetIA_net
2, H_HelmetIA_camo
2, H_HelmetB_grass
2, H_HelmetB_snakeskin
2, H_HelmetB_desert
2, H_HelmetB_black
2, H_HelmetB_sand
2, H_HelmetB_light_grass
2, H_HelmetB_light_snakeskin
2, H_HelmetB_light_desert
2, H_HelmetB_light_black
2, H_HelmetB_light_sand
1, H_HelmetCrew_B
1, H_HelmetCrew_O
1, H_HelmetCrew_I
1, H_PilotHelmetFighter_B
1, H_PilotHelmetFighter_O
1, H_PilotHelmetFighter_I
1, H_PilotHelmetHeli_B
1, H_PilotHelmetHeli_O
1, H_PilotHelmetHeli_I
1, H_HelmetB_camo
1, H_CrewHelmetHeli_B
1, H_CrewHelmetHeli_O
1, H_CrewHelmetHeli_I
2, H_BandMask_khk
2, H_BandMask_reaper
2, H_BandMask_demon
1, H_HelmetO_oucamo
1, H_HelmetLeaderO_oucamo
1, H_HelmetSpecO_ocamo
1, H_HelmetSpecO_blk
1, H_HelmetO_ocamo
1, H_HelmetLeaderO_ocamo
1, H_HelmetO_ghex_F 
2, H_Helmet_Skate    
2, H_HelmetB_Enh_tna_F        
2, H_HelmetB_Light_tna_F 	
2, H_Beret_gen_F  
2, H_HelmetB_tna_F   		 
2, H_HelmetSpecO_ghex_F       
2, H_HelmetLeaderO_ghex_F
2, H_HelmetCrew_O_ghex_F 
2, H_HelmetB_TI_tna_F
2, CUP_H_C_Policecap_01
2, CUP_H_C_Fireman_Helmet_01
2, CUP_H_BAF_Officer_Beret
2, CUP_H_BAF_Officer_Beret_PRR_U
2, CUP_H_BAF_Officer_Beret_PRR_O
2, CUP_H_BAF_Helmet_Pilot
2, CUP_H_BAF_Crew_Helmet_DDPM
2, CUP_H_BAF_Helmet_1_DDPM
2, CUP_H_BAF_Helmet_2_DDPM
2, CUP_H_BAF_Helmet_Net_2_DDPM
2, CUP_H_BAF_Helmet_3_DDPM
2, CUP_H_BAF_Helmet_4_DDPM
2, CUP_H_BAF_Crew_Helmet_DPM
2, CUP_H_BAF_Helmet_1_DPM
2, CUP_H_BAF_Helmet_Net_2_DPM
2, CUP_H_BAF_Helmet_2_DPM
2, CUP_H_BAF_Helmet_3_DPM
2, CUP_H_BAF_Helmet_4_DPM
2, CUP_H_BAF_Crew_Helmet_MTP
2, CUP_H_BAF_Helmet_Net_2_MTP
2, CUP_H_BAF_Helmet_1_MTP
2, CUP_H_BAF_Helmet_2_MTP
2, CUP_H_BAF_Helmet_3_MTP
2, CUP_H_BAF_Helmet_4_MTP
2, CUP_H_USArmy_HelmetMICH
2, CUP_H_USArmy_HelmetMICH_ESS
2, CUP_H_USArmy_HelmetMICH_earpro
2, CUP_H_USArmy_HelmetMICH_earpro_ess
2, CUP_H_USArmy_HelmetMICH_headset
2, CUP_H_USArmy_HelmetMICH_headset_ess
2, CUP_H_USArmy_HelmetMICH_wdl
2, CUP_H_USArmy_Helmet_ECH1_Sand
2, CUP_H_USArmy_Helmet_ECH2_Sand
2, CUP_H_USArmy_Helmet_ECH1_Black
2, CUP_H_USArmy_Helmet_ECH2_Black
2, CUP_H_USArmy_Helmet_ECH1_Green
2, CUP_H_USArmy_Helmet_ECH2_GREEN
2, CUP_H_USArmy_Helmet_Pro
2, CUP_H_USArmy_Helmet_Pro_gog
2, CUP_H_USArmy_Helmet_M1_Olive
2, CUP_H_USArmy_Helmet_M1_Vine
2, CUP_H_USArmy_Helmet_M1_m81
2, CUP_H_USArmy_Helmet_M1_btp
2, CUP_H_RACS_Helmet_DES
2, CUP_H_RACS_Helmet_Goggles_DES
2, CUP_H_RACS_Helmet_Headset_DES
2, CUP_H_RACS_Helmet_DPAT
2, CUP_H_RACS_Helmet_Goggles_DPAT
2, CUP_H_RACS_Helmet_Headset_DPAT
2, CUP_H_RACS_Helmet_wdl
2, CUP_H_RACS_Helmet_Goggles_wdl
2, CUP_H_RACS_Helmet_Headset_wdl
2, CUP_H_RACS_Helmet_mech
2, CUP_H_RACS_Helmet_Goggles_mech
2, CUP_H_RACS_Helmet_Headset_mech
2, CUP_H_RACS_Helmet_olive
2, CUP_H_RACS_Helmet_tan 

> Ghillies
1, U_B_GhillieSuit			// Ghillie Suit [NATO]
1, U_O_GhillieSuit			// Ghillie Suit [CSAT]
1, U_I_GhillieSuit			// Ghillie Suit [AAF]

> DLCGhillies
1, U_B_FullGhillie_ard		
1, U_B_FullGhillie_lsh
1, U_B_FullGhillie_sard
1, U_O_FullGhillie_ard
1, U_O_FullGhillie_lsh
1, U_O_FullGhillie_sard
1, U_I_FullGhillie_ard
1, U_I_FullGhillie_lsh
1, U_I_FullGhillie_sard
5, U_B_T_Sniper_F                   // Ghillie Suit (Tropic) [NATO]
5, U_B_T_Soldier_F        			// Ghillie Suit (Tropic) [NATO]
5, U_B_T_FullGhillie_tna_F          // Full Ghillie (Jungle) [NATO]
5, U_O_T_Sniper_F                   // Ghillie Suit (Green Hex) [CSAT]
5, U_O_T_FullGhillie_tna_F          // Full Ghillie (Jungle) [CSAT]

> DLCVests
1, V_PlateCarrierGL_blk
1, V_PlateCarrierGL_mtp
1, V_PlateCarrierGL_rgr
1, V_PlateCarrierIAGL_dgtl
1, V_PlateCarrierIAGL_oli
1, V_PlateCarrierSpec_blk
1, V_PlateCarrierSpec_mtp
1, V_PlateCarrierSpec_rgr
1, V_TacChestrig_grn_F         
1, V_TacChestrig_oli_F         
1, V_TacChestrig_cbr_F         
1, V_PlateCarrier1_tna_F       
1, V_PlateCarrier2_tna_F       
1, V_PlateCarrierSpec_tna_F    
1, V_PlateCarrierGL_tna_F      
1, V_HarnessO_ghex_F           
1, V_HarnessOGL_ghex_F         
1, V_BandollierB_ghex_F        
1, V_TacVest_gen_F             
1, V_PlateCarrier1_rgr_noflag_F
1, V_PlateCarrier2_rgr_noflag_F

> Rebreathers
1, V_RebreatherB
1, V_RebreatherIR
1, V_RebreatherIA

///////////////////////////////////////////////////////////////////////////////
// Other Items
///////////////////////////////////////////////////////////////////////////////

> MedicalItems
2, Exile_Item_InstaDoc
5, Exile_Item_Bandage
10, Exile_Item_Vishpirin
10, Exile_Item_Heatpack

> IndustrialItems
1, Exile_Item_ThermalScannerPro
2, Exile_Item_Knife
3, Exile_Item_Cement
3, Exile_Item_FloodLightKit
3, Exile_Item_PortableGeneratorKit
4, Exile_Item_CamoTentKit
4, Exile_Item_MetalBoard
4, Exile_Item_Foolbox
4, Exile_Item_Sand
5, Exile_Item_Grinder
5, Exile_Item_MetalScrews
5, Exile_Melee_SledgeHammer
8, Exile_Item_ExtensionCord
9, Exile_Item_LightBulb
10, Exile_Item_WaterCanisterEmpty
10, Exile_Melee_Shovel
11, Exile_Item_JunkMetal
13, Exile_Item_Handsaw
13, Exile_Item_Pliers
13, Exile_Item_ScrewDriver
22, Exile_Melee_Axe

> Vehicle
40, Exile_Item_FuelCanisterFull
50, Exile_Item_FuelCanisterEmpty
10, Exile_Item_DuctTape

// Throwables

> Chemlights
1, Chemlight_blue
1, Chemlight_green
1, Chemlight_red
1, Chemlight_yellow

> RoadFlares
1, FlareGreen_F
1, FlareRed_F
1, FlareWhite_F
1, FlareYellow_F

> SmokeGrenades
1, SmokeShell
1, SmokeShellRed
1, SmokeShellGreen
1, SmokeShellYellow
1, SmokeShellPurple
1, SmokeShellBlue
1, SmokeShellOrange

> Restraints
1, Exile_Item_ZipTie

> Electronics
1, Exile_Item_Laptop
1, Exile_Item_BaseCameraKit

 // Trash or items not currently being used

> Trash
4, Exile_Item_Can_Empty
4, Exile_Item_ToiletPaper
4, Exile_Item_PlasticBottleEmpty			// Nothing :)
1, Exile_Item_Magazine01
1, Exile_Item_Magazine02
1, Exile_Item_Magazine03
1, Exile_Item_Magazine04

> Unused
3, Exile_Item_CordlessScrewdriver
3, Exile_Item_FireExtinguisher
10, Exile_Item_OilCanister
14, Exile_Item_Hammer
5, Exile_Item_Carwheel
5, Exile_Item_SleepingMat
5, Exile_Item_Defibrillator
5, Exile_Item_Wrench
4, Exile_Item_Rope