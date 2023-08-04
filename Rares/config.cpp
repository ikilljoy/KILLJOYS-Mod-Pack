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
//--------------------- UPDATED LIGHTERS -------------------------------
	class PetrolLighter;
    class ZippoBase: PetrolLighter
	{
		scope=2;
		displayName="Its a zippo..";
		descriptionShort="Its a zippo..";
		model="Rares\Models\Zippo.p3d";
		rotationFlags=12;
		absorbency=0;
		weight=50;
		itemSize[]={1,1};
		stackedUnit="ml";
		quantityBar=1;
		varQuantityInit=20;
		varQuantityMin=0;
		varQuantityMax=20;
		varQuantityDestroyOnMin=0;
		destroyOnEmpty=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\cooking\data\petrol_lighter.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\cooking\data\petrol_lighter.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\cooking\data\petrol_lighter_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\cooking\data\petrol_lighter_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\cooking\data\petrol_lighter_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class LighterZippo
				{
					soundSet="Lighter_Soundset";
					id=201;
				};
			};
		};
	};
    class KMP_LighterDOTD_v2: ZippoBase
	{
		scope=2;
		displayName="RARE DOTD Lighter";
		descriptionShort="An old lighter riddled with ads, This is the rarest lighter in its set. Lighter 0 of 10 - KILLJOYS MOD PACK";
		model="Rares\Models\Zippo.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Rares\Textures\KMP_LighterDOTD.paa"
		};
	};
	class KMP_LighterBASE_v2: ZippoBase
	{
		scope=2;
		displayName="RARE collectible lighter";
		descriptionShort="An old lighter riddled with ads, This is the rarest lighter in its set. Lighter 1 of 10 - KILLJOYS MOD PACK";
		model="Rares\Models\Zippo.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Rares\Textures\KMP_LighterBASE.paa"
		};
	};
	class KMP_LighterKILLJOY_v2: ZippoBase
	{
		scope=2;
		displayName="RARE KILLJOY collectible lighter";
		descriptionShort="An old lighter riddled with ads, This is the rarest lighter in its set. Lighter 2 of 10 - KILLJOYS MOD PACK";
		model="Rares\Models\Zippo.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Rares\Textures\KMP_LighterKILLJOY.paa"
		};
	};
	class KMP_LighterMum_v2: ZippoBase
	{
		scope=2;
		displayName="RARE MUM collectible lighter";
		descriptionShort="An old pre Z collectible lighter with The Imperial Seal of Japan, also called the Chrysanthemum Seal, This should be worth good money. Item 3 of 10 - KILLJOYS MOD PACK";
		model="Rares\Models\Zippo.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Rares\Textures\KMP_LighterMum.paa"
		};
	};
	class KMP_LighterNationalParty_v2: ZippoBase
	{
		scope=2;
		displayName="RARE National Party Lighter";
		descriptionShort="An old pre Z Civil War collectible lighter, This should be worth good money. Item 4 of 10 - KILLJOYS MOD PACK";
		model="Rares\Models\Zippo.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Rares\Textures\KMP_LighterNationalParty.paa"
		};
	};
	class KMP_LighterRadiation_v2: ZippoBase
	{
		scope=2;
		displayName="Rare Radiation Lighter";
		descriptionShort="An old Radiation logo collectible lighter, This should be worth good money. Item 5 of 10 - KILLJOYS MOD PACK";
		model="Rares\Models\Zippo.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Rares\Textures\KMP_LighterRadiation.paa"
		};
	};
	class KMP_LighterUnitedNations_v2: ZippoBase
	{
		scope=2;
		displayName="Rare UN Lighter";
		descriptionShort="An old collectible United Nations lighter, This should be worth good money. Item 6 of 10 - KILLJOYS MOD PACK";
		model="Rares\Models\Zippo.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Rares\Textures\KMP_LighterUnitedNations.paa"
		};
	};
	class KMP_LighterA_v2: ZippoBase
	{
		scope=2;
		displayName="Rare A logo Lighter";
		descriptionShort="An old collectible A logo lighter, This should be worth good money. Item 7 of 10 - KILLJOYS MOD PACK";
		model="Rares\Models\Zippo.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Rares\Textures\KMP_LighterA.paa"
		};
	};
	class KMP_LighterDontTread_v2: ZippoBase
	{
		scope=2;
		displayName="Rare Gadsden Lighter";
		descriptionShort="An old collectible Gadsden lighter, This should be worth good money. Item 8 of 10 - KILLJOYS MOD PACK";
		model="Rares\Models\Zippo.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Rares\Textures\KMP_LighterDontTread.paa"
		};
	};
	class KMP_LighterNZR_v2: ZippoBase
	{
		scope=2;
		displayName="Rare NZR Lighter";
		descriptionShort="An old collectible NZR lighter, This should be worth good money. Item 9 of 10 - KILLJOYS MOD PACK";
		model="Rares\Models\Zippo.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Rares\Textures\KMP_LighterNZR.paa"
		};
	};
	class KMP_LighterSkullSword_v2: ZippoBase
	{
		scope=2;
		displayName="Rare Skull Lighter";
		descriptionShort="An old collectible Skull lighter, This should be worth good money. Item 10 of 10 - KILLJOYS MOD PACK";
		model="Rares\Models\Zippo.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Rares\Textures\KMP_LighterSkullSword.paa"
		};
	};
};		
