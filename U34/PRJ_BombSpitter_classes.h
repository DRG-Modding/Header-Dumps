// BlueprintGeneratedClass PRJ_BombSpitter.PRJ_BombSpitter_C
// Size: 0x320 (Inherited: 0x2f0)
struct APRJ_BombSpitter_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UDamageComponent* Damage; // 0x2f8(0x08)
	struct USphereComponent* Sphere; // 0x300(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x308(0x08)
	struct UProjectileExplosion* ProjectileExplosion; // 0x310(0x08)
	struct UStaticMeshComponent* Projectile; // 0x318(0x08)

	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_BombSpitter.PRJ_BombSpitter_C.OnImpacted
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function PRJ_BombSpitter.PRJ_BombSpitter_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature
	void GoBoom(); // Function PRJ_BombSpitter.PRJ_BombSpitter_C.GoBoom
	void ExecuteUbergraph_PRJ_BombSpitter(int32_t EntryPoint); // Function PRJ_BombSpitter.PRJ_BombSpitter_C.ExecuteUbergraph_PRJ_BombSpitter
};

