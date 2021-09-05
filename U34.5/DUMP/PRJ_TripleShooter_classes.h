// BlueprintGeneratedClass PRJ_TripleShooter.PRJ_TripleShooter_C
// Size: 0x320 (Inherited: 0x2f0)
struct APRJ_TripleShooter_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UStaticMeshComponent* SK_ShootingPlant_Projectile; // 0x2f8(0x08)
	UDamageComponent* Damage; // 0x300(0x08)
	UParticleSystemComponent* P_CactusSpikeTrail1; // 0x308(0x08)
	UStaticMeshComponent* SM_CactusSpikeProjectile; // 0x310(0x08)
	UParticleSystem* ImpactParticle; // 0x318(0x08)

	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PRJ_TripleShooter(int32_t EntryPoint);
};

