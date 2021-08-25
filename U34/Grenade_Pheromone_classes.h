// BlueprintGeneratedClass Grenade_Pheromone.Grenade_Pheromone_C
// Size: 0x33c (Inherited: 0x314)
struct AGrenade_Pheromone_C : AITM_Grenade_Base_C {
	char UnknownData_314[0x4]; // 0x314(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct TArray<struct AFSDPawn*> PheromoneTargets; // 0x320(0x10)
	int32_t MinGuaranteedTargets; // 0x330(0x04)
	int32_t AffectEveryNthTarget; // 0x334(0x04)
	float EffectRadius; // 0x338(0x04)

	void AddGearStateEntries(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function Grenade_Pheromone.Grenade_Pheromone_C.AddGearStateEntries
	void OnExploded(); // Function Grenade_Pheromone.Grenade_Pheromone_C.OnExploded
	void ApplyPheromones(); // Function Grenade_Pheromone.Grenade_Pheromone_C.ApplyPheromones
	void ExecuteUbergraph_Grenade_Pheromone(int32_t EntryPoint); // Function Grenade_Pheromone.Grenade_Pheromone_C.ExecuteUbergraph_Grenade_Pheromone
};

