// BlueprintGeneratedClass BP_WallMaggot.BP_WallMaggot_C
// Size: 0x2b0 (Inherited: 0x220)
struct ABP_WallMaggot_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* WallMaggotExtrude_Cue; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* WallMaggotRetract_Cue; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* WallMaggot_idle_Cue; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SK_HollowBoughMaggot_01; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Carver_Rock14; 
	UPROPERTY(BlueprintReadWrite) ULevelGenerationCarverComponent* LevelGenerationCarver; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) bool Hide; 
	UPROPERTY(BlueprintReadWrite) TArray<FSingleAnimationPlayData> Animations; 
	UPROPERTY(BlueprintReadWrite) USoundCue* deathSound; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* deathParticles; 

	UFUNCTION(BlueprintCallable) void OnRep_Hide();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void TriggerHide(APlayerCharacter* Player, bool enteredTrigger);
	UFUNCTION(BlueprintCallable) void Retract();
	UFUNCTION(BlueprintCallable) void Extend();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_WallMaggot(int32_t EntryPoint);
};

