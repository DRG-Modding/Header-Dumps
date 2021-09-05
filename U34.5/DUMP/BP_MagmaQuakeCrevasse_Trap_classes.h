// BlueprintGeneratedClass BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C
// Size: 0x308 (Inherited: 0x220)
struct ABP_MagmaQuakeCrevasse_Trap_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UBillboardComponent* P_Tell_05; // 0x228(0x08)
	UBillboardComponent* P_Tell_04; // 0x230(0x08)
	UBillboardComponent* P_Tell_03; // 0x238(0x08)
	UBillboardComponent* P_Tell_02; // 0x240(0x08)
	UBillboardComponent* P_Tell_01; // 0x248(0x08)
	UStaticMeshComponent* Step11; // 0x250(0x08)
	UStaticMeshComponent* Step8; // 0x258(0x08)
	UStaticMeshComponent* CrevasseHotRockFill; // 0x260(0x08)
	UActorStateComponent* CrevasseOpen; // 0x268(0x08)
	UStaticMeshComponent* Step6; // 0x270(0x08)
	UStaticMeshComponent* Step5; // 0x278(0x08)
	UStaticMeshComponent* Step4; // 0x280(0x08)
	UStaticMeshComponent* Step3; // 0x288(0x08)
	UStaticMeshComponent* Step1; // 0x290(0x08)
	UBoxComponent* Box; // 0x298(0x08)
	UStaticMeshComponent* Crevasse; // 0x2a0(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x2a8(0x08)
	USceneComponent* DefaultSceneRoot; // 0x2b0(0x08)
	TArray<FVector> ParticleLocations; // 0x2b8(0x10)
	TArray<FTransform> TellTransforms; // 0x2c8(0x10)
	int32_t TellIndex; // 0x2d8(0x04)
	TArray<UStaticMeshComponent*> RockSteps; // 0x2e0(0x10)
	float ChanceOfRockSteps; // 0x2f0(0x04)
	int32_t MinNumRockSteps; // 0x2f4(0x04)
	TArray<USceneComponent*> Tells; // 0x2f8(0x10)

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__CrevasseOpen_K2Node_ComponentBoundEvent_4_StateDelegate__DelegateSignature(UActorStateComponent* State);
	void SetCrevasseActive(bool IsActive);
	void Test_Crevasse();
	void ExecuteUbergraph_BP_MagmaQuakeCrevasse_Trap(int32_t EntryPoint);
};

