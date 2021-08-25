// BlueprintGeneratedClass PRJ_Spider_Shooter.PRJ_Spider_Shooter_C
// Size: 0x31c (Inherited: 0x2f0)
struct APRJ_Spider_Shooter_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UDamageComponent* Damage; // 0x2f8(0x08)
	struct UStaticMeshComponent* SK_ShootingPlant_Projectile; // 0x300(0x08)
	struct UParticleSystemComponent* ParticleComponent; // 0x308(0x08)
	struct UAudioComponent* Audio; // 0x310(0x08)
	float Damageold; // 0x318(0x04)

	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_Spider_Shooter.PRJ_Spider_Shooter_C.OnImpacted
	void ExecuteUbergraph_PRJ_Spider_Shooter(int32_t EntryPoint); // Function PRJ_Spider_Shooter.PRJ_Spider_Shooter_C.ExecuteUbergraph_PRJ_Spider_Shooter
};

