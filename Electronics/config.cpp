class CfgPatches
{
	class KMP_Electronics
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Sounds_Effects",
			"dz_gear_camping"
		};
	};
};
class CfgSoundShaders
{
	class TurnOn_SoundShader
	{
		samples[]=
		{
			
			{
				"Electronics\Sounds\TurnOn.ogg",
				1
			}
		};
		range=200;
		volume=0.80000001;
	};
};
class CfgSoundSets
{
	class TurnOn_SoundSet
	{
		soundShaders[]=
		{
			"TurnOn_SoundShader"
		};
	};
};


class CfgSlots
{
    class Slot_TACSATBattery
    {
        name="TACSATBattery";
        displayName="TACSAT Battery";
        //selection="TACSATBattery";
        ghostIcon="missing";
        show="false";
        //stackMax=1;
    };
};
class cfgVehicles
{
	class Inventory_Base;
	class PersonalRadio;
	class KMP_Radio_UV5R: PersonalRadio
	{
		scope = 2;
		displayName = "UV-5R Ham Radio";
		descriptionShort = "UV-5R Ham radio capable of communicating over very long distances. - KILLJOYS MOD PACK";
		lootTag[] = {"Police","Hunting","Camping","Military_east"};
		model = "Electronics\Models\UV5R.p3d";
		SingleUseActions[] = {542,543};
		ContinuousActions[] = {170};
		weight = 2400;
		absorbency = 0.5;
		itemSize[] = {1,3};
		inventorySlot = "WalkieTalkie";
		rotationFlags = 1;
		oldpower = 0;
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		simulation = "itemTransmitter";
		inputRange = 8;
		range = 50000;
		attachments[] = {"BatteryD"};
		repairableWithKits[] = {5,7};
		repairCosts[] = {30.0,25.0};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOff = 1;
			energyUsagePerSecond = 0.01;
			plugType = 1;
			attachmentAction = 1;
			wetnessExposure = 0.1;
		};
		class ClothingTypes{};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"Electronics\data\radio\UV5R.rvmat"}},{0.7,{"KJRadio\data\radio\UV5R.rvmat"}},{0.5,{"KJRadio\data\radio\UV5R.rvmat"}},{0.3,{"KJRadio\data\radio\UV5R.rvmat"}},{0.0,{"KJRadio\data\radio\UV5R.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class turnOnRadio
				{
					soundSet = "TurnOn_SoundSet";
					id = 1006;
				};
				class turnOffRadio
				{
					soundSet = "turnOffRadioNoise_SoundSet";
					id = 1007;
				};
			};
		};
	};	
};