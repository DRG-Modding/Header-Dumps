// BlueprintGeneratedClass Grenade_Cluster.Grenade_Cluster_C
// Size: 0x340 (Inherited: 0x314)
struct AGrenade_Cluster_C : AITM_Grenade_Base_C {
	char UnknownData_314[0x4]; // 0x314(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	int32_t GrenadeFragments; // 0x320(0x04)
	char UnknownData_324[0x4]; // 0x324(0x04)
	struct USoundBase* ClusterBreakSound; // 0x328(0x08)
	struct UParticleSystem* ClusterBreakParticles; // 0x330(0x08)
	float CurrentClusterPitch; // 0x338(0x04)
	float ClusterEjectionForce; // 0x33c(0x04)

	void AddGearStateEntries(struct AFSDPlayerState* PlayerState, struct TArray<struct FGearStatEntry> Stats); // Function Grenade_Cluster.Grenade_Cluster_C.AddGearStateEntries
	void OnExploded(); // Function Grenade_Cluster.Grenade_Cluster_C.OnExploded
	void ExecuteUbergraph_Grenade_Cluster(int32_t EntryPoint); // Function Grenade_Cluster.Grenade_Cluster_C.ExecuteUbergraph_Grenade_Cluster
};

