// BlueprintGeneratedClass PRJ_PowerupSphere.PRJ_PowerupSphere_C
// Size: 0x3b9 (Inherited: 0x2f0)
struct APRJ_PowerupSphere_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UOutlineComponent* outline; // 0x2f8(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x300(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x308(0x08)
	struct UParticleSystemComponent* P_PickAxePowerUp_Glow; // 0x310(0x08)
	struct USphereComponent* PowerUpTrigger; // 0x318(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x320(0x08)
	struct FRuntimeFloatCurve FadeCurve; // 0x328(0x88)
	struct FTimerHandle LifetimeHandle; // 0x3b0(0x08)
	bool Moving; // 0x3b8(0x01)

	void OnRep_Moving(); // Function PRJ_PowerupSphere.PRJ_PowerupSphere_C.OnRep_Moving
	void ReceiveBeginPlay(); // Function PRJ_PowerupSphere.PRJ_PowerupSphere_C.ReceiveBeginPlay
	void BndEvt__PowerUpTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function PRJ_PowerupSphere.PRJ_PowerupSphere_C.BndEvt__PowerUpTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_PowerupSphere.PRJ_PowerupSphere_C.OnImpacted
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult ImpactResult, struct FVector ImpactVelocity); // Function PRJ_PowerupSphere.PRJ_PowerupSphere_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(struct FHitResult ImpactResult); // Function PRJ_PowerupSphere.PRJ_PowerupSphere_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
	void EndLife(); // Function PRJ_PowerupSphere.PRJ_PowerupSphere_C.EndLife
	void ExecuteUbergraph_PRJ_PowerupSphere(int32_t EntryPoint); // Function PRJ_PowerupSphere.PRJ_PowerupSphere_C.ExecuteUbergraph_PRJ_PowerupSphere
};

