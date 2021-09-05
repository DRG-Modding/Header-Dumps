// BlueprintGeneratedClass ENE_Spider_Exploding.ENE_Spider_Exploding_C
// Size: 0x4ea (Inherited: 0x4b4)
struct AENE_Spider_Exploding_C : AENE_SpiderBase_Large_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	UDamageComponent* Damage; // 0x4c0(0x08)
	USphereComponent* Sphere; // 0x4c8(0x08)
	UPointLightComponent* Light_BackBody; // 0x4d0(0x08)
	bool Exploded; // 0x4d8(0x01)
	bool IsFleeing_1; // 0x4d9(0x01)
	UParticleSystem* ExplosionParticles; // 0x4e0(0x08)
	bool ExplodeOnDeath; // 0x4e8(0x01)
	bool NearbyExplodersFlee; // 0x4e9(0x01)

	bool GetIsTargetable();
	bool ShouldExplode();
	float GetDistanceToLocalPlayer();
	void DamageAndCarve();
	void PlayRumbeAndShake();
	void MakeNearbyExplodersFlee();
	void OnRep_Exploded();
	void Explode();
	void OnExploded();
	void OnMessageAI(FName TriggerName);
	void Play Burn Death();
	void Play Body Death Effects();
	void SetRagdollImpulse(UDamageClass* DamageClass, UFSDPhysicalMaterial* PhysMat);
	void Spawn Headshot Gibs(enum class Spider_DeathType DeathType);
	void OnFrozen(AActor* Source);
	void OnUnFrozen();
	void Play Frozen Death();
	void DisableExplosion();
	void StopMontagesOnDeath();
	void ExecuteUbergraph_ENE_Spider_Exploding(int32_t EntryPoint);
};

