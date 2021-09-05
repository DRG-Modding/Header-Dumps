// BlueprintGeneratedClass BP_BarrelSpawner.BP_BarrelSpawner_C
// Size: 0x288 (Inherited: 0x220)
struct ABP_BarrelSpawner_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* Mesh_Screen; // 0x228(0x08)
	UWidgetComponent* Widget Barrel Counter; // 0x230(0x08)
	UDecalComponent* Decal; // 0x238(0x08)
	UBoxComponent* Box; // 0x240(0x08)
	UBillboardComponent* Billboard; // 0x248(0x08)
	USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	ABP_Phys_Barrel01_C* LastBarrel; // 0x258(0x08)
	int32_t BarrelsSpawned; // 0x260(0x04)
	int32_t SpawnCicle; // 0x264(0x04)
	float SpawnFrequency; // 0x268(0x04)
	int32_t BarrelCount; // 0x26c(0x04)
	bool ReadyToReset; // 0x270(0x01)
	FMulticastInlineDelegate OnSpawnBarrelKicked; // 0x278(0x10)

	void OnRep_BarrelCount();
	void ReceiveBeginPlay();
	void SpawnBarrel();
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void Reset();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void OnBarrelKicked(APlayerCharacter* User);
	void ExecuteUbergraph_BP_BarrelSpawner(int32_t EntryPoint);
	void OnSpawnBarrelKicked__DelegateSignature(APlayerCharacter* Kicked by);
};

