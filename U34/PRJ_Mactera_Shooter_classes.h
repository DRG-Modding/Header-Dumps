// BlueprintGeneratedClass PRJ_Mactera_Shooter.PRJ_Mactera_Shooter_C
// Size: 0x318 (Inherited: 0x2f0)
struct APRJ_Mactera_Shooter_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UDamageComponent* Damage; // 0x2f8(0x08)
	struct UParticleSystemComponent* P_CactusSpikeTrail1; // 0x300(0x08)
	struct UStaticMeshComponent* SM_CactusSpikeProjectile; // 0x308(0x08)
	struct UParticleSystem* ImpactParticle; // 0x310(0x08)

	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_Mactera_Shooter.PRJ_Mactera_Shooter_C.OnImpacted
	void ReceiveBeginPlay(); // Function PRJ_Mactera_Shooter.PRJ_Mactera_Shooter_C.ReceiveBeginPlay
	void ExecuteUbergraph_PRJ_Mactera_Shooter(int32_t EntryPoint); // Function PRJ_Mactera_Shooter.PRJ_Mactera_Shooter_C.ExecuteUbergraph_PRJ_Mactera_Shooter
};

