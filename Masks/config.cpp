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
//---------------------GP5-------------------------------
	class GP5GasMask;
	class KMP_gp5gasmask_Black_co: GP5GasMask
	{
		displayName="Black GP5GasMask";
		descriptionShort="Black GP5GasMask by KILLJOY";
		model="\DZ\characters\Masks\GP5GasMask_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Masks\Textures\KMP_gp5gasmask_Black_co.paa",
			"Masks\Textures\KMP_gp5gasmask_Black_co.paa",
			"Masks\Textures\KMP_gp5gasmask_Black_co.paa"
		};
	};
//--------------------- Balaclava -------------------------------
	class Balaclava3Holes_ColorBase;
	class KMP_balaklava_sdk_co: Balaclava3Holes_ColorBase
	{
		scope=2;
		displayName="Stomp Down Skimask";
		descriptionShort="Stomp Down Skimask by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Masks\Textures\KMP_balaklava_sdk_co.paa",
			"Masks\Textures\KMP_balaklava_sdk_co.paa",
			"Masks\Textures\KMP_balaklava_sdk_co.paa"
		};
	};
};		
