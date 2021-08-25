// BlueprintGeneratedClass PRJ_BomberGoo.PRJ_BomberGoo_C
// Size: 0x330 (Inherited: 0x2f0)
struct APRJ_BomberGoo_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UDamageComponent* Damage; // 0x2f8(0x08)
	struct UExplosionComponent* Explosion; // 0x300(0x08)
	struct UFirstPersonStaticMeshComponent* ProjectileMesh; // 0x308(0x08)
	struct USoundCue* ImpactSound; // 0x310(0x08)
	struct UParticleSystem* ImpactParticles; // 0x318(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x320(0x10)

	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_BomberGoo.PRJ_BomberGoo_C.OnImpacted
	void ExecuteUbergraph_PRJ_BomberGoo(int32_t EntryPoint); // Function PRJ_BomberGoo.PRJ_BomberGoo_C.ExecuteUbergraph_PRJ_BomberGoo
	void NewEventDispatcher_0__DelegateSignature(); // Function PRJ_BomberGoo.PRJ_BomberGoo_C.NewEventDispatcher_0__DelegateSignature
};

