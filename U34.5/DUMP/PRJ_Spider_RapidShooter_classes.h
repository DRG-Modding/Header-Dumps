// BlueprintGeneratedClass PRJ_Spider_RapidShooter.PRJ_Spider_RapidShooter_C
// Size: 0x318 (Inherited: 0x2f0)
struct APRJ_Spider_RapidShooter_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UDamageComponent* Damage; // 0x2f8(0x08)
	UStaticMeshComponent* SK_ShootingPlant_Projectile; // 0x300(0x08)
	UParticleSystemComponent* ParticleComponent; // 0x308(0x08)
	UAudioComponent* Audio; // 0x310(0x08)

	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ExecuteUbergraph_PRJ_Spider_RapidShooter(int32_t EntryPoint);
};

