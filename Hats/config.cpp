//HATS
class CfgPatches
{
	class KilljoysModPack
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Belts",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Gear_Containers",
			"DZ_Characters_Headgear",
			"DZ_Characters_Vests",
			"DZ_Data",
			"DZ_Characters_Shoes",
			"DZ_Gear_Food",
			"DZ_Gear_Drinks"
		};
	};
};
class CfgMods
{
	class KMP_Hats
	{
		dir="Hats";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="KMP_Hats";
		credits="";
		author="";
		authorID="0";
		version="1";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"KilljoysModPack/Hats/scripts/4_World"
				};
			};
		};
	};
};
class cfgVehicles
{
//---------------------BOONIE HAT-------------------------------
	class BoonieHat_ColorBase;
	class KMP_BoonieHat_Sitko1: BoonieHat_ColorBase
	{
		scope=2;
		displayName="Sitko Boonie";
		descriptionShort="Sitko Boonie - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Hats\Textures\KMP_BoonieHat_Sitko1.paa",
			"Hats\Textures\KMP_BoonieHat_Sitko1.paa",
			"Hats\Textures\KMP_BoonieHat_Sitko1.paa"
		};
	};
	class KMP_BoonieHat_Sitko2: BoonieHat_ColorBase
	{
		scope=2;
		displayName="Sitko Boonie";
		descriptionShort="Sitko Boonie - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Hats\Textures\KMP_BoonieHat_Sitko2.paa",
			"Hats\Textures\KMP_BoonieHat_Sitko2.paa",
			"Hats\Textures\KMP_BoonieHat_Sitko2.paa"
		};
	};
	class KMP_Realtree_BoonieHat: BoonieHat_ColorBase
	{
		scope=2;
		displayName="Realtree Boonie";
		descriptionShort="Realtree Boonie - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Hats\Textures\KMP_Realtree_BoonieHat.paa",
			"Hats\Textures\KMP_Realtree_BoonieHat.paa",
			"Hats\Textures\KMP_Realtree_BoonieHat.paa"
		};
	};
	class KMP_Flecktarn_BoonieHat: BoonieHat_ColorBase
	{
		scope=2;
		displayName="Flecktarn Boonie";
		descriptionShort="Flecktarn Boonie - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Hats\Textures\KMP_Flecktarn_BoonieHat.paa",
			"Hats\Textures\KMP_Flecktarn_BoonieHat.paa",
			"Hats\Textures\KMP_Flecktarn_BoonieHat.paa"
		};
	};
	class KMP_BoonieHat_cadpat_co: BoonieHat_ColorBase
	{
		scope=2;
		displayName="CADPAT Boonie";
		descriptionShort="CADPAT Boonie - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Hats\Textures\KMP_BoonieHat_cadpat_co.paa",
			"Hats\Textures\KMP_BoonieHat_cadpat_co.paa",
			"Hats\Textures\KMP_BoonieHat_cadpat_co.paa"
		};
	};
	class KMP_BoonieHat_multicam_co: BoonieHat_ColorBase
	{
		scope=2;
		displayName="Multicam Boonie";
		descriptionShort="Multicam Boonie - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Hats\Textures\KMP_BoonieHat_multicam_co.paa",
			"Hats\Textures\KMP_BoonieHat_multicam_co.paa",
			"Hats\Textures\KMP_BoonieHat_multicam_co.paa"
		};
	};
	class KMP_BoonieHat_Snow_co: BoonieHat_ColorBase
	{
		scope=2;
		displayName="Snow Boonie";
		descriptionShort="Snow Boonie - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Hats\Textures\KMP_BoonieHat_Snow_co.paa",
			"Hats\Textures\KMP_BoonieHat_Snow_co.paa",
			"Hats\Textures\KMP_BoonieHat_Snow_co.paa"
		};
	};
	class KMP_BoonieHat_ucp_co: BoonieHat_ColorBase
	{
		scope=2;
		displayName="UCP Boonie";
		descriptionShort="UCP Boonie - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Hats\Textures\KMP_BoonieHat_ucp_co.paa",
			"Hats\Textures\KMP_BoonieHat_ucp_co.paa",
			"Hats\Textures\KMP_BoonieHat_ucp_co.paa"
		};
	};
	class KMP_BoonieHat_Pantera: BoonieHat_ColorBase
	{
		scope=2;
		displayName="Pantera Boonie";
		descriptionShort="Pantera Boonie - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Hats\Textures\KMP_BoonieHat_Pantera.paa",
			"Hats\Textures\KMP_BoonieHat_Pantera.paa",
			"Hats\Textures\KMP_BoonieHat_Pantera.paa"
		};
	};
//--------------------- BASEBALL HAT -------------------------------
	class BaseballCap_ColorBase;
	class KMP_MagaHat_co: BaseballCap_ColorBase
	{
		scope=2;
		displayName="MAGA Hat";
		descriptionShort="MAGA Hat - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Hats\Textures\KMP_MagaHat_co.paa",
			"Hats\Textures\KMP_MagaHat_co.paa",
			"Hats\Textures\KMP_MagaHat_co.paa"
		};
	};
//---------------------USHANKA-------------------------------
	class Ushanka_ColorBase;
	class KMP_Ushanka_Snow_co: Ushanka_ColorBase
	{
		scope=2;
		displayName="Snow Ushanka";
		descriptionShort="Snow Ushanka - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Hats\Textures\KMP_Ushanka_Snow_co.paa",
			"Hats\Textures\KMP_Ushanka_Snow_co.paa",
			"Hats\Textures\KMP_Ushanka_Snow_co.paa"
		};
	};
	class KMP_Ushanka_Sitko1: Ushanka_ColorBase
	{
		scope=2;
		displayName="Sitko Ushanka";
		descriptionShort="Sitko Ushanka - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Hats\Textures\KMP_Ushanka_Sitko1.paa",
			"Hats\Textures\KMP_Ushanka_Sitko1.paa",
			"Hats\Textures\KMP_Ushanka_Sitko1.paa"
		};
	};
	class KMP_Ushanka_Sitko2: Ushanka_ColorBase
	{
		scope=2;
		displayName="Sitko Ushanka";
		descriptionShort="Sitko Ushanka - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Hats\Textures\KMP_Ushanka_Sitko2.paa",
			"Hats\Textures\KMP_Ushanka_Sitko2.paa",
			"Hats\Textures\KMP_Ushanka_Sitko2.paa"
		};
	};
//---------------------PATROL CAPS-------------------------------
    class Clothing_Base;
   	class KMP_PatrolCap_Woodland: Clothing_Base
	{	
		scope=2;
		displayName="Patrol Cap Woodland";
		descriptionShort="Patrol Cap Woodland. - KILLJOYS MOD PACK";
		model="Hats\Models\PatrolCap_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.80;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Hats\Textures\PatrolCap_Woodland.paa"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = 
                    {
                        {1.0,{"Hats\data\Helmet.rvmat", "Hats\data\Helmet.rvmat"}},
                        {0.7,{"Hats\data\Helmet.rvmat", "Hats\data\Helmet.rvmat"}},
                        {0.5,{"Hats\data\Helmet_damage.rvmat", "Hats\data\Helmet_damage.rvmat"}},
                        {0.3,{"Hats\data\Helmet_damage.rvmat", "Hats\data\Helmet_damage.rvmat"}},
                        {0.0,{"Hats\data\Helmet_destruct.rvmat", "Hats\data\Helmet_destruct.rvmat"}}};
                };
            };

			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Hats\Models\PatrolCap_m.p3d";
			female="Hats\Models\PatrolCap_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class KMP_PatrolCap_ODG: Clothing_Base
	{	
		scope=2;
		displayName="Patrol Cap Woodland";
		descriptionShort="Patrol Cap Woodland. - KILLJOYS MOD PACK";
		model="Hats\Models\PatrolCap_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.80;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Hats\Textures\PatrolCap_ODG.paa"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = 
                    {
                        {1.0,{"Hats\data\Helmet.rvmat", "Hats\data\Helmet.rvmat"}},
                        {0.7,{"Hats\data\Helmet.rvmat", "Hats\data\Helmet.rvmat"}},
                        {0.5,{"Hats\data\Helmet_damage.rvmat", "Hats\data\Helmet_damage.rvmat"}},
                        {0.3,{"Hats\data\Helmet_damage.rvmat", "Hats\data\Helmet_damage.rvmat"}},
                        {0.0,{"Hats\data\Helmet_destruct.rvmat", "Hats\data\Helmet_destruct.rvmat"}}};
                };
            };

			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Hats\Models\PatrolCap_m.p3d";
			female="Hats\Models\PatrolCap_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	//
	class KMP_PatrolCap_BLK: Clothing_Base
	{	
		scope=2;
		displayName="Patrol Cap Woodland";
		descriptionShort="Patrol Cap Woodland. - KILLJOYS MOD PACK";
		model="Hats\Models\PatrolCap_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.80;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Hats\Textures\PatrolCap_BLK.paa"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = 
                    {
                        {1.0,{"Hats\data\Helmet.rvmat", "Hats\data\Helmet.rvmat"}},
                        {0.7,{"Hats\data\Helmet.rvmat", "Hats\data\Helmet.rvmat"}},
                        {0.5,{"Hats\data\Helmet_damage.rvmat", "Hats\data\Helmet_damage.rvmat"}},
                        {0.3,{"Hats\data\Helmet_damage.rvmat", "Hats\data\Helmet_damage.rvmat"}},
                        {0.0,{"Hats\data\Helmet_destruct.rvmat", "Hats\data\Helmet_destruct.rvmat"}}};
                };
            };

			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Hats\Models\PatrolCap_m.p3d";
			female="Hats\Models\PatrolCap_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	//
	class KMP_PatrolCap_MtnCam: Clothing_Base
	{	
		scope=2;
		displayName="Patrol Cap Mountain Camo";
		descriptionShort="Patrol Cap Mountain Camo. - KILLJOYS MOD PACK";
		model="Hats\Models\PatrolCap_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.80;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Hats\Textures\PatrolCap_MtnCam.paa"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = 
                    {
                        {1.0,{"Hats\data\Helmet.rvmat", "Hats\data\Helmet.rvmat"}},
                        {0.7,{"Hats\data\Helmet.rvmat", "Hats\data\Helmet.rvmat"}},
                        {0.5,{"Hats\data\Helmet_damage.rvmat", "Hats\data\Helmet_damage.rvmat"}},
                        {0.3,{"Hats\data\Helmet_damage.rvmat", "Hats\data\Helmet_damage.rvmat"}},
                        {0.0,{"Hats\data\Helmet_destruct.rvmat", "Hats\data\Helmet_destruct.rvmat"}}};
                };
            };

			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Hats\Models\PatrolCap_m.p3d";
			female="Hats\Models\PatrolCap_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	//
	class KMP_PatrolCap_PinkTree: Clothing_Base
	{	
		scope=2;
		displayName="Patrol Cap Pink Realtree";
		descriptionShort="Patrol Cap Pink Realtree. - KILLJOYS MOD PACK";
		model="Hats\Models\PatrolCap_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.80;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Hats\Textures\PatrolCap_PinkTree.paa"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = 
                    {
                        {1.0,{"Hats\data\Helmet.rvmat", "Hats\data\Helmet.rvmat"}},
                        {0.7,{"Hats\data\Helmet.rvmat", "Hats\data\Helmet.rvmat"}},
                        {0.5,{"Hats\data\Helmet_damage.rvmat", "Hats\data\Helmet_damage.rvmat"}},
                        {0.3,{"Hats\data\Helmet_damage.rvmat", "Hats\data\Helmet_damage.rvmat"}},
                        {0.0,{"Hats\data\Helmet_destruct.rvmat", "Hats\data\Helmet_destruct.rvmat"}}};
                };
            };

			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Hats\Models\PatrolCap_m.p3d";
			female="Hats\Models\PatrolCap_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	//
	class KMP_PatrolCap_PurpleCam: Clothing_Base
	{	
		scope=2;
		displayName="Patrol Cap PurpleCam";
		descriptionShort="Patrol Cap PurpleCam. - KILLJOYS MOD PACK";
		model="Hats\Models\PatrolCap_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.80;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Hats\Textures\PatrolCap_PurpleCam.paa"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = 
                    {
                        {1.0,{"Hats\data\Helmet.rvmat", "Hats\data\Helmet.rvmat"}},
                        {0.7,{"Hats\data\Helmet.rvmat", "Hats\data\Helmet.rvmat"}},
                        {0.5,{"Hats\data\Helmet_damage.rvmat", "Hats\data\Helmet_damage.rvmat"}},
                        {0.3,{"Hats\data\Helmet_damage.rvmat", "Hats\data\Helmet_damage.rvmat"}},
                        {0.0,{"Hats\data\Helmet_destruct.rvmat", "Hats\data\Helmet_destruct.rvmat"}}};
                };
            };

			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Hats\Models\PatrolCap_m.p3d";
			female="Hats\Models\PatrolCap_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	//
};		
