class CfgPatches
{
	class Buildables
	{
		units[]=
		{
			"Helipad"
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
	class Buildables
	{
		dir="Buildables";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Buildables";
		credits="";
		author="KILLJOY";
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
					"Buildables/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Buildables/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Buildables/scripts/5_Mission"
				};
			};
		};
	};
};
class CfgVehicles
{
//Helipad----------------------------------
	class Container_Base;
	class Helipad_Base: Container_Base
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
	//Helipad Kit start
	class KMP_Helipad_Kit: Helipad_Base
	{
		scope=2;
		displayName="Helipad Kit";
		descriptionShort="Helipad Kit - KILLJOYS MOD PACK";
		model="Buildables\Models\Helipad_Kit.p3d";
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
			"Buildables\Textures\Helipad_Kit.paa"
		};
		class Cargo
		{
		};
	};
	//Helipad KIT END
	//Helipad HOLO START
	class KMP_Helipad_Holo: Helipad_Base
	{
		scope=2;
		displayName="Helipad_Holo";
		descriptionShort="How are you seeing this?..";
		model="Buildables\Models\Helipad_Holo.p3d";
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
			"Buildables\Textures\Helipad.paa"
		};
		class Cargo
		{
		};
	};
	//Actual Case Start
	class KMP_Helipad: Helipad_Base
	{
		scope=2;
		displayName="Helipad";
		descriptionShort="A placable helipad  - This can be dismantled by using a crowbar. - KILLJOYS MOD PACK";
		model="Buildables\Models\Helipad.p3d";
		itemsCargoSize[]={0,0};
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
		};
		hiddenSelections[]=
		{
			"body"
		};
		hiddenSelectionsTextures[]=
		{
			"Buildables\Textures\Helipad.paa"
		};
	};
	class Static;
	class KMP_Helipad_Static: Static
	{
		scope=2;
		displayName="Helipad";
		descriptionShort="Static helipad - KILLJOYS MOD PACK";
		model="Buildables\Models\Helipad_Static.p3d";
		itemsCargoSize[]={0,0};
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
		itemSize[]={100,100};
		attachments[]=
		{
		};
		hiddenSelections[]=
		{
			"body"
		};
		hiddenSelectionsTextures[]=
		{
			"Buildables\Textures\Helipad.paa"
		};
	};
//FOOTLOCKER ------------------------
	class FootLocker_Base: Container_Base
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
	//FootLocker Kit start
	class KMP_FootLocker_Kit: FootLocker_Base
	{
		scope=2;
		displayName="Foot Locker Kit";
		descriptionShort="Foot Locker Kit - KILLJOYS MOD PACK";
		model="Buildables\Models\FootLocker_Kit.p3d";
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
			"Buildables\Textures\FootLocker_Kit.paa"
		};
		class Cargo
		{
		};
	};
	//FootLocker KIT END
	//FootLocker HOLO START
	class KMP_FootLocker_Holo: FootLocker_Base
	{
		scope=2;
		displayName="FootLocker_Holo";
		descriptionShort="How are you seeing this?..";
		model="Buildables\Models\FootLocker_Holo.p3d";
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
			"Buildables\Textures\FootLocker.paa"
		};
		class Cargo
		{
		};
	};
	//Actual Case Start
	class KMP_FootLocker: FootLocker_Base
	{
		scope=2;
		displayName="Foot Locker";
		descriptionShort="Hand crafted wooden Foot locker. The box is individually crafted from pine. This box is marked with ARMEX which means it was previously used by ARMEX to supply the trader with ammunition. Made in the USA.  - This can be dismantled by using a crowbar. - KILLJOYS MOD PACK";
		model="Buildables\Models\FootLocker.p3d";
		itemsCargoSize[]={10,5};
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
		};
		hiddenSelections[]=
		{
			"body"
		};
		hiddenSelectionsTextures[]=
		{
			"Buildables\Textures\FootLocker.paa"
		};
	};
//FISH RACK-------------------------------------------
	class Mackerel: Container_Base
	{
		inventorySlot[]=
		{
			"fish1",
			"fish2",
			"fish3",
			"fish4"
			
		};
	};
	class Carp: Container_Base
	{
		inventorySlot[]=
		{
			"fish5",
			"fish6",
			"fish7",
			"fish8"
		};
	};
	class SeaChest;
	class KMP_FishRack: SeaChest
	{
		scope=2;
		displayName="Fish rack";
		descriptionShort="Used by fishermen to store their fish. Strong enough to support Mackerel and Carp. - KILLJOYS MOD PACK";
		model="Buildables\Models\FishRack.p3d";
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
			"fish1",
			"fish2",
			"fish3",
			"fish4",
			"fish5",
			"fish6",
			"fish7",
			"fish8"
		};
		hiddenSelections[]=
		{
			"body"
		};
		hiddenSelectionsTextures[]=
		{
			"Buildables\Textures\FishRack.paa"
		};
		class Cargo
		{
		};
		class GUIInventoryAttachmentsProps
		{
			class Row1
			{
				name="Fish Display";
				description="";
				attachmentSlots[]=
				{
					"fish1",
					"fish2",
					"fish3",
					"fish4",
					"fish5",
					"fish6",
					"fish7",
					"fish8"
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	//FISHRACK PROXIES
	class Proxyfish1: ProxyAttachment
	{
		scope=0;
		inventorySlot="fish1";
		model="Buildables\Models\fish1.p3d";
	};
	class Proxyfish2: ProxyAttachment
	{
		scope=0;
		inventorySlot="fish2";
		model="Buildables\Models\fish2.p3d";
	};
	class Proxyfish3: ProxyAttachment
	{
		scope=0;
		inventorySlot="fish3";
		model="Buildables\Models\fish3.p3d";
	};
	class Proxyfish4: ProxyAttachment
	{
		scope=0;
		inventorySlot="fish4";
		model="Buildables\Models\fish4.p3d";
	};
	class Proxyfish5: ProxyAttachment
	{
		scope=0;
		inventorySlot="fish5";
		model="Buildables\Models\fish5.p3d";
	};
	class Proxyfish6: ProxyAttachment
	{
		scope=0;
		inventorySlot="fish6";
		model="Buildables\Models\fish6.p3d";
	};
	class Proxyfish7: ProxyAttachment
	{
		scope=0;
		inventorySlot="fish7";
		model="Buildables\Models\fish7.p3d";
	};
	class Proxyfish8: ProxyAttachment
	{
		scope=0;
		inventorySlot="fish8";
		model="Buildables\Models\fish8.p3d";
	};
	//FISHRACK PROXIES
};
class CfgSlots
{
	//FISHRACK SLOTS
	class Slot_fish
	{
		name="fish";
		displayName="fish";
		ghostIcon="food";
	};
	class Slot_fish1: Slot_fish
	{
		name="fish1";
		displayName="Mackerel";
		ghostIcon="food";
	};
	class Slot_fish2: Slot_fish
	{
		name="fish2";
		displayName="Mackerel";
		ghostIcon="food";
	};
	class Slot_fish3: Slot_fish
	{
		name="fish3";
		displayName="Mackerel";
		ghostIcon="food";
	};
	class Slot_fish4: Slot_fish
	{
		name="fish4";
		displayName="Mackerel";
		ghostIcon="food";
	};
	class Slot_fish5: Slot_fish
	{
		name="fish5";
		displayName="Carp";
		ghostIcon="food";
	};
	class Slot_fish6: Slot_fish
	{
		name="fish6";
		displayName="Carp";
		ghostIcon="food";
	};
	class Slot_fish7: Slot_fish
	{
		name="fish7";
		displayName="Carp";
		ghostIcon="food";
	};
	class Slot_fish8: Slot_fish
	{
		name="fish8";
		displayName="Carp";
		ghostIcon="food";
	};
	//FISHRACK SLOTS END
};