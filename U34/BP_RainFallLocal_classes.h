// BlueprintGeneratedClass BP_RainFallLocal.BP_RainFallLocal_C
// Size: 0x249 (Inherited: 0x220)
struct ABP_RainFallLocal_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x228(0x08)
	struct UAudioComponent* Audio; // 0x230(0x08)
	struct UParticleSystemComponent* P_CaveFX_Rain01; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	bool PlayerInsideGas; // 0x248(0x01)

	void ReceiveBeginPlay(); // Function BP_RainFallLocal.BP_RainFallLocal_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_RainFallLocal(int32_t EntryPoint); // Function BP_RainFallLocal.BP_RainFallLocal_C.ExecuteUbergraph_BP_RainFallLocal
};

