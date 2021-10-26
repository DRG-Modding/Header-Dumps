// BlueprintGeneratedClass BP_AnimatedFoliage_Base.BP_AnimatedFoliage_Base_C
// Size: 0x27c (Inherited: 0x220)
struct ABP_AnimatedFoliage_Base_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* CapsuleCollision; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SK_AnimatedMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) USoundCue* deathSound; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* deathParticles; 
	UPROPERTY(BlueprintReadWrite) UNiagaraSystem* NiagaraDeathParticles; 
	UPROPERTY(BlueprintReadWrite) float PlayAnimationDistance; 

	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ProximityChanged(APlayerCharacter* Player, bool enteredTrigger);
	UFUNCTION(BlueprintCallable) void OnTerrainPointRemoved();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_AnimatedFoliage_Base(int32_t EntryPoint);
};

