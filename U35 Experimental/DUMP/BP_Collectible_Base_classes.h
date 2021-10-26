// BlueprintGeneratedClass BP_Collectible_Base.BP_Collectible_Base_C
// Size: 0x268 (Inherited: 0x220)
struct ABP_Collectible_Base_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UInstantUsable* InstantUsable; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* UseTrigger; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) USoundBase* PickupSound; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* PickupParticles; 
	UPROPERTY(BlueprintReadWrite) UResourceData* Resource; 
	UPROPERTY(BlueprintReadWrite) bool IsActive; 
	UPROPERTY(BlueprintReadWrite) bool DestroyAfterPickedUp; 
	UPROPERTY(BlueprintReadWrite) float ResourcesToAdd; 

	UFUNCTION(BlueprintCallable) void OnRep_IsActive();
	UFUNCTION(BlueprintCallable) void PickedUp();
	UFUNCTION(BlueprintCallable) void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UserCountChangedDelegate__DelegateSignature(int32_t userCount);
	UFUNCTION(BlueprintCallable) void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Collectible_Base(int32_t EntryPoint);
};

