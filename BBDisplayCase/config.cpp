class CfgPatches
{
	class BBDisplayCase
	{
		units[]=
		{
			"BBDisplayCase"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class BBDisplayCase
	{
		dir="BBDisplayCase";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="BBDisplayCase";
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
					"BBDisplayCase/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"BBDisplayCase/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"BBDisplayCase/scripts/5_Mission"
				};
			};
		};
	};
};
class CfgVehicles
{
	//1.16
	//BATTLE BUDDIES
	class Container_Base;
	class Bear_ColorBase: Container_Base
	{
		displayName="$STR_CfgVehicles_Bear_ColorBase0";
		descriptionShort="$STR_CfgVehicles_Bear_ColorBase1";
		model="\dz\gear\containers\teddybear.p3d";
		inventorySlot[]=
		{
			"feet1",
			"feet2",
			"feet3",
			"feet4",
			"feet5",
			"feet6",
			"feet7",
			"Bear1"
		};
		weight=130;
		itemSize[]={2,3};
		itemsCargoSize[]={2,3};
		canBeDigged=1;
		allowOwnedCargoManipulation=1;
		repairableWithKits[]={2};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"camoGround"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=30;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\teddybear.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\teddybear.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\teddybear_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\teddybear_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\teddybear_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	//BaseEnd
	class KMP_BattleBuddy_Camo: Bear_ColorBase
	{
		scope=2;
		displayName="BattleBuddy Camo";
		descriptionShort="A rare collectible BattleBuddy in a camo pattern KILLJOYSMODPACK";
		inventorySlot[]=
		{
			"feet1",
			"feet2",
			"feet3",
			"feet4",
			"feet5",
			"feet6",
			"feet7",
			"Bear1"
		};
		hiddenSelectionsTextures[]=
		{
			"BBDisplayCase\BattleBuddy_Camo.paa"
		};
	};
	class KMP_BattleBuddy_Clown: Bear_ColorBase
	{
		scope=2;
		displayName="BattleBuddy Clown";
		descriptionShort="A rare collectible BattleBuddy, Dressed as a clown. KILLJOYSMODPACK";
		inventorySlot[]=
		{
			"feet1",
			"feet2",
			"feet3",
			"feet4",
			"feet5",
			"feet6",
			"feet7",
			"Bear1"
		};
		hiddenSelectionsTextures[]=
		{
			"BBDisplayCase\BattleBuddy_Clown.paa"
		};
	};
	class KMP_BattleBuddy_Anon: Bear_ColorBase
	{
		scope=2;
		displayName="BattleBuddy Anon";
		descriptionShort="A rare collectible BattleBuddy, This bear is super 1337 and is known to copy/paste the best scripts available from google. KILLJOYSMODPACK";
		inventorySlot[]=
		{
			"feet1",
			"feet2",
			"feet3",
			"feet4",
			"feet5",
			"feet6",
			"feet7",
			"Bear1"
		};
		hiddenSelectionsTextures[]=
		{
			"BBDisplayCase\BattleBuddy_Anon.paa"
		};
	};
	class KMP_BattleBuddy_Dead: Bear_ColorBase
	{
		scope=2;
		displayName="BattleBuddy Stitch";
		descriptionShort="A rare collectible BattleBuddy, This looks to be crafted from zombie skin, It smells like it too.. KILLJOYSMODPACK";
		inventorySlot[]=
		{
			"feet1",
			"feet2",
			"feet3",
			"feet4",
			"feet5",
			"feet6",
			"feet7",
			"Bear1"
		};
		hiddenSelectionsTextures[]=
		{
			"BBDisplayCase\BattleBuddy_Dead.paa"
		};
	};
	class KMP_BattleBuddy_Gold: Bear_ColorBase
	{
		scope=2;
		displayName="BattleBuddy Gold";
		descriptionShort="A rare collectible BattleBuddy. This is oddly heavy, Maybe its made from real gold. KILLJOYSMODPACK";
		inventorySlot[]=
		{
			"feet1",
			"feet2",
			"feet3",
			"feet4",
			"feet5",
			"feet6",
			"feet7",
			"Bear1"
		};
		hiddenSelectionsTextures[]=
		{
			"BBDisplayCase\BattleBuddy_Gold.paa"
		};
	};
	class KMP_BattleBuddy_Radiation: Bear_ColorBase
	{
		scope=2;
		displayName="BattleBuddy Radiation";
		descriptionShort="A rare collectible BattleBuddy. Design idea submitted by Walking on Graves on DOTD Discord.";
		inventorySlot[]=
		{
			"feet1",
			"feet2",
			"feet3",
			"feet4",
			"feet5",
			"feet6",
			"feet7",
			"Bear1"
		};
		hiddenSelectionsTextures[]=
		{
			"BBDisplayCase\BattleBuddy_Radiation.paa"
		};
	};
	class KMP_BattleBuddy_Joker: Bear_ColorBase
	{
		scope=2;
		displayName="BattleBuddy Joker";
		descriptionShort="A rare collectible BattleBuddy. Joker DOTD Discord.";
		inventorySlot[]=
		{
			"feet1",
			"feet2",
			"feet3",
			"feet4",
			"feet5",
			"feet6",
			"feet7",
			"Bear1"
		};
		hiddenSelectionsTextures[]=
		{
			"BBDisplayCase\BattleBuddy_Joker.paa"
		};
	};
	//BATTLEBUDDY END
	//BBDBASE
	class BBDisplayCase_Base: Container_Base
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
	//BBD Kit start
	class KMP_BBDisplayCase_Kit: BBDisplayCase_Base
	{
		scope=2;
		displayName="BattleBuddy Display Kit";
		descriptionShort="BattleBuddy Display Kit KILLJOYSMODPACK - DOTD";
		model="BBDisplayCase\BBDisplayCase_Kit.p3d";
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
			"BBDisplayCase\BBDisplayCase_Kit.paa"
		};
		class Cargo
		{
		};
	};
	//BBD KIT END
	//BBD HOLO START
	class KMP_BBDisplayCase_Holo: BBDisplayCase_Base
	{
		scope=2;
		displayName="BBDisplayCase_Holo";
		descriptionShort="How are you seeing this?..";
		model="BBDisplayCase\BBDisplayCase_Holo.p3d";
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
			"BBDisplayCase\BBDisplayCase.paa"
		};
		class Cargo
		{
		};
	};
	//Actual Case Start
	class KMP_BBDisplayCase: BBDisplayCase_Base
	{
		scope=2;
		displayName="BattleBuddy Display";
		descriptionShort="DOTD has rare collectible teddy bears called BattleBuddies, These sell for 20k each at high value but this shelf can be used by the rich who wish to start a collection. - This can be dismantled by using a crowbar.";
		model="BBDisplayCase\BBDisplayCase.p3d";
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
			"feet1",
			"feet2",
			"feet3",
			"feet4",
			"feet5",
			"feet6",
			"feet7"
		};
		hiddenSelections[]=
		{
			"body"
		};
		hiddenSelectionsTextures[]=
		{
			"BBDisplayCase\BBDisplayCase.paa"
		};
		class Cargo
		{
		};
		class GUIInventoryAttachmentsProps
		{
			class Row1
			{
				name="BattleBuddy Display";
				description="";
				attachmentSlots[]=
				{
					"feet1",
					"feet2",
					"feet3",
					"feet4",
					"feet5",
					"feet6",
					"feet7"
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyfeet1: ProxyAttachment
	{
		scope=0;
		inventorySlot="feet1";
		model="BBDisplayCase\feet1.p3d";
	};
	class Proxyfeet2: ProxyAttachment
	{
		scope=0;
		inventorySlot="feet2";
		model="BBDisplayCase\feet2.p3d";
	};
	class Proxyfeet3: ProxyAttachment
	{
		scope=0;
		inventorySlot="feet3";
		model="BBDisplayCase\feet3.p3d";
	};
	class Proxyfeet4: ProxyAttachment
	{
		scope=0;
		inventorySlot="feet4";
		model="BBDisplayCase\feet4.p3d";
	};
	class Proxyfeet5: ProxyAttachment
	{
		scope=0;
		inventorySlot="feet5";
		model="BBDisplayCase\feet5.p3d";
	};
	class Proxyfeet6: ProxyAttachment
	{
		scope=0;
		inventorySlot="feet6";
		model="BBDisplayCase\feet6.p3d";
	};
	class Proxyfeet7: ProxyAttachment
	{
		scope=0;
		inventorySlot="feet7";
		model="BBDisplayCase\feet7.p3d";
	};
};
class CfgSlots
{
	class Slot_BB
	{
		name="feet";
		displayName="BattleBuddy";
		ghostIcon="book";
	};
	class Slot_feet1: Slot_BB
	{
		name="feet1";
		displayName="BattleBuddy";
		ghostIcon="book";
	};
	class Slot_feet2: Slot_BB
	{
		name="feet2";
		displayName="BattleBuddy";
		ghostIcon="book";
	};
	class Slot_feet3: Slot_BB
	{
		name="feet3";
		displayName="BattleBuddy";
		ghostIcon="book";
	};
	class Slot_feet4: Slot_BB
	{
		name="feet4";
		displayName="BattleBuddy";
		ghostIcon="book";
	};
	class Slot_feet5: Slot_BB
	{
		name="feet5";
		displayName="BattleBuddy";
		ghostIcon="book";
	};
	class Slot_feet6: Slot_BB
	{
		name="feet6";
		displayName="BattleBuddy";
		ghostIcon="book";
	};
	class Slot_feet7: Slot_BB
	{
		name="feet7";
		displayName="BattleBuddy";
		ghostIcon="book";
	};
};
