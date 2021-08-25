// BlueprintGeneratedClass BP_BarrelSpawner.BP_BarrelSpawner_C
// Size: 0x288 (Inherited: 0x220)
struct ABP_BarrelSpawner_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Mesh_Screen; // 0x228(0x08)
	struct UWidgetComponent* Widget Barrel Counter; // 0x230(0x08)
	struct UDecalComponent* Decal; // 0x238(0x08)
	struct UBoxComponent* Box; // 0x240(0x08)
	struct UBillboardComponent* Billboard; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct ABP_Phys_Barrel01_C* LastBarrel; // 0x258(0x08)
	int32_t BarrelsSpawned; // 0x260(0x04)
	int32_t SpawnCicle; // 0x264(0x04)
	float SpawnFrequency; // 0x268(0x04)
	int32_t BarrelCount; // 0x26c(0x04)
	bool ReadyToReset; // 0x270(0x01)
	char UnknownData_271[0x7]; // 0x271(0x07)
	struct FMulticastInlineDelegate OnSpawnBarrelKicked; // 0x278(0x10)

	void OnRep_BarrelCount(); // Function BP_BarrelSpawner.BP_BarrelSpawner_C.OnRep_BarrelCount
	void ReceiveBeginPlay(); // Function BP_BarrelSpawner.BP_BarrelSpawner_C.ReceiveBeginPlay
	void SpawnBarrel(); // Function BP_BarrelSpawner.BP_BarrelSpawner_C.SpawnBarrel
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_BarrelSpawner.BP_BarrelSpawner_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	void Reset(); // Function BP_BarrelSpawner.BP_BarrelSpawner_C.Reset
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_BarrelSpawner.BP_BarrelSpawner_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void OnBarrelKicked(struct APlayerCharacter* User); // Function BP_BarrelSpawner.BP_BarrelSpawner_C.OnBarrelKicked
	void ExecuteUbergraph_BP_BarrelSpawner(int32_t EntryPoint); // Function BP_BarrelSpawner.BP_BarrelSpawner_C.ExecuteUbergraph_BP_BarrelSpawner
	void OnSpawnBarrelKicked__DelegateSignature(struct APlayerCharacter* Kicked by); // Function BP_BarrelSpawner.BP_BarrelSpawner_C.OnSpawnBarrelKicked__DelegateSignature
};

