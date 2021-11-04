// BlueprintGeneratedClass BP_CabinOwnerSign.BP_CabinOwnerSign_C
// Size: 0x250 (Inherited: 0x220)
struct ABP_CabinOwnerSign_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UPointLightComponent* PointLight; // 0x228(0x08)
	UStaticMeshComponent* StaticMesh2; // 0x230(0x08)
	UWidgetComponent* NameWidget; // 0x238(0x08)
	UStaticMeshComponent* Lamp; // 0x240(0x08)
	USceneComponent* DefaultSceneRoot; // 0x248(0x08)

	void SetPlayerName(FText Value);
	void UserConstructionScript();
	void SetCabinOwner(AFSDPlayerState* PlayerState);
	void ChangeName(FString NewName);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CabinOwnerSign(int32_t EntryPoint);
};

