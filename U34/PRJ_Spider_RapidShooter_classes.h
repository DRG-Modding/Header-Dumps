// BlueprintGeneratedClass PRJ_Spider_RapidShooter.PRJ_Spider_RapidShooter_C
// Size: 0x318 (Inherited: 0x2f0)
struct APRJ_Spider_RapidShooter_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UDamageComponent* Damage; // 0x2f8(0x08)
	struct UStaticMeshComponent* SK_ShootingPlant_Projectile; // 0x300(0x08)
	struct UParticleSystemComponent* ParticleComponent; // 0x308(0x08)
	struct UAudioComponent* Audio; // 0x310(0x08)

	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_Spider_RapidShooter.PRJ_Spider_RapidShooter_C.OnImpacted
	void ExecuteUbergraph_PRJ_Spider_RapidShooter(int32_t EntryPoint); // Function PRJ_Spider_RapidShooter.PRJ_Spider_RapidShooter_C.ExecuteUbergraph_PRJ_Spider_RapidShooter
};

