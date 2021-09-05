// BlueprintGeneratedClass PRJ_ExplosiveBombDrop.PRJ_ExplosiveBombDrop_C
// Size: 0x320 (Inherited: 0x2f0)
struct APRJ_ExplosiveBombDrop_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UExplosionComponent* Explosion; // 0x2f8(0x08)
	UDamageComponent* Damage; // 0x300(0x08)
	UStaticMeshComponent* StaticMesh; // 0x308(0x08)
	USoundBase* Impact Sound; // 0x310(0x08)
	UParticleSystem* Impact Particles; // 0x318(0x08)

	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ExecuteUbergraph_PRJ_ExplosiveBombDrop(int32_t EntryPoint);
};

