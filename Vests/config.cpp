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
//--------------------- HIGH CAP -------------------------------
	class HighCapacityVest_ColorBase;
	class KMP_Highcap_cadpat_co: HighCapacityVest_ColorBase
	{
		scope=2;
		displayName="CADPAT High-Cap Vest";
		descriptionShort="CADPAT High-Cap by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_Highcap_cadpat_co.paa",
			"Vests\Textures\KMP_Highcap_cadpat_co.paa",
			"Vests\Textures\KMP_Highcap_cadpat_co.paa"
		};
	};
	class KMP_Highcap_multicam_co: HighCapacityVest_ColorBase
	{
		scope=2;
		displayName="Multicam High-Cap Vest";
		descriptionShort="Multicam High-Cap by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_Highcap_multicam_co.paa",
			"Vests\Textures\KMP_Highcap_multicam_co.paa",
			"Vests\Textures\KMP_Highcap_multicam_co.paa"
		};
	};
	class KMP_Highcap_Multicam_Snow_co: HighCapacityVest_ColorBase
	{
		scope=2;
		displayName="Alpine Multicam High-Cap Vest";
		descriptionShort="Alpine Multicam High-Cap by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_Highcap_Multicam_Snow_co.paa",
			"Vests\Textures\KMP_Highcap_Multicam_Snow_co.paa",
			"Vests\Textures\KMP_Highcap_Multicam_Snow_co.paa"
		};
	};
	class KMP_Highcap_ucp_co: HighCapacityVest_ColorBase
	{
		scope=2;
		displayName="UCP High-Cap Vest";
		descriptionShort="UCP High-Cap by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_Highcap_ucp_co.paa",
			"Vests\Textures\KMP_Highcap_ucp_co.paa",
			"Vests\Textures\KMP_Highcap_ucp_co.paa"
		};
	};
//--------------------- UPGRADED PLATE CARRIERS -------------------------------
	class PlateCarrierVest;
	class KMP_ballisticvest_Black_co: PlateCarrierVest
	{
		displayName="Upgraded Plate Carrier Black";
		descriptionShort="Black Plate Carrier Vest Upgraded with storage";
		model="\DZ\characters\vests\plate_carrier_g.p3d";
		scope=2;
		itemsCargoSize[]={7,10};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_ballisticvest_Black_co.paa",
			"Vests\Textures\KMP_ballisticvest_Black_co.paa",
			"Vests\Textures\KMP_ballisticvest_Black_co.paa"
	    };
	};
	class PlateCarrierHolster;
	class KMP_gun_holster_Black_co: PlateCarrierHolster
	{
		displayName="Black Plate Carrier Holster";
		descriptionShort="Black Plate Carrier Holster by KILLJOY";
		model="\DZ\characters\vests\plate_carrier_holster_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_gun_holster_Black_co.paa",
			"Vests\Textures\KMP_gun_holster_Black_co.paa",
			"Vests\Textures\KMP_gun_holster_Black_co.paa"
		};
	};
	class PlateCarrierPouches;
	class KMP_VestPouches_Black: PlateCarrierPouches
	{
		displayName="Black Plate Carrier Pouches";
		descriptionShort="Black Plate Carrier Pouches by KILLJOY";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_ballisticvest_Black_co.paa",
			"Vests\Textures\KMP_ballisticvest_Black_co.paa"
		};
	};
	class DOTD_ballisticvest_Realtree_co: PlateCarrierVest
	{
		displayName="Upgraded Plate Carrier";
		descriptionShort="Black Plate Carrier Vest Upgraded with more storage. By KILLJOY";
		model="\DZ\characters\vests\plate_carrier_g.p3d";
		scope=2;
		itemsCargoSize[]={7,10};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_ballisticvest_Realtree_co.paa",
			"Vests\Textures\KMP_ballisticvest_Realtree_co.paa",
			"Vests\Textures\KMP_ballisticvest_Realtree_co.paa"
		};
	};
	class KMP_ballisticvest_BlackDigi_co: PlateCarrierVest
	{
		displayName="Upgraded Plate Carrier";
		descriptionShort="Plate Carrier Vest Upgraded with more storage. By KILLJOY";
		model="\DZ\characters\vests\plate_carrier_g.p3d";
		scope=2;
		itemsCargoSize[]={7,10};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_ballisticvest_BlackDigi_co.paa",
			"Vests\Textures\KMP_ballisticvest_BlackDigi_co.paa",
			"Vests\Textures\KMP_ballisticvest_BlackDigi_co.paa"
		};
	};
	class KMP_ballisticvest_Fall_co: PlateCarrierVest
	{
		displayName="Upgraded Plate Carrier";
		descriptionShort="Plate Carrier Vest Upgraded with more storage. By KILLJOY";
		model="\DZ\characters\vests\plate_carrier_g.p3d";
		scope=2;
		itemsCargoSize[]={7,10};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_ballisticvest_Fall_co.paa",
			"Vests\Textures\KMP_ballisticvest_Fall_co.paa",
			"Vests\Textures\KMP_ballisticvest_Fall_co.paa"
		};
	};
	class KMP_ballisticvest_Multi_co: PlateCarrierVest
	{
		displayName="Upgraded Plate Carrier";
		descriptionShort="Plate Carrier Vest Upgraded with more storage. By KILLJOY";
		model="\DZ\characters\vests\plate_carrier_g.p3d";
		scope=2;
		itemsCargoSize[]={7,10};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_ballisticvest_Multi_co.paa",
			"Vests\Textures\KMP_ballisticvest_Multi_co.paa",
			"Vests\Textures\KMP_ballisticvest_Multi_co.paa"
		};
	};
	class KMP_ballisticvest_MultiDigi_co: PlateCarrierVest
	{
		displayName="Upgraded Plate Carrier";
		descriptionShort="Plate Carrier Vest Upgraded with more storage. By KILLJOY";
		model="\DZ\characters\vests\plate_carrier_g.p3d";
		scope=2;
		itemsCargoSize[]={7,10};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_ballisticvest_MultiDigi_co.paa",
			"Vests\Textures\KMP_ballisticvest_MultiDigi_co.paa",
			"Vests\Textures\KMP_ballisticvest_MultiDigi_co.paa"
		};
	};
	class KMP_ballisticvest_Tiger_co: PlateCarrierVest
	{
		displayName="Upgraded Plate Carrier";
		descriptionShort="Black Plate Carrier Vest Upgraded with more storage. By KILLJOY";
		model="\DZ\characters\vests\plate_carrier_g.p3d";
		scope=2;
		itemsCargoSize[]={7,10};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_ballisticvest_Tiger_co.paa",
			"Vests\Textures\KMP_ballisticvest_Tiger_co.paa",
			"Vests\Textures\KMP_ballisticvest_Tiger_co.paa"
		};
	};
	class KMP_ballisticvest_Pantera: PlateCarrierVest
	{
		displayName="Upgraded Plate Carrier - Pantera";
		descriptionShort="Plate Carrier Pantera - Upgraded with more storage. By KILLJOY";
		model="\DZ\characters\vests\plate_carrier_g.p3d";
		scope=2;
		itemsCargoSize[]={7,10};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_ballisticvest_Pantera.paa",
			"Vests\Textures\KMP_ballisticvest_Pantera.paa",
			"Vests\Textures\KMP_ballisticvest_Pantera.paa"
		};
	};
	class KMP_VestPouches_RealTree: PlateCarrierPouches
	{
		displayName="Black Plate Carrier Pouches";
		descriptionShort="Black Plate Carrier Pouches by KILLJOY";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_ballisticvest_Realtree_co.paa",
			"Vests\Textures\KMP_ballisticvest_Realtree_co.paa"
		};
	};
	class KMP_gun_holster_RealTree: PlateCarrierHolster
	{
		displayName="Black Plate Carrier Holster";
		descriptionShort="Black Plate Carrier Holster by KILLJOY";
		model="\DZ\characters\vests\plate_carrier_holster_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_ballisticvest_Realtree_co.paa",
			"Vests\Textures\KMP_ballisticvest_Realtree_co.paa",
			"Vests\Textures\KMP_ballisticvest_Realtree_co.paa"
		};
	};
	class KMP_VestPouches_Pantera: PlateCarrierPouches
	{
		displayName="Black Plate Carrier Pouches";
		descriptionShort="Black Plate Carrier Pouches by KILLJOY";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_ballisticvest_Pantera.paa",
			"Vests\Textures\KMP_ballisticvest_Pantera.paa"
		};
	};
	class KMP_gun_holster_Pantera: PlateCarrierHolster
	{
		displayName="Black Plate Carrier Holster";
		descriptionShort="Black Plate Carrier Holster by KILLJOY";
		model="\DZ\characters\vests\plate_carrier_holster_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_ballisticvest_Pantera.paa",
			"Vests\Textures\KMP_ballisticvest_Pantera.paa",
			"Vests\Textures\KMP_ballisticvest_Pantera.paa"
		};
	};
//---------------------PRESS VEST-------------------------------
	class PressVest_ColorBase;
	class KMP_STARS_vest_co: PressVest_ColorBase
	{
		scope=2;
		displayName="STARS Vest";
		descriptionShort="STARS Vest by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_STARS_vest_co.paa",
			"Vests\Textures\KMP_STARS_vest_co.paa",
			"Vests\Textures\KMP_STARS_vest_co.paa"
		};
	};
	class KMP_SWAT_vest_co: PressVest_ColorBase
	{
		scope=2;
		displayName="SWAT Vest";
		descriptionShort="SWAT Vest by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_SWAT_vest_co.paa",
			"Vests\Textures\KMP_SWAT_vest_co.paa",
			"Vests\Textures\KMP_SWAT_vest_co.paa"
		};
	};
//---------------------PRESS VEST-------------------------------
    class HuntingVest;
	class KMP_Warriors_vest_co: HuntingVest
	{
		displayName="Warriors Vest";
		descriptionShort="Warriors Vest by KILLJOY";
		model="\DZ\characters\vests\hunter_vest_g.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Vests\Textures\KMP_Warriors_vest_co.paa",
			"Vests\Textures\KMP_Warriors_vest_co.paa",
			"Vests\Textures\KMP_Warriors_vest_co.paa"
		};
	};
};		
