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
//--------------------- Tortilla Bags -------------------------------
	class TortillaBag;
	class KMP_tortila_Black: TortillaBag
	{
		displayName="Black TortillaBag bag";
		descriptionShort="Black TortillaBag bag by KILLJOY";
		model="\dz\characters\backpacks\tortilla_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Backpacks\Textures\KMP_tortila_Black.paa",
			"Backpacks\Textures\KMP_tortila_Black.paa",
			"Backpacks\Textures\KMP_tortila_Black.paa"
		};
	};
//--------------------- Taloon Bags -------------------------------
	class TaloonBag_ColorBase;
	class KMP_Taloon_Black_co: TaloonBag_ColorBase
	{
		scope=2;
		displayName="Black TaloonBag";
		descriptionShort="Black TaloonBag by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Backpacks\Textures\KMP_Taloon_Black_co.paa",
			"Backpacks\Textures\KMP_Taloon_Black_co.paa",
			"Backpacks\Textures\KMP_Taloon_Black_co.paa"
		};
	};
//--------------------- Alice Bags -------------------------------
    class AliceBag_ColorBase;
	class KMP_alicebackpack_Black: AliceBag_ColorBase
	{
		scope=2;
		displayName="Black AliceBag";
		descriptionShort="Black AliceBag by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Backpacks\Textures\KMP_alicebackpack_Black.paa",
			"Backpacks\Textures\KMP_alicebackpack_Black.paa",
			"Backpacks\Textures\KMP_alicebackpack_Black.paa"
		};
	};
//--------------------- Coyote Bags -------------------------------
    class CoyoteBag_ColorBase;
	class KMP_CoyoteBag_blackpat_co: CoyoteBag_ColorBase
	{
		scope=2;
		displayName="Black Cam CoyoteBag";
		descriptionShort="Black Cam CoyoteBag by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Backpacks\Textures\KMP_CoyoteBag_blackpat_co.paa",
			"Backpacks\Textures\KMP_CoyoteBag_blackpat_co.paa",
			"Backpacks\Textures\KMP_CoyoteBag_blackpat_co.paa"
		};
	};
	class KMP_CoyoteBag_cadpat_co: CoyoteBag_ColorBase
	{
		scope=2;
		displayName="CADPAT CoyoteBag";
		descriptionShort="CADPAT CoyoteBag by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Backpacks\Textures\KMP_CoyoteBag_cadpat_co.paa",
			"Backpacks\Textures\KMP_CoyoteBag_cadpat_co.paa",
			"Backpacks\Textures\KMP_CoyoteBag_cadpat_co.paa"
		};
	};
	class KMP_CoyoteBag_multicam_co: CoyoteBag_ColorBase
	{
		scope=2;
		displayName="CADPAT CoyoteBag";
		descriptionShort="CADPAT CoyoteBag by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Backpacks\Textures\KMP_CoyoteBag_multicam_co.paa",
			"Backpacks\Textures\KMP_CoyoteBag_multicam_co.paa",
			"Backpacks\Textures\KMP_CoyoteBag_multicam_co.paa"
		};
	};
	class KMP_CoyoteBag_ucp_co: CoyoteBag_ColorBase
	{
		scope=2;
		displayName="UCP CoyoteBag";
		descriptionShort="UCP CoyoteBag by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Backpacks\Textures\KMP_CoyoteBag_ucp_co.paa",
			"Backpacks\Textures\KMP_CoyoteBag_ucp_co.paa",
			"Backpacks\Textures\KMP_CoyoteBag_ucp_co.paa"
		};
	};
	class KMP_CoyoteBP_Snow_co: CoyoteBag_ColorBase
	{
		scope=2;
		displayName="Snow CoyoteBag";
		descriptionShort="Snow CoyoteBag by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Backpacks\Textures\KMP_CoyoteBP_Snow_co.paa",
			"Backpacks\Textures\KMP_CoyoteBP_Snow_co.paa",
			"Backpacks\Textures\KMP_CoyoteBP_Snow_co.paa"
		};
	};
//--------------------- Dry Bags -------------------------------
    class DryBag_ColorBase;
	class KMP_DryBag_Snow_co: DryBag_ColorBase
	{
		scope=2;
		displayName="Snow DryBag";
		descriptionShort="Snow DryBag by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Backpacks\Textures\KMP_DryBag_Snow_co.paa",
			"Backpacks\Textures\KMP_DryBag_Snow_co.paa",
			"Backpacks\Textures\KMP_DryBag_Snow_co.paa"
		};
	};
	class KMP_DryBag_SnowCam_co: DryBag_ColorBase
	{
		scope=2;
		displayName="Snow DryBag";
		descriptionShort="Snow DryBag by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Backpacks\Textures\KMP_DryBag_SnowCam_co.paa",
			"Backpacks\Textures\KMP_DryBag_SnowCam_co.paa",
			"Backpacks\Textures\KMP_DryBag_SnowCam_co.paa"
		};
	};
//--------------------- Assault Bags -------------------------------
    class AssaultBag_ColorBase;
	class KMP_Black_AssaultBag: AssaultBag_ColorBase
	{
		displayName="Black Assault bag";
		descriptionShort="Black Assault bag by KILLJOY";
		model="\dz\characters\backpacks\boulder_m53_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Backpacks\Textures\KMP_Black_Assault_bag.paa",
			"Backpacks\Textures\KMP_Black_Assault_bag.paa",
			"Backpacks\Textures\KMP_Black_Assault_bag.paa"
		};
	};
	class KMP_SWAT_AssaultBag: AssaultBag_ColorBase
	{
		displayName="SWAT Assault bag";
		descriptionShort="SWAT Assault bag by KILLJOY";
		model="\dz\characters\backpacks\boulder_m53_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Backpacks\Textures\KMP_SWAT_Assault_Bag.paa",
			"Backpacks\Textures\KMP_SWAT_Assault_Bag.paa",
			"Backpacks\Textures\KMP_SWAT_Assault_Bag.paa"
		};
	};
	class KMP_STARS_AssaultBag: AssaultBag_ColorBase
	{
		displayName="STARS Assault bag";
		descriptionShort="STARS Assault bag by KILLJOY";
		model="\dz\characters\backpacks\boulder_m53_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Backpacks\Textures\KMP_STARS_Assault_bag.paa",
			"Backpacks\Textures\KMP_STARS_Assault_bag.paa",
			"Backpacks\Textures\KMP_STARS_Assault_bag.paa"
		};
	};
//--------------------- Hunting Bags -------------------------------
    class HuntingBag;
	class KMP_HuntingBag_Black: HuntingBag
	{
		displayName="Black Hunting bag";
		descriptionShort="Black Hunting bag by KILLJOY";
		model="\dz\characters\backpacks\hunting_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Backpacks\Textures\KMP_black_hunting_co.paa",
			"Backpacks\Textures\KMP_black_hunting_co.paa",
			"Backpacks\Textures\KMP_black_hunting_co.paa"
		};
	};
//--------------------- Mountain Bags -------------------------------
    class MountainBag_ColorBase;
	class KMP_mountain_Black_co: MountainBag_ColorBase
	{
		displayName="Black Hunting bag";
		descriptionShort="Black Mountain Bag by KILLJOY";
		model="\dz\characters\backpacks\mountain_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Backpacks\Textures\KMP_mountain_Black_co.paa",
			"Backpacks\Textures\KMP_mountain_Black_co.paa",
			"Backpacks\Textures\KMP_mountain_Black_co.paa"
		};
	};
	class KMP_mountain_STARS_co: MountainBag_ColorBase
	{
		displayName="STARS Mountain Bag";
		descriptionShort="STARS Mountain Bag by KILLJOY";
		model="\dz\characters\backpacks\mountain_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Backpacks\Textures\KMP_mountain_STARS_co.paa",
			"Backpacks\Textures\KMP_mountain_STARS_co.paa",
			"Backpacks\Textures\KMP_mountain_STARS_co.paa"
		};
	};
	class KMP_mountain_SWAT_co: MountainBag_ColorBase
	{
		displayName="SWAT Mountain Bag";
		descriptionShort="SWAT Mountain Bag by KILLJOY";
		model="\dz\characters\backpacks\mountain_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Backpacks\Textures\KMP_mountain_SWAT_co.paa",
			"Backpacks\Textures\KMP_mountain_SWAT_co.paa",
			"Backpacks\Textures\KMP_mountain_SWAT_co.paa"
		};
	};
	class KMP_mountain_snow_co: MountainBag_ColorBase
	{
		displayName="Snow Mountain Bag";
		descriptionShort="Snow Mountain Bag by KILLJOY";
		model="\dz\characters\backpacks\mountain_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Backpacks\Textures\KMP_mountain_snow_co.paa",
			"Backpacks\Textures\KMP_mountain_snow_co.paa",
			"Backpacks\Textures\KMP_mountain_snow_co.paa"
		};
	};
	class KMP_mountain_snowCam_co: MountainBag_ColorBase
	{
		displayName="SnowCam Mountain Bag";
		descriptionShort="SnowCam Mountain Bag by KILLJOY";
		model="\dz\characters\backpacks\mountain_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Backpacks\Textures\KMP_mountain_snowCam_co.paa",
			"Backpacks\Textures\KMP_mountain_snowCam_co.paa",
			"Backpacks\Textures\KMP_mountain_snowCam_co.paa"
		};
	};
};		
