// BlueprintGeneratedClass BP_GiftBox_Weightless.BP_GiftBox_Weightless_C
// Size: 0x284 (Inherited: 0x220)
struct ABP_GiftBox_Weightless_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x228(0x08)
	struct UStaticMeshComponent* Mesh; // 0x230(0x08)
	bool CanTriggerSound; // 0x238(0x01)
	char UnknownData_239[0x3]; // 0x239(0x03)
	struct FVector KickSoundLocation; // 0x23c(0x0c)
	struct APlayerCharacter* KickedBy; // 0x248(0x08)
	struct TArray<struct UStaticMesh*> MeshesToChooseFrom; // 0x250(0x10)
	struct TArray<struct UMaterialInterface*> Mats_Wrapper; // 0x260(0x10)
	struct TArray<struct UMaterialInterface*> Mats_Note; // 0x270(0x10)
	int32_t RandomPresentSound; // 0x280(0x04)

	void OnRep_KickSoundLocation(); // Function BP_GiftBox_Weightless.BP_GiftBox_Weightless_C.OnRep_KickSoundLocation
	void ReceiveBeginPlay(); // Function BP_GiftBox_Weightless.BP_GiftBox_Weightless_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_GiftBox_Weightless(int32_t EntryPoint); // Function BP_GiftBox_Weightless.BP_GiftBox_Weightless_C.ExecuteUbergraph_BP_GiftBox_Weightless
};

