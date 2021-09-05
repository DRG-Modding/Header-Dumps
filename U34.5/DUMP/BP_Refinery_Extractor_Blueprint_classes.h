// BlueprintGeneratedClass BP_Refinery_Extractor_Blueprint.BP_Refinery_Extractor_Blueprint_C
// Size: 0x238 (Inherited: 0x220)
struct ABP_Refinery_Extractor_Blueprint_C : AActor {
	USceneComponent* AttachmentPoint; // 0x220(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x228(0x08)
	USceneComponent* Scene; // 0x230(0x08)

	void SetValid(bool IsValid);
	FVector GetAttachementLocation(bool WorldCoordinates);
	void UserConstructionScript();
};

