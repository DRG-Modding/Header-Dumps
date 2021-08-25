// BlueprintGeneratedClass PRJ_FlyingSmartRock.PRJ_FlyingSmartRock_C
// Size: 0x350 (Inherited: 0x2f0)
struct APRJ_FlyingSmartRock_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UPointLightComponent* PointLight; // 0x2f8(0x08)
	struct USpikeSkeletalMesh_C* SkeletalMesh; // 0x300(0x08)
	struct UStaticMeshComponent* Core; // 0x308(0x08)
	struct UDamageComponent* Damage; // 0x310(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x318(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x320(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x328(0x08)
	struct UProjectileExplosion* ProjectileExplosion; // 0x330(0x08)
	struct UParticleSystemComponent* ParticleComponent; // 0x338(0x08)
	struct UAudioComponent* Audio; // 0x340(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial_Core; // 0x348(0x08)

	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_FlyingSmartRock.PRJ_FlyingSmartRock_C.OnImpacted
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function PRJ_FlyingSmartRock.PRJ_FlyingSmartRock_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature
	void GoBoom(); // Function PRJ_FlyingSmartRock.PRJ_FlyingSmartRock_C.GoBoom
	void ExecuteUbergraph_PRJ_FlyingSmartRock(int32_t EntryPoint); // Function PRJ_FlyingSmartRock.PRJ_FlyingSmartRock_C.ExecuteUbergraph_PRJ_FlyingSmartRock
};

