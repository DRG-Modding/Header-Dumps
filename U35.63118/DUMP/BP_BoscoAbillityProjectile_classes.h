// BlueprintGeneratedClass BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C
// Size: 0x370 (Inherited: 0x338)
struct ABP_BoscoAbillityProjectile_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	UPointLightComponent* Light_Exhaust; // 0x340(0x08)
	UParticleSystemComponent* Particle_Trail; // 0x348(0x08)
	UParticleSystemComponent* Particle_Exhaust; // 0x350(0x08)
	UStaticMeshComponent* MeshRocket; // 0x358(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x360(0x08)
	UDamageComponent* Damage; // 0x368(0x08)

	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BoscoAbillityProjectile(int32_t EntryPoint);
};

