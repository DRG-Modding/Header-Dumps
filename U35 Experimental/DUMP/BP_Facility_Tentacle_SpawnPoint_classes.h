// BlueprintGeneratedClass BP_Facility_Tentacle_SpawnPoint.BP_Facility_Tentacle_SpawnPoint_C
// Size: 0x238 (Inherited: 0x220)
struct ABP_Facility_Tentacle_SpawnPoint_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x228(0x08)
	USceneComponent* DefaultSceneRoot; // 0x230(0x08)

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Facility_Tentacle_SpawnPoint(int32_t EntryPoint);
};

