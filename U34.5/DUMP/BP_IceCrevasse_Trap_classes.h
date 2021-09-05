// BlueprintGeneratedClass BP_IceCrevasse_Trap.BP_IceCrevasse_Trap_C
// Size: 0x2e5 (Inherited: 0x220)
struct ABP_IceCrevasse_Trap_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* Step6; // 0x228(0x08)
	UStaticMeshComponent* Step5; // 0x230(0x08)
	UStaticMeshComponent* Step4; // 0x238(0x08)
	UStaticMeshComponent* Step3; // 0x240(0x08)
	UStaticMeshComponent* Step2; // 0x248(0x08)
	UStaticMeshComponent* Step1; // 0x250(0x08)
	UStaticMeshComponent* Tell4; // 0x258(0x08)
	UStaticMeshComponent* Tell3; // 0x260(0x08)
	UStaticMeshComponent* Tell2; // 0x268(0x08)
	UStaticMeshComponent* Tell1; // 0x270(0x08)
	UStaticMeshComponent* StaticMesh; // 0x278(0x08)
	UBoxComponent* Box; // 0x280(0x08)
	UStaticMeshComponent* Crevasse; // 0x288(0x08)
	ULevelGenerationCarverComponent* LevelGenerationCarver_warning; // 0x290(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x298(0x08)
	USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)
	TArray<FVector> ParticleLocations; // 0x2a8(0x10)
	TArray<FTransform> TellTransforms; // 0x2b8(0x10)
	int32_t TellIndex; // 0x2c8(0x04)
	TArray<UStaticMeshComponent*> RockSteps; // 0x2d0(0x10)
	float ChanceOfRockSteps; // 0x2e0(0x04)
	bool IsOpen; // 0x2e4(0x01)

	void OnRep_IsOpen();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void OpenCrevasse();
	void ExecuteUbergraph_BP_IceCrevasse_Trap(int32_t EntryPoint);
};

