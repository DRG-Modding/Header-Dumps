// BlueprintGeneratedClass PRJ_ExplosiveBombDrop.PRJ_ExplosiveBombDrop_C
// Size: 0x320 (Inherited: 0x2f0)
struct APRJ_ExplosiveBombDrop_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UExplosionComponent* Explosion; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) USoundBase* Impact Sound; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* Impact Particles; 

	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_ExplosiveBombDrop(int32_t EntryPoint);
};

