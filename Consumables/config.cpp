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
class CfgVehicles
{
//--------------------- MRE -------------------------------
    class PowderedMilk;
	class KMP_MRE_co: PowderedMilk
	{
		scope=2;
		displayName="MRE";
		descriptionShort="Meal ready to eat by KILLJOY";
		model="\dz\gear\food\PowderedMilk.p3d";
		itemSize[]={1,2};
		ContinuousActions[]={186};
		varQuantityInit=350;
		varQuantityMin=0;
		varQuantityMax=500;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Consumables\Textures\KMP_MRE_co.paa"
		};
		class Nutrition
		{
			fullnessIndex=2.5;
			energy=600;
			water=50;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
//--------------------- Soda -------------------------------
    class SodaCan_ColorBase;
	class KMP_sodacan_Splurge_co: SodaCan_ColorBase
	{
		scope=2;
		displayName="Splurge Soda";
		descriptionShort="A Citrus soda, Rare liquid gold.";
		hiddenSelectionsTextures[]=
		{
			"Consumables\Textures\KMP_sodacan_Splurge_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};
//WATER BAG
    class Bottle_Base;
	class KMP_WaterBag_co: Bottle_Base
	{
		scope=2;
		displayName="Emergency Survival Water Pouch";
		descriptionShort="Emergency purified water for immediate use; lightweight and extremely compact(64)-125 ml sachets - KILLJOYS MOD PACK";
		model="\dz\gear\food\PowderedMilk.p3d";
		itemSize[]={1,2};
		ContinuousActions[]={186};
		varQuantityInit=350;
		varQuantityMin=0;
		varQuantityMax=500;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Consumables\Textures\KMP_WaterBag.paa"
		};
		class Nutrition
		{
			fullnessIndex=2.5;
			energy=0;
			water=250;
			nutritionalIndex=1;
			toxicity=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class WaterPouch_in_B
				{
					soundSet="WaterPouch_in_B_SoundSet";
					id=202;
				};
				class WaterPouch_in_C
				{
					soundSet="WaterPouch_in_C_SoundSet";
					id=203;
				};
				class WaterBottle_in_C1
				{
					soundSet="WaterBottle_in_C1_SoundSet";
					id=204;
				};
				class WaterPouch_out_A
				{
					soundSet="WaterPouch_out_A_SoundSet";
					id=205;
				};
				class WaterPouch_out_B
				{
					soundSet="WaterPouch_out_B_SoundSet";
					id=206;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
			};
		};
	};
};
};
