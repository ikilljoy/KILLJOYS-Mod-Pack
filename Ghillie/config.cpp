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
//--------------------- Ghillie TOP -------------------------------
	class GhillieSuit_ColorBase;
	class KMP_Ghillie_snow_Suit_ca: GhillieSuit_ColorBase
	{
		scope=2;
		displayName="Winter Ghillie";
		descriptionShort="Winter Ghillie by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Ghillie\Textures\KMP_Ghillie_snow_Suit_ca.paa",
			"Ghillie\Textures\KMP_Ghillie_snow_Suit_ca.paa",
			"Ghillie\Textures\KMP_Ghillie_snow_Suit_ca.paa"
		};
	};
	class KMP_Ghillie_Black_Suit_ca: GhillieSuit_ColorBase
	{
		scope=2;
		displayName="Black Ghillie";
		descriptionShort="Black Ghillie by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Ghillie\Textures\KMP_Ghillie_Black_Suit_ca.paa",
			"Ghillie\Textures\KMP_Ghillie_Black_Suit_ca.paa",
			"Ghillie\Textures\KMP_Ghillie_Black_Suit_ca.paa"
		};
	};
//--------------------- GHILLIE HOODS -------------------------------
	class GhillieHood_ColorBase;
	class KMP_Ghillie_snow_Hood_ca: GhillieHood_ColorBase
	{
		scope=2;
		displayName="Black Ghillie Hood";
		descriptionShort="Black Ghillie Hood by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Ghillie\Textures\KMP_Ghillie_snow_Hood_ca.paa",
			"Ghillie\Textures\KMP_Ghillie_snow_Hood_ca.paa",
			"Ghillie\Textures\KMP_Ghillie_snow_Hood_ca.paa"
		};
	};
	class KMP_Ghillie_Black_Hood_ca: GhillieHood_ColorBase
	{
		scope=2;
		displayName="Black Ghillie Hood";
		descriptionShort="Black Ghillie Hood by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Ghillie\Textures\KMP_Ghillie_Black_Hood_ca.paa",
			"Ghillie\Textures\KMP_Ghillie_Black_Hood_ca.paa",
			"Ghillie\Textures\KMP_Ghillie_Black_Hood_ca.paa"
		};
	};
};		
