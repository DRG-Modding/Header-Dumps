// BlueprintGeneratedClass ENE_SpiderBase_Large.ENE_SpiderBase_Large_C
// Size: 0x4b4 (Inherited: 0x450)
struct AENE_SpiderBase_Large_C : AENE_PF_SpiderBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	UAudioComponent* GlyphidPraetorianIdle_Cue; // 0x458(0x08)
	UStaticMeshComponent* DropShadow; // 0x460(0x08)
	float RagdollImpulseSpeed; // 0x468(0x04)
	UParticleSystem* HeadshotParticle; // 0x470(0x08)
	AActor* FrontLegGib; // 0x478(0x08)
	USoundBase* HeadGibSound; // 0x480(0x08)
	enum class Spider_DeathType DeathType; // 0x488(0x01)
	UParticleSystem* GibDeathParticles; // 0x490(0x08)
	FVector_NetQuantize RagdollImpulse; // 0x498(0x0c)
	UStaticMeshComponent* HeadGoreMesh; // 0x4a8(0x08)
	float DissolveDelay; // 0x4b0(0x04)

	void OnRep_RagdollImpulse();
	void IsWeakPointDeath(UFSDPhysicalMaterial* Material, bool IsWeakPoint);
	void GetEnemySpawnedCount(int32_t SpawnCount);
	bool ShouldExplode();
	void SetAnimatedDeathType(int32_t AnimationIndex);
	void TrySelectDeathAnimation(bool WasWeakpoint, int32_t AnimationIndex, bool HasSelectedAnimation);
	void SetDeathType(enum class Spider_DeathType DeathType);
	void OnRep_DeathType();
	void SpawnLeg(FName InSocketName);
	void SetRagdollImpulse(UDamageClass* DamageClass, UFSDPhysicalMaterial* PhysMat);
	void OnDeathBase();
	void Spawn Headshot Gibs(enum class Spider_DeathType DeathType);
	void ChangeVisibility(bool bNewVisibility);
	void SpawnLegGib();
	void StartFadeBody();
	void SpawnLegGib_Local();
	void Play Body Death Effects();
	void OnFrozen(AActor* Source);
	void OnUnFrozen();
	void Play Burn Death();
	void StartDissolve();
	void Play Frozen Death();
	void StartBurn();
	void SendRagdollImpulse(FVector Impulse);
	void HandleWeapointDeath(UFSDPhysicalMaterial* Material, UDamageClass* DamageClass);
	void PlayAnimatedDeath(int32_t AnimationIndex);
	void ExplodedDeath();
	void TrySpawnEnemies();
	void BurrowingEscape();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
	void GibbedDeath();
	void OnRagdoll();
	void DeathDetailedBase(float amount, UDamageClass* DamageClass, AActor* Causer, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
	void TriggerRagdollFromImpulse(FVector Impulse);
	void MakeElite();
	void ExecuteUbergraph_ENE_SpiderBase_Large(int32_t EntryPoint);
};

