// BlueprintGeneratedClass BP_MultiStageEventStarter.BP_MultiStageEventStarter_C
// Size: 0x29c (Inherited: 0x248)
struct ABP_MultiStageEventStarter_C : AEventStarterButton {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* EjectParticles; 
	UPROPERTY(BlueprintReadWrite) USoundCue* CrumbleSpire; 
	UPROPERTY(BlueprintReadWrite) bool EffectsShown; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* DynamicMaterial; 
	UPROPERTY(BlueprintReadWrite) float OriginalEmissive; 

	UFUNCTION(BlueprintCallable) void ShowUsedEffects();
	UFUNCTION(BlueprintCallable) void OnRep_EffectsShown();
	UFUNCTION(BlueprintCallable) void CheckTerrain(bool ShouldCarve);
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void OnOpenedForUse(bool wasOpened);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_MultiStageEventStarter(int32_t EntryPoint);
};

