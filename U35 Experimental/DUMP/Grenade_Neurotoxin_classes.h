// BlueprintGeneratedClass Grenade_Neurotoxin.Grenade_Neurotoxin_C
// Size: 0x358 (Inherited: 0x334)
struct AGrenade_Neurotoxin_C : AITM_AOE_Grenade_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	UParticleSystemComponent* P_Grenade_Neurotoxin_NozzleCone1; // 0x340(0x08)
	UParticleSystemComponent* P_Grenade_Neurotoxin_NozzleCone3; // 0x348(0x08)
	UParticleSystemComponent* P_Grenade_Neurotoxin_NozzleCone2; // 0x350(0x08)

	void AddGearStateEntries(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void OnExploded();
	void ExecuteUbergraph_Grenade_Neurotoxin(int32_t EntryPoint);
};

