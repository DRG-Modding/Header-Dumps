// BlueprintGeneratedClass BP_AmberEvent.BP_AmberEvent_C
// Size: 0x448 (Inherited: 0x3a8)
struct ABP_AmberEvent_C : AAmberEvent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	struct UCapsuleComponent* Capsule1; // 0x3b0(0x08)
	struct URoomCarverComponent* RoomCarver; // 0x3b8(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x3c0(0x08)
	struct UOutlineComponent* outline; // 0x3c8(0x08)
	struct UStaticMeshComponent* SM_Prim_Cylinder_06sides; // 0x3d0(0x08)
	struct ULevelGenerationCarverComponent* LevelGenerationCarver; // 0x3d8(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x3e0(0x08)
	struct UMeshCarverComponent* MeshCarver; // 0x3e8(0x08)
	struct UAudioComponent* AmberLaserActivated; // 0x3f0(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x3f8(0x08)
	struct USphereComponent* Sphere; // 0x400(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x408(0x08)
	struct URestrictedResourceBank* RestrictedResourceBank; // 0x410(0x08)
	struct UChildActorComponent* StartButton1; // 0x418(0x08)
	struct UChildActorComponent* StartButton2; // 0x420(0x08)
	struct UChildActorComponent* StartButton4; // 0x428(0x08)
	struct UChildActorComponent* StartButton3; // 0x430(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x438(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x440(0x08)

	void SpawnEnemies(); // Function BP_AmberEvent.BP_AmberEvent_C.SpawnEnemies
	void BndEvt__RestrictedResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(); // Function BP_AmberEvent.BP_AmberEvent_C.BndEvt__RestrictedResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_AmberEvent.BP_AmberEvent_C.ReceiveBeginPlay
	void OnEventFinished(bool eventSuccess); // Function BP_AmberEvent.BP_AmberEvent_C.OnEventFinished
	void OnEventTriggered(); // Function BP_AmberEvent.BP_AmberEvent_C.OnEventTriggered
	void ExecuteUbergraph_BP_AmberEvent(int32_t EntryPoint); // Function BP_AmberEvent.BP_AmberEvent_C.ExecuteUbergraph_BP_AmberEvent
};

