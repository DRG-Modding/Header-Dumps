// BlueprintGeneratedClass BP_CabinOwnerSign.BP_CabinOwnerSign_C
// Size: 0x250 (Inherited: 0x220)
struct ABP_CabinOwnerSign_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UPointLightComponent* PointLight; // 0x228(0x08)
	struct UStaticMeshComponent* StaticMesh2; // 0x230(0x08)
	struct UWidgetComponent* NameWidget; // 0x238(0x08)
	struct UStaticMeshComponent* Lamp; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)

	void SetPlayerName(struct FText Value); // Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.SetPlayerName
	void UserConstructionScript(); // Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.UserConstructionScript
	void SetCabinOwner(struct AFSDPlayerState* PlayerState); // Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.SetCabinOwner
	void ChangeName(struct FString NewName); // Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ChangeName
	void ReceiveBeginPlay(); // Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_CabinOwnerSign(int32_t EntryPoint); // Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ExecuteUbergraph_BP_CabinOwnerSign
};

