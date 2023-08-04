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
//---------------------NBC Hoods-------------------------------
	class NBCHoodBase;
	class KMP_nbc_hood_STARS_co: NBCHoodBase
	{
		displayName="STARS NBC Boots";
		descriptionShort="STARS NBC Boots by KILLJOY";
		scope=2;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_nbc_hood_STARS_co.paa",
			"NBCGear\Textures\KMP_nbc_hood_STARS_co.paa",
			"NBCGear\Textures\KMP_nbc_hood_STARS_co.paa"
		};
	};
	class KMP_nbc_hood_Umbrella_co: NBCHoodBase
	{
		displayName="Umbrella NBC Hood";
		descriptionShort="Umbrella NBC Hood by KILLJOY";
		scope=2;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_nbc_hood_Umbrella_co.paa",
			"NBCGear\Textures\KMP_nbc_hood_Umbrella_co.paa",
			"NBCGear\Textures\KMP_nbc_hood_Umbrella_co.paa"
		};
	};
	class KMP_NBC_Hood_Geo: NBCHoodBase
	{
		displayName="NBC Hood GeoCam";
		descriptionShort="NBC Hood GeoCam by KILLJOY";
		scope=2;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_NBC_Hood_Geo.paa",
			"NBCGear\Textures\KMP_NBC_Hood_Geo.paa",
			"NBCGear\Textures\KMP_NBC_Hood_Geo.paa"
		};
	};
	class KMP_NBC_Hood_Pantera: NBCHoodBase
	{
		displayName="NBC Hood Pantera";
		descriptionShort="Pantera Camouflage is the standard camouflage of the Polish Armed Forces. by KILLJOY";
		scope=2;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_NBC_Hood_Pantera.paa",
			"NBCGear\Textures\KMP_NBC_Hood_Pantera.paa",
			"NBCGear\Textures\KMP_NBC_Hood_Pantera.paa"
		};
	};
	class KMP_NBC_Hood_WW1: NBCHoodBase
	{
		displayName="NBC Hood WW1";
		descriptionShort="NBC Hood WW1. by KILLJOY";
		scope=2;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_NBC_Hood_WW1.paa",
			"NBCGear\Textures\KMP_NBC_Hood_WW1.paa",
			"NBCGear\Textures\KMP_NBC_Hood_WW1.paa"
		};
	};
	class KMP_NBC_Hood_UrbanNew: NBCHoodBase
	{
		displayName="NBC Hood UrbanNew";
		descriptionShort="NBC Hood UrbanNew. by KILLJOY";
		scope=2;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_NBC_Hood_UrbanNew.paa",
			"NBCGear\Textures\KMP_NBC_Hood_UrbanNew.paa",
			"NBCGear\Textures\KMP_NBC_Hood_UrbanNew.paa"
		};
	};
	class KMP_NBC_Hood_TOXIC: NBCHoodBase
    {
        displayName="NBC Hood Toxic";
        descriptionShort="KMP - NBC Hood Toxic by Phaedrus";
        scope=2;
        repairableWithKits[]={5,2};
        repairCosts[]={30,25};
        hiddenSelectionsTextures[]=
        {
            "NBCGear\Textures\KMP_NBC_Hood_TOXIC.paa",
            "NBCGear\Textures\KMP_NBC_Hood_TOXIC.paa",
            "NBCGear\Textures\KMP_NBC_Hood_TOXIC.paa"
        };
    };
	class KMP_NBC_Hood_FRACTAL: NBCHoodBase
	{
        displayName="NBC Hood Fractal";
        descriptionShort="KMP - NBC Hood Fractal by Phaedrus";
        scope=2;
        repairableWithKits[]={5,2};
        repairCosts[]={30,25};
        hiddenSelectionsTextures[]=
        {
            "NBCGear\Textures\KMP_NBC_Hood_FRACTAL.paa",
            "NBCGear\Textures\KMP_NBC_Hood_FRACTAL.paa",
            "NBCGear\Textures\KMP_NBC_Hood_FRACTAL.paa"
        };
    };
	class KMP_NBC_Hood_HEXCAM: NBCHoodBase
	{
        displayName="NBC Hood Hexcam";
        descriptionShort="KMP - NBC Hood Hexcam by Phaedrus";
        scope=2;
        repairableWithKits[]={5,2};
        repairCosts[]={30,25};
        hiddenSelectionsTextures[]=
        {
            "NBCGear\Textures\KMP_NBC_Hood_HEXCAM.paa",
            "NBCGear\Textures\KMP_NBC_Hood_HEXCAM.paa",
            "NBCGear\Textures\KMP_NBC_Hood_HEXCAM.paa"
        };
    };
//---------------------NBC Jackets-------------------------------
	class NBCJacketBase;
	class KMP_nbc_jacket_STARS_co: NBCJacketBase
	{
		displayName="STARS NBC Jacket";
		descriptionShort="STARS NBC Jacket by KILLJOY";
		scope=2;
		visibilityModifier=0.69999999;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_nbc_jacket_STARS_co.paa",
			"NBCGear\Textures\KMP_nbc_jacket_STARS_co.paa",
			"NBCGear\Textures\KMP_nbc_jacket_STARS_co.paa"
		};
	};
	class KMP_nbc_jacket_Umbrella_co: NBCJacketBase
	{
		displayName="Umbrella NBC Jacket";
		descriptionShort="Umbrella NBC Jacket by KILLJOY";
		scope=2;
		visibilityModifier=0.69999999;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_nbc_jacket_Umbrella_co.paa",
			"NBCGear\Textures\KMP_nbc_jacket_Umbrella_co.paa",
			"NBCGear\Textures\KMP_nbc_jacket_Umbrella_co.paa"
		};
	};
	class KMP_NBC_Jacket_Geo: NBCJacketBase
	{
		displayName="NBC Jacket GeoCam";
		descriptionShort="NBC Jacket GeoCam by KILLJOY";
		scope=2;
		visibilityModifier=0.69999999;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_NBC_Jacket_Geo.paa",
			"NBCGear\Textures\KMP_NBC_Jacket_Geo.paa",
			"NBCGear\Textures\KMP_NBC_Jacket_Geo.paa"
		};
	};
	class KMP_NBC_Jacket_Pantera: NBCJacketBase
	{
		displayName="NBC Jacket Pantera";
		descriptionShort="Pantera Camouflage is the standard camouflage of the Polish Armed Forces. by KILLJOY";
		scope=2;
		visibilityModifier=0.69999999;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_NBC_Jacket_Pantera.paa",
			"NBCGear\Textures\KMP_NBC_Jacket_Pantera.paa",
			"NBCGear\Textures\KMP_NBC_Jacket_Pantera.paa"
		};
	};
	class KMP_NBC_Jacket_WW1: NBCJacketBase
	{
		displayName="NBC Jacket WW1";
		descriptionShort="NBC Jacket WW1 by KILLJOY";
		scope=2;
		visibilityModifier=0.69999999;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_NBC_Jacket_WW1.paa",
			"NBCGear\Textures\KMP_NBC_Jacket_WW1.paa",
			"NBCGear\Textures\KMP_NBC_Jacket_WW1.paa"
		};
	};
	class KMP_NBC_Jacket_UrbanNew: NBCJacketBase
	{
		displayName="NBC Jacket UrbanNew";
		descriptionShort="NBC Jacket UrbanNew. by KILLJOY";
		scope=2;
		visibilityModifier=0.69999999;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_NBC_Jacket_UrbanNew.paa",
			"NBCGear\Textures\KMP_NBC_Jacket_UrbanNew.paa",
			"NBCGear\Textures\KMP_NBC_Jacket_UrbanNew.paa"
		};
	};
	class KMP_NBC_Jacket_TOXIC: NBCJacketBase
    {
        displayName="NBC Jacket Toxic";
        descriptionShort="KMP - NBC Jacket Toxic by Phaedrus";
        scope=2;
        visibilityModifier=0.69999999;
        repairableWithKits[]={5,2};
        repairCosts[]={30,25};
        hiddenSelections[]=
        {
            "camoGround",
            "zbytek"
        };
        hiddenSelectionsTextures[]=
        {
            "NBCGear\Textures\KMP_NBC_Jacket_TOXIC.paa",
            "NBCGear\Textures\KMP_NBC_Jacket_TOXIC.paa",
            "NBCGear\Textures\KMP_NBC_Jacket_TOXIC.paa"
        };
    };
	class KMP_NBC_Jacket_FRACTAL: NBCJacketBase
    {
        displayName="NBC Jacket Fractal";
        descriptionShort="KMP - NBC Jacket Fractal by Phaedrus";
        scope=2;
        visibilityModifier=0.69999999;
        repairableWithKits[]={5,2};
        repairCosts[]={30,25};
        hiddenSelections[]=
        {
            "camoGround",
            "zbytek"
        };
        hiddenSelectionsTextures[]=
        {
            "NBCGear\Textures\KMP_NBC_Jacket_FRACTAL.paa",
            "NBCGear\Textures\KMP_NBC_Jacket_FRACTAL.paa",
            "NBCGear\Textures\KMP_NBC_Jacket_FRACTAL.paa"
        };
    };
	class KMP_NBC_Jacket_HEXCAM: NBCJacketBase
    {
        displayName="NBC Jacket HexCam";
        descriptionShort="KMP - NBC Jacket HexCam by Phaedrus";
        scope=2;
        visibilityModifier=0.69999999;
        repairableWithKits[]={5,2};
        repairCosts[]={30,25};
        hiddenSelections[]=
        {
            "camoGround",
            "zbytek"
        };
        hiddenSelectionsTextures[]=
        {
            "NBCGear\Textures\KMP_NBC_Jacket_HEXCAM.paa",
            "NBCGear\Textures\KMP_NBC_Jacket_HEXCAM.paa",
            "NBCGear\Textures\KMP_NBC_Jacket_HEXCAM.paa"
        };
    };	
//---------------------NBC Pants-------------------------------
	class NBCPantsBase;
	class KMP_nbc_pants_STARS_co: NBCPantsBase
	{
		displayName="STARS NBC Pants Pants";
		descriptionShort="STARS NBC Pants by KILLJOY";
		model="\DZ\characters\pants\NBC_Pants_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_nbc_pants_STARS_co.paa",
			"NBCGear\Textures\KMP_nbc_pants_STARS_co.paa",
			"NBCGear\Textures\KMP_nbc_pants_STARS_co.paa"
		};
	};
	class KMP_nbc_pants_Umbrella_co: NBCPantsBase
	{
		displayName="Umbrella NBC Pants Pants";
		descriptionShort="Umbrella NBC Pants by KILLJOY";
		model="\DZ\characters\pants\NBC_Pants_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_nbc_pants_Umbrella_co.paa",
			"NBCGear\Textures\KMP_nbc_pants_Umbrella_co.paa",
			"NBCGear\Textures\KMP_nbc_pants_Umbrella_co.paa"
		};
	};
	class KMP_NBC_Pants_Geo: NBCPantsBase
	{
		displayName="NBC Pants GeoCam";
		descriptionShort="NBC Jacket GeoCam by KILLJOY";
		model="\DZ\characters\pants\NBC_Pants_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_NBC_Pants_Geo.paa",
			"NBCGear\Textures\KMP_NBC_Pants_Geo.paa",
			"NBCGear\Textures\KMP_NBC_Pants_Geo.paa"
		};
	};
	class KMP_NBC_Pants_Pantera: NBCPantsBase
	{
		displayName="NBC Pants Pantera";
		descriptionShort="Pantera Camouflage is the standard camouflage of the Polish Armed Forces. by KILLJOY";
		model="\DZ\characters\pants\NBC_Pants_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_NBC_Pants_Pantera.paa",
			"NBCGear\Textures\KMP_NBC_Pants_Pantera.paa",
			"NBCGear\Textures\KMP_NBC_Pants_Pantera.paa"
		};
	};
	class KMP_NBC_Pants_WW1: NBCPantsBase
	{
		displayName="NBC Pants WW1";
		descriptionShort="NBC Pants WW1. by KILLJOY";
		model="\DZ\characters\pants\NBC_Pants_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_NBC_Pants_WW1.paa",
			"NBCGear\Textures\KMP_NBC_Pants_WW1.paa",
			"NBCGear\Textures\KMP_NBC_Pants_WW1.paa"
		};
	};
	class KMP_NBC_Pants_UrbanNew: NBCPantsBase
	{
		displayName="NBC Pants UrbanNew";
		descriptionShort="NBC Pants UrbanNew by KILLJOY";
		model="\DZ\characters\pants\NBC_Pants_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_NBC_Pants_UrbanNew.paa",
			"NBCGear\Textures\KMP_NBC_Pants_UrbanNew.paa",
			"NBCGear\Textures\KMP_NBC_Pants_UrbanNew.paa"
		};
	};
	class KMP_NBC_Pants_TOXIC: NBCPantsBase
    {
        displayName="NBC Pants Toxic";
        descriptionShort="KMP - NBC Pants Toxic by Phaedrus";
        model="\DZ\characters\pants\NBC_Pants_g.p3d";
        scope=2;
        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[]=
        {
            "NBCGear\Textures\KMP_NBC_Pants_TOXIC.paa",
            "NBCGear\Textures\KMP_NBC_Pants_TOXIC.paa",
            "NBCGear\Textures\KMP_NBC_Pants_TOXIC.paa"
        };
    };
	class KMP_NBC_Pants_FRACTAL: NBCPantsBase
    {
        displayName="NBC Pants Fractal";
        descriptionShort="KMP - NBC Pants Fractal by Phaedrus";
        model="\DZ\characters\pants\NBC_Pants_g.p3d";
        scope=2;
        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[]=
        {
            "NBCGear\Textures\KMP_NBC_Pants_FRACTAL.paa",
            "NBCGear\Textures\KMP_NBC_Pants_FRACTAL.paa",
            "NBCGear\Textures\KMP_NBC_Pants_FRACTAL.paa"
        };
    };
	class KMP_NBC_Pants_HEXCAM: NBCPantsBase
    {
        displayName="NBC Pants HexCam";
        descriptionShort="KMP - NBC Pants HexCam by Phaedrus";
        model="\DZ\characters\pants\NBC_Pants_g.p3d";
        scope=2;
        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[]=
        {
            "NBCGear\Textures\KMP_NBC_Pants_HEXCAM.paa",
            "NBCGear\Textures\KMP_NBC_Pants_HEXCAM.paa",
            "NBCGear\Textures\KMP_NBC_Pants_HEXCAM.paa"
        };
    };
//---------------------NBC Boots-------------------------------
	class NBCBootsBase;
	class KMP_nbc_boots_STARS_co: NBCBootsBase
	{
		displayName="STARS NBC Boots";
		descriptionShort="STARS NBC Boots by KILLJOY";
		model="\DZ\characters\shoes\NBC_Boots_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_nbc_boots_STARS_co.paa",
			"NBCGear\Textures\KMP_nbc_boots_STARS_co.paa",
			"NBCGear\Textures\KMP_nbc_boots_STARS_co.paa"
		};
	};
	class KMP_nbc_boots_Umbrella_co: NBCBootsBase
	{
		displayName="Umbrella NBC Boots";
		descriptionShort="Umbrella NBC Boots by KILLJOY";
		model="\DZ\characters\shoes\NBC_Boots_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_nbc_boots_Umbrella_co.paa",
			"NBCGear\Textures\KMP_nbc_boots_Umbrella_co.paa",
			"NBCGear\Textures\KMP_nbc_boots_Umbrella_co.paa"
		};
	};
	class KMP_NBC_Boots_Geo: NBCBootsBase
	{
		displayName="NBC Pants GeoCam";
		descriptionShort="NBC Pants GeoCam by KILLJOY";
		model="\DZ\characters\shoes\NBC_Boots_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_NBC_Boots_Geo.paa",
			"NBCGear\Textures\KMP_NBC_Boots_Geo.paa",
			"NBCGear\Textures\KMP_NBC_Boots_Geo.paa"
		};
	};
	class KMP_NBC_Boots_Pantera: NBCBootsBase
	{
		displayName="NBC Boots Pantera";
		descriptionShort="Pantera Camouflage is the standard camouflage of the Polish Armed Forces. by KILLJOY";
		model="\DZ\characters\shoes\NBC_Boots_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_NBC_Boots_Pantera.paa",
			"NBCGear\Textures\KMP_NBC_Boots_Pantera.paa",
			"NBCGear\Textures\KMP_NBC_Boots_Pantera.paa"
		};
	};
	class KMP_NBC_Boots_WW1: NBCBootsBase
	{
		displayName="NBC Boots WW1";
		descriptionShort="NBC Boots WW1. by KILLJOY";
		model="\DZ\characters\shoes\NBC_Boots_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_NBC_Boots_WW1.paa",
			"NBCGear\Textures\KMP_NBC_Boots_WW1.paa",
			"NBCGear\Textures\KMP_NBC_Boots_WW1.paa"
		};
	};
	class KMP_NBC_Boots_UrbanNew: NBCBootsBase
	{
		displayName="NBC Boots UrbanNew";
		descriptionShort="KMP - NBC Boots UrbanNew by KILLJOY";
		model="\DZ\characters\shoes\NBC_Boots_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_NBC_Boots_UrbanNew.paa",
			"NBCGear\Textures\KMP_NBC_Boots_UrbanNew.paa",
			"NBCGear\Textures\KMP_NBC_Boots_UrbanNew.paa"
		};
	};
	class KMP_NBC_Boots_TOXIC: NBCBootsBase
    {
        displayName="NBC Boots Toxic";
        descriptionShort="KMP - NBC Boots Toxic by Phaedrus";
        model="\DZ\characters\shoes\NBC_Boots_g.p3d";
        scope=2;
        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[]=
        {
            "NBCGear\Textures\KMP_NBC_Boots_TOXIC.paa",
            "NBCGear\Textures\KMP_NBC_Boots_TOXIC.paa",
            "NBCGear\Textures\KMP_NBC_Boots_TOXIC.paa"
        };
    };
	class KMP_NBC_Boots_FRACTAL: NBCBootsBase
    {
        displayName="NBC Boots Fractal";
        descriptionShort="KMP - NBC Boots Fractal by Phaedrus";
        model="\DZ\characters\shoes\NBC_Boots_g.p3d";
        scope=2;
        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[]=
        {
            "NBCGear\Textures\KMP_NBC_Boots_FRACTAL.paa",
            "NBCGear\Textures\KMP_NBC_Boots_FRACTAL.paa",
            "NBCGear\Textures\KMP_NBC_Boots_FRACTAL.paa"
        };
    };
	class KMP_NBC_Boots_HEXCAM: NBCBootsBase
    {
        displayName="NBC Boots HexCam";
        descriptionShort="KMP - NBC Boots HexCam by Phaedrus";
        model="\DZ\characters\shoes\NBC_Boots_g.p3d";
        scope=2;
        hiddenSelections[]=
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[]=
        {
            "NBCGear\Textures\KMP_NBC_Boots_HEXCAM.paa",
            "NBCGear\Textures\KMP_NBC_Boots_HEXCAM.paa",
            "NBCGear\Textures\KMP_NBC_Boots_HEXCAM.paa"
        };
    };
//---------------------NBC GLOVES-------------------------------
	class NBCGloves_ColorBase;
	class KMP_nbc_gloves_STARS_co: NBCGloves_ColorBase
	{
		displayName="STARS NBC Gloves";
		descriptionShort="STARS NBC Gloves by KILLJOY";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_nbc_gloves_STARS_co.paa",
			"NBCGear\Textures\KMP_nbc_gloves_STARS_co.paa",
			"NBCGear\Textures\KMP_nbc_gloves_STARS_co.paa"
		};
	};
	class KMP_nbc_gloves_Umbrella_co: NBCGloves_ColorBase
	{
		displayName="Umbrella NBC Gloves";
		descriptionShort="Umbrella NBC Gloves by KILLJOY";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_nbc_gloves_Umbrella_co.paa",
			"NBCGear\Textures\KMP_nbc_gloves_Umbrella_co.paa",
			"NBCGear\Textures\KMP_nbc_gloves_Umbrella_co.paa"
		};
	};
	class KMP_NBC_Gloves_Geo: NBCGloves_ColorBase
	{
		displayName="NBC Gloves GeoCam";
		descriptionShort="NBC Gloves GeoCam by KILLJOY";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_NBC_Gloves_Geo.paa",
			"NBCGear\Textures\KMP_NBC_Gloves_Geo.paa",
			"NBCGear\Textures\KMP_NBC_Gloves_Geo.paa"
		};
	};
	class KMP_NBC_Gloves_Pantera: NBCGloves_ColorBase
	{
		displayName="NBC Gloves Pantera";
		descriptionShort="Pantera Camouflage is the standard camouflage of the Polish Armed Forces. by KILLJOY";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_NBC_Gloves_Pantera.paa",
			"NBCGear\Textures\KMP_NBC_Gloves_Pantera.paa",
			"NBCGear\Textures\KMP_NBC_Gloves_Pantera.paa"
		};
	};
	class KMP_NBC_Gloves_WW1: NBCGloves_ColorBase
	{
		displayName="NBC Gloves WW1";
		descriptionShort="NBC Gloves WW1. by KILLJOY";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_NBC_Gloves_WW1.paa",
			"NBCGear\Textures\KMP_NBC_Gloves_WW1.paa",
			"NBCGear\Textures\KMP_NBC_Gloves_WW1.paa"
		};
	};
	class KMP_NBC_Gloves_UrbanNew: NBCGloves_ColorBase
	{
		displayName="NBC Gloves UrbanNew";
		descriptionShort="NBC Gloves UrbanNew by KILLJOY";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"NBCGear\Textures\KMP_NBC_Gloves_UrbanNew.paa",
			"NBCGear\Textures\KMP_NBC_Gloves_UrbanNew.paa",
			"NBCGear\Textures\KMP_NBC_Gloves_UrbanNew.paa"
		};
	};
	class KMP_NBC_Gloves_TOXIC: NBCGloves_ColorBase
	{
		displayName="NBC Gloves Toxic";
		descriptionShort="KMP - NBC Gloves Toxic by Phaedrus";
		scope=2;
        hiddenSelectionsTextures[]=
        {
            "NBCGear\Textures\KMP_NBC_Gloves_TOXIC.paa",
            "NBCGear\Textures\KMP_NBC_Gloves_TOXIC.paa",
            "NBCGear\Textures\KMP_NBC_Gloves_TOXIC.paa"
        };
    };
	class KMP_NBC_Gloves_FRACTAL: NBCGloves_ColorBase
	{
		displayName="NBC Gloves Fractal";
		descriptionShort="KMP - NBC Gloves Fractal by Phaedrus";
		scope=2;
        hiddenSelectionsTextures[]=
        {
            "NBCGear\Textures\KMP_NBC_Gloves_FRACTAL.paa",
            "NBCGear\Textures\KMP_NBC_Gloves_FRACTAL.paa",
            "NBCGear\Textures\KMP_NBC_Gloves_FRACTAL.paa"
        };
    };
	class KMP_NBC_Gloves_HEXCAM: NBCGloves_ColorBase
	{
		displayName="NBC Gloves HexCam";
		descriptionShort="KMP - NBC Gloves HexCam by Phaedrus";
		scope=2;
        hiddenSelectionsTextures[]=
        {
            "NBCGear\Textures\KMP_NBC_Gloves_HEXCAM.paa",
            "NBCGear\Textures\KMP_NBC_Gloves_HEXCAM.paa",
            "NBCGear\Textures\KMP_NBC_Gloves_HEXCAM.paa"
        };
    };
};		
