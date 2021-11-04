// BlueprintGeneratedClass PRJ_Facility_Laser_Base.PRJ_Facility_Laser_Base_C
// Size: 0x378 (Inherited: 0x338)
struct APRJ_Facility_Laser_Base_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	UNiagaraComponent* Niagara; // 0x340(0x08)
	UParticleSystemComponent* Trail; // 0x348(0x08)
	UDamageComponent* Damage; // 0x350(0x08)
	UStaticMeshComponent* Body; // 0x358(0x08)
	USoundCue* FireSound; // 0x360(0x08)
	USoundCue* ImpactSound; // 0x368(0x08)
	UParticleSystem* ImpactParticles; // 0x370(0x08)

	void ReceiveBeginPlay();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ExecuteUbergraph_PRJ_Facility_Laser_Base(int32_t EntryPoint);
};

