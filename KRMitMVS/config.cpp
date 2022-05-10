class CfgPatches
{
    class KRMitMVS
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[] = 
        {
            "ModularVestSystem"
        };
    };
};
class cfgVehicles
{
	class MVS_Pack_Base;
	class MVS_Pack_KRMit: MVS_Pack_Base
	{
		scope = 2;
		displayName = "MVS Combat Pack - KRMit";
		hiddenSelectionsTextures[] = 
		{
			"\KRMitMVS\data\pack_co_KRMit.paa",
			"\KRMitMVS\data\pack_co_KRMit.paa",
			"\KRMitMVS\data\pack_co_KRMit.paa"
		};
	};

	class Modular_Pouch_Base_Admin; 
	class MVS_Admin_Pouch_KRMit: Modular_Pouch_Base_Admin
	{
		scope = 2;
		displayName = "MVS Admin Pouch - KRMit";
		hiddenSelectionsTextures[] = 
		{
			"\KRMitMVS\data\vest_co_KRMit.paa"
		};
	};
	
	class MVS_Molle_Panel_Base;
	class MVS_Molle_Panel_KRMit: MVS_Molle_Panel_Base
	{
		scope = 2;
		displayName = "MVS Molle Panel - KRMit";
		hiddenSelectionsTextures[] = 
		{
			"\KRMitMVS\data\vest_co_KRMit.paa"
		};
	};
	
	class Modular_Pouch_Base_Heavy;
	class MVS_Heavy_Pouch_KRMit: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "MVS Heavy LMG Pouch - KRMit";
		hiddenSelectionsTextures[] = 
		{
			"\KRMitMVS\data\vestheavy_co_KRMit.paa"
		};
	};
	
	class Modular_Pouch_Base_Utility;
	class MVS_Utility_Pouch_KRMit: Modular_Pouch_Base_Utility
	{
		scope = 2;
		displayName = "MVS Utility Pouch - KRMit";
		hiddenSelectionsTextures[] = 
		{
			"\KRMitMVS\data\vest_co_KRMit.paa"
		};
	};
	
	class Modular_Pouch_Base_Medical;
	class MVS_Medical_Pouch_KRMit: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "MVS Medical Pouch - KRMit";
		hiddenSelectionsTextures[] = 
		{
			"\KRMitMVS\data\vest_co_KRMit_medical.paa"
		};
	};
	
	class MVS_WarriorHelmet_Base;
	class MVS_WarriorHelmet_KRMit: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "MVS Warrior Helmet - KRMit";
		hiddenSelectionsTextures[] = 
		{
			"\KRMitMVS\data\OpsCore_co_KRMit.paa",
			"\KRMitMVS\data\OpsCore_co_KRMit.paa",
			"\KRMitMVS\data\OpsCore_co_KRMit.paa",
			"\KRMitMVS\data\Mandalorian_Helmet_co_KRMit.paa",
			"\KRMitMVS\data\Mandalorian_Visor_co.paa"
		};
	};
	
	class ModularVestSystem_Heavy; 
	class MVS_Combat_Vest_Heavy_KRMit: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "MVS Heavy - KRMit";
		hiddenSelectionsTextures[] = 
		{
			"\KRMitMVS\data\MVSHeavy_co_KRMit.paa",
			"\KRMitMVS\data\MVSHeavy_co_KRMit.paa",
			"\KRMitMVS\data\MVSHeavy_co_KRMit.paa"
		};
	};
	class MVS_CombatShirt_Base;
	class MVS_CombatShirt_KRMit: MVS_CombatShirt_Base
	{
		scope=2;
		displayName="MVS Combat Shirt - KRMit";
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"KRMitMVS\data\MVS_CombatShirt_KRMit.paa",
			"KRMitMVS\data\MVS_CombatShirt_KRMit.paa",
			"KRMitMVS\data\MVS_CombatShirt_KRMit.paa"
		};
	};
	class MVS_CombatPants_Base;
	class MVS_CombatPants_KRMit: MVS_CombatPants_Base
	{
		scope=2;
		displayName="MVS Combat Pants - KRMit";
		hiddenSelectionsTextures[]=
		{
			"KRMitMVS\data\MVS_CombatPants_KRMit.paa",
			"KRMitMVS\data\MVS_CombatPants_KRMit.paa",
			"KRMitMVS\data\MVS_CombatPants_KRMit.paa"
		};
	};
};