// BlueprintGeneratedClass PRJ_Crye_SnowBall.PRJ_Crye_SnowBall_C
// Size: 0x360 (Inherited: 0x338)
struct APRJ_Crye_SnowBall_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	UDamageComponent* Damage; // 0x340(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x348(0x08)
	UStaticMeshComponent* StaticMesh; // 0x350(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x358(0x08)

	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ExecuteUbergraph_PRJ_Crye_SnowBall(int32_t EntryPoint);
};

