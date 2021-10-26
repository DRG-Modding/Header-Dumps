// BlueprintGeneratedClass PRJ_PowerupSphere.PRJ_PowerupSphere_C
// Size: 0x3b9 (Inherited: 0x2f0)
struct APRJ_PowerupSphere_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) URotatingMovementComponent* RotatingMovement; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_PickAxePowerUp_Glow; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* PowerUpTrigger; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) FRuntimeFloatCurve FadeCurve; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle LifetimeHandle; 
	UPROPERTY(BlueprintReadWrite) bool Moving; 

	UFUNCTION(BlueprintCallable) void OnRep_Moving();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__PowerUpTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(FHitResult ImpactResult, FVector ImpactVelocity);
	UFUNCTION(BlueprintCallable) void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(FHitResult ImpactResult);
	UFUNCTION(BlueprintCallable) void EndLife();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_PowerupSphere(int32_t EntryPoint);
};

