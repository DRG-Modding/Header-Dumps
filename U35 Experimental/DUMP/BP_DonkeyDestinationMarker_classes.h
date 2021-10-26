// BlueprintGeneratedClass BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C
// Size: 0x250 (Inherited: 0x220)
struct ABP_DonkeyDestinationMarker_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Donkey_DestinationMarker; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Light02; 
	UPROPERTY(BlueprintReadWrite) UDecalComponent* Decal; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Cube; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void ActivateAtPosition(FVector Loc);
	UFUNCTION(BlueprintCallable) void HideMarker();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_DonkeyDestinationMarker(int32_t EntryPoint);
};

