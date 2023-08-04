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
//--------------------- Tactical Gloves -------------------------------
	class TacticalGloves_ColorBase;
	class KMP_TacticalGloves_Snow_co: TacticalGloves_ColorBase
	{
		scope=2;
		displayName="Snow Tactical Gloves";
		descriptionShort="Snow Tactical Gloves by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Gloves\Textures\KMP_TacticalGloves_Snow_co.paa",
			"Gloves\Textures\KMP_TacticalGloves_Snow_co.paa",
			"Gloves\Textures\KMP_TacticalGloves_Snow_co.paa"
		};
	};
	class KMP_TacticalGloves_Pantera: TacticalGloves_ColorBase
	{
		scope=2;
		displayName="Pantera Tactical Gloves";
		descriptionShort="Pantera Tactical Gloves by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Gloves\Textures\KMP_TacticalGloves_Pantera.paa",
			"Gloves\Textures\KMP_TacticalGloves_Pantera.paa",
			"Gloves\Textures\KMP_TacticalGloves_Pantera.paa"
		};
	};
	class KMP_TacticalGloves_Black: TacticalGloves_ColorBase
    {
        scope=2;
        displayName="Black Tactical Gloves";
        descriptionShort="KMP - Black Tactical Gloves by Phaedrus";
        visibilityModifier=0.94999999;
        hiddenSelectionsTextures[]=
        {
            "Gloves\Textures\KMP_TacticalGloves_Black.paa",
            "Gloves\Textures\KMP_TacticalGloves_Black.paa",
            "Gloves\Textures\KMP_TacticalGloves_Black.paa"
        };
    };
	class KMP_TacticalGloves_ToxicAutumn: TacticalGloves_ColorBase
    {
        scope=2;
        displayName="Toxic Autumn Tactical Gloves";
        descriptionShort="KMP - Toxic Autumn Tactical Gloves by Phaedrus";
        visibilityModifier=0.94999999;
        hiddenSelectionsTextures[]=
        {
            "Gloves\Textures\KMP_TacticalGloves_ToxicAutumn.paa",
            "Gloves\Textures\KMP_TacticalGloves_ToxicAutumn.paa",
            "Gloves\Textures\KMP_TacticalGloves_ToxicAutumn.paa"
        };
    };
	class KMP_TacticalGloves_HexCam: TacticalGloves_ColorBase
    {
        scope=2;
        displayName="HexCam Tactical Gloves";
        descriptionShort="KMP - HexCam Tactical Gloves by Phaedrus";
        visibilityModifier=0.94999999;
        hiddenSelectionsTextures[]=
        {
            "Gloves\Textures\KMP_TacticalGloves_HexCam.paa",
            "Gloves\Textures\KMP_TacticalGloves_HexCam.paa",
            "Gloves\Textures\KMP_TacticalGloves_HexCam.paa"
        };
    };
};		
