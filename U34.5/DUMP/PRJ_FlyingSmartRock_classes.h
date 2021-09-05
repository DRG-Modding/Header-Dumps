// BlueprintGeneratedClass PRJ_FlyingSmartRock.PRJ_FlyingSmartRock_C
// Size: 0x350 (Inherited: 0x2f0)
struct APRJ_FlyingSmartRock_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UPointLightComponent* PointLight; // 0x2f8(0x08)
	USpikeSkeletalMesh_C* SkeletalMesh; // 0x300(0x08)
	UStaticMeshComponent* Core; // 0x308(0x08)
	UDamageComponent* Damage; // 0x310(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x318(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x320(0x08)
	URotatingMovementComponent* RotatingMovement; // 0x328(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x330(0x08)
	UParticleSystemComponent* ParticleComponent; // 0x338(0x08)
	UAudioComponent* Audio; // 0x340(0x08)
	UMaterialInstanceDynamic* DynamicMaterial_Core; // 0x348(0x08)

	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	void GoBoom();
	void ExecuteUbergraph_PRJ_FlyingSmartRock(int32_t EntryPoint);
};

