// BlueprintGeneratedClass BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C
// Size: 0x250 (Inherited: 0x220)
struct ABP_DonkeyDestinationMarker_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* SM_Donkey_DestinationMarker; // 0x228(0x08)
	UStaticMeshComponent* SM_Light02; // 0x230(0x08)
	UDecalComponent* Decal; // 0x238(0x08)
	UStaticMeshComponent* Cube; // 0x240(0x08)
	USceneComponent* DefaultSceneRoot; // 0x248(0x08)

	void ActivateAtPosition(FVector Loc);
	void HideMarker();
	void ExecuteUbergraph_BP_DonkeyDestinationMarker(int32_t EntryPoint);
};

