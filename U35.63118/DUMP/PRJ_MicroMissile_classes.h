// BlueprintGeneratedClass PRJ_MicroMissile.PRJ_MicroMissile_C
// Size: 0x3d4 (Inherited: 0x338)
struct APRJ_MicroMissile_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	UParticleSystemComponent* Particle_Exhaust; // 0x340(0x08)
	UParticleSystemComponent* Particle_Exhaust_HighVelocity; // 0x348(0x08)
	UPointLightComponent* Light_DistanceIndicator; // 0x350(0x08)
	UPointLightComponent* Light_Exhaust; // 0x358(0x08)
	UParticleSystemComponent* Particle_Trail; // 0x360(0x08)
	UPointLightComponent* UnstableFuelMixIndicator; // 0x368(0x08)
	UAudioComponent* MicroMissileProjectileLoop_Cue; // 0x370(0x08)
	UStaticMeshComponent* MeshRocket; // 0x378(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x380(0x08)
	UDamageComponent* Damage; // 0x388(0x08)
	float Timeline_0_Brightness_243709694A5DDD44F4F9208FBF929C26; // 0x390(0x04)
	float Timeline_0_Height_243709694A5DDD44F4F9208FBF929C26; // 0x394(0x04)
	enum class ETimelineDirection Timeline_0__Direction_243709694A5DDD44F4F9208FBF929C26; // 0x398(0x01)
	UTimelineComponent* Timeline_1; // 0x3a0(0x08)
	float TimeToTarget; // 0x3a8(0x04)
	bool HasNitroglycerinCompound; // 0x3ac(0x01)
	float MaxLifetime; // 0x3b0(0x04)
	float CurrentLifetime; // 0x3b4(0x04)
	bool HasBuckOC; // 0x3b8(0x01)
	bool NoHoming; // 0x3b9(0x01)
	float DeltaSeconds; // 0x3bc(0x04)
	bool BlinkStarted; // 0x3c0(0x01)
	float BlinkInterval; // 0x3c4(0x04)
	bool IsAlive; // 0x3c8(0x01)
	float HomingDelayAmount; // 0x3cc(0x04)
	float NitroglycerinDamageIncrease; // 0x3d0(0x04)

	void StopMissile();
	void IncreaseDamage();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void StartLightIntensityIncrease();
	void UnstableFuelMixUpdate();
	void StartBlink();
	void TurnUpLightIndicator();
	void CountSeconds();
	void OnUpgradeElementAdded(UProjectileUpgradeElement* element);
	void Explode(FHitResult HitResult);
	void Impact(FHitResult HitResult);
	void OnInitialized();
	void ExecuteUbergraph_PRJ_MicroMissile(int32_t EntryPoint);
};

