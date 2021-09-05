// BlueprintGeneratedClass Grenade_Cluster.Grenade_Cluster_C
// Size: 0x340 (Inherited: 0x314)
struct AGrenade_Cluster_C : AITM_Grenade_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	int32_t GrenadeFragments; // 0x320(0x04)
	USoundBase* ClusterBreakSound; // 0x328(0x08)
	UParticleSystem* ClusterBreakParticles; // 0x330(0x08)
	float CurrentClusterPitch; // 0x338(0x04)
	float ClusterEjectionForce; // 0x33c(0x04)

	void AddGearStateEntries(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void OnExploded();
	void ExecuteUbergraph_Grenade_Cluster(int32_t EntryPoint);
};

