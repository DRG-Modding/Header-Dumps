// BlueprintGeneratedClass PRJ_Spider_Spitter.PRJ_Spider_Spitter_C
// Size: 0x310 (Inherited: 0x2f0)
struct APRJ_Spider_Spitter_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleComponent; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio; 

	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_Spider_Spitter(int32_t EntryPoint);
};

