// BlueprintGeneratedClass PRJ_Crye_SnowBall.PRJ_Crye_SnowBall_C
// Size: 0x318 (Inherited: 0x2f0)
struct APRJ_Crye_SnowBall_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UDamageComponent* Damage; // 0x2f8(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x300(0x08)
	UStaticMeshComponent* StaticMesh; // 0x308(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x310(0x08)

	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ExecuteUbergraph_PRJ_Crye_SnowBall(int32_t EntryPoint);
};

