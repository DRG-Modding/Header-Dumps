// BlueprintGeneratedClass BP_TetherDispenser.BP_TetherDispenser_C
// Size: 0x294 (Inherited: 0x268)
struct ABP_TetherDispenser_C : ABP_ItemDispenserBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	USphereComponent* Sphere; // 0x270(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x278(0x08)
	TArray<ABP_TransmitterNode_C*> Tethers; // 0x280(0x10)
	float CustomConnectionRange; // 0x290(0x04)

	void ReceiveBeginPlay();
	void OnOpenChanged(bool Open);
	void OnPickedUpItem(AActor* Item);
	void ExecuteUbergraph_BP_TetherDispenser(int32_t EntryPoint);
};

