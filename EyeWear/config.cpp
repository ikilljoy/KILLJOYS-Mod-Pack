class CfgPatches
{
	class CombatGoggles
	{
		units[]=
		{
			"CombatGoggles"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Characters_Headgear",
			"DZ_Gear_Optics",
			"DZ_Data"
		};
	};
	
};
class CfgVehicles
{	
    class Clothing;
	class CombatGoggles_ColorBase: Clothing
	{
		scope=0;
		displayName="Combat Goggles";
		descriptionShort="Combat Goggles - KILLJOYS MOD PACK";
		model="\EyeWear\Models\CombatGoggles.p3d";
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot[]=
		{
			"Eyewear"
		};
		itemInfo[]=
		{
			"Clothing",
			"Eyewear"
		};
		rotationFlags=17;
		itemSize[]={3,1};
		weight=20;
		lootCategory="Eyewear";
		lootTag[]=
		{
			"Civilian"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"EyeWear\Textures\CombatGoggles.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\glasses\data\joeyx.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\glasses\data\joeyx.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\glasses\data\joeyx_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\glasses\data\joeyx_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\glasses\data\joeyx_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="EyeWear\Models\CombatGoggles.p3d";
			female="EyeWear\Models\CombatGoggles.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="CombatGoggles_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="CombatGoggles_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class KMP_CombatGoggles_Black: CombatGoggles_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"EyeWear\Textures\CombatGoggles.paa",
			"EyeWear\Textures\CombatGoggles.paa",
			"EyeWear\Textures\CombatGoggles.paa"
		};
	};
//Glasses
	class CombatGlasses_ColorBase: Clothing
	{
		scope=0;
		displayName="Combat Glasses";
		descriptionShort="Combat Glasses - KILLJOYS MOD PACK";
		model="\EyeWear\Models\CombatGlasses.p3d";
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot[]=
		{
			"Eyewear"
		};
		itemInfo[]=
		{
			"Clothing",
			"Eyewear"
		};
		rotationFlags=17;
		itemSize[]={3,1};
		weight=20;
		lootCategory="Eyewear";
		lootTag[]=
		{
			"Civilian"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\glasses\data\joeyx.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\glasses\data\joeyx.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\glasses\data\joeyx_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\glasses\data\joeyx_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\glasses\data\joeyx_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\EyeWear\Models\CombatGlasses.p3d";
			female="\EyeWear\Models\CombatGlasses.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="CombatGlasses_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="CombatGlasses_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class KMP_CombatGlasses_Black: CombatGlasses_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\EyeWear\Textures\CombatGlasses.paa",
			"\EyeWear\Textures\CombatGlasses.paa",
			"\EyeWear\Textures\CombatGlasses.paa"
		};
	};
};