// BlueprintGeneratedClass BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C
// Size: 0x250 (Inherited: 0x220)
struct ABP_DonkeyDestinationMarker_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* SM_Donkey_DestinationMarker; // 0x228(0x08)
	struct UStaticMeshComponent* SM_Light02; // 0x230(0x08)
	struct UDecalComponent* Decal; // 0x238(0x08)
	struct UStaticMeshComponent* Cube; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)

	void ActivateAtPosition(struct FVector Loc); // Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.ActivateAtPosition
	void HideMarker(); // Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.HideMarker
	void ExecuteUbergraph_BP_DonkeyDestinationMarker(int32_t EntryPoint); // Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.ExecuteUbergraph_BP_DonkeyDestinationMarker
};

