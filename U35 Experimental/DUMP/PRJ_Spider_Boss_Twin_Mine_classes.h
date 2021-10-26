// BlueprintGeneratedClass PRJ_Spider_Boss_Twin_Mine.PRJ_Spider_Boss_Twin_Mine_C
// Size: 0x368 (Inherited: 0x2f0)
struct APRJ_Spider_Boss_Twin_Mine_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_Twins_Mine_Trail; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Twin_B_ProjectileBarrage_Cue; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh_Range_hidden; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) UFirstPersonStaticMeshComponent* ProjectileMesh; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* AreaLight; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate NewEventDispatcher_0_1; 
	UPROPERTY(BlueprintReadWrite) bool HasExploded; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* Explosion Particles; 
	UPROPERTY(BlueprintReadWrite) USoundBase* ExplosionSound; 
	UPROPERTY(BlueprintReadWrite) float TimeToExplode; 
	UPROPERTY(BlueprintReadWrite) USoundBase* ImpactSound; 
	UPROPERTY(BlueprintReadWrite) USoundBase* WarningLoopCue; 

	UFUNCTION(BlueprintCallable) void OnRep_HasExploded();
	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void All_Impact(FVector_NetQuantize Location);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_Spider_Boss_Twin_Mine(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void NewEventDispatcher_0_0__DelegateSignature();
};

