// BlueprintGeneratedClass PRJ_WoodlouseAttack.PRJ_WoodlouseAttack_C
// Size: 0x340 (Inherited: 0x2f0)
struct APRJ_WoodlouseAttack_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UDamageComponent* Damage; // 0x2f8(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x300(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x308(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x310(0x08)
	struct UStaticMeshComponent* SK_ShootingPlant_Projectile; // 0x318(0x08)
	struct UProjectileExplosion* ProjectileExplosion; // 0x320(0x08)
	struct UParticleSystemComponent* ParticleComponent; // 0x328(0x08)
	struct UAudioComponent* Audio; // 0x330(0x08)
	struct UPointLightComponent* PointLight; // 0x338(0x08)

	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_WoodlouseAttack.PRJ_WoodlouseAttack_C.OnImpacted
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function PRJ_WoodlouseAttack.PRJ_WoodlouseAttack_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature
	void GoBoom(); // Function PRJ_WoodlouseAttack.PRJ_WoodlouseAttack_C.GoBoom
	void ExecuteUbergraph_PRJ_WoodlouseAttack(int32_t EntryPoint); // Function PRJ_WoodlouseAttack.PRJ_WoodlouseAttack_C.ExecuteUbergraph_PRJ_WoodlouseAttack
};

