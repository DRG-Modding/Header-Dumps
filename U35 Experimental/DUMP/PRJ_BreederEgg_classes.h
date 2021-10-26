// BlueprintGeneratedClass PRJ_BreederEgg.PRJ_BreederEgg_C
// Size: 0x478 (Inherited: 0x2f0)
struct APRJ_BreederEgg_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UEnemyHealthComponent* EnemyHealth; 
	UPROPERTY(BlueprintReadWrite) UGrowthComponent* Growth; 
	UPROPERTY(BlueprintReadWrite) UPhysicalAnimationComponent* PhysicalAnimation; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* Mesh; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UEnemyComponent* enemy; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* BreakingParticles; 
	UPROPERTY(BlueprintReadWrite) int32_t SpawnAmount; 
	UPROPERTY(BlueprintReadWrite) float WarningTime; 
	UPROPERTY(BlueprintReadWrite) float SpawnTime; 
	UPROPERTY(BlueprintReadWrite) USoundCue* BreakingSound; 
	UPROPERTY(BlueprintReadWrite) FName BoneName; 
	UPROPERTY(BlueprintReadWrite) FName Profile Name; 
	UPROPERTY(BlueprintReadWrite) FRuntimeFloatCurve WarningCurve; 
	UPROPERTY(BlueprintReadWrite) FRuntimeFloatCurve GrowthCurve; 
	UPROPERTY(BlueprintReadWrite) TArray<FName> BonesToSimulatPhysics; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ESpawnJellies();
	UFUNCTION(BlueprintCallable) void BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void DestroyEgg();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_BreederEgg(int32_t EntryPoint);
};

