// BlueprintGeneratedClass PRJ_TripleShooter.PRJ_TripleShooter_C
// Size: 0x320 (Inherited: 0x2f0)
struct APRJ_TripleShooter_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UStaticMeshComponent* SK_ShootingPlant_Projectile; // 0x2f8(0x08)
	struct UDamageComponent* Damage; // 0x300(0x08)
	struct UParticleSystemComponent* P_CactusSpikeTrail1; // 0x308(0x08)
	struct UStaticMeshComponent* SM_CactusSpikeProjectile; // 0x310(0x08)
	struct UParticleSystem* ImpactParticle; // 0x318(0x08)

	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_TripleShooter.PRJ_TripleShooter_C.OnImpacted
	void ReceiveBeginPlay(); // Function PRJ_TripleShooter.PRJ_TripleShooter_C.ReceiveBeginPlay
	void ExecuteUbergraph_PRJ_TripleShooter(int32_t EntryPoint); // Function PRJ_TripleShooter.PRJ_TripleShooter_C.ExecuteUbergraph_PRJ_TripleShooter
};

