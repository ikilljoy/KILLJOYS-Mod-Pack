class CfgPatches
{
	class Canning
	{
		units[]=
		{
			"Jar",
			"2Many2List_FUKITDOOD"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Characters_Headgear",
			"DZ_Gear_Food",
			"DZ_Data"
		};
	};
};
class BaseFoodStageTransitions;
class MeatStageTransitions;
class FruitStageTransitions;
class AnimalCorpsesStageTransitions;
class MushroomsStageTransitions;
class NotCookable;
class FoodAnimationSources;
class NutritionModifiers;
class CfgAddons
{
	class PreloadBanks
	{
	};
	class PreloadAddons
	{
		class DayZ
		{
			list[]=
			{
				"DZ_Data",
				"DZ_Gear",
				"DZ_Gear_Cooking",
				"DZ_Gear_Consumables",
				"DZ_Gear_Drinks",
				"DZ_Gear_Food",
				"DZ_Items",
				"DZ_Items_Drinks",
				"DZ_Items_Food"
			};
		};
	};
};
class CfgMods
{
	class Canning
	{
		dir="Canning";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Canning";
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
					"Canning/scripts/4_World"
				};
			};
		};
	};
};
class CfgVehicles
{	
    //EMPTY JAR START
	class Inventory_Base;
   	class KMP_Jar: Inventory_Base
	{	
		scope=2;
		displayName="Jar";
		descriptionShort="Empty jar. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\Jar.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	//EMPTY JAR END
	//TOMATO START
	class Edible_Base;
	class KMP_JarTOM_1: Inventory_Base
	{	
		scope=2;
		displayName="Canned tomatoes";
		descriptionShort="Canned tomatoes, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarTOM_1.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarTOM_2: Inventory_Base
	{	
		scope=2;
		displayName="Canned tomatoes";
		descriptionShort="Canned tomatoes, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarTOM_1.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarTOM_3: Inventory_Base
	{	
		scope=2;
		displayName="Canned tomatoes";
		descriptionShort="Canned tomatoes, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarTOM_2.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarTOM_4: Inventory_Base
	{	
		scope=2;
		displayName="Canned tomatoes";
		descriptionShort="Canned tomatoes, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarTOM_2.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarTOM_5: Inventory_Base
	{	
		scope=2;
		displayName="Canned tomatoes";
		descriptionShort="Canned tomatoes, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarTOM_3.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarTOM_6: Inventory_Base
	{	
		scope=2;
		displayName="Canned tomatoes";
		descriptionShort="Canned tomatoes, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarTOM_3.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarTOM_7: Inventory_Base
	{	
		scope=2;
		displayName="Canned tomatoes";
		descriptionShort="Canned tomatoes, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarTOM_4.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarTOM_8: Inventory_Base
	{	
		scope=2;
		displayName="Canned tomatoes";
		descriptionShort="Canned tomatoes, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarTOM_4.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarTOM_9: Inventory_Base
	{	
		scope=2;
		displayName="Canned tomatoes";
		descriptionShort="Canned tomatoes, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarTOM_5.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarTOM_10: Edible_Base
	{
		scope=2;
		displayName="Canned tomatoes UNSEALED";
		descriptionShort="Delicious Canned tomatoes, You should seal this by boiling it. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		rotationFlags=0;
		weight=1000;
		interactionWeight=1;
		quantityBar=1;
		itemSize[]={2,2};
		absorbency=0.30000001;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		inventorySlot[]={};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFist";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFist_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFist_Heavy";
				range=2.8;
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarTOM_100.paa",
			"Canning\JarTOM_100.paa",
			"Canning\JarTOM_100.paa",
			"Canning\JarTOM_100.paa",
			"Canning\JarTOM_100.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"",
			"",
			"",
			""
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,110,75,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						82.5,
						37.5,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					//visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,192.5,56.25,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					//visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,137.5,75,1,0};
					cooking_properties[]={70,55};
				};
				class Dried
				{
					//visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,110,7.5,1,0};
					cooking_properties[]={70,45,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,82.5,18.75,1,0,16};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	//TOMATO END
	//ZUCC START
	class KMP_JarZUC_1: Inventory_Base
	{	
		scope=2;
		displayName="Canned zucchini";
		descriptionShort="Canned zucchini, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarZUC_1.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarZUC_2: Inventory_Base
	{	
		scope=2;
		displayName="Canned zucchini";
		descriptionShort="Canned zucchini, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarZUC_1.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarZUC_3: Inventory_Base
	{	
		scope=2;
		displayName="Canned zucchini";
		descriptionShort="Canned zucchini, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarZUC_2.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarZUC_4: Inventory_Base
	{	
		scope=2;
		displayName="Canned zucchini";
		descriptionShort="Canned zucchini, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarZUC_2.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarZUC_5: Inventory_Base
	{	
		scope=2;
		displayName="Canned zucchini";
		descriptionShort="Canned zucchini, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarZUC_3.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarZUC_6: Inventory_Base
	{	
		scope=2;
		displayName="Canned zucchini";
		descriptionShort="Canned zucchini, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarZUC_3.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarZUC_7: Inventory_Base
	{	
		scope=2;
		displayName="Canned zucchini";
		descriptionShort="Canned zucchini, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarZUC_4.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarZUC_8: Inventory_Base
	{	
		scope=2;
		displayName="Canned zucchini";
		descriptionShort="Canned zucchini, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarZUC_4.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarZUC_9: Inventory_Base
	{	
		scope=2;
		displayName="Canned zucchini";
		descriptionShort="Canned zucchini, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarZUC_5.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarZUC_10: Edible_Base
	{
		scope=2;
		displayName="Canned zucchini";
		descriptionShort="Delicious Canned zucchini, You should seal this by boiling it. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		rotationFlags=0;
		weight=1000;
		interactionWeight=1;
		quantityBar=1;
		itemSize[]={2,2};
		absorbency=0.30000001;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		inventorySlot[]={};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFist";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFist_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFist_Heavy";
				range=2.8;
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarZUC_100.paa",
			"Canning\JarZUC_100.paa",
			"Canning\JarZUC_100.paa",
			"Canning\JarZUC_100.paa",
			"Canning\JarZUC_100.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"",
			"",
			"",
			""
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,110,75,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						82.5,
						37.5,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					//visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,192.5,56.25,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					//visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,137.5,75,1,0};
					cooking_properties[]={70,55};
				};
				class Dried
				{
					//visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,110,7.5,1,0};
					cooking_properties[]={70,45,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,82.5,18.75,1,0,16};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	//ZUCC END
	//PEPPER START
	class KMP_JarPEPPER_1: Inventory_Base
	{	
		scope=2;
		displayName="Canned peppers";
		descriptionShort="Canned peppers, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPEPPER_1.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPEPPER_2: Inventory_Base
	{	
		scope=2;
		displayName="Canned peppers";
		descriptionShort="Canned peppers, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPEPPER_1.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPEPPER_3: Inventory_Base
	{	
		scope=2;
		displayName="Canned peppers";
		descriptionShort="Canned peppers, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPEPPER_2.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPEPPER_4: Inventory_Base
	{	
		scope=2;
		displayName="Canned peppers";
		descriptionShort="Canned peppers, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPEPPER_2.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPEPPER_5: Inventory_Base
	{	
		scope=2;
		displayName="Canned peppers";
		descriptionShort="Canned peppers, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPEPPER_3.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPEPPER_6: Inventory_Base
	{	
		scope=2;
		displayName="Canned peppers";
		descriptionShort="Canned peppers, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPEPPER_3.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPEPPER_7: Inventory_Base
	{	
		scope=2;
		displayName="Canned peppers";
		descriptionShort="Canned peppers, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPEPPER_4.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPEPPER_8: Inventory_Base
	{	
		scope=2;
		displayName="Canned peppers";
		descriptionShort="Canned peppers, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPEPPER_4.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPEPPER_9: Inventory_Base
	{	
		scope=2;
		displayName="Canned peppers";
		descriptionShort="Canned peppers, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPEPPER_5.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPEPPER_10: Edible_Base
	{
		scope=2;
		displayName="Canned peppers";
		descriptionShort="Delicious Canned peppers, You should seal this by boiling it. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		rotationFlags=0;
		weight=1000;
		interactionWeight=1;
		quantityBar=1;
		itemSize[]={2,2};
		absorbency=0.30000001;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		inventorySlot[]={};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFist";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFist_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFist_Heavy";
				range=2.8;
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPEPPER_100.paa",
			"Canning\JarPEPPER_100.paa",
			"Canning\JarPEPPER_100.paa",
			"Canning\JarPEPPER_100.paa",
			"Canning\JarPEPPER_100.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"",
			"",
			"",
			""
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,110,75,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						82.5,
						37.5,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					//visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,192.5,56.25,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					//visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,137.5,75,1,0};
					cooking_properties[]={70,55};
				};
				class Dried
				{
					//visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,110,7.5,1,0};
					cooking_properties[]={70,45,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,82.5,18.75,1,0,16};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	//PEPPER END
	//POTATO START
	class KMP_JarPOT_1: Inventory_Base
	{	
		scope=2;
		displayName="Canned potato";
		descriptionShort="Canned potato, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPOT_1.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPOT_2: Inventory_Base
	{	
		scope=2;
		displayName="Canned potato";
		descriptionShort="Canned potato, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPOT_1.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPOT_3: Inventory_Base
	{	
		scope=2;
		displayName="Canned potato";
		descriptionShort="Canned potato, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPOT_2.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPOT_4: Inventory_Base
	{	
		scope=2;
		displayName="Canned potato";
		descriptionShort="Canned potato, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPOT_2.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPOT_5: Inventory_Base
	{	
		scope=2;
		displayName="Canned potato";
		descriptionShort="Canned potato, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPOT_3.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPOT_6: Inventory_Base
	{	
		scope=2;
		displayName="Canned potato";
		descriptionShort="Canned potato, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPOT_3.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPOT_7: Inventory_Base
	{	
		scope=2;
		displayName="Canned potato";
		descriptionShort="Canned potato, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPOT_4.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPOT_8: Inventory_Base
	{	
		scope=2;
		displayName="Canned potato";
		descriptionShort="Canned potato, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPOT_4.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPOT_9: Inventory_Base
	{	
		scope=2;
		displayName="Canned potato";
		descriptionShort="Canned potato, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPOT_5.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPOT_10: Edible_Base
	{
		scope=2;
		displayName="Canned potato";
		descriptionShort="Delicious canned potato, You should seal this by boiling it. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		rotationFlags=0;
		weight=1000;
		interactionWeight=1;
		quantityBar=1;
		itemSize[]={2,2};
		absorbency=0.30000001;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		inventorySlot[]={};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFist";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFist_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFist_Heavy";
				range=2.8;
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPOT_100.paa",
			"Canning\JarPOT_100.paa",
			"Canning\JarPOT_100.paa",
			"Canning\JarPOT_100.paa",
			"Canning\JarPOT_100.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"",
			"",
			"",
			""
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,110,75,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						82.5,
						37.5,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					//visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,192.5,56.25,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					//visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,137.5,75,1,0};
					cooking_properties[]={70,55};
				};
				class Dried
				{
					//visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,110,7.5,1,0};
					cooking_properties[]={70,45,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,82.5,18.75,1,0,16};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	//POTATO END
	//PUMPKIN START
	class KMP_JarPUMP_1: Inventory_Base
	{	
		scope=2;
		displayName="Canned pumpkin";
		descriptionShort="Canned pumpkin, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPUMP_1.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPUMP_2: Inventory_Base
	{	
		scope=2;
		displayName="Canned pumpkin";
		descriptionShort="Canned pumpkin, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPUMP_1.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPUMP_3: Inventory_Base
	{	
		scope=2;
		displayName="Canned pumpkin";
		descriptionShort="Canned pumpkin, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPUMP_2.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPUMP_4: Inventory_Base
	{	
		scope=2;
		displayName="Canned pumpkin";
		descriptionShort="Canned pumpkin, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPUMP_2.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPUMP_5: Inventory_Base
	{	
		scope=2;
		displayName="Canned pumpkin";
		descriptionShort="Canned pumpkin, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPUMP_3.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPUMP_6: Inventory_Base
	{	
		scope=2;
		displayName="Canned pumpkin";
		descriptionShort="Canned pumpkin, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPUMP_3.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPUMP_7: Inventory_Base
	{	
		scope=2;
		displayName="Canned pumpkin";
		descriptionShort="Canned pumpkin, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPUMP_4.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPUMP_8: Inventory_Base
	{	
		scope=2;
		displayName="Canned pumpkin";
		descriptionShort="Canned pumpkin, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPUMP_4.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPUMP_9: Inventory_Base
	{	
		scope=2;
		displayName="Canned pumpkin";
		descriptionShort="Canned pumpkin, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPUMP_5.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarPUMP_10: Edible_Base
	{
		scope=2;
		displayName="Canned Pumpkin";
		descriptionShort="Delicious canned Pumpkin, You should seal this by boiling it. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		rotationFlags=0;
		weight=1000;
		interactionWeight=1;
		quantityBar=1;
		itemSize[]={2,2};
		absorbency=0.30000001;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		inventorySlot[]={};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFist";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFist_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFist_Heavy";
				range=2.8;
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarPUMP_100.paa",
			"Canning\JarPUMP_100.paa",
			"Canning\JarPUMP_100.paa",
			"Canning\JarPUMP_100.paa",
			"Canning\JarPUMP_100.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"",
			"",
			"",
			""
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,110,75,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						82.5,
						37.5,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					//visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,192.5,56.25,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					//visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,137.5,75,1,0};
					cooking_properties[]={70,55};
				};
				class Dried
				{
					//visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,110,7.5,1,0};
					cooking_properties[]={70,45,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,82.5,18.75,1,0,16};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	//PUMPKIN END
	//APPLE START
	class KMP_JarAPPLE_1: Inventory_Base
	{	
		scope=2;
		displayName="Canned apples";
		descriptionShort="Canned apples, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarAPPLE_1.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarAPPLE_2: Inventory_Base
	{	
		scope=2;
		displayName="Canned apples";
		descriptionShort="Canned apples, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarAPPLE_1.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarAPPLE_3: Inventory_Base
	{	
		scope=2;
		displayName="Canned apples";
		descriptionShort="Canned apples, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarAPPLE_2.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarAPPLE_4: Inventory_Base
	{	
		scope=2;
		displayName="Canned apples";
		descriptionShort="Canned apples, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarAPPLE_2.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarAPPLE_5: Inventory_Base
	{	
		scope=2;
		displayName="Canned apples";
		descriptionShort="Canned apples, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarAPPLE_3.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarAPPLE_6: Inventory_Base
	{	
		scope=2;
		displayName="Canned apples";
		descriptionShort="Canned apples, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarAPPLE_3.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarAPPLE_7: Inventory_Base
	{	
		scope=2;
		displayName="Canned apples";
		descriptionShort="Canned apples, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarAPPLE_4.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarAPPLE_8: Inventory_Base
	{	
		scope=2;
		displayName="Canned apples";
		descriptionShort="Canned apples, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarAPPLE_4.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarAPPLE_9: Inventory_Base
	{	
		scope=2;
		displayName="Canned apples";
		descriptionShort="Canned apples, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarAPPLE_5.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarAPPLE_10: Edible_Base
	{
		scope=2;
		displayName="Canned apples";
		descriptionShort="Delicious canned apples, You should seal this by boiling it. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		rotationFlags=0;
		weight=1000;
		interactionWeight=1;
		quantityBar=1;
		itemSize[]={2,2};
		absorbency=0.30000001;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		inventorySlot[]={};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFist";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFist_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFist_Heavy";
				range=2.8;
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarAPPLE_100.paa",
			"Canning\JarAPPLE_100.paa",
			"Canning\JarAPPLE_100.paa",
			"Canning\JarAPPLE_100.paa",
			"Canning\JarAPPLE_100.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"",
			"",
			"",
			""
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,110,75,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						82.5,
						37.5,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					//visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,192.5,56.25,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					//visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,137.5,75,1,0};
					cooking_properties[]={70,55};
				};
				class Dried
				{
					//visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,110,7.5,1,0};
					cooking_properties[]={70,45,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,82.5,18.75,1,0,16};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	//APPLE END
	//BITTERLINGS START
	class KMP_JarBITTERLING_1: Inventory_Base
	{	
		scope=2;
		displayName="Canned Bitterlings";
		descriptionShort="Canned Bitterlings, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarBITTERLINGS_1.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarBITTERLING_2: Inventory_Base
	{	
		scope=2;
		displayName="Canned Bitterlings";
		descriptionShort="Canned Bitterlings, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarBITTERLINGS_1.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarBITTERLING_3: Inventory_Base
	{	
		scope=2;
		displayName="Canned Bitterlings";
		descriptionShort="Canned Bitterlings, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarBITTERLINGS_2.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarBITTERLING_4: Inventory_Base
	{	
		scope=2;
		displayName="Canned Bitterlings";
		descriptionShort="Canned Bitterlings, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarBITTERLINGS_2.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarBITTERLING_5: Inventory_Base
	{	
		scope=2;
		displayName="Canned Bitterlings";
		descriptionShort="Canned Bitterlings, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarBITTERLINGS_3.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarBITTERLING_6: Inventory_Base
	{	
		scope=2;
		displayName="Canned Bitterlings";
		descriptionShort="Canned Bitterlings, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarBITTERLINGS_3.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarBITTERLING_7: Inventory_Base
	{	
		scope=2;
		displayName="Canned Bitterlings";
		descriptionShort="Canned Bitterlings, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarBITTERLINGS_4.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarBITTERLING_8: Inventory_Base
	{	
		scope=2;
		displayName="Canned Bitterlings";
		descriptionShort="Canned Bitterlings, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarBITTERLINGS_4.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarBITTERLING_9: Inventory_Base
	{	
		scope=2;
		displayName="Canned Bitterlings";
		descriptionShort="Canned Bitterlings, You should fill this. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarBITTERLINGS_5.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_JarBITTERLING_10: Edible_Base
	{
		scope=2;
		displayName="Canned Bitterlings";
		descriptionShort="Disgusting canned Bitterlings, You should seal this by boiling it. - KILLJOYS MOD PACK";
		model="Canning\Jar.p3d";
		rotationFlags=0;
		weight=1000;
		interactionWeight=1;
		quantityBar=1;
		itemSize[]={2,2};
		absorbency=0.30000001;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		inventorySlot[]={};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFist";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFist_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFist_Heavy";
				range=2.8;
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\JarBITTERLINGS_100.paa",
			"Canning\JarBITTERLINGS_100.paa",
			"Canning\JarBITTERLINGS_100.paa",
			"Canning\JarBITTERLINGS_100.paa",
			"Canning\JarBITTERLINGS_100.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"",
			"",
			"",
			""
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,110,75,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						82.5,
						37.5,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					//visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,192.5,56.25,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					//visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,137.5,75,1,0};
					cooking_properties[]={70,55};
				};
				class Dried
				{
					//visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,110,7.5,1,0};
					cooking_properties[]={70,45,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,82.5,18.75,1,0,16};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	//BITTERLINGS END
	//JUICER START
	class KMP_FoodProcessor: Inventory_Base
	{	
		scope=2;
		displayName="Food processor";
		descriptionShort="Used for grinding food down before canning. - KILLJOYS MOD PACK";
		model="Canning\Juicer.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = 
                    {
                        {1.0,{"Canning\Juicer.rvmat", "Canning\data\Juicer.rvmat"}},
                        {0.7,{"Canning\Juicer.rvmat", "Canning\data\Juicer.rvmat"}},
                        {0.5,{"Canning\Juicer_damage.rvmat", "Canning\Juicer_damage.rvmat"}},
                        {0.3,{"Canning\Juicer_damage.rvmat", "Canning\Juicer_damage.rvmat"}},
                        {0.0,{"Canning\Juicer_destruct.rvmat", "Canning\Juicer_destruct.rvmat"}}};
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
	//JUICER END
	//MUSH START
	class KMP_MUSH_Tom: Inventory_Base
	{	
		scope=2;
		displayName="Processed Tomato";
		descriptionShort="Processed tomato. Use this on a jar to fill it. - KILLJOYS MOD PACK";
		model="Canning\MUSH.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\Mush_TOM.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_MUSH_Zuc: Inventory_Base
	{	
		scope=2;
		displayName="Processed zucchini";
		descriptionShort="Processed zucchini. Use this on a jar to fill it. - KILLJOYS MOD PACK";
		model="Canning\MUSH.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\MUSH_Zuc.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_MUSH_Pepper: Inventory_Base
	{	
		scope=2;
		displayName="Processed Peppers";
		descriptionShort="Processed peppers. Use this on a jar to fill it. - KILLJOYS MOD PACK";
		model="Canning\MUSH.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\MUSH_Pepper.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_MUSH_Pot: Inventory_Base
	{	
		scope=2;
		displayName="Processed potato";
		descriptionShort="Processed potato. Use this on a jar to fill it. - KILLJOYS MOD PACK";
		model="Canning\MUSH.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\MUSH_Pot.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_MUSH_Pump: Inventory_Base
	{	
		scope=2;
		displayName="Processed pumpkin";
		descriptionShort="Processed pumpkin. Use this on a jar to fill it. - KILLJOYS MOD PACK";
		model="Canning\MUSH.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\MUSH_PUMP.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_MUSH_APPLE: Inventory_Base
	{	
		scope=2;
		displayName="Processed apples";
		descriptionShort="Processed apples. Use this on a jar to fill it. - KILLJOYS MOD PACK";
		model="Canning\MUSH.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\MUSH_APPLE.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	class KMP_Mush_BITTERLINGS: Inventory_Base
	{	
		scope=2;
		displayName="Processed apples";
		descriptionShort="Processed apples. Use this on a jar to fill it. - KILLJOYS MOD PACK";
		model="Canning\MUSH.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Canning\Mush_BITTERLINGS.paa"
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
                        {1.0,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.7,{"Canning\Jar.rvmat", "Canning\data\Jar.rvmat"}},
                        {0.5,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.3,{"Canning\Jar_damage.rvmat", "Canning\Jar_damage.rvmat"}},
                        {0.0,{"Canning\Jar_destruct.rvmat", "Canning\Jar_destruct.rvmat"}}};
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
	//MUSH END
};