// BlueprintGeneratedClass PRJ_ExplosiveBombDrop.PRJ_ExplosiveBombDrop_C
// Size: 0x320 (Inherited: 0x2f0)
struct APRJ_ExplosiveBombDrop_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UExplosionComponent* Explosion; // 0x2f8(0x08)
	struct UDamageComponent* Damage; // 0x300(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x308(0x08)
	struct USoundBase* Impact Sound; // 0x310(0x08)
	struct UParticleSystem* Impact Particles; // 0x318(0x08)

	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_ExplosiveBombDrop.PRJ_ExplosiveBombDrop_C.OnImpacted
	void ExecuteUbergraph_PRJ_ExplosiveBombDrop(int32_t EntryPoint); // Function PRJ_ExplosiveBombDrop.PRJ_ExplosiveBombDrop_C.ExecuteUbergraph_PRJ_ExplosiveBombDrop
};

