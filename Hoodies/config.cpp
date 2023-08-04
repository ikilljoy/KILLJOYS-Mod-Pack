//HOODIES
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
//---------------------HOODIES-------------------------------
	class Hoodie_ColorBase;
	class Hoodie_Blue2: Hoodie_ColorBase
	{
		scope=2;
		itemsCargoSize[]={7,6};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\hoodie_m_grd_blue_co.paa",
			"\dz\characters\tops\data\hoodie_blue_co.paa",
			"\dz\characters\tops\data\hoodie_f_blue_co.paa"
		};
	};
	class KMP_Hoodie_friendly_co: Hoodie_ColorBase
	{
		displayName="Friendly Hoodie";
		descriptionShort="Friendly Hoodie by KILLJOY";
		scope=2;
		itemsCargoSize[]={7,6};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Hoodies\Textures\KMP_Hoodie_friendly_co.paa",
			"Hoodies\Textures\KMP_Hoodie_friendly_co.paa",
			"Hoodies\Textures\KMP_Hoodie_friendly_co.paa"
		};
	};
	class KMP_hoodie_Militia_co: Hoodie_ColorBase
	{
		displayName="Friendly Hoodie";
		descriptionShort="Friendly Hoodie by KILLJOY";
		scope=2;
		itemsCargoSize[]={7,6};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Hoodies\Textures\KMP_hoodie_Militia_co.paa",
			"Hoodies\Textures\KMP_hoodie_Militia_co.paa",
			"Hoodies\Textures\KMP_hoodie_Militia_co.paa"
		};
	};
	class KMP_Hoodie_multicam_co: Hoodie_ColorBase
	{
		displayName="Friendly Hoodie";
		descriptionShort="Friendly Hoodie by KILLJOY";
		scope=2;
		itemsCargoSize[]={7,6};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Hoodies\Textures\KMP_Hoodie_multicam_co.paa",
			"Hoodies\Textures\KMP_Hoodie_multicam_co.paa",
			"Hoodies\Textures\KMP_Hoodie_multicam_co.paa"
		};
	};
	class KMP_Hoodie_sheep_co: Hoodie_ColorBase
	{
		displayName="Friendly Hoodie";
		descriptionShort="Friendly Hoodie by KILLJOY";
		scope=2;
		itemsCargoSize[]={7,6};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Hoodies\Textures\KMP_Hoodie_sheep_co.paa",
			"Hoodies\Textures\KMP_Hoodie_sheep_co.paa",
			"Hoodies\Textures\KMP_Hoodie_sheep_co.paa"
		};
	};
	class KMP_Hoodie_PlaidBlack: Hoodie_ColorBase
	{
		displayName="Upgraded Black Plaid Hoodie";
		descriptionShort="Black Plaid Hoodie, Upgraded with extra storage. DOTD by KILLJOY";
		scope=2;
		itemsCargoSize[]={7,6};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Hoodies\Textures\KMP_Hoodie_PlaidBlack_co.paa",
			"Hoodies\Textures\KMP_Hoodie_PlaidBlack_co.paa",
			"Hoodies\Textures\KMP_Hoodie_PlaidBlack_co.paa"
		};
	};
	class KMP_Hoodie_BlackWhitePlaid: Hoodie_ColorBase
	{
		displayName="Upgraded Black Navy Plaid Hoodie";
		descriptionShort="Black Navy Plaid Hoodie, Upgraded with extra storage. DOTD by KILLJOY";
		scope=2;
		itemsCargoSize[]={7,6};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Hoodies\Textures\KMP_Hoodie_BlackWhitePlaid_co.paa",
			"Hoodies\Textures\KMP_Hoodie_BlackWhitePlaid_co.paa",
			"Hoodies\Textures\KMP_Hoodie_BlackWhitePlaid_co.paa"
		};
	};
	class KMP_Hoodie_BluePlaid: Hoodie_ColorBase
	{
		displayName="Upgraded Blue Plaid Hoodie";
		descriptionShort="Blue Plaid Hoodie, Upgraded with extra storage. DOTD by KILLJOY";
		scope=2;
		itemsCargoSize[]={7,6};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Hoodies\Textures\KMP_Hoodie_BluePlaid_co.paa",
			"Hoodies\Textures\KMP_Hoodie_BluePlaid_co.paa",
			"Hoodies\Textures\KMP_Hoodie_BluePlaid_co.paa"
		};
	};
	class KMP_Hoodie_RedPlaid: Hoodie_ColorBase
	{
		displayName="Upgraded Red Plaid Hoodie";
		descriptionShort="Red Plaid Hoodie, Upgraded with extra storage. DOTD by KILLJOY";
		scope=2;
		itemsCargoSize[]={7,6};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Hoodies\Textures\KMP_Hoodie_RedPlaid_co.paa",
			"Hoodies\Textures\KMP_Hoodie_RedPlaid_co.paa",
			"Hoodies\Textures\KMP_Hoodie_RedPlaid_co.paa"
		};
	};
	class KMP_Hoodie_OrangePlaid: Hoodie_ColorBase
	{
		displayName="Upgraded Orange Plaid Hoodie";
		descriptionShort="Orange Plaid Hoodie, Upgraded with extra storage. DOTD by KILLJOY";
		scope=2;
		itemsCargoSize[]={7,6};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Hoodies\Textures\KMP_Hoodie_OrangePlaid_co.paa",
			"Hoodies\Textures\KMP_Hoodie_OrangePlaid_co.paa",
			"Hoodies\Textures\KMP_Hoodie_OrangePlaid_co.paa"
		};
	};
	class KMP_Hoodie_Weed_co: Hoodie_ColorBase
	{
		displayName="Upgraded WeedCam Hoodie";
		descriptionShort="WeedCam Hoodie, Upgraded with extra storage. DOTD by KILLJOY";
		scope=2;
		itemsCargoSize[]={7,6};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Hoodies\Textures\KMP_Hoodie_Weed_co.paa",
			"Hoodies\Textures\KMP_Hoodie_Weed_co.paa",
			"Hoodies\Textures\KMP_Hoodie_Weed_co.paa"
		};
	};
	class KMP_Hoodie_Skulls: Hoodie_ColorBase
	{
		displayName="Skull Hoodie";
		descriptionShort="KMP - Skull Hoodie by Phaedrus";
		scope=2;
		itemsCargoSize[]={7,6};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Hoodies\Textures\KMP_Hoodie_Skulls.paa",
			"Hoodies\Textures\KMP_Hoodie_Skulls.paa",
			"Hoodies\Textures\KMP_Hoodie_Skulls.paa"
		};
	};
	class KMP_Hoodie_Abstract: Hoodie_ColorBase
	{
		displayName="Abstract Hoodie";
		descriptionShort="KMP - Abstract Hoodie by Phaedrus";
		scope=2;
		itemsCargoSize[]={7,6};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Hoodies\Textures\KMP_Hoodie_Abstract.paa",
			"Hoodies\Textures\KMP_Hoodie_Abstract.paa",
			"Hoodies\Textures\KMP_Hoodie_Abstract.paa"
		};
	};
	class KMP_Hoodie_Abstract2: Hoodie_ColorBase
	{
		displayName="Abstract Hoodie 2";
		descriptionShort="KMP - Another Abstract Hoodie by Phaedrus";
		scope=2;
		itemsCargoSize[]={7,6};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Hoodies\Textures\KMP_Hoodie_Abstract2.paa",
			"Hoodies\Textures\KMP_Hoodie_Abstract2.paa",
			"Hoodies\Textures\KMP_Hoodie_Abstract2.paa"
		};
	};
	class KMP_Hoodie_Graffiti: Hoodie_ColorBase
	{
		displayName="Graffiti Hoodie";
		descriptionShort="KMP - Graffiti Hoodie by Phaedrus";
		scope=2;
		itemsCargoSize[]={7,6};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Hoodies\Textures\KMP_Hoodie_Graffiti.paa",
			"Hoodies\Textures\KMP_Hoodie_Graffiti.paa",
			"Hoodies\Textures\KMP_Hoodie_Graffiti.paa"
		};
	};
	class KMP_Hoodie_Texas: Hoodie_ColorBase
	{
		displayName="Texas Hoodie";
		descriptionShort="KMP - Texas Hoodie by Phaedrus";
		scope=2;
		itemsCargoSize[]={7,6};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Hoodies\Textures\KMP_Hoodie_Texas.paa",
			"Hoodies\Textures\KMP_Hoodie_Texas.paa",
			"Hoodies\Textures\KMP_Hoodie_Texas.paa"
		};
	};
};		
