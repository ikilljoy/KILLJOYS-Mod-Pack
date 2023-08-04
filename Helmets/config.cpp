//HELMETS
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
	class KJHelmets
	{
		dir="Helmets";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Helmets";
		credits="";
		author="KILLJOY";
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
					"Helmets/scripts/4_World"
				};
			};
		};
	};
};
class cfgVehicles
{
//---------------------BallisticHelmet-------------------------------
	class BallisticHelmet_ColorBase;
	class KMP_BallisticHelm_Multicam_co: BallisticHelmet_ColorBase
	{
		scope=2;
		displayName="Multicam BallisticHelmet";
		descriptionShort="Multicam BallisticHelmet - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\KMP_BallisticHelm_Multicam_co.paa",
			"Helmets\Textures\KMP_BallisticHelm_Multicam_co.paa",
			"Helmets\Textures\KMP_BallisticHelm_Multicam_co.paa"
		};
	};
	class KMP_BallisticHelm_Snow_co: BallisticHelmet_ColorBase
	{
		scope=2;
		displayName="Snow BallisticHelmet";
		descriptionShort="Snow BallisticHelmet - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\KMP_BallisticHelm_Snow_co.paa",
			"Helmets\Textures\KMP_BallisticHelm_Snow_co.paa",
			"Helmets\Textures\KMP_BallisticHelm_Snow_co.paa"
		};
	};
	class KMP_BallisticHelm_SnowCam_co: BallisticHelmet_ColorBase
	{
		scope=2;
		displayName="Snow BallisticHelmet";
		descriptionShort="Snow BallisticHelmet - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\KMP_BallisticHelm_SnowCam_co.paa",
			"Helmets\Textures\KMP_BallisticHelm_SnowCam_co.paa",
			"Helmets\Textures\KMP_BallisticHelm_SnowCam_co.paa"
		};
	};
//---------------------Mich2001Helmet-------------------------------
	class Mich2001Helmet;
	class KMP_mich2001_black: Mich2001Helmet
	{
		displayName="Black Mich2001 Helmet";
		descriptionShort="Black Mich2001 Helmet - KILLJOYS MOD PACK";
		model="\DZ\characters\headgear\Mich2001_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\KMP_mich2001_black.paa",
			"Helmets\Textures\KMP_mich2001_black.paa",
			"Helmets\Textures\KMP_mich2001_black.paa"
		};
	};
	class KMP_mich2001_Pantera: Mich2001Helmet
	{
		displayName="Pantera Mich2001 Helmet";
		descriptionShort="KMP - Pantera Mich2001 Helmet - KILLJOYS MOD PACK";
		model="\DZ\characters\headgear\Mich2001_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\KMP_mich2001_Pantera.paa",
			"Helmets\Textures\KMP_mich2001_Pantera.paa",
			"Helmets\Textures\KMP_mich2001_Pantera.paa"
		};
	};
    class KMP_Mich2001_ToxicAutumn: Mich2001Helmet
    {
        displayName="ToxicAutumn Mich2001 Helmet";
        descriptionShort="KMP - ToxicAutumn Mich2001 Helmet by Phaedrus - KILLJOYS MOD PACK";
        model="\DZ\characters\headgear\Mich2001_g.p3d";
        scope=2;
        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[]=
        {
            "Helmets\Textures\KMP_Mich2001_ToxicAutumn.paa",
            "Helmets\Textures\KMP_Mich2001_ToxicAutumn.paa",
            "Helmets\Textures\KMP_Mich2001_ToxicAutumn.paa"
        };
    };
	class KMP_Mich2001_HexCam: Mich2001Helmet
    {
        displayName="HexCam Mich2001 Helmet";
        descriptionShort="KMP - HexCam Mich2001 Helmet by Phaedrus - KILLJOYS MOD PACK";
        model="\DZ\characters\headgear\Mich2001_g.p3d";
        scope=2;
        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[]=
        {
            "Helmets\Textures\KMP_Mich2001_HexCam.paa",
            "Helmets\Textures\KMP_Mich2001_HexCam.paa",
            "Helmets\Textures\KMP_Mich2001_HexCam.paa"
        };
    };
//---------------------DarkMotoHelmet-------------------------------
	class DarkMotoHelmet_ColorBase;
    class KMP_MotoHelmetSkullVisor_dark_co: DarkMotoHelmet_ColorBase
    {
        displayName="Skull Moto Helmet";
        descriptionShort="Skull Helmet by Vanguard - KILLJOYS MOD PACK";
		scope=2;
        hiddenSelectionsTextures[]=
        {
            "Helmets\Textures\KMP_MotoHelmetSkullVisor_dark_co.paa",
            "Helmets\Textures\KMP_MotoHelmetSkullVisor_dark_co.paa",
            "Helmets\Textures\KMP_MotoHelmetSkullVisor_dark_co.paa"
        };
    };
//---------------------WOLF HELMET-------------------------------
    class Clothing_Base;
   	class KMP_WolfHelmet: Clothing_Base
	{	
		scope=2;
		displayName="Wolf Headdress";
		descriptionShort="Wolf Headdress, Perfect for hunting in cold weather. - KILLJOYS MOD PACK";
		model="\Helmets\Models\WOLFhelmet_g.p3d";
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
			"\Helmets\Textures\WolfHelmet.paa"
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
                        {1.0,{"Helmets\data\Helmet.rvmat", "Helmets\data\Helmet.rvmat"}},
                        {0.7,{"Helmets\data\Helmet.rvmat", "Helmets\data\Helmet.rvmat"}},
                        {0.5,{"Helmets\data\Helmet_damage.rvmat", "Helmets\data\Helmet_damage.rvmat"}},
                        {0.3,{"Helmets\data\Helmet_damage.rvmat", "Helmets\data\Helmet_damage.rvmat"}},
                        {0.0,{"Helmets\data\Helmet_destruct.rvmat", "Helmets\data\Helmet_destruct.rvmat"}}};
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
			male="\Helmets\Models\WOLFhelmet_m.p3d";
			female="\Helmets\Models\WOLFhelmet_f.p3d";
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
//---------------------BEAR HELMET-------------------------------
	class KMP_BearHelmet: Clothing_Base
	{	
		scope=2;
		displayName="Bear Headdress";
		descriptionShort="Bear Headdress, Perfect for hunting in cold weather. - KILLJOYS MOD PACK";
		model="\Helmets\Models\BEARhelmet_g.p3d";
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
			"\Helmets\Textures\BearHelmet.paa"
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
                        {1.0,{"Helmets\data\Helmet.rvmat", "Helmets\data\Helmet.rvmat"}},
                        {0.7,{"Helmets\data\Helmet.rvmat", "Helmets\data\Helmet.rvmat"}},
                        {0.5,{"Helmets\data\Helmet_damage.rvmat", "Helmets\data\Helmet_damage.rvmat"}},
                        {0.3,{"Helmets\data\Helmet_damage.rvmat", "Helmets\data\Helmet_damage.rvmat"}},
                        {0.0,{"Helmets\data\Helmet_destruct.rvmat", "Helmets\data\Helmet_destruct.rvmat"}}};
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
			male="\Helmets\Models\BEARhelmet_m.p3d";
			female="\Helmets\Models\BEARhelmet_f.p3d";
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
//---------------------BRODIE HELMET DEFAULT-------------------------------
	class KMP_M1917brodie: Clothing_Base
	{	
		scope=2;
		displayName="M1917 Brodie Helmet - DEFAULT";
		descriptionShort="DEFAULT POSITION - A WW1 Era M1917 Brodie Helmet, Perfect for trench warfare. You can use a Screwdriver on this helmet to adjust the straps and reposition the helmets angle on your head. - KILLJOYS MOD PACK";
		model="\Helmets\Models\M1917brodiehelmet_g.p3d";
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
			"\Helmets\Textures\M1917brodie.paa"
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
                        {1.0,{"Helmets\data\Helmet.rvmat", "Helmets\data\Helmet.rvmat"}},
                        {0.7,{"Helmets\data\Helmet.rvmat", "Helmets\data\Helmet.rvmat"}},
                        {0.5,{"Helmets\data\Helmet_damage.rvmat", "Helmets\data\Helmet_damage.rvmat"}},
                        {0.3,{"Helmets\data\Helmet_damage.rvmat", "Helmets\data\Helmet_damage.rvmat"}},
                        {0.0,{"Helmets\data\Helmet_destruct.rvmat", "Helmets\data\Helmet_destruct.rvmat"}}};
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
			male="\Helmets\Models\M1917brodiehelmet_m.p3d";
			female="\Helmets\Models\M1917brodiehelmet_f.p3d";
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
//---------------------BRODIE HELMET Sniper
	class KMP_M1917brodieSniper: Clothing_Base
	{	
		scope=2;
		displayName="M1917 Brodie Helmet - SNIPER";
		descriptionShort="SNIPER POSITION - A WW1 Era M1917 Brodie Helmet, Perfect for trench warfare. You can use a Screwdriver on this helmet to adjust the straps and reposition the helmets angle on your head. - KILLJOYS MOD PACK";
		model="\Helmets\Models\M1917brodieSniper_g.p3d";
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
			"\Helmets\Textures\M1917brodieSniper.paa"
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
                        {1.0,{"Helmets\data\Helmet.rvmat", "Helmets\data\Helmet.rvmat"}},
                        {0.7,{"Helmets\data\Helmet.rvmat", "Helmets\data\Helmet.rvmat"}},
                        {0.5,{"Helmets\data\Helmet_damage.rvmat", "Helmets\data\Helmet_damage.rvmat"}},
                        {0.3,{"Helmets\data\Helmet_damage.rvmat", "Helmets\data\Helmet_damage.rvmat"}},
                        {0.0,{"Helmets\data\Helmet_destruct.rvmat", "Helmets\data\Helmet_destruct.rvmat"}}};
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
			male="\Helmets\Models\M1917brodieSniper_m.p3d";
			female="\Helmets\Models\M1917brodieSniper_f.p3d";
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
//---------------------BRODIE HELMET Trench
	class KMP_M1917brodieTrench: Clothing_Base
	{	
		scope=2;
		displayName="M1917 Brodie Helmet - TRENCH";
		descriptionShort="TRENCH POSITION - A WW1 Era M1917 Brodie Helmet, Perfect for trench warfare. You can use a Screwdriver on this helmet to adjust the straps and reposition the helmets angle on your head. - KILLJOYS MOD PACK";
		model="\Helmets\Models\M1917brodieTrench_g.p3d";
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
			"\Helmets\Models\M1917brodieTrench.paa"
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
                        {1.0,{"Helmets\data\Helmet.rvmat", "Helmets\data\Helmet.rvmat"}},
                        {0.7,{"Helmets\data\Helmet.rvmat", "Helmets\data\Helmet.rvmat"}},
                        {0.5,{"Helmets\data\Helmet_damage.rvmat", "Helmets\data\Helmet_damage.rvmat"}},
                        {0.3,{"Helmets\data\Helmet_damage.rvmat", "Helmets\data\Helmet_damage.rvmat"}},
                        {0.0,{"Helmets\data\Helmet_destruct.rvmat", "Helmets\data\Helmet_destruct.rvmat"}}};
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
			male="\Helmets\Models\M1917brodieTrench_m.p3d";
			female="\Helmets\Models\M1917brodieTrench_f.p3d";
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
//German WW1 Helmet
    class KMP_GermanWW1_Green: Clothing_Base
	{	
		scope=2;
		displayName="German WW1 - Green";
		descriptionShort="Stahlhelm WW1 - German military headgear made of steel, which is primarily intended to provide protection against shrapnel and fragments of grenades. The term Stahlhelm refers both to a generic steel helmet, and more specifically to the distinctive German military design. - KILLJOYS MOD PACK";
		model="\Helmets\Models\GermanWW1_g.p3d";
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
			"\Helmets\Textures\GermanWW1Helm_Green.paa"
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
                        {1.0,{"Helmets\data\Helmet.rvmat", "Helmets\data\Helmet.rvmat"}},
                        {0.7,{"Helmets\data\Helmet.rvmat", "Helmets\data\Helmet.rvmat"}},
                        {0.5,{"Helmets\data\Helmet_damage.rvmat", "Helmets\data\Helmet_damage.rvmat"}},
                        {0.3,{"Helmets\data\Helmet_damage.rvmat", "Helmets\data\Helmet_damage.rvmat"}},
                        {0.0,{"Helmets\data\Helmet_destruct.rvmat", "Helmets\data\Helmet_destruct.rvmat"}}};
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
			male="\Helmets\Models\GermanWW1_m.p3d";
			female="\Helmets\Models\GermanWW1_f.p3d";
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
//German WW1 Black
    class KMP_GermanWW1_Black: Clothing_Base
	{	
		scope=2;
		displayName="German WW1 - Black";
		descriptionShort="Stahlhelm WW1 - German military headgear made of steel, which is primarily intended to provide protection against shrapnel and fragments of grenades. The term Stahlhelm refers both to a generic steel helmet, and more specifically to the distinctive German military design. - KILLJOYS MOD PACK";
		model="\Helmets\Models\GermanWW1_g.p3d";
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
			"\Helmets\Textures\GermanWW1Helm_Black.paa"
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
                        {1.0,{"Helmets\data\Helmet.rvmat", "Helmets\data\Helmet.rvmat"}},
                        {0.7,{"Helmets\data\Helmet.rvmat", "Helmets\data\Helmet.rvmat"}},
                        {0.5,{"Helmets\data\Helmet_damage.rvmat", "Helmets\data\Helmet_damage.rvmat"}},
                        {0.3,{"Helmets\data\Helmet_damage.rvmat", "Helmets\data\Helmet_damage.rvmat"}},
                        {0.0,{"Helmets\data\Helmet_destruct.rvmat", "Helmets\data\Helmet_destruct.rvmat"}}};
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
			male="\Helmets\Models\GermanWW1_m.p3d";
			female="\Helmets\Models\GermanWW1_f.p3d";
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
};		
