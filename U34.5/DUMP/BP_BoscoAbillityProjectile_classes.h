// BlueprintGeneratedClass BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C
// Size: 0x328 (Inherited: 0x2f0)
struct ABP_BoscoAbillityProjectile_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UPointLightComponent* Light_Exhaust; // 0x2f8(0x08)
	UParticleSystemComponent* Particle_Trail; // 0x300(0x08)
	UParticleSystemComponent* Particle_Exhaust; // 0x308(0x08)
	UStaticMeshComponent* MeshRocket; // 0x310(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x318(0x08)
	UDamageComponent* Damage; // 0x320(0x08)

	void OnImpacted(FHitResult HitResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BoscoAbillityProjectile(int32_t EntryPoint);
};

