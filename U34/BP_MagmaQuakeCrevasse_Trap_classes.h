// BlueprintGeneratedClass BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C
// Size: 0x308 (Inherited: 0x220)
struct ABP_MagmaQuakeCrevasse_Trap_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBillboardComponent* P_Tell_05; // 0x228(0x08)
	struct UBillboardComponent* P_Tell_04; // 0x230(0x08)
	struct UBillboardComponent* P_Tell_03; // 0x238(0x08)
	struct UBillboardComponent* P_Tell_02; // 0x240(0x08)
	struct UBillboardComponent* P_Tell_01; // 0x248(0x08)
	struct UStaticMeshComponent* Step11; // 0x250(0x08)
	struct UStaticMeshComponent* Step8; // 0x258(0x08)
	struct UStaticMeshComponent* CrevasseHotRockFill; // 0x260(0x08)
	struct UActorStateComponent* CrevasseOpen; // 0x268(0x08)
	struct UStaticMeshComponent* Step6; // 0x270(0x08)
	struct UStaticMeshComponent* Step5; // 0x278(0x08)
	struct UStaticMeshComponent* Step4; // 0x280(0x08)
	struct UStaticMeshComponent* Step3; // 0x288(0x08)
	struct UStaticMeshComponent* Step1; // 0x290(0x08)
	struct UBoxComponent* Box; // 0x298(0x08)
	struct UStaticMeshComponent* Crevasse; // 0x2a0(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x2a8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b0(0x08)
	struct TArray<struct FVector> ParticleLocations; // 0x2b8(0x10)
	struct TArray<struct FTransform> TellTransforms; // 0x2c8(0x10)
	int32_t TellIndex; // 0x2d8(0x04)
	char UnknownData_2DC[0x4]; // 0x2dc(0x04)
	struct TArray<struct UStaticMeshComponent*> RockSteps; // 0x2e0(0x10)
	float ChanceOfRockSteps; // 0x2f0(0x04)
	int32_t MinNumRockSteps; // 0x2f4(0x04)
	struct TArray<struct USceneComponent*> Tells; // 0x2f8(0x10)

	void UserConstructionScript(); // Function BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C.ReceiveBeginPlay
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__CrevasseOpen_K2Node_ComponentBoundEvent_4_StateDelegate__DelegateSignature(struct UActorStateComponent* State); // Function BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C.BndEvt__CrevasseOpen_K2Node_ComponentBoundEvent_4_StateDelegate__DelegateSignature
	void SetCrevasseActive(bool IsActive); // Function BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C.SetCrevasseActive
	void Test_Crevasse(); // Function BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C.Test_Crevasse
	void ExecuteUbergraph_BP_MagmaQuakeCrevasse_Trap(int32_t EntryPoint); // Function BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C.ExecuteUbergraph_BP_MagmaQuakeCrevasse_Trap
};

