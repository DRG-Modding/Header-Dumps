// BlueprintGeneratedClass BP_Refinery_Extractor_Blueprint.BP_Refinery_Extractor_Blueprint_C
// Size: 0x238 (Inherited: 0x220)
struct ABP_Refinery_Extractor_Blueprint_C : AActor {
	UPROPERTY(BlueprintReadWrite) USceneComponent* AttachmentPoint; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Scene; 

	UFUNCTION(BlueprintCallable) void SetValid(bool IsValid);
	UFUNCTION(BlueprintCallable) FVector GetAttachementLocation(bool WorldCoordinates);
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
};

