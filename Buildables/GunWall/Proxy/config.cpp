class CfgPatches {
	class KMP_Furniture {
		units[] = {"KMP_Furniture"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters_Tops", "DZ_Characters_Backpacks", "DZ_Scripts", "DZ_Weapons_Firearms", "DZ_Characters_Pants", "DZ_Gear_Containers", "DZ_Characters_Shoes", "DZ_Gear_Consumables", "DZ_Weapons_Explosives", "DZ_Characters_Gloves"};
	};
};

class CfgVehicles {
	class Inventory_Base;	// External class reference
	class Container_Base;
    class FirstAidKit: Container_Base
	{
	InventorySlot="firstaid";
	};
	class AmmoBox: Container_Base
	{
		InventorySlot[]={"AmmoBox"};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;	// External class reference
	
	class ProxyShoulder1 : ProxyAttachment {
		scope = 2;
		inventorySlot = "shoulder1";
		model = "KMP_Furniture\Proxy\shoulder1.p3d";
	};
	
	class ProxyShoulder2 : ProxyAttachment {
		scope = 2;
		inventorySlot = "shoulder2";
		model = "KMP_Furniture\Proxy\shoulder2.p3d";
	};
	
	class ProxyShoulder3 : ProxyAttachment {
		scope = 2;
		inventorySlot = "shoulder3";
		model = "KMP_Furniture\Proxy\shoulder3.p3d";
	};
	
	class ProxyShoulder4 : ProxyAttachment {
		scope = 2;
		inventorySlot = "shoulder4";
		model = "KMP_Furniture\Proxy\shoulder4.p3d";
	};
	
	class ProxyShoulder5 : ProxyAttachment {
		scope = 2;
		inventorySlot = "shoulder5";
		model = "KMP_Furniture\Proxy\shoulder5.p3d";
	};
	
	class ProxyShoulder6 : ProxyAttachment {
		scope = 2;
		inventorySlot = "shoulder6";
		model = "KMP_Furniture\Proxy\shoulder6.p3d";
	};
	
	class ProxyShoulder7 : ProxyAttachment {
		scope = 2;
		inventorySlot = "shoulder7";
		model = "KMP_Furniture\Proxy\shoulder7.p3d";
	};
	
	class ProxyShoulder8 : ProxyAttachment {
		scope = 2;
		inventorySlot = "shoulder8";
		model = "KMP_Furniture\Proxy\shoulder8.p3d";
	};
	
	class ProxyShoulder9 : ProxyAttachment {
		scope = 2;
		inventorySlot = "shoulder9";
		model = "KMP_Furniture\Proxy\shoulder9.p3d";
	};
	
	class ProxyShoulder10 : ProxyAttachment {
		scope = 2;
		inventorySlot = "shoulder10";
		model = "KMP_Furniture\Proxy\shoulder10.p3d";
	};
	
	class ProxyShoulder11 : ProxyAttachment {
		scope = 2;
		inventorySlot = "shoulder11";
		model = "KMP_Furniture\Proxy\shoulder11.p3d";
	};
	
	class ProxyShoulder12 : ProxyAttachment {
		scope = 2;
		inventorySlot = "shoulder12";
		model = "KMP_Furniture\Proxy\shoulder12.p3d";
	};
	
	class Proxy300rndbox : ProxyAttachment
    {
        scope = 2;
		inventorySlot="AmmoBox";
        model = "KMP_Furniture\Proxy\300rndbox.p3d";
    };
	class Proxycanteen : ProxyAttachment
    {
        scope = 2;
		inventorySlot="Belt_Left";
        model = "KMP_Furniture\Proxy\canteen.p3d";
    };
	class Proxyfirstaid : ProxyAttachment
    {
        scope = 2;
		inventorySlot="firstAid";
        model = "KMP_Furniture\Proxy\firstaid.p3d";
    };
};

class CfgSlots {
	class Slot_Shoulder1 {
		name = "Shoulder1";
		displayName = "Shoulder1";
		ghostIcon = "shoulderleft";
	};
	
	class Slot_Shoulder_2 {
		name = "Shoulder2";
		displayName = "Shoulder2";
		ghostIcon = "shoulderleft";
	};
	
	class Slot_Shoulder_3 {
		name = "Shoulder3";
		displayName = "Shoulder3";
		ghostIcon = "shoulderleft";
	};
	
	class Slot_Shoulder_4 {
		name = "Shoulder4";
		displayName = "Shoulder4";
		ghostIcon = "shoulderleft";
	};
	
	class Slot_Shoulder_5 {
		name = "Shoulder5";
		displayName = "Shoulder5";
		ghostIcon = "shoulderleft";
	};
	
	class Slot_Shoulder_6 {
		name = "Shoulder6";
		displayName = "Shoulder6";
		ghostIcon = "shoulderleft";
	};
	
	class Slot_Shoulder_7 {
		name = "Shoulder7";
		displayName = "Shoulder7";
		ghostIcon = "shoulderleft";
	};
	
	class Slot_Shoulder_8 {
		name = "Shoulder8";
		displayName = "Shoulder8";
		ghostIcon = "shoulderleft";
	};
	
	class Slot_Shoulder_9 {
		name = "Shoulder9";
		displayName = "Shoulder9";
		ghostIcon = "shoulderleft";
	};
	
	class Slot_Shoulder_10 {
		name = "Shoulder10";
		displayName = "Shoulder10";
		ghostIcon = "shoulderleft";
	};
	
	class Slot_Shoulder_11 {
		name = "Shoulder11";
		displayName = "Shoulder11";
		ghostIcon = "shoulderleft";
	};
	
	class Slot_Shoulder_12 {
		name = "Shoulder12";
		displayName = "Shoulder12";
		ghostIcon = "shoulderleft";
	};
	
	class Slot_FirstAid
    {
        name="FirstAid";
        displayName="FirstAid";
        ghostIcon="missing";
        selection="FirstAid";
    };
	class Slot_AmmoBox
    {
        name="AmmoBox";
        displayName="AmmoBox";
        ghostIcon="magazine";
        selection="AmmoBox";
    };
	class Slot_Belt_Left
    {
        name="Belt_Left";
        displayName="Belt_Left";
        ghostIcon="Canteen";
        selection="Canteen";
    };	
};

class cfgWeapons {
	class RifleCore;	// External class reference
	
	class Rifle_Base : RifleCore {
		inventorySlot[] = {"Shoulder", "Melee", "Shoulder1", "Shoulder2", "Shoulder3", "Shoulder4", "Shoulder5", "Shoulder6", "Shoulder7", "Shoulder8", "Shoulder9", "Shoulder10", "Shoulder11", "Shoulder12", "Shoulder13", "Shoulder14", "Shoulder15", "Shoulder16", "Shoulder17", "Shoulder18", "Shoulder19", "Shoulder20", "Shoulder21", "Shoulder22", "Shoulder23", "Shoulder24", "Shoulder25", "Shoulder26", "Shoulder27", "Shoulder28", "Shoulder29", "Shoulder30"};
	};
};
