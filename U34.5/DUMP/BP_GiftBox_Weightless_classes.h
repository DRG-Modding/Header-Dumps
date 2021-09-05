// BlueprintGeneratedClass BP_GiftBox_Weightless.BP_GiftBox_Weightless_C
// Size: 0x284 (Inherited: 0x220)
struct ABP_GiftBox_Weightless_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	URotatingMovementComponent* RotatingMovement; // 0x228(0x08)
	UStaticMeshComponent* Mesh; // 0x230(0x08)
	bool CanTriggerSound; // 0x238(0x01)
	FVector KickSoundLocation; // 0x23c(0x0c)
	APlayerCharacter* KickedBy; // 0x248(0x08)
	TArray<UStaticMesh*> MeshesToChooseFrom; // 0x250(0x10)
	TArray<UMaterialInterface*> Mats_Wrapper; // 0x260(0x10)
	TArray<UMaterialInterface*> Mats_Note; // 0x270(0x10)
	int32_t RandomPresentSound; // 0x280(0x04)

	void OnRep_KickSoundLocation();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_GiftBox_Weightless(int32_t EntryPoint);
};

