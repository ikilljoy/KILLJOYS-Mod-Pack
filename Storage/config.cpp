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
//---------------------FIRST-------------------------------
	class Container_Base;
	class WorldContainer_Base;
	class Barrel_ColorBase: Container_Base
	{
		displayName="$STR_CfgVehicles_Barrel_ColorBase0";
		descriptionShort="$STR_CfgVehicles_Barrel_ColorBase1";
		model="\dz\gear\containers\55galDrum.p3d";
		overrideDrawArea="8.0";
		forceFarBubble="true";
		SingleUseActions[]={527};
		InteractActions[]={1025,1026};
		ContinuousActions[]={155};
		slopeTolerance=0.30000001;
		attachments[]=
		{
			"BirchBark"
		};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		quantityBar=1;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={5,9};
		itemBehaviour=0;
		stackedUnit="ml";
		randomQuantity=2;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=200000;
		absorbency=0.1;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		lootTag[]=
		{
			"Work"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};
		class AnimationSources
		{
			class Lid
			{
				source="user";
				initPhase=0;
				animPeriod=0.0099999998;
			};
			class Lid2
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet="barrel_movement_SoundSet";
					id=1;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="barrel_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class KMP_Barrel_Guns: Barrel_ColorBase
	{
		scope=2;
		color="Red";
		hiddenSelectionsTextures[]=
		{
			"Storage\Textures\KMP_Barrel_Guns.paa",
		};
		hologramMaterial="barrel";
		hologramMaterialPath="dz\gear\containers\data";
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\Barrel_green.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\Barrel_green.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\Barrel_green_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\Barrel_green_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\Barrel_green_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};
	class KMP_Barrel_Ammo: Barrel_ColorBase
	{
		scope=2;
		color="Red";
		hiddenSelectionsTextures[]=
		{
			"Storage\Textures\KMP_Barrel_Ammo.paa",
		};
		hologramMaterial="barrel";
		hologramMaterialPath="dz\gear\containers\data";
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\Barrel_green.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\Barrel_green.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\Barrel_green_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\Barrel_green_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\Barrel_green_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};
	class KMP_Barrel_Clothing: Barrel_ColorBase
	{
		scope=2;
		color="Red";
		hiddenSelectionsTextures[]=
		{
			"Storage\Textures\KMP_Barrel_Clothing.paa",
		};
		hologramMaterial="barrel";
		hologramMaterialPath="dz\gear\containers\data";
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\Barrel_green.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\Barrel_green.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\Barrel_green_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\Barrel_green_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\Barrel_green_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};
	class KMP_Barrel_Food: Barrel_ColorBase
	{
		scope=2;
		color="Red";
		hiddenSelectionsTextures[]=
		{
			"Storage\Textures\KMP_Barrel_Food.paa",
		};
		hologramMaterial="barrel";
		hologramMaterialPath="dz\gear\containers\data";
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\Barrel_green.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\Barrel_green.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\Barrel_green_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\Barrel_green_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\Barrel_green_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};
	class KMP_Barrel_Misc: Barrel_ColorBase
	{
		scope=2;
		color="Red";
		hiddenSelectionsTextures[]=
		{
			"Storage\Textures\KMP_Barrel_Misc.paa",
		};
		hologramMaterial="barrel";
		hologramMaterialPath="dz\gear\containers\data";
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\Barrel_green.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\Barrel_green.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\Barrel_green_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\Barrel_green_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\Barrel_green_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};
	class KMP_barrel_BBG_co: Barrel_ColorBase
	{
		scope=2;
		color="Red";
		hiddenSelectionsTextures[]=
		{
			"Storage\Textures\KMP_barrel_BBG_co.paa",
		};
		hologramMaterial="barrel";
		hologramMaterialPath="dz\gear\containers\data";
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\Barrel_green.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\Barrel_green.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\Barrel_green_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\Barrel_green_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\Barrel_green_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};
	class KMP_barrel_TWD_co: Barrel_ColorBase
	{
		scope=2;
		color="Red";
		hiddenSelectionsTextures[]=
		{
			"Storage\Textures\KMP_barrel_TWD_co.paa",
		};
		hologramMaterial="barrel";
		hologramMaterialPath="dz\gear\containers\data";
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\Barrel_green.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\Barrel_green.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\Barrel_green_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\Barrel_green_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\Barrel_green_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};
	class KMP_Barrel_Medical: Barrel_ColorBase
	{
		scope=2;
		color="Red";
		hiddenSelectionsTextures[]=
		{
			"Storage\Textures\KMP_Barrel_Medical.paa",
		};
		hologramMaterial="barrel";
		hologramMaterialPath="dz\gear\containers\data";
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\Barrel_green.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\Barrel_green.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\Barrel_green_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\Barrel_green_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\Barrel_green_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};
	class KMP_Barrel_Weed: Barrel_ColorBase
	{
		scope=2;
		color="Red";
		hiddenSelectionsTextures[]=
		{
			"Storage\Textures\KMP_Barrel_Weed.paa",
		};
		hologramMaterial="barrel";
		hologramMaterialPath="dz\gear\containers\data";
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\Barrel_green.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\Barrel_green.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\Barrel_green_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\Barrel_green_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\Barrel_green_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};
	//StaticBarrels
	class Perm_Barrel: Barrel_ColorBase
	{
		scope=2;
		displayName="Hero Barrel";
		descriptionShort="Take what you need, Leave what you dont, Help who you can. Insired by Fear-TWD";
		attachments[]={};
		class GUIInventoryAttachmentsProps
		{
		};
		hiddenSelectionsTextures[]=
		{
			"DOTD_Custom\Data\DOTD\barrel_TWD_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000000;
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class KMP_StaticBarrel_Dono: Perm_Barrel
	{
		scope=2;
		displayName="Ammunition Donation Barrel";
		hiddenSelectionsTextures[]=
		{
			"Storage\Textures\KMP_barrel_TWD_co.paa"
		};
	};
	//Static Barrels END
};		
