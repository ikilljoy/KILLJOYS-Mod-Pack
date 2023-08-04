enum {
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	DESTRUCTNO = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1,
};
class CfgPatches {
	class WeaponCabinet {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
    class CfgVehicles {
	class Container_Base;
    class Inventory_Base;
	class WorldContainer_Base;
	class SeaChest;
	
	class KMP_WeaponCabinet_Base : SeaChest {
		scope = 0;
		displayName = "GunRack";
		descriptionShort = "GunRack";
		model = "WeaponCabinet\WeaponCabinet.p3d";
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
		
		attachments[] = {"shoulder1", "shoulder2", "shoulder3", "shoulder4","Belt_Left", "firstaid", "firstaid1", "firstaid2", "firstaid3", "AmmoBox1", "AmmoBox2", "AmmoBox3"};
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
                {"shoulder1", "shoulder2", "shoulder3", "shoulder4", "firstaid", "firstaid1", "firstaid2", "firstaid3", "AmmoBox1", "AmmoBox2", "AmmoBox3"
                };
                icon="cat_common_cargo";
            };
		};
};	
	class KMP_WeaponCabinet : KMP_WeaponCabinet_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"WeaponCabinet\data\WeaponCabinet.paa"};
		hiddenSelectionsMaterials[] = {"WeaponCabinet\data\WeaponCabinet.rvmat"};
	};
};

