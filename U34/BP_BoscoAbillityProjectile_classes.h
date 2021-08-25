// BlueprintGeneratedClass BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C
// Size: 0x328 (Inherited: 0x2f0)
struct ABP_BoscoAbillityProjectile_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UPointLightComponent* Light_Exhaust; // 0x2f8(0x08)
	struct UParticleSystemComponent* Particle_Trail; // 0x300(0x08)
	struct UParticleSystemComponent* Particle_Exhaust; // 0x308(0x08)
	struct UStaticMeshComponent* MeshRocket; // 0x310(0x08)
	struct UProjectileExplosion* ProjectileExplosion; // 0x318(0x08)
	struct UDamageComponent* Damage; // 0x320(0x08)

	void OnImpacted(struct FHitResult HitResult); // Function BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C.OnImpacted
	void ReceiveBeginPlay(); // Function BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_BoscoAbillityProjectile(int32_t EntryPoint); // Function BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C.ExecuteUbergraph_BP_BoscoAbillityProjectile
};

