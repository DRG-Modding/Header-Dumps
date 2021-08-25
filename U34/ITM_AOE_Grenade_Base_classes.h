// BlueprintGeneratedClass ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C
// Size: 0x334 (Inherited: 0x314)
struct AITM_AOE_Grenade_Base_C : AITM_Grenade_Base_C {
	char UnknownData_314[0x4]; // 0x314(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct AActor* AOEClass; // 0x320(0x08)
	struct USoundBase* DischargeSound; // 0x328(0x08)
	float AoESpawnDelay; // 0x330(0x04)

	void OnExploded(); // Function ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C.OnExploded
	void ExecuteUbergraph_ITM_AOE_Grenade_Base(int32_t EntryPoint); // Function ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C.ExecuteUbergraph_ITM_AOE_Grenade_Base
};

