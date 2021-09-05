// BlueprintGeneratedClass PRJ_Spider_Spitter.PRJ_Spider_Spitter_C
// Size: 0x310 (Inherited: 0x2f0)
struct APRJ_Spider_Spitter_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UDamageComponent* Damage; // 0x2f8(0x08)
	UParticleSystemComponent* ParticleComponent; // 0x300(0x08)
	UAudioComponent* Audio; // 0x308(0x08)

	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ExecuteUbergraph_PRJ_Spider_Spitter(int32_t EntryPoint);
};

