// BlueprintGeneratedClass BP_DreadnoughtEgg.BP_DreadnoughtEgg_C
// Size: 0x340 (Inherited: 0x2a5)
struct ABP_DreadnoughtEgg_C : ABP_SpiderEgg_Base_C {
	char UnknownData_2A5[0x3]; // 0x2a5(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UStaticMeshComponent* TerrainScannerMesh; // 0x2b0(0x08)
	struct UBillboardComponent* BranchCarver2; // 0x2b8(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x2c0(0x08)
	struct UBillboardComponent* BranchCArver3; // 0x2c8(0x08)
	struct UStaticMeshComponent* OrganicMaterialExtra3; // 0x2d0(0x08)
	struct UStaticMeshComponent* OrganicMaterialExtra2; // 0x2d8(0x08)
	struct UStaticMeshComponent* OrganicMaterialExtra1; // 0x2e0(0x08)
	struct UBillboardComponent* BranchCarver1; // 0x2e8(0x08)
	struct UStaticMeshComponent* OrganicMaterialCarver; // 0x2f0(0x08)
	struct UAudioComponent* Audio; // 0x2f8(0x08)
	struct UPointLightComponent* PointLight; // 0x300(0x08)
	struct UStaticMeshComponent* Carver; // 0x308(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x310(0x08)
	struct UStaticMeshComponent* EggWhole; // 0x318(0x08)
	float LightIntensity_NewTrack_0_9A4595314256D1AF580CF3A2C59CC406; // 0x320(0x04)
	char LightIntensity__Direction_9A4595314256D1AF580CF3A2C59CC406; // 0x324(0x01)
	char UnknownData_325[0x3]; // 0x325(0x03)
	struct UTimelineComponent* LightIntensity; // 0x328(0x08)
	struct TArray<struct AFSDPawn*> spawnedEnemies; // 0x330(0x10)

	void Carve(); // Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.Carve
	void LightIntensity__FinishedFunc(); // Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.LightIntensity__FinishedFunc
	void LightIntensity__UpdateFunc(); // Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.LightIntensity__UpdateFunc
	void OnEggBroken(); // Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.OnEggBroken
	void ReceiveBeginPlay(); // Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.ReceiveBeginPlay
	void OnMatchStarted(); // Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.OnMatchStarted
	void SpawnCustom(); // Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.SpawnCustom
	void spawned(struct APawn* enemy); // Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.spawned
	void SpawnedTwins(struct APawn* enemy); // Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.SpawnedTwins
	void Cheat_Break(); // Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.Cheat_Break
	void ExecuteUbergraph_BP_DreadnoughtEgg(int32_t EntryPoint); // Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.ExecuteUbergraph_BP_DreadnoughtEgg
};

