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
//---------------------SHIRTS-------------------------------
	class TShirt_ColorBase;
	class KMP_tshirt_vandar_black_co: TShirt_ColorBase
	{
		scope=2;
		displayName="Black Vandar Shirt";
		descriptionShort="VANDAR eSports Shirt by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Shirts\Textures\KMP_tshirt_vandar_black_co.paa",
			"Shirts\Textures\KMP_tshirt_vandar_black_co.paa",
			"Shirts\Textures\KMP_tshirt_vandar_black_co.paa"
		};
	};
	class KMP_tshirt_vandar_red_co: TShirt_ColorBase
	{
		scope=2;
		displayName="Red Vandar Shirt";
		descriptionShort="VANDAR eSports Shirt by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Shirts\Textures\KMP_tshirt_vandar_red_co.paa",
			"Shirts\Textures\KMP_tshirt_vandar_red_co.paa",
			"Shirts\Textures\KMP_tshirt_vandar_red_co.paa"
		};
	};
	class KMP_tshirt_vandar_white_co: TShirt_ColorBase
	{
		scope=2;
		displayName="White Vandar Shirt";
		descriptionShort="VANDAR eSports Shirt by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Shirts\Textures\KMP_tshirt_vandar_white_co.paa",
			"Shirts\Textures\KMP_tshirt_vandar_white_co.paa",
			"Shirts\Textures\KMP_tshirt_vandar_white_co.paa"
		};
	};
	class Shirt_ColorBase;
	class KMP_CheckShirtSleeve: Shirt_ColorBase
	{
		displayName="Black/White Rolled sleeve";
		descriptionShort="Black/White Rolled sleeve shirt. by KILLJOY";
		itemsCargoSize[]={7,6};
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Shirts\Textures\KMP_CheckShirt.paa",
			"Shirts\Textures\KMP_CheckShirt.paa",
			"Shirts\Textures\KMP_CheckShirt.paa"
		};
	};
	class KMP_CheckShirtHero: Shirt_ColorBase
	{
		displayName="Hero shirt";
		descriptionShort="Usually you'll find some cool people wearing these, Sometimes imposters. by KILLJOY";
		itemsCargoSize[]={7,6};
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Shirts\Textures\KMP_CheckShirtHero.paa",
			"Shirts\Textures\KMP_CheckShirtHero.paa",
			"Shirts\Textures\KMP_CheckShirtHero.paa"
		};
	};
	class KMP_CheckShirtHeroLong: Shirt_ColorBase
	{
		displayName="Hero shirt LS";
		descriptionShort="Usually you'll find some cool people wearing these, Sometimes imposters. DOTD by KILLJOY";
		itemsCargoSize[]={7,6};
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Shirts\Textures\KMP_CheckShirtHeroLong.paa",
			"Shirts\Textures\KMP_CheckShirtHeroLong.paa",
			"Shirts\Textures\KMP_CheckShirtHeroLong.paa"
		};
	};
//--------------------- SWEATERS -------------------------------
	class Sweater_ColorBase;
	class KMP_Freddy_Sweater: Sweater_ColorBase
	{
		scope=2;
		displayName="Freddy Sweater";
		descriptionShort="A comfortable sweater with the name Freddy written on the inside, This would feel nice to sleep in";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Shirts\Textures\KMP_Freddy_Sweater.paa",
			"Shirts\Textures\KMP_Freddy_Sweater.paa",
			"Shirts\Textures\KMP_Freddy_Sweater.paa"
		};
	};
//--------------------- HIKING JACKETS ------------------------------- 
	class HikingJacket_ColorBase;
	class CombatShirt_BlackDigi_co: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Combat Shirt Black digital";
		descriptionShort="Combat Shirt Black digital by KILLJOY DOTD";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Shirts\Textures\KMP_CombatShirt_BlackDigi_co.paa",
			"Shirts\Textures\KMP_CombatShirt_BlackDigi_co.paa",
			"Shirts\Textures\KMP_CombatShirt_BlackDigi_co.paa"
		};
	};
	class CombatShirt_DigiMulti_Green_co: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Combat Shirt Digital multicam";
		descriptionShort="Combat Shirt Digital multicam by KILLJOY DOTD";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Shirts\Textures\KMP_CombatShirt_DigiMulti_Green_co.paa",
			"Shirts\Textures\KMP_CombatShirt_DigiMulti_Green_co.paa",
			"Shirts\Textures\KMP_CombatShirt_DigiMulti_Green_co.paa"
		};
	};
	class CombatShirt_DigiMulti_Tan_co: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Combat Shirt Digital multicam";
		descriptionShort="Combat Shirt Digital multicam by KILLJOY DOTD";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Shirts\Textures\KMP_CombatShirt_DigiMulti_Tan_co.paa",
			"Shirts\Textures\KMP_CombatShirt_DigiMulti_Tan_co.paa",
			"Shirts\Textures\KMP_CombatShirt_DigiMulti_Tan_co.paa"
		};
	};
	class CombatShirt_FallTiger_co: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Combat Shirt Fall pattern";
		descriptionShort="Combat Shirt Fall pattern by KILLJOY DOTD";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Shirts\Textures\KMP_CombatShirt_FallTiger_co.paa",
			"Shirts\Textures\KMP_CombatShirt_FallTiger_co.paa",
			"Shirts\Textures\KMP_CombatShirt_FallTiger_co.paa"
		};
	};
	class CombatShirt_Multi_Green_co: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Combat Shirt Green multicam";
		descriptionShort="Combat Shirt Green multicam by KILLJOY DOTD";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Shirts\Textures\KMP_CombatShirt_Multi_Green_co.paa",
			"Shirts\Textures\KMP_CombatShirt_Multi_Green_co.paa",
			"Shirts\Textures\KMP_CombatShirt_Multi_Green_co.paa"
		};
	};
	class CombatShirt_Multi_Tan_co: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Combat Shirt Tan multicam";
		descriptionShort="Combat Shirt Tan multicam by KILLJOY DOTD";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Shirts\Textures\KMP_CombatShirt_Multi_Tan_co.paa",
			"Shirts\Textures\KMP_CombatShirt_Multi_Tan_co.paa",
			"Shirts\Textures\KMP_CombatShirt_Multi_Tan_co.paa"
		};
	};
	class CombatShirt_Tiger_Green_co: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Combat Shirt Tiger Green";
		descriptionShort="Combat Shirt Tiger Green by KILLJOY DOTD";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Shirts\Textures\KMP_CombatShirt_Tiger_Green_co.paa",
			"Shirts\Textures\KMP_CombatShirt_Tiger_Green_co.paa",
			"Shirts\Textures\KMP_CombatShirt_Tiger_Green_co.paa"
		};
	};
};		
