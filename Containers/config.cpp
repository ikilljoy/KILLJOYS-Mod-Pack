//SHIRTS
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
class cfgVehicles
{
//---------------------MEDIC BOX-------------------------------
	class SmallProtectorCase;
	class KMP_Medic_Box: SmallProtectorCase
	{
		scope=2;
		displayName="Medic Box";
		descriptionShort="Medic Box by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Containers\Textures\KMP_Medic_Box.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={6,7};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
};		
