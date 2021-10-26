// BlueprintGeneratedClass PRJ_BomberGoo.PRJ_BomberGoo_C
// Size: 0x330 (Inherited: 0x2f0)
struct APRJ_BomberGoo_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) UExplosionComponent* Explosion; 
	UPROPERTY(BlueprintReadWrite) UFirstPersonStaticMeshComponent* ProjectileMesh; 
	UPROPERTY(BlueprintReadWrite) USoundCue* ImpactSound; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* ImpactParticles; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate NewEventDispatcher_1; 

	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_BomberGoo(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void NewEventDispatcher_0__DelegateSignature();
};

