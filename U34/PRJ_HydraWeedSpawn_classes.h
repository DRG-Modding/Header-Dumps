// BlueprintGeneratedClass PRJ_HydraWeedSpawn.PRJ_HydraWeedSpawn_C
// Size: 0x328 (Inherited: 0x300)
struct APRJ_HydraWeedSpawn_C : AHydraWeedSpawnProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UAudioComponent* Audio; // 0x308(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x310(0x08)
	struct UParticleSystem* SeedImpactParticles; // 0x318(0x08)
	struct USoundBase* SeedImpactSound; // 0x320(0x08)

	bool NewFunction_1(); // Function PRJ_HydraWeedSpawn.PRJ_HydraWeedSpawn_C.NewFunction_1
	void ReceiveBeginPlay(); // Function PRJ_HydraWeedSpawn.PRJ_HydraWeedSpawn_C.ReceiveBeginPlay
	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_HydraWeedSpawn.PRJ_HydraWeedSpawn_C.OnImpacted
	void ExecuteUbergraph_PRJ_HydraWeedSpawn(int32_t EntryPoint); // Function PRJ_HydraWeedSpawn.PRJ_HydraWeedSpawn_C.ExecuteUbergraph_PRJ_HydraWeedSpawn
};

