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
//--------------------- Military Boots -------------------------------
	class MilitaryBoots_ColorBase;
	class KMP_militaryboots_Snow_co: MilitaryBoots_ColorBase
	{
		scope=2;
		displayName="Snow Military Boots";
		descriptionShort="Snow Military Boots by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Boots\Textures\Textures\KMP_militaryboots_Snow_co.paa",
			"Boots\Textures\Textures\KMP_militaryboots_Snow_co.paa",
			"Boots\Textures\Textures\KMP_militaryboots_Snow_co.paa"
		};
	};
//--------------------- COMBAT BOOTS -------------------------------
	class CombatBoots_ColorBase;
	class KMP_combatboots_Snow_co: CombatBoots_ColorBase
	{
		scope=2;
		displayName="Snow Combat Boots";
		descriptionShort="Snow CombatBoots by KILLJOY";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Boots\Textures\Textures\KMP_combatboots_Snow_co.paa",
			"Boots\Textures\Textures\KMP_combatboots_Snow_co.paa",
			"Boots\Textures\Textures\KMP_combatboots_Snow_co.paa"
		};
	};
	class KMP_CombatBoots_ToxicAutumn: CombatBoots_ColorBase
    {
        scope=2;
        displayName="Toxic Autumn Combat Boots";
        descriptionShort="Toxic Autumn CombatBoots by Phaedrus";
        visibilityModifier=0.94999999;
        hiddenSelectionsTextures[]=
        {
            "Boots\Textures\KMP_CombatBoots_ToxicAutumn.paa",
            "Boots\Textures\KMP_CombatBoots_ToxicAutumn.paa",
            "Boots\Textures\KMP_CombatBoots_ToxicAutumn.paa"
        };
    };
	class KMP_CombatBoots_HexCam: CombatBoots_ColorBase
    {
        scope=2;
        displayName="HexCam Combat Boots";
        descriptionShort="HexCam CombatBoots by Phaedrus";
        visibilityModifier=0.94999999;
        hiddenSelectionsTextures[]=
        {
            "Boots\Textures\KMP_CombatBoots_HexCam.paa",
            "Boots\Textures\KMP_CombatBoots_HexCam.paa",
            "Boots\Textures\KMP_CombatBoots_HexCam.paa"
        };
    };
};		
