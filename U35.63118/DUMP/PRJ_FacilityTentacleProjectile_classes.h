// BlueprintGeneratedClass PRJ_FacilityTentacleProjectile.PRJ_FacilityTentacleProjectile_C
// Size: 0x368 (Inherited: 0x338)
struct APRJ_FacilityTentacleProjectile_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	UNiagaraComponent* Niagara; // 0x340(0x08)
	UDamageComponent* Damage; // 0x348(0x08)
	USoundCue* FireSound; // 0x350(0x08)
	USoundCue* ImpactSound; // 0x358(0x08)
	UParticleSystem* ImpactParticles; // 0x360(0x08)

	void ReceiveBeginPlay();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ExecuteUbergraph_PRJ_FacilityTentacleProjectile(int32_t EntryPoint);
};

