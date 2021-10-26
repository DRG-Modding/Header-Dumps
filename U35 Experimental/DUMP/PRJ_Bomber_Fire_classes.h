// BlueprintGeneratedClass PRJ_Bomber_Fire.PRJ_Bomber_Fire_C
// Size: 0x374 (Inherited: 0x330)
struct APRJ_Bomber_Fire_C : APRJ_BomberGoo_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* AreaLight; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate NewEventDispatcher_0_1; 
	UPROPERTY(BlueprintReadWrite) bool HasExploded; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* AlarmSound; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* Explosion Particles; 
	UPROPERTY(BlueprintReadWrite) USoundBase* ExplosionSound; 
	UPROPERTY(BlueprintReadWrite) float TimeToExplode; 

	UFUNCTION(BlueprintCallable) void OnRep_HasExploded();
	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(FHitResult ImpactResult, FVector ImpactVelocity);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_Bomber_Fire(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void NewEventDispatcher_0_0__DelegateSignature();
};

