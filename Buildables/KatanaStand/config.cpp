class CfgPatches
{
	class KatanaStand
	{
		units[]=
		{
			"KatanaStand"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Sounds_Effects",
			"DZ_Gear_Tools",
			"DZ_Gear_Containers",
			"DZ_Gear_Consumables"
		};
	};
};
class CfgMods
{
	class KatanaStand
	{
		dir="KatanaStand";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="KatanaStand";
		credits="";
		author="";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"KatanaStand/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"KatanaStand/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"KatanaStand/scripts/5_Mission"
				};
			};
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class KMP_SamuraiHelmet: Clothing_Base
	{
		scope=2;
		displayName="Samurai Helmet 1 of 3";
		descriptionShort="Samurai Helmet 1 of 3. By KILLJOT DOTD";
		model="KatanaStand\helmet_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		inventorySlot[]=
		{
			"Headgear",
			"SamuraiHelmet",
			"SamuraiHelmet2",
			"SamuraiHelmet3"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.80000001;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"KatanaStand\data\SamuraiHelmet.paa"
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
								"KatanaStand\data\Helmet.rvmat",
								"KatanaStand\data\Helmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"KatanaStand\data\Helmet.rvmat",
								"KatanaStand\data\Helmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"KatanaStand\data\Helmet_damage.rvmat",
								"KatanaStand\data\Helmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"KatanaStand\data\Helmet_damage.rvmat",
								"KatanaStand\data\Helmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"KatanaStand\data\Helmet_destruct.rvmat",
								"KatanaStand\data\Helmet_destruct.rvmat"
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
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="KatanaStand\helmet_m.p3d";
			female="KatanaStand\helmet_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class KMP_SamuraiHelmet2: Clothing_Base
	{
		scope=2;
		displayName="Samurai Helmet 2 of 3";
		descriptionShort="Samurai Helmet 2 of 3. By KILLJOY DOTD";
		model="KatanaStand\Helm2\helmet_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		inventorySlot[]=
		{
			"Headgear",
			"SamuraiHelmet",
			"SamuraiHelmet2",
			"SamuraiHelmet3"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.80000001;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"KatanaStand\SamuraiHelmet2.paa"
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
								"KatanaStand\data\Helmet.rvmat",
								"KatanaStand\data\Helmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"KatanaStand\data\Helmet.rvmat",
								"KatanaStand\data\Helmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"KatanaStand\data\Helmet_damage.rvmat",
								"KatanaStand\data\Helmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"KatanaStand\data\Helmet_damage.rvmat",
								"KatanaStand\data\Helmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"KatanaStand\data\Helmet_destruct.rvmat",
								"KatanaStand\data\Helmet_destruct.rvmat"
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
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="KatanaStand\Helm2\helmet_m.p3d";
			female="KatanaStand\Helm2\helmet_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class KMP_SamuraiHelmet3: Clothing_Base
	{
		scope=2;
		displayName="Samurai Helmet 3 of 3";
		descriptionShort="Samurai Helmet 3 of 3. By KILLJOT DOTD";
		model="KatanaStand\Helm3\helmet_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		inventorySlot[]=
		{
			"Headgear",
			"SamuraiHelmet",
			"SamuraiHelmet2",
			"SamuraiHelmet3"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.80000001;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"KatanaStand\SamuraiHelmet3.paa"
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
								"KatanaStand\data\Helmet.rvmat",
								"KatanaStand\data\Helmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"KatanaStand\data\Helmet.rvmat",
								"KatanaStand\data\Helmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"KatanaStand\data\Helmet_damage.rvmat",
								"KatanaStand\data\Helmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"KatanaStand\data\Helmet_damage.rvmat",
								"KatanaStand\data\Helmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"KatanaStand\data\Helmet_destruct.rvmat",
								"KatanaStand\data\Helmet_destruct.rvmat"
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
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="KatanaStand\Helm3\helmet_m.p3d";
			female="KatanaStand\Helm3\helmet_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Sword;
	class KMP_Katana: Sword
	{
		scope=2;
		displayName="Katana";
		descriptionShort="Katana 1 of 3, Its blade is razor sharp, Used by driftrs to slice zombies who block their path. DOTD";
		model="KatanaStand\Katana.p3d";
		rotationFlags=17;
		autoQuickbar=1;
		inventorySlot[]=
		{
			"Melee",
			"katana1",
			"katana2",
			"katana3"
		};
		weight=310;
		itemSize[]={2,8};
		fragility=0.02;
		lootTag[]=
		{
			"Civilian",
			"Work"
		};
		lootCategory="Tools";
		openItemSpillRange[]={40,80};
		isMeleeWeapon=1;
	};
	class KMP_Katana2: Sword
	{
		scope=2;
		displayName="Katana";
		descriptionShort="Katana 2 of 3, Its blade is razor sharp, Used by driftrs to slice zombies who block their path. DOTD";
		model="KatanaStand\Katana2.p3d";
		rotationFlags=17;
		autoQuickbar=1;
		inventorySlot[]=
		{
			"Melee",
			"katana1",
			"katana2",
			"katana3"
		};
		lootCategory="Tools";
		openItemSpillRange[]={40,80};
		isMeleeWeapon=1;
		weight=310;
		itemSize[]={2,8};
		fragility=0.02;
		lootTag[]=
		{
			"Civilian",
			"Work"
		};
	};
	class KMP_Katana3: Sword
	{
		scope=2;
		displayName="Katana";
		descriptionShort="Katana 3 of 3, Its blade is razor sharp, Used by driftrs to slice zombies who block their path. DOTD";
		model="KatanaStand\Katana3.p3d";
		rotationFlags=17;
		autoQuickbar=1;
		inventorySlot[]=
		{
			"Melee",
			"katana1",
			"katana2",
			"katana3"
		};
		lootCategory="Tools";
		openItemSpillRange[]={40,80};
		isMeleeWeapon=1;
		weight=310;
		itemSize[]={2,8};
		fragility=0.02;
		lootTag[]=
		{
			"Civilian",
			"Work"
		};
	};
	class Container_Base;
	class KatanaStand_Base: Container_Base
	{
		scope=2;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\camping\data\spotlight.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\camping\data\spotlight.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\camping\data\spotlight_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\camping\data\spotlight_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\camping\data\spotlight_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class KMP_KatanaStand_Kit: KatanaStand_Base
	{
		scope=2;
		displayName="Katana Stand Kit";
		descriptionShort="Katana Stand Kit - KILLJOYS MOD PACK";
		model="KatanaStand\KatanaStand_Kit.p3d";
		itemSize[]={10,4};
		carveNavmesh=1;
		canBeDigged=0;
		simulation="inventoryItem";
		physLayer="item_large";
		SingleUseActions[]={527};
		ContinuousActions[]={231};
		rotationFlags=2;
		InteractActions[]={};
		weight=280;
		itemBehaviour=2;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"KatanaStand\KatanaStand_Kit.paa"
		};
		class Cargo
		{
		};
	};
	class KMP_KatanaStand_Holo: KatanaStand_Base
	{
		scope=2;
		displayName="KatanaStand_Holo";
		descriptionShort="How are you seeing this?..";
		model="KatanaStand\KatanaStand_Holo.p3d";
		itemSize[]={10,4};
		carveNavmesh=1;
		canBeDigged=0;
		simulation="inventoryItem";
		physLayer="item_large";
		SingleUseActions[]={527};
		ContinuousActions[]={231};
		rotationFlags=2;
		InteractActions[]={};
		weight=280;
		itemBehaviour=2;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"KatanaStand\KatanaStand.paa"
		};
		class Cargo
		{
		};
	};
	class KMP_KatanaStand: KatanaStand_Base
	{
		scope=2;
		displayName="Katana Stand";
		descriptionShort="Katana Stand - This can be dismantled by using a crowbar. - KILLJOYS MOD PACK";
		model="KatanaStand\KatanaStand.p3d";
		SingleUseActions[]={527};
		InteractActions[]={1025,1026};
		ContinuousActions[]={155};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		quantityBar=0;
		varQuantityMax=0;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemBehaviour=0;
		allowOwnedCargoManipulation=1;
		physLayer="item_large";
		itemSize[]={5,5};
		attachments[]=
		{
			"katana1",
			"katana2",
			"katana3",
			"SamuraiHelmet",
			"SamuraiHelmet2",
			"SamuraiHelmet3"
		};
		hiddenSelections[]=
		{
			"body"
		};
		hiddenSelectionsTextures[]=
		{
			"KatanaStand\KatanaStand.paa"
		};
		class GUIInventoryAttachmentsProps
		{
			class Row1
			{
				name="Katana Display";
				description="";
				attachmentSlots[]=
				{
					"katana1",
					"katana2",
					"katana3",
					"SamuraiHelmet",
					"SamuraiHelmet2",
					"SamuraiHelmet3"
				};
				icon="missing";
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxykatana1: ProxyAttachment
	{
		scope=0;
		inventorySlot="katana1";
		model="KatanaStand\katana1.p3d";
	};
	class Proxykatana2: ProxyAttachment
	{
		scope=0;
		inventorySlot="katana2";
		model="KatanaStand\katana2.p3d";
	};
	class Proxykatana3: ProxyAttachment
	{
		scope=0;
		inventorySlot="katana3";
		model="KatanaStand\katana3.p3d";
	};
	class ProxySamuraiHelmet: ProxyAttachment
	{
		scope=0;
		inventorySlot="SamuraiHelmet";
		model="KatanaStand\helmet_f.p3d";
	};
	class ProxySamuraiHelmet2: ProxyAttachment
	{
		scope=0;
		inventorySlot="SamuraiHelmet2";
		model="KatanaStand\Helm2\helmet_f.p3d";
	};
	class ProxySamuraiHelmet3: ProxyAttachment
	{
		scope=0;
		inventorySlot="SamuraiHelmet3";
		model="KatanaStand\Helm3\helmet_f.p3d";
	};
};
class CfgSlots
{
	class Slot_katana
	{
		name="katana";
		displayName="katana";
		ghostIcon="missing";
	};
	class Slot_katana1: Slot_katana
	{
		name="katana1";
		displayName="Katana 1";
		ghostIcon="knife";
	};
	class Slot_katana2: Slot_katana
	{
		name="katana2";
		displayName="Katana 2";
		ghostIcon="knife";
	};
	class Slot_katana3: Slot_katana
	{
		name="katana3";
		displayName="Katana 3";
		ghostIcon="knife";
	};
	class Slot_SamuraiHelmet: Slot_katana
	{
		name="SamuraiHelmet";
		displayName="Samurai Helmet";
		ghostIcon="headgear";
	};
	class Slot_SamuraiHelmet2: Slot_katana
	{
		name="SamuraiHelmet2";
		displayName="Samurai Helmet";
		ghostIcon="headgear";
	};
	class Slot_SamuraiHelmet3: Slot_katana
	{
		name="SamuraiHelmet3";
		displayName="Samurai Helmet";
		ghostIcon="headgear";
	};
};
