class CfgPatches
{
	class WeaponsTools
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Melee"
		};
	};
};
class CfgVehicles
{
//KARBAR--------------------------------
	class Machete;
	class KMP_KABAR: Machete
	{
		scope=2;
		displayName="KA-BAR Fighting Knife";
		descriptionShort="The most famous fixed blade knife in the World, the KA-BAR was designed to serve US troops during World War II and is still doing its job, with honors, 70+ years later. Tang stamped USMC. Made in the USA. - KILLJOYS MOD PACK";
		model="WeaponsTools\Models\KABAR.p3d";
		animClass="Knife";
		repairableWithKits[]={5,4};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Knife"
		};
		rotationFlags=17;
		canSkinBodies=1;
		RestrainUnlockType=1;
		weight=312;
		itemSize[]={1,3};
		lootTag[]=
		{
			"Military_east",
			"Military_west"
		};
		lootCategory="Tools";
		itemInfo[]=
		{
			"Knife"
		};
		openItemSpillRange[]={10,20};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"WeaponsTools\data\KABAR.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"WeaponsTools\data\KABAR.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"WeaponsTools\data\KABAR.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"WeaponsTools\data\KABAR.rvmat"
							}
						},
						
						{
							0,
							
							{
								"WeaponsTools\data\KABAR.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		suicideAnim="onehanded";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeKnife";
				range=1.2;
			};
			class Heavy
			{
				ammo="MeleeKnife_Heavy";
				range=1.2;
			};
			class Sprint
			{
				ammo="MeleeKnife_Heavy";
				range=3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
				class CutTies_end
				{
					soundSet="CutTies_end_SoundSet";
					id=519;
				};
				class CutTies_loop
				{
					soundSet="CutTies_loop_SoundSet";
					id=520;
				};
				class shaving_knife_clean
				{
					soundSet="shaving_knife_clean_SoundSet";
					id=600;
				};
				class shaving_knife1
				{
					soundSet="shaving_knife1_SoundSet";
					id=601;
				};
				class shaving_knife2
				{
					soundSet="shaving_knife2_SoundSet";
					id=602;
				};
				class shaving_knife3
				{
					soundSet="shaving_knife3_SoundSet";
					id=603;
				};
				class shaving_knife4
				{
					soundSet="shaving_knife4_SoundSet";
					id=604;
				};
				class shaving_knife5
				{
					soundSet="shaving_knife5_SoundSet";
					id=605;
				};
				class shaving_knife6
				{
					soundSet="shaving_knife6_SoundSet";
					id=606;
				};
				class shaving_knife7
				{
					soundSet="shaving_knife7_SoundSet";
					id=607;
				};
				class shaving_knife8
				{
					soundSet="shaving_knife8_SoundSet";
					id=608;
				};
				class shaving_knife9
				{
					soundSet="shaving_knife9_SoundSet";
					id=609;
				};
				class shaving_knife10
				{
					soundSet="shaving_knife10_SoundSet";
					id=610;
				};
				class shaving_knife11
				{
					soundSet="shaving_knife11_SoundSet";
					id=611;
				};
				class shaving_knife12
				{
					soundSet="shaving_knife12_SoundSet";
					id=612;
				};
				class shaving_knife13
				{
					soundSet="shaving_knife13_SoundSet";
					id=613;
				};
				class shaving_knife14
				{
					soundSet="shaving_knife14_SoundSet";
					id=614;
				};
				class shaving_knife15
				{
					soundSet="shaving_knife15_SoundSet";
					id=615;
				};
				class shaving_knife16
				{
					soundSet="shaving_knife16_SoundSet";
					id=616;
				};
				class shaving_knife17
				{
					soundSet="shaving_knife17_SoundSet";
					id=617;
				};
				class shaving_knife18
				{
					soundSet="shaving_knife18_SoundSet";
					id=618;
				};
				class shaving_knife19
				{
					soundSet="shaving_knife19_SoundSet";
					id=619;
				};
				class shaving_knife20
				{
					soundSet="shaving_knife20_SoundSet";
					id=620;
				};
				class shaving_knife21
				{
					soundSet="shaving_knife21_SoundSet";
					id=621;
				};
				class drop
				{
					soundset="combatknife_drop_SoundSet";
					id=898;
				};
			};
		};
	};
//TrenchTools--------------------------------
    class Shovel;
	class KMP_TrenchTool_OD: Shovel
	{
		scope=2;
		displayName="Entrenching tool OD Green";
		descriptionShort="An entrenching tool (E-Tool) is a digging tool used by military forces for a variety of military purposes. Survivalists, campers, hikers and other outdoors groups have found it to be indispensable in field use. Modern entrenching tools are usually collapsible and made using steel, aluminum, or other light metals. - KILLJOYS MOD PACK";
		model="WeaponsTools\Models\TrenchTool.p3d";
		weight=5450;
		itemSize[]={2,3};
		fragility=0.0080000004;
		suicideAnim="pitchfork";
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"WeaponsTools\Textures\TrenchTool_OD.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"WeaponsTools\data\TrenchTool_OD.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class KMP_TrenchTool_BLK: Shovel
	{
		scope=2;
		displayName="Entrenching tool Black";
		descriptionShort="An entrenching tool (E-Tool) is a digging tool used by military forces for a variety of military purposes. Survivalists, campers, hikers and other outdoors groups have found it to be indispensable in field use. Modern entrenching tools are usually collapsible and made using steel, aluminum, or other light metals. - KILLJOYS MOD PACK";
		model="WeaponsTools\Models\TrenchTool.p3d";
		weight=5450;
		itemSize[]={2,3};
		fragility=0.0080000004;
		suicideAnim="pitchfork";
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\WeaponsTools\Textures\TrenchTool_BLK.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"WeaponsTools\data\TrenchTool_BLK.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class KMP_TrenchTool_Pantera: Shovel
	{
		scope=2;
		displayName="Entrenching tool Pantera";
		descriptionShort="An entrenching tool (E-Tool) is a digging tool used by military forces for a variety of military purposes. Survivalists, campers, hikers and other outdoors groups have found it to be indispensable in field use. Modern entrenching tools are usually collapsible and made using steel, aluminum, or other light metals. - KILLJOYS MOD PACK";
		model="WeaponsTools\Models\TrenchTool.p3d";
		weight=5450;
		itemSize[]={2,3};
		fragility=0.0080000004;
		suicideAnim="pitchfork";
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\WeaponsTools\Textures\TrenchTool_Pantera.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"WeaponsTools\data\TrenchTool_Pantera.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class KMP_TrenchTool_TAN: Shovel
	{
		scope=2;
		displayName="Entrenching tool Tan";
		descriptionShort="An entrenching tool (E-Tool) is a digging tool used by military forces for a variety of military purposes. Survivalists, campers, hikers and other outdoors groups have found it to be indispensable in field use. Modern entrenching tools are usually collapsible and made using steel, aluminum, or other light metals. - KILLJOYS MOD PACK";
		model="WeaponsTools\Models\TrenchTool.p3d";
		weight=5450;
		itemSize[]={2,3};
		fragility=0.0080000004;
		suicideAnim="pitchfork";
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\WeaponsTools\Textures\TrenchTool_TAN.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"WeaponsTools\data\TrenchTool_TAN.rvmat"
							}
						}
					};
				};
			};
		};
	};
//TOMAHAWK --------------------------------
    class Hatchet;
	class KMP_Tomahawk: Hatchet
	{
		scope=2;
		displayName="Tomahawk";
		descriptionShort="Tactical tomahawk, multitool and breaching tool. - KILLJOYS MOD PACK";
		model="WeaponsTools\Models\Tomahawk.p3d";
		weight=5450;
		itemSize[]={2,3};
		fragility=0.0080000004;
		suicideAnim="pitchfork";
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"\DZ\weapons\melee\blade\data\hatchet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"\DZ\weapons\melee\blade\data\hatchet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"\DZ\weapons\melee\blade\data\hatchet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"\DZ\weapons\melee\blade\data\hatchet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"\DZ\weapons\melee\blade\data\hatchet_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
//SHANK
    class KMP_Shank: Machete
	{
		scope=2;
		displayName="Shank";
		descriptionShort="A small home made blade made out of scrap of metal found anywhere and sharpend like a knife. The bottom is tightly wrapped with a cloth as a handle. - KILLJOYS MOD PACK";
		model="WeaponsTools\Models\Shank.p3d";
		animClass="Knife";
		repairableWithKits[]={5,4};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Knife"
		};
		rotationFlags=17;
		canSkinBodies=1;
		RestrainUnlockType=1;
		weight=312;
		itemSize[]={1,2};
		lootTag[]=
		{
			"Military_east",
			"Military_west"
		};
		lootCategory="Tools";
		itemInfo[]=
		{
			"Knife"
		};
		openItemSpillRange[]={10,20};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"WeaponsTools\data\Shank.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"WeaponsTools\data\Shank.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"WeaponsTools\data\Shank.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"WeaponsTools\data\Shank.rvmat"
							}
						},
						
						{
							0,
							
							{
								"WeaponsTools\data\Shank.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		suicideAnim="onehanded";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeKnife";
				range=1.2;
			};
			class Heavy
			{
				ammo="MeleeKnife_Heavy";
				range=1.2;
			};
			class Sprint
			{
				ammo="MeleeKnife_Heavy";
				range=3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
				class CutTies_end
				{
					soundSet="CutTies_end_SoundSet";
					id=519;
				};
				class CutTies_loop
				{
					soundSet="CutTies_loop_SoundSet";
					id=520;
				};
				class shaving_knife_clean
				{
					soundSet="shaving_knife_clean_SoundSet";
					id=600;
				};
				class shaving_knife1
				{
					soundSet="shaving_knife1_SoundSet";
					id=601;
				};
				class shaving_knife2
				{
					soundSet="shaving_knife2_SoundSet";
					id=602;
				};
				class shaving_knife3
				{
					soundSet="shaving_knife3_SoundSet";
					id=603;
				};
				class shaving_knife4
				{
					soundSet="shaving_knife4_SoundSet";
					id=604;
				};
				class shaving_knife5
				{
					soundSet="shaving_knife5_SoundSet";
					id=605;
				};
				class shaving_knife6
				{
					soundSet="shaving_knife6_SoundSet";
					id=606;
				};
				class shaving_knife7
				{
					soundSet="shaving_knife7_SoundSet";
					id=607;
				};
				class shaving_knife8
				{
					soundSet="shaving_knife8_SoundSet";
					id=608;
				};
				class shaving_knife9
				{
					soundSet="shaving_knife9_SoundSet";
					id=609;
				};
				class shaving_knife10
				{
					soundSet="shaving_knife10_SoundSet";
					id=610;
				};
				class shaving_knife11
				{
					soundSet="shaving_knife11_SoundSet";
					id=611;
				};
				class shaving_knife12
				{
					soundSet="shaving_knife12_SoundSet";
					id=612;
				};
				class shaving_knife13
				{
					soundSet="shaving_knife13_SoundSet";
					id=613;
				};
				class shaving_knife14
				{
					soundSet="shaving_knife14_SoundSet";
					id=614;
				};
				class shaving_knife15
				{
					soundSet="shaving_knife15_SoundSet";
					id=615;
				};
				class shaving_knife16
				{
					soundSet="shaving_knife16_SoundSet";
					id=616;
				};
				class shaving_knife17
				{
					soundSet="shaving_knife17_SoundSet";
					id=617;
				};
				class shaving_knife18
				{
					soundSet="shaving_knife18_SoundSet";
					id=618;
				};
				class shaving_knife19
				{
					soundSet="shaving_knife19_SoundSet";
					id=619;
				};
				class shaving_knife20
				{
					soundSet="shaving_knife20_SoundSet";
					id=620;
				};
				class shaving_knife21
				{
					soundSet="shaving_knife21_SoundSet";
					id=621;
				};
				class drop
				{
					soundset="combatknife_drop_SoundSet";
					id=898;
				};
			};
		};
	};
//BUCK KNIFE
    class KMP_BuckKnife: Machete
	{
		scope=2;
		displayName="Buck Knife";
		descriptionShort="A Buck knife, Perfect for skinning game. - KILLJOYS MOD PACK";
		model="WeaponsTools\Models\BuckKnife.p3d";
		animClass="Knife";
		repairableWithKits[]={5,4};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Knife"
		};
		rotationFlags=17;
		canSkinBodies=1;
		RestrainUnlockType=1;
		weight=312;
		itemSize[]={1,2};
		lootTag[]=
		{
			"Military_east",
			"Military_west"
		};
		lootCategory="Tools";
		itemInfo[]=
		{
			"Knife"
		};
		openItemSpillRange[]={10,20};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"WeaponsTools\data\BuckKnife.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"WeaponsTools\data\BuckKnife.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"WeaponsTools\data\BuckKnife.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"WeaponsTools\data\BuckKnife.rvmat"
							}
						},
						
						{
							0,
							
							{
								"WeaponsTools\data\BuckKnife.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		suicideAnim="onehanded";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeKnife";
				range=1.2;
			};
			class Heavy
			{
				ammo="MeleeKnife_Heavy";
				range=1.2;
			};
			class Sprint
			{
				ammo="MeleeKnife_Heavy";
				range=3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
				class CutTies_end
				{
					soundSet="CutTies_end_SoundSet";
					id=519;
				};
				class CutTies_loop
				{
					soundSet="CutTies_loop_SoundSet";
					id=520;
				};
				class shaving_knife_clean
				{
					soundSet="shaving_knife_clean_SoundSet";
					id=600;
				};
				class shaving_knife1
				{
					soundSet="shaving_knife1_SoundSet";
					id=601;
				};
				class shaving_knife2
				{
					soundSet="shaving_knife2_SoundSet";
					id=602;
				};
				class shaving_knife3
				{
					soundSet="shaving_knife3_SoundSet";
					id=603;
				};
				class shaving_knife4
				{
					soundSet="shaving_knife4_SoundSet";
					id=604;
				};
				class shaving_knife5
				{
					soundSet="shaving_knife5_SoundSet";
					id=605;
				};
				class shaving_knife6
				{
					soundSet="shaving_knife6_SoundSet";
					id=606;
				};
				class shaving_knife7
				{
					soundSet="shaving_knife7_SoundSet";
					id=607;
				};
				class shaving_knife8
				{
					soundSet="shaving_knife8_SoundSet";
					id=608;
				};
				class shaving_knife9
				{
					soundSet="shaving_knife9_SoundSet";
					id=609;
				};
				class shaving_knife10
				{
					soundSet="shaving_knife10_SoundSet";
					id=610;
				};
				class shaving_knife11
				{
					soundSet="shaving_knife11_SoundSet";
					id=611;
				};
				class shaving_knife12
				{
					soundSet="shaving_knife12_SoundSet";
					id=612;
				};
				class shaving_knife13
				{
					soundSet="shaving_knife13_SoundSet";
					id=613;
				};
				class shaving_knife14
				{
					soundSet="shaving_knife14_SoundSet";
					id=614;
				};
				class shaving_knife15
				{
					soundSet="shaving_knife15_SoundSet";
					id=615;
				};
				class shaving_knife16
				{
					soundSet="shaving_knife16_SoundSet";
					id=616;
				};
				class shaving_knife17
				{
					soundSet="shaving_knife17_SoundSet";
					id=617;
				};
				class shaving_knife18
				{
					soundSet="shaving_knife18_SoundSet";
					id=618;
				};
				class shaving_knife19
				{
					soundSet="shaving_knife19_SoundSet";
					id=619;
				};
				class shaving_knife20
				{
					soundSet="shaving_knife20_SoundSet";
					id=620;
				};
				class shaving_knife21
				{
					soundSet="shaving_knife21_SoundSet";
					id=621;
				};
				class drop
				{
					soundset="combatknife_drop_SoundSet";
					id=898;
				};
			};
		};
	};
//NECK KNIFE ------------------
    class KMP_NeckKnife: Machete
	{
		scope=2;
		displayName="NeckKnife";
		descriptionShort="A small concealable neck knife. - KILLJOYS MOD PACK";
		model="WeaponsTools\Models\NeckKnife.p3d";
		animClass="Knife";
		repairableWithKits[]={5,4};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Knife"
		};
		rotationFlags=17;
		canSkinBodies=1;
		RestrainUnlockType=1;
		weight=312;
		itemSize[]={1,2};
		lootTag[]=
		{
			"Military_east",
			"Military_west"
		};
		lootCategory="Tools";
		itemInfo[]=
		{
			"Knife"
		};
		openItemSpillRange[]={10,20};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"WeaponsTools\data\NeckKnife.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"WeaponsTools\data\NeckKnife.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"WeaponsTools\data\NeckKnife.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"WeaponsTools\data\NeckKnife.rvmat"
							}
						},
						
						{
							0,
							
							{
								"WeaponsTools\data\NeckKnife.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		suicideAnim="onehanded";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeKnife";
				range=1.2;
			};
			class Heavy
			{
				ammo="MeleeKnife_Heavy";
				range=1.2;
			};
			class Sprint
			{
				ammo="MeleeKnife_Heavy";
				range=3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
				class CutTies_end
				{
					soundSet="CutTies_end_SoundSet";
					id=519;
				};
				class CutTies_loop
				{
					soundSet="CutTies_loop_SoundSet";
					id=520;
				};
				class shaving_knife_clean
				{
					soundSet="shaving_knife_clean_SoundSet";
					id=600;
				};
				class shaving_knife1
				{
					soundSet="shaving_knife1_SoundSet";
					id=601;
				};
				class shaving_knife2
				{
					soundSet="shaving_knife2_SoundSet";
					id=602;
				};
				class shaving_knife3
				{
					soundSet="shaving_knife3_SoundSet";
					id=603;
				};
				class shaving_knife4
				{
					soundSet="shaving_knife4_SoundSet";
					id=604;
				};
				class shaving_knife5
				{
					soundSet="shaving_knife5_SoundSet";
					id=605;
				};
				class shaving_knife6
				{
					soundSet="shaving_knife6_SoundSet";
					id=606;
				};
				class shaving_knife7
				{
					soundSet="shaving_knife7_SoundSet";
					id=607;
				};
				class shaving_knife8
				{
					soundSet="shaving_knife8_SoundSet";
					id=608;
				};
				class shaving_knife9
				{
					soundSet="shaving_knife9_SoundSet";
					id=609;
				};
				class shaving_knife10
				{
					soundSet="shaving_knife10_SoundSet";
					id=610;
				};
				class shaving_knife11
				{
					soundSet="shaving_knife11_SoundSet";
					id=611;
				};
				class shaving_knife12
				{
					soundSet="shaving_knife12_SoundSet";
					id=612;
				};
				class shaving_knife13
				{
					soundSet="shaving_knife13_SoundSet";
					id=613;
				};
				class shaving_knife14
				{
					soundSet="shaving_knife14_SoundSet";
					id=614;
				};
				class shaving_knife15
				{
					soundSet="shaving_knife15_SoundSet";
					id=615;
				};
				class shaving_knife16
				{
					soundSet="shaving_knife16_SoundSet";
					id=616;
				};
				class shaving_knife17
				{
					soundSet="shaving_knife17_SoundSet";
					id=617;
				};
				class shaving_knife18
				{
					soundSet="shaving_knife18_SoundSet";
					id=618;
				};
				class shaving_knife19
				{
					soundSet="shaving_knife19_SoundSet";
					id=619;
				};
				class shaving_knife20
				{
					soundSet="shaving_knife20_SoundSet";
					id=620;
				};
				class shaving_knife21
				{
					soundSet="shaving_knife21_SoundSet";
					id=621;
				};
				class drop
				{
					soundset="combatknife_drop_SoundSet";
					id=898;
				};
			};
		};
	};	
};