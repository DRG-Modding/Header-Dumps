// BlueprintGeneratedClass BP_AmberEvent.BP_AmberEvent_C
// Size: 0x448 (Inherited: 0x3a8)
struct ABP_AmberEvent_C : AAmberEvent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	UCapsuleComponent* Capsule1; // 0x3b0(0x08)
	URoomCarverComponent* RoomCarver; // 0x3b8(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x3c0(0x08)
	UOutlineComponent* outline; // 0x3c8(0x08)
	UStaticMeshComponent* SM_Prim_Cylinder_06sides; // 0x3d0(0x08)
	ULevelGenerationCarverComponent* LevelGenerationCarver; // 0x3d8(0x08)
	UStaticMeshComponent* StaticMesh1; // 0x3e0(0x08)
	UMeshCarverComponent* MeshCarver; // 0x3e8(0x08)
	UAudioComponent* AmberLaserActivated; // 0x3f0(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x3f8(0x08)
	USphereComponent* Sphere; // 0x400(0x08)
	UStaticMeshComponent* StaticMesh; // 0x408(0x08)
	URestrictedResourceBank* RestrictedResourceBank; // 0x410(0x08)
	UChildActorComponent* StartButton1; // 0x418(0x08)
	UChildActorComponent* StartButton2; // 0x420(0x08)
	UChildActorComponent* StartButton4; // 0x428(0x08)
	UChildActorComponent* StartButton3; // 0x430(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x438(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x440(0x08)

	void SpawnEnemies();
	void BndEvt__RestrictedResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(APlayerCharacter* User);
	void ReceiveBeginPlay();
	void OnEventFinished(bool eventSuccess);
	void OnEventTriggered();
	void ExecuteUbergraph_BP_AmberEvent(int32_t EntryPoint);
};

