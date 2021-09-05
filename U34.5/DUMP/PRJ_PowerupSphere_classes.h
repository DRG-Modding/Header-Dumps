// BlueprintGeneratedClass PRJ_PowerupSphere.PRJ_PowerupSphere_C
// Size: 0x3b9 (Inherited: 0x2f0)
struct APRJ_PowerupSphere_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UOutlineComponent* outline; // 0x2f8(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x300(0x08)
	URotatingMovementComponent* RotatingMovement; // 0x308(0x08)
	UParticleSystemComponent* P_PickAxePowerUp_Glow; // 0x310(0x08)
	USphereComponent* PowerUpTrigger; // 0x318(0x08)
	UStaticMeshComponent* StaticMesh; // 0x320(0x08)
	FRuntimeFloatCurve FadeCurve; // 0x328(0x88)
	FTimerHandle LifetimeHandle; // 0x3b0(0x08)
	bool Moving; // 0x3b8(0x01)

	void OnRep_Moving();
	void ReceiveBeginPlay();
	void BndEvt__PowerUpTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(FHitResult ImpactResult, FVector ImpactVelocity);
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(FHitResult ImpactResult);
	void EndLife();
	void ExecuteUbergraph_PRJ_PowerupSphere(int32_t EntryPoint);
};

