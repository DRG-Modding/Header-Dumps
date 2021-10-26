// BlueprintGeneratedClass WPN_Extractor.WPN_Extractor_C
// Size: 0x560 (Inherited: 0x528)
struct AWPN_Extractor_C : AExtractorItem {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* TerrainScannerMesh; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* UsableCapsule; 
	UPROPERTY(BlueprintReadWrite) UInstantUsable* PickupUsable; 
	UPROPERTY(BlueprintReadWrite) bool Attaching; 
	UPROPERTY(BlueprintReadWrite) FVector ThrowVelocity; 

	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__PickupUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void BndEvt__PickupUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool canUse);
	UFUNCTION(BlueprintCallable) void OnThrown(FVector Direction);
	UFUNCTION(BlueprintCallable) void RecieveEquipped();
	UFUNCTION(BlueprintCallable) void RecieveUnequipped();
	UFUNCTION(BlueprintCallable) void Drop(FVector Impulse, FVector Location);
	UFUNCTION(BlueprintCallable) void Cheat_Fill();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_WPN_Extractor(int32_t EntryPoint);
};

