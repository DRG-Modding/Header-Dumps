// BlueprintGeneratedClass ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C
// Size: 0x334 (Inherited: 0x314)
struct AITM_AOE_Grenade_Base_C : AITM_Grenade_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	AActor* AOEClass; // 0x320(0x08)
	USoundBase* DischargeSound; // 0x328(0x08)
	float AoESpawnDelay; // 0x330(0x04)

	void OnExploded();
	void ExecuteUbergraph_ITM_AOE_Grenade_Base(int32_t EntryPoint);
};

