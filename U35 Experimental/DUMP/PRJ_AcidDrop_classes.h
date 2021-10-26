// BlueprintGeneratedClass PRJ_AcidDrop.PRJ_AcidDrop_C
// Size: 0x300 (Inherited: 0x2f0)
struct APRJ_AcidDrop_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* Impact Particles; 

	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_AcidDrop(int32_t EntryPoint);
};

