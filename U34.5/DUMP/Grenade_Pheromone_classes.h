// BlueprintGeneratedClass Grenade_Pheromone.Grenade_Pheromone_C
// Size: 0x33c (Inherited: 0x314)
struct AGrenade_Pheromone_C : AITM_Grenade_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	TArray<AFSDPawn*> PheromoneTargets; // 0x320(0x10)
	int32_t MinGuaranteedTargets; // 0x330(0x04)
	int32_t AffectEveryNthTarget; // 0x334(0x04)
	float EffectRadius; // 0x338(0x04)

	void AddGearStateEntries(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void OnExploded();
	void ApplyPheromones();
	void ExecuteUbergraph_Grenade_Pheromone(int32_t EntryPoint);
};

