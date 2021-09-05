// BlueprintGeneratedClass PRJ_Spider_Tank_Boss_Eggshot.PRJ_Spider_Tank_Boss_Eggshot_C
// Size: 0x34c (Inherited: 0x2f0)
struct APRJ_Spider_Tank_Boss_Eggshot_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2f8(0x08)
	URotatingMovementComponent* RotatingMovement; // 0x300(0x08)
	UStaticMeshComponent* Mesh_Egg; // 0x308(0x08)
	UDamageComponent* Damage; // 0x310(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x318(0x08)
	UParticleSystemComponent* Particle_Smoke; // 0x320(0x08)
	UAudioComponent* Audio; // 0x328(0x08)
	UPointLightComponent* PointLight; // 0x330(0x08)
	float LightIntensity; // 0x338(0x04)
	UEnemyDescriptor* EnemyToSpawn; // 0x340(0x08)
	int32_t SpawnAmount; // 0x348(0x04)

	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ExecuteUbergraph_PRJ_Spider_Tank_Boss_Eggshot(int32_t EntryPoint);
};

