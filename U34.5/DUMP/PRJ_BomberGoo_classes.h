// BlueprintGeneratedClass PRJ_BomberGoo.PRJ_BomberGoo_C
// Size: 0x330 (Inherited: 0x2f0)
struct APRJ_BomberGoo_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UDamageComponent* Damage; // 0x2f8(0x08)
	UExplosionComponent* Explosion; // 0x300(0x08)
	UFirstPersonStaticMeshComponent* ProjectileMesh; // 0x308(0x08)
	USoundCue* ImpactSound; // 0x310(0x08)
	UParticleSystem* ImpactParticles; // 0x318(0x08)
	FMulticastInlineDelegate NewEventDispatcher_1; // 0x320(0x10)

	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ExecuteUbergraph_PRJ_BomberGoo(int32_t EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
};

