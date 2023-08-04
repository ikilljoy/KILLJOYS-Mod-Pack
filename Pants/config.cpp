//PANTS
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
//---------------------SLACK PANTS-------------------------------
	class SlacksPants_ColorBase;
	class KMP_SlackPants_Shitty: SlacksPants_ColorBase
	{
		scope=2;
		displayName="HEAVILY Worn slacks";
		descriptionShort="Someone got a bit too frightened";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_SlackPants_Shitty.paa",
			"Pants\Textures\KMP_SlackPants_Shitty.paa",
			"Pants\Textures\KMP_SlackPants_Shitty.paa"
		};
	};
//---------------------HUNTING PANTS-------------------------------
	class HunterPants_ColorBase;
	class KMP_HunterPantsSitko1: HunterPants_ColorBase
	{
		scope=2;
		displayName="Sitko Hunting pants";
		descriptionShort="Sitko Hunting pants";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_HunterPantsSitko1.paa",
			"Pants\Textures\KMP_HunterPantsSitko1.paa",
			"Pants\Textures\KMP_HunterPantsSitko1.paa"
		};
	};
	class KMP_HunterPantsSitko2: HunterPants_ColorBase
	{
		scope=2;
		displayName="Sitko Hunting pants";
		descriptionShort="Sitko Hunting pants";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_HunterPantsSitko2.paa",
			"Pants\Textures\KMP_HunterPantsSitko2.paa",
			"Pants\Textures\KMP_HunterPantsSitko2.paa"
		};
	};
//---------------------CARGO PANTS-------------------------------
	class CargoPants_ColorBase;
	class KMP_Realtree_CargoPants: CargoPants_ColorBase
	{
		scope=2;
		displayName="Realtree Cargo Pants";
		descriptionShort="Realtree Cargo Pants - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_Realtree_CargoPants.paa",
			"Pants\Textures\KMP_Realtree_CargoPants.paa",
			"Pants\Textures\KMP_Realtree_CargoPants.paa"
		};
	};
	class KMP_cargopants_multicam_co: CargoPants_ColorBase
	{
		scope=2;
		displayName="Multicam Cargo Pants";
		descriptionShort="Multicam Cargo Pants - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_cargopants_multicam_co.paa",
			"Pants\Textures\KMP_cargopants_multicam_co.paa",
			"Pants\Textures\KMP_cargopants_multicam_co.paa"
		};
	};
	class KMP_CargoPants_PinkTree: CargoPants_ColorBase
	{
		scope=2;
		displayName="Pink Realtree Cargo Pants";
		descriptionShort="Pink Realtree Cargo Pants - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_CargoPants_PinkTree.paa",
			"Pants\Textures\KMP_CargoPants_PinkTree.paa",
			"Pants\Textures\KMP_CargoPants_PinkTree.paa"
		};
	};
	class KMP_CargoPants_PurpleCam: CargoPants_ColorBase
	{
		scope=2;
		displayName="Purple Camo Cargo Pants";
		descriptionShort="Purple Camo Cargo Pants - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_CargoPants_PurpleCam.paa",
			"Pants\Textures\KMP_CargoPants_PurpleCam.paa",
			"Pants\Textures\KMP_CargoPants_PurpleCam.paa"
		};
	};
	class KMP_CargoPants_MtnCam: CargoPants_ColorBase
	{
		scope=2;
		displayName="Mountain Camo Cargo Pants";
		descriptionShort="Mountain Camo Cargo Pants - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_CargoPants_MtnCam.paa",
			"Pants\Textures\KMP_CargoPants_MtnCam.paa",
			"Pants\Textures\KMP_CargoPants_MtnCam.paa"
		};
	};
	class KMP_cargopants_Snow_co: CargoPants_ColorBase
	{
		scope=2;
		displayName="Snow Cargo Pants";
		descriptionShort="Snow Cargo Pants - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_cargopants_Snow_co.paa",
			"Pants\Textures\KMP_cargopants_Snow_co.paa",
			"Pants\Textures\KMP_cargopants_Snow_co.paa"
		};
	};
	class KMP_cargopants_BlackDigi: CargoPants_ColorBase
	{
		scope=2;
		displayName="Cargo pants - Black Digital";
		descriptionShort="Black Digital Cargo Pants - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_cargopants_BlackDigi_black.paa",
			"Pants\Textures\KMP_cargopants_BlackDigi_black.paa",
			"Pants\Textures\KMP_cargopants_BlackDigi_black.paa"
		};
	};
	class KMP_cargopants_DigiMulti_Black: CargoPants_ColorBase
	{
		scope=2;
		displayName="Multicam Digital Cargo Pants";
		descriptionShort="Multicam Digital Cargo Pants - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_cargopants_DigiMulti_Black.paa",
			"Pants\Textures\KMP_cargopants_DigiMulti_Black.paa",
			"Pants\Textures\KMP_cargopants_DigiMulti_Black.paa"
		};
	};
	class KMP_cargopants_DigiMulti_Green: CargoPants_ColorBase
	{
		scope=2;
		displayName="Multicam Digital Cargo Pants";
		descriptionShort="Multicam Cargo Pants - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_cargopants_DigiMulti_Green.paa",
			"Pants\Textures\KMP_cargopants_DigiMulti_Green.paa",
			"Pants\Textures\KMP_cargopants_DigiMulti_Green.paa"
		};
	};
	class KMP_cargopants_Fall_co: CargoPants_ColorBase
	{
		scope=2;
		displayName="Fall pattern Cargo Pants";
		descriptionShort="Fall pattern Cargo Pants - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_cargopants_Fall_co.paa",
			"Pants\Textures\KMP_cargopants_Fall_co.paa",
			"Pants\Textures\KMP_cargopants_Fall_co.paa"
		};
	};
	class KMP_cargopants_Multicam_black: CargoPants_ColorBase
	{
		scope=2;
		displayName="Multicam Cargo Pants DOTD";
		descriptionShort="Multicam Cargo Pants - KILLJOYS MOD PACK DOTD";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_cargopants_Multicam_black.paa",
			"Pants\Textures\KMP_cargopants_Multicam_black.paa",
			"Pants\Textures\KMP_cargopants_Multicam_black.paa"
		};
	};
	class KMP_cargopants_Multicam_green: CargoPants_ColorBase
	{
		scope=2;
		displayName="Multicam Cargo Pants DOTD";
		descriptionShort="Multicam Cargo Pants - KILLJOYS MOD PACK DOTD";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_cargopants_Multicam_green.paa",
			"Pants\Textures\KMP_cargopants_Multicam_green.paa",
			"Pants\Textures\KMP_cargopants_Multicam_green.paa"
		};
	};
	class KMP_cargopants_Tiger_green: CargoPants_ColorBase
	{
		scope=2;
		displayName="Tiger Cargo Pants";
		descriptionShort="Tiger Cargo Pants - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_cargopants_Tiger_green.paa",
			"Pants\Textures\KMP_cargopants_Tiger_green.paa",
			"Pants\Textures\KMP_cargopants_Tiger_green.paa"
		};
	};
	class KMP_cargopants_Pantera: CargoPants_ColorBase
	{
		scope=2;
		displayName="Pantera Cargo Pants";
		descriptionShort="Pantera Cargo Pants - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_cargopants_Pantera.paa",
			"Pants\Textures\KMP_cargopants_Pantera.paa",
			"Pants\Textures\KMP_cargopants_Pantera.paa"
		};
	};
	class KMP_CargoPants_HexCam: CargoPants_ColorBase
	{
		scope=2;
		displayName="HexCam Cargo Pants";
		descriptionShort="KMP - HexCam Cargo Pants - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_CargoPants_HexCam.paa",
			"Pants\Textures\KMP_CargoPants_HexCam.paa",
			"Pants\Textures\KMP_CargoPants_HexCam.paa"
		};
	};
	class KMP_CargoPants_ToxicAutumn: CargoPants_ColorBase
	{
		scope=2;
		displayName="ToxicAutumn Cargo Pants";
		descriptionShort="KMP - ToxicAutumn Cargo Pants - KILLJOYS MOD PACK";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_CargoPants_ToxicAutumn.paa",
			"Pants\Textures\KMP_CargoPants_ToxicAutumn.paa",
			"Pants\Textures\KMP_CargoPants_ToxicAutumn.paa"
		};
	};
//---------------------BDU PANTS-------------------------------
	class BDUPants;
	class KMP_bdu_pants_Black_co: BDUPants
	{
		displayName="Black BDU Pants";
		descriptionShort="Black BDU Pants - KILLJOYS MOD PACK";
		model="\DZ\characters\pants\bdu_pants_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_bdu_pants_Black_co.paa",
			"Pants\Textures\KMP_bdu_pants_Black_co.paa",
			"Pants\Textures\KMP_bdu_pants_Black_co.paa"
		};
	};
	class KMP_bdu_pants_Multicam_co: BDUPants
	{
		displayName="Black BDU Pants";
		descriptionShort="Black BDU Pants - KILLJOYS MOD PACK";
		model="\DZ\characters\pants\bdu_pants_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_bdu_pants_Multicam_co.paa",
			"Pants\Textures\KMP_bdu_pants_Multicam_co.paa",
			"Pants\Textures\KMP_bdu_pants_Multicam_co.paa"
		};
	};
	class KMP_Flecktarn_bdu_pants: BDUPants
	{
		displayName="Flecktarn BDU Pants";
		descriptionShort="Flecktarn BDU Pants - KILLJOYS MOD PACK";
		model="\DZ\characters\pants\bdu_pants_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_Flecktarn_bdu_pants.paa",
			"Pants\Textures\KMP_Flecktarn_bdu_pants.paa",
			"Pants\Textures\KMP_Flecktarn_bdu_pants.paa"
		};
	};
//---------------------GORKA PANTS-------------------------------
    class GorkaPants_ColorBase;
	class KMP_gorka_pants_Reclamation: GorkaPants_ColorBase
	{
		displayName="Reclamation Team Gorka Pants";
		descriptionShort="Strange bite proof pants, There is an A Marked on its tag.  - KILLJOYS MOD PACK";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_gorka_pants_Reclamation.paa",
			"Pants\Textures\KMP_gorka_pants_Reclamation.paa",
			"Pants\Textures\KMP_gorka_pants_Reclamation.paa"
		};
	};
	class KMP_gorka_pants_Black: GorkaPants_ColorBase
	{
		displayName="Black Gorka Pants";
		descriptionShort="Black Gorka Pants - KILLJOYS MOD PACK";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_gorka_pants_Black.paa",
			"Pants\Textures\KMP_gorka_pants_Black.paa",
			"Pants\Textures\KMP_gorka_pants_Black.paa"
		};
	};
	class KMP_gorka_pants_cadpat_CO: GorkaPants_ColorBase
	{
		displayName="CADPAT Gorka Pants";
		descriptionShort="CADPAT Gorka Pants - KILLJOYS MOD PACK";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_gorka_pants_cadpat_CO.paa",
			"Pants\Textures\KMP_gorka_pants_cadpat_CO.paa",
			"Pants\Textures\KMP_gorka_pants_cadpat_CO.paa"
		};
	};
	class KMP_gorka_pants_ucp_co: GorkaPants_ColorBase
	{
		displayName="UCP Gorka Pants";
		descriptionShort="UCP Gorka Pants - KILLJOYS MOD PACK";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_gorka_pants_ucp_co.paa",
			"Pants\Textures\KMP_gorka_pants_ucp_co.paa",
			"Pants\Textures\KMP_gorka_pants_ucp_co.paa"
		};
	};
	class KMP_GorkaPants_Multicam_Snow_co: GorkaPants_ColorBase
	{
		displayName="Alpine Multicam Gorka Pants";
		descriptionShort="Alpine Multicam Gorka Pants - KILLJOYS MOD PACK";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_GorkaPants_Multicam_Snow_co.paa",
			"Pants\Textures\KMP_GorkaPants_Multicam_Snow_co.paa",
			"Pants\Textures\KMP_GorkaPants_Multicam_Snow_co.paa"
		};
	};
//---------------------POLICE PANTS-------------------------------
    class PolicePants;
	class KMP_STARS_pants_co: PolicePants
	{
		displayName="STARS Pants";
		descriptionShort="STARS Pants - KILLJOYS MOD PACK";
		model="\DZ\characters\pants\PolicePants_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_STARS_pants_co.paa",
			"Pants\Textures\KMP_STARS_pants_co.paa",
			"Pants\Textures\KMP_STARS_pants_co.paa"
		};
	};
	class KMP_SWAT_pants_co: PolicePants
	{
		displayName="SWAT Pants";
		descriptionShort="SWAT Pants - KILLJOYS MOD PACK";
		model="\DZ\characters\pants\PolicePants_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Pants\Textures\KMP_SWAT_pants_co.paa",
			"Pants\Textures\KMP_SWAT_pants_co.paa",
			"Pants\Textures\KMP_SWAT_pants_co.paa"
		};
	};
};		
