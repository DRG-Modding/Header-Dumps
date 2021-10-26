// BlueprintGeneratedClass PRJ_InfectedMuleGrenade.PRJ_InfectedMuleGrenade_C
// Size: 0x340 (Inherited: 0x2f0)
struct APRJ_InfectedMuleGrenade_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh_Range; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* InfectedMuleGrenadeAlarm; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) UExplosionComponent* Explosion; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) bool HasExploaded; 
	UPROPERTY(BlueprintReadWrite) float TimeToExplode; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* ExplosionParticles; 
	UPROPERTY(BlueprintReadWrite) USoundBase* ExplosionSound; 

	UFUNCTION(BlueprintCallable) void OnRep_HasExploaded();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void Delayed Sine();
	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(FHitResult ImpactResult, FVector ImpactVelocity);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_InfectedMuleGrenade(int32_t EntryPoint);
};

