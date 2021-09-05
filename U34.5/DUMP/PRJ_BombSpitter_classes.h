// BlueprintGeneratedClass PRJ_BombSpitter.PRJ_BombSpitter_C
// Size: 0x320 (Inherited: 0x2f0)
struct APRJ_BombSpitter_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UDamageComponent* Damage; // 0x2f8(0x08)
	USphereComponent* Sphere; // 0x300(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x308(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x310(0x08)
	UStaticMeshComponent* Projectile; // 0x318(0x08)

	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	void GoBoom();
	void ExecuteUbergraph_PRJ_BombSpitter(int32_t EntryPoint);
};

