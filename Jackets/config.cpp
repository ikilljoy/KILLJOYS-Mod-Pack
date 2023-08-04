//JACKETS
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
//---------------------HuntingJacket-------------------------------
	class HuntingJacket_ColorBase;
	class KMP_Realtree_HuntingJacket: HuntingJacket_ColorBase
	{
		scope=2;
		displayName="Realtree Hunting Jacket";
		descriptionShort="Flecktarn Realtree Hunting Jacket - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_Realtree_HuntingJacket.paa",
			"Jackets\Textures\KMP_Realtree_HuntingJacket.paa",
			"Jackets\Textures\KMP_Realtree_HuntingJacket.paa"
		};
	};
	class KMP_HuntingJacket_Pantera: HuntingJacket_ColorBase
	{
		scope=2;
		displayName="Realtree Hunting Jacket";
		descriptionShort="Flecktarn Realtree Hunting Jacket - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_HuntingJacket_Pantera.paa",
			"Jackets\Textures\KMP_HuntingJacket_Pantera.paa",
			"Jackets\Textures\KMP_HuntingJacket_Pantera.paa"
		};
	};
	class KMP_HuntingJacket_Sitko1: HuntingJacket_ColorBase
	{
		scope=2;
		displayName="Sitko Hunting Jacket";
		descriptionShort="Sitko Hunting Jacket - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_HuntingJacket_Sitko1.paa",
			"Jackets\Textures\KMP_HuntingJacket_Sitko1.paa",
			"Jackets\Textures\KMP_HuntingJacket_Sitko1.paa"
		};
	};
	class KMP_HuntingJacket_Sitko2: HuntingJacket_ColorBase
	{
		scope=2;
		displayName="Sitko Hunting Jacket";
		descriptionShort="Sitko Hunting Jacket - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_HuntingJacket_Sitko2.paa",
			"Jackets\Textures\KMP_HuntingJacket_Sitko2.paa",
			"Jackets\Textures\KMP_HuntingJacket_Sitko2.paa"
		};
	};
//--------------------- TTSKO -------------------------------
	class TTsKOJacket_ColorBase;
	class KMP_Flecktarn_ttsko_Jacket: TTsKOJacket_ColorBase
	{
		scope=2;
		displayName="Flecktarn TTSKO Jacket";
		descriptionShort="Flecktarn TTSKO Jacket - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_Flecktarn_ttsko_Jacket.paa",
			"Jackets\Textures\KMP_Flecktarn_ttsko_Jacket.paa",
			"Jackets\Textures\KMP_Flecktarn_ttsko_Jacket.paa"
		};
	};
//--------------------- M65 -------------------------------
	class M65Jacket_ColorBase;
	class KMP_M65_Jacket_DpmWinter_co: M65Jacket_ColorBase
	{
		scope=2;
		displayName="SnowCam M65Jacket";
		descriptionShort="SnowCam M65Jacket - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_M65_Jacket_DpmWinter_co.paa",
			"Jackets\Textures\KMP_M65_Jacket_DpmWinter_co.paa",
			"Jackets\Textures\KMP_M65_Jacket_DpmWinter_co.paa"
		};
	};
	class KMP_m65_jacket_multicam_co: M65Jacket_ColorBase
	{
		scope=2;
		displayName="Pantera M65Jacket";
		descriptionShort="Pantera M65Jacket - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_m65_jacket_multicam_co.paa",
			"Jackets\Textures\KMP_m65_jacket_multicam_co.paa",
			"Jackets\Textures\KMP_m65_jacket_multicam_co.paa"
		};
	};
	class KMP_M65_Jacket_ToxicAutumn: M65Jacket_ColorBase
    {
        scope=2;
        displayName="KMP - Toxic Autumn M65Jacket";
        descriptionShort="Toxic Autumn M65Jacket - KILLJOYS MOD PACK";
        visibilityModifier=0.94999999;
        hiddenSelectionsTextures[]=
        {
            "Jackets\Textures\KMP_M65_Jacket_ToxicAutumn.paa",
            "Jackets\Textures\KMP_M65_Jacket_ToxicAutumn.paa",
            "Jackets\Textures\KMP_M65_Jacket_ToxicAutumn.paa"
        };
    };
	class KMP_M65_Jacket_Black: M65Jacket_ColorBase
    {
        scope=2;
        displayName="Black M65Jacket";
        descriptionShort="KMP - Black M65Jacket - KILLJOYS MOD PACK";
        visibilityModifier=0.94999999;
        hiddenSelectionsTextures[]=
        {
            "Jackets\Textures\KMP_M65_Jacket_Black.paa",
            "Jackets\Textures\KMP_M65_Jacket_Black.paa",
            "Jackets\Textures\KMP_M65_Jacket_Black.paa"
        };
    };
//---------------------RIDERS JACKET-------------------------------
	class RidersJacket_ColorBase;
	class KMP_riders_jacket_Warriors_co: RidersJacket_ColorBase
	{
		scope=2;
		displayName="Warriors Riders Jacket";
		descriptionShort="Riders Jacker Warriors - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_riders_jacket_Warriors_co.paa",
			"Jackets\Textures\KMP_riders_jacket_Warriors_co.paa",
			"Jackets\Textures\KMP_riders_jacket_Warriors_co.paa"
		};
	};
	class KMP_riders_jacket_Mozzie_co: RidersJacket_ColorBase
	{
		scope=2;
		displayName="Mozzie Club Jacket";
		descriptionShort="Mozzie Club Jacket by Vanguard";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_riders_jacket_Mozzie_co.paa",
			"Jackets\Textures\KMP_riders_jacket_Mozzie_co.paa",
			"Jackets\Textures\KMP_riders_jacket_Mozzie_co.paa"
		};
	};
	//---------------------BDU JACKET-------------------------------
	class BDUJacket;
	class KMP_bdu_jacket_Black_co: BDUJacket
	{
		displayName="Black BDU Jacket";
		descriptionShort="Black BDU Jacket - KILLJOYS MOD PACK";
		model="\DZ\characters\tops\M65_Jacket_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_bdu_jacket_Black_co.paa",
			"Jackets\Textures\KMP_bdu_jacket_Black_co.paa",
			"Jackets\Textures\KMP_bdu_jacket_Black_co.paa"
		};
	};
	class KMP_bdu_jacket_Multicam_co: BDUJacket
	{
		displayName="Multicam BDU Jacket";
		descriptionShort="Multicam BDU Jacket - KILLJOYS MOD PACK";
		model="\DZ\characters\tops\M65_Jacket_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_bdu_jacket_Multicam_co.paa",
			"Jackets\Textures\KMP_bdu_jacket_Multicam_co.paa",
			"Jackets\Textures\KMP_bdu_jacket_Multicam_co.paa"
		};
	};
	//---------------------GORKA TOPS-------------------------------
	class GorkaEJacket_ColorBase;
	class KMP_gorka_upper_Reclamation: GorkaEJacket_ColorBase
	{
		scope=2;
		displayName="Reclamation Gorka Jacket";
		descriptionShort="Strange bite proof jacket marked with an unknown logo of 3 circles and Reclamation team patches, There is an A Marked on its tag.  - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_gorka_upper_Reclamation.paa",
			"Jackets\Textures\KMP_gorka_upper_Reclamation.paa",
			"Jackets\Textures\KMP_gorka_upper_Reclamation.paa"
		};
	};
	class KMP_gorka_upper_Black: GorkaEJacket_ColorBase
	{
		scope=2;
		displayName="Black Gorka Jacket";
		descriptionShort="Black Gorka Jacket - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_gorka_upper_Black.paa",
			"Jackets\Textures\KMP_gorka_upper_Black.paa",
			"Jackets\Textures\KMP_gorka_upper_Black.paa"
		};
	};
	class KMP_gorka_upper_cadpat_co: GorkaEJacket_ColorBase
	{
		scope=2;
		displayName="CADPAT Gorka Jacket";
		descriptionShort="CADPAT Gorka Jacket - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_gorka_upper_cadpat_co.paa",
			"Jackets\Textures\KMP_gorka_upper_cadpat_co.paa",
			"Jackets\Textures\KMP_gorka_upper_cadpat_co.paa"
		};
	};
	class KMP_gorka_upper_ucp_co: GorkaEJacket_ColorBase
	{
		scope=2;
		displayName="UCP Gorka Jacket";
		descriptionShort="UCP Gorka Jacket - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_gorka_upper_ucp_co.paa",
			"Jackets\Textures\KMP_gorka_upper_ucp_co.paa",
			"Jackets\Textures\KMP_gorka_upper_ucp_co.paa"
		};
	};
	class KMP_GorkaTop_Multicam_Snow_co: GorkaEJacket_ColorBase
	{
		scope=2;
		displayName="Alpine Multicam Gorka Jacket";
		descriptionShort="Alpine Multicam Gorka Jacket - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_GorkaTop_Multicam_Snow_co.paa",
			"Jackets\Textures\KMP_GorkaTop_Multicam_Snow_co.paa",
			"Jackets\Textures\KMP_GorkaTop_Multicam_Snow_co.paa"
		};
	};
	//---------------------POLICE JACKETS-------------------------------
	class PoliceJacket;
	class KMP_STARS_jacket_co: PoliceJacket
	{
		displayName="STARS Jacket";
		descriptionShort="STARS Jacket - KILLJOYS MOD PACK";
		model="\DZ\characters\tops\PoliceJacket_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_STARS_jacket_co.paa",
			"Jackets\Textures\KMP_STARS_jacket_co.paa",
			"Jackets\Textures\KMP_STARS_jacket_co.paa"
		};
	};
	class KMP_SWAT_jacket_co: PoliceJacket
	{
		displayName="SWAT Jacket";
		descriptionShort="SWAT Jacket - KILLJOYS MOD PACK";
		model="\DZ\characters\tops\PoliceJacket_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_SWAT_jacket_co.paa",
			"Jackets\Textures\KMP_SWAT_jacket_co.paa",
			"Jackets\Textures\KMP_SWAT_jacket_co.paa"
		};
	};
//--------------------- HIKING JACKETS -------------------------------
    class HikingJacket_ColorBase;
	class KMP_hikingjacket_PinkTree: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Pink Realtree hiking jacket";
		descriptionShort="Pink Realtree hiking jacket - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_HikingJacket_PinkTree.paa",
			"Jackets\Textures\KMP_HikingJacket_PinkTree.paa",
			"Jackets\Textures\KMP_HikingJacket_PinkTree.paa"
		};
	};
	class KMP_HikingJacket_PurpleCam: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Purple Camo hiking jacket";
		descriptionShort="Purple Camo hiking jacket - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_HikingJacket_PurpleCam.paa",
			"Jackets\Textures\KMP_HikingJacket_PurpleCam.paa",
			"Jackets\Textures\KMP_HikingJacket_PurpleCam.paa"
		};
	};
	class KMP_HikingJacket_MtnCam: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Mountain Camo hiking jacket";
		descriptionShort="Mountain Camo hiking jacket - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_HikingJacket_MtnCam.paa",
			"Jackets\Textures\KMP_HikingJacket_MtnCam.paa",
			"Jackets\Textures\KMP_HikingJacket_MtnCam.paa"
		};
	};
	class KMP_hikingjacket_Pantera: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Pantera hiking jacket";
		descriptionShort="Pantera Camo hiking jacket - KILLJOY ";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Jackets\Textures\KMP_hikingjacket_Pantera.paa",
			"Jackets\Textures\KMP_hikingjacket_Pantera.paa",
			"Jackets\Textures\KMP_hikingjacket_Pantera.paa"
		};
	};
	class KMP_hikingjacket_ToxicAutumn: HikingJacket_ColorBase
    {
        scope=2;
        displayName="Toxic Autumn Hiking Jacket";
        descriptionShort="KMP - ToxicAutumn Hiking Jacket - KILLJOYS MOD PACK";
        visibilityModifier=0.94999999;
        hiddenSelectionsTextures[]=
        {
            "Jackets\Textures\KMP_hikingjacket_ToxicAutumn.paa",
            "Jackets\Textures\KMP_hikingjacket_ToxicAutumn.paa",
            "Jackets\Textures\KMP_hikingjacket_ToxicAutumn.paa"
        };
    };
	class KMP_hikingjacket_HexCam: HikingJacket_ColorBase
    {
        scope=2;
        displayName="HexCam Hiking Jacket";
        descriptionShort="KMP - HexCam Hiking Jacket - KILLJOYS MOD PACK";
        visibilityModifier=0.94999999;
        hiddenSelectionsTextures[]=
        {
            "Jackets\Textures\KMP_hikingjacket_HexCam.paa",
            "Jackets\Textures\KMP_hikingjacket_HexCam.paa",
            "Jackets\Textures\KMP_hikingjacket_HexCam.paa"
        };
    };
	class KMP_hikingjacket_Black: HikingJacket_ColorBase
    {
        scope=2;
        displayName="Black Hiking Jacket";
        descriptionShort="KMP - Black Hiking Jacket - KILLJOYS MOD PACK";
        visibilityModifier=0.94999999;
        hiddenSelectionsTextures[]=
        {
            "Jackets\Textures\KMP_hikingjacket_Black.paa",
            "Jackets\Textures\KMP_hikingjacket_Black.paa",
            "Jackets\Textures\KMP_hikingjacket_Black.paa"
        };
    };
};		
