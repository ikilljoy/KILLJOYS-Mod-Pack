class CfgPatches
{
	class GunWall
	{
		units[]=
		{
			"GunWall"
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
	class GunWall
	{
		dir="GunWall";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="GunWall";
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
					"GunWall/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"GunWall/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"GunWall/scripts/5_Mission"
				};
			};
		};
	};
};
class CfgVehicles 
{
	class Container_Base;
    class Inventory_Base;
	class WorldContainer_Base;
	
	class KMP_GunWall_Base : Container_Base {
		scope = 0;
		displayName = "Gun Wall - Crowbar";
		descriptionShort = "Gun Wall - Crowbar";
		model = "GunWall\GunWall.p3d";
		bounding="BSphere";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		handheld="true";
		carveNavmesh=1;
		canBeDigged=0;
		weight=50000;
		itemSize[]={10,10};
		physLayer="item_large";
		rotationFlags=0;
		
		attachments[] = {"shoulder1", "shoulder2", "shoulder3", "shoulder4","shoulder5", "shoulder6", "shoulder7", "shoulder8", "shoulder9", "shoulder10", "shoulder11", "shoulder12"};
		class Cargo
		{
			itemsCargoSize[]={0,0};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		hiddenSelections[] = {"camoGround"};
		
		class GUIInventoryAttachmentsProps {
			class Rangement_Slot
            {
                name="";
                description="";
                attachmentSlots[]=
                {"shoulder1", "shoulder2", "shoulder3", "shoulder4","shoulder5", "shoulder6", "shoulder7", "shoulder8", "shoulder9", "shoulder10", "shoulder11", "shoulder12"
                };
                icon="cat_common_cargo";
            };
		};
    };
	class KMP_GunWall_Kit: Inventory_Base
	{
		scope=2;
		displayName="Gun wall Kit";
		descriptionShort="Gun wall Kit By KILLJOY - DOTD";
		model="GunWall\GunWall_Kit.p3d";
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
			"GunWall\data\GunWall_Kit.paa"
		};
		class Cargo
		{
		};
	};
	class KMP_GunWall_Holo: Inventory_Base
	{
		scope=2;
		displayName="GunWallHolo";
		descriptionShort="How are you seeing this?..";
		model="GunWall\GunWall_Holo.p3d";
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
			"GunWall\data\GunWall_Holo.paa"
		};
		class Cargo
		{
		};
	};
	class KMP_GunWall : KMP_GunWall_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"GunWall\data\GunWall.paa"};
		hiddenSelectionsMaterials[] = {"GunWall\data\GunWall.rvmat"};
	};
};

