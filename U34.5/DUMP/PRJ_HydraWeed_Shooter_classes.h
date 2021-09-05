// BlueprintGeneratedClass PRJ_HydraWeed_Shooter.PRJ_HydraWeed_Shooter_C
// Size: 0x340 (Inherited: 0x2f0)
struct APRJ_HydraWeed_Shooter_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UDamageComponent* Damage; // 0x2f8(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x300(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x308(0x08)
	URotatingMovementComponent* RotatingMovement; // 0x310(0x08)
	UStaticMeshComponent* SK_ShootingPlant_Projectile; // 0x318(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x320(0x08)
	UParticleSystemComponent* ParticleComponent; // 0x328(0x08)
	UAudioComponent* Audio; // 0x330(0x08)
	UPointLightComponent* PointLight; // 0x338(0x08)

	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void GoBoom();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ExecuteUbergraph_PRJ_HydraWeed_Shooter(int32_t EntryPoint);
};

