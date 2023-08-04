class CfgPatches
{
	class KMP_Firearms
	{
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"dz_Data",
			"dz_Weapons_Firearms"
		};
	};
};
class CfgMods
{
	class KMP_Firearms
	{
		dir="KMP_Firearms";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="KMP_Firearms";
		credits="KILLJOY";
		author="KILLJOY";
		authorID="0";
		version="1";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Firearms/scripts/4_World"
				};
			};
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	//AR15
	class M4A1;
	class KMP_AR15_CIV: M4A1
	{
		scope=2;
		displayName="AR-15";
		descriptionShort="The Bushmaster XM-15 series is a line of AR-15 style semi-automatic rifles chambered in 5.56x45mm manufactured by Bushmaster Firearms International.- KILLJOYS MOD PACK";
		hiddenSelectionsTextures[]=
		{
			"Firearms\Textures\m4_body_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\dz\weapons\firearms\m4\data\m4_body.rvmat"
		};
		modes[]=
		{
			"SemiAuto"
		};
	};
	//AK101
	class AK101;
	class KMP_AK101_CIV: AK101
	{
		scope=2;
		displayName="AK-101 Civilian";
		descriptionShort="Converted for civilian use (Semi auto only) The AK-101 is designed for the world export market, using the NATO standard 5.56x45mm cartridge. The AK-101 is marketed at those looking for a weapon that combines the logistical compatibility and familiarity of the 5.56×45mm NATO round with the reliability of a Kalashnikov. - KILLJOYS MOD PACK";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\AK101\data\ak101_co.paa",
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"
		};
		hiddenSelectionsMaterials[]=
		{
			"\dz\weapons\firearms\AK101\data\ak101.rvmat",
			"\DZ\weapons\attachments\magazine\data\magazine_ak74.rvmat"
		};
		modes[]=
		{
			"SemiAuto"
		};
	};
	//AKM
	class AKM;
	class KMP_AKM_CIV: AKM
	{
		scope=2;
		displayName="AKM Civilian";
		descriptionShort="Converted for civilian use (Semi auto only) The AKM is an assault rifle chambered in 7.62×39mm Soviet intermediate cartridge. The AKM (Russian: Автома́т Кала́шникова модернизи́рованный, tr. Avtomát Kalášnikova modernizírovannyj, lit. 'Kalashnikov's Automatic Rifle Modernised') is a 7.62×39mm assault rifle designed by Mikhail Kalashnikov. It is a common modernised variant of the AK-47 rifle developed in the 1940s. - KILLJOYS MOD PACK";
		hiddenSelectionsTextures[]=
		{
			"\dz\weapons\firearms\AKM\data\akm_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\dz\weapons\firearms\AKM\data\AKM.rvmat"
		};
		modes[]=
		{
			"SemiAuto"
		};
	};
	//AR15 .308
	class KMP_AR15_CIV_308: M4A1
	{
		scope=2;
		displayName="AR-15 308";
		descriptionShort="CONVERTED - The Bushmaster XM-15 series is a line of AR-15 style semi-automatic rifles originally chambered in 5.56x45mm CONVERTED TO .308 - manufactured by Bushmaster Firearms International. - KILLJOYS MOD PACK";
		hiddenSelectionsTextures[]=
		{
			"Firearms\Textures\m4_body_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\dz\weapons\firearms\m4\data\m4_body.rvmat"
		};
		modes[]=
		{
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"FNFAL_Shot_SoundSet",
				"FNFAL_Tail_SoundSet",
				"FNFAL_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"FNFAL_silencerHomeMade_SoundSet",
					"FNFAL_silencerHomeMadeTail_SoundSet",
					"FNFAL_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"\dz\sounds\weapons\firearms\svd\svd_single_0",
				1,
				1,
				900
			};
			begin2[]=
			{
				"\dz\sounds\weapons\firearms\svd\svd_single_1",
				1,
				1,
				900
			};
			begin3[]=
			{
				"\dz\sounds\weapons\firearms\svd\svd_single_2",
				1,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				0.33333001,
				"begin2",
				0.33333001,
				"begin3",
				0.33333001
			};
			reloadTime=0.125;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.001;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"\dz\sounds\weapons\firearms\AK101\akSilenced",
				1,
				1,
				200
			};
			beginSilenced_HomeMade[]=
			{
				"\dz\sounds\weapons\firearms\AK101\akSilenced",
				1,
				1,
				300
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro",
					1
				},
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
		};
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		magazines[]=
		{
			"KMP_Mag_CIV_308_30Rnd"
		};
	};
};
//MAGAZINES
class CfgMagazines
{
	class DefaultMagazine;
	class Magazine_Base: DefaultMagazine
	{
		scope=0;
		storageCategory=1;
		inventorySlot[]=
		{
			"magazine",
			"magazine2",
			"magazine3"
		};
		repairableWithKits[]={1};
		repairCosts[]={25};
		handheld="true";
		armAction="Disarm";
		isMeleeWeapon=1;
		rotationFlags=17;
		quantityBar=0;
		itemSize[]={1,2};
		absorbency=0;
		recoilModifier[]={0.94999999,0.94999999,0.94999999};
		value=1;
		modelSpecial="";
		spawnDamageRange[]={0,0.60000002};
		enlargeInventoryView=0;
		useAction=0;
		useActionTitle="";
		reloadAction="";
		manipulationDamage=0.050000001;
		count=30;
		ammo="";
		ammoItems[]={};
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
		selectionFireAnim="zasleh";
		nameSound="magazine";
		soundUse="craft_rounds";
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
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFist";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFist_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFist_Heavy";
				range=2.8;
			};
		};
		class Reliability
		{
			ChanceToJam[]={0,0.0024999999,0.015,0.1,1};
		};
	};
	class Mag_CMAG_30Rnd_Black;
	class KMP_Mag_CIV_308_30Rnd: Mag_CMAG_30Rnd_Black
	{
		scope=2;
		displayName="CMAG - 308";
		descriptionShort="30rnd AR15 Magazine converted for AR-15s chambered in .308 - KILLJOYS MOD PACK";
		ammo="Bullet_308Win";
		ammoItems[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		color="Black";
	};
};
//ITEMS
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
    class KMP_ConversionKit308_Civ: Container_Base
	{
		scope=2;
		displayName="AR-15 Conversion kit";
		descriptionShort="Converts a .556 AR-15 into .308 - WARNING! Strip the rifle of its parts before conversion! - KILLJOYS MOD PACK";
		model="Firearms\Models\ConversionKit.p3d";
		weight=2250;
		itemSize[]={5,4};
		allowOwnedCargoManipulation=1;
		randomQuantity=4;
		canBeDigged=0;
	};
};
