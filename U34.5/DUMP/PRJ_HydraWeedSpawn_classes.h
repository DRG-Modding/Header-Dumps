// BlueprintGeneratedClass PRJ_HydraWeedSpawn.PRJ_HydraWeedSpawn_C
// Size: 0x328 (Inherited: 0x300)
struct APRJ_HydraWeedSpawn_C : AHydraWeedSpawnProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	UAudioComponent* Audio; // 0x308(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x310(0x08)
	UParticleSystem* SeedImpactParticles; // 0x318(0x08)
	USoundBase* SeedImpactSound; // 0x320(0x08)

	bool NewFunction_1();
	void ReceiveBeginPlay();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ExecuteUbergraph_PRJ_HydraWeedSpawn(int32_t EntryPoint);
};

