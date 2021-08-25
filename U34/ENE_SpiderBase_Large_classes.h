// BlueprintGeneratedClass ENE_SpiderBase_Large.ENE_SpiderBase_Large_C
// Size: 0x4b4 (Inherited: 0x450)
struct AENE_SpiderBase_Large_C : AENE_PF_SpiderBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UAudioComponent* GlyphidPraetorianIdle_Cue; // 0x458(0x08)
	struct UStaticMeshComponent* DropShadow; // 0x460(0x08)
	float RagdollImpulseSpeed; // 0x468(0x04)
	char UnknownData_46C[0x4]; // 0x46c(0x04)
	struct UParticleSystem* HeadshotParticle; // 0x470(0x08)
	struct AActor* FrontLegGib; // 0x478(0x08)
	struct USoundBase* HeadGibSound; // 0x480(0x08)
	char DeathType; // 0x488(0x01)
	char UnknownData_489[0x7]; // 0x489(0x07)
	struct UParticleSystem* GibDeathParticles; // 0x490(0x08)
	struct FVector_NetQuantize RagdollImpulse; // 0x498(0x0c)
	char UnknownData_4A4[0x4]; // 0x4a4(0x04)
	struct UStaticMeshComponent* HeadGoreMesh; // 0x4a8(0x08)
	float DissolveDelay; // 0x4b0(0x04)

	void OnRep_RagdollImpulse(); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.OnRep_RagdollImpulse
	void IsWeakPointDeath(struct UFSDPhysicalMaterial* Material, bool IsWeakPoint); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.IsWeakPointDeath
	void GetEnemySpawnedCount(int32_t SpawnCount); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.GetEnemySpawnedCount
	bool ShouldExplode(); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.ShouldExplode
	void SetAnimatedDeathType(int32_t AnimationIndex); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.SetAnimatedDeathType
	void TrySelectDeathAnimation(bool WasWeakpoint, int32_t AnimationIndex, bool HasSelectedAnimation); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.TrySelectDeathAnimation
	void SetDeathType(char DeathType); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.SetDeathType
	void OnRep_DeathType(); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.OnRep_DeathType
	void SpawnLeg(struct FName InSocketName); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.SpawnLeg
	void SetRagdollImpulse(struct UDamageClass* DamageClass, struct UFSDPhysicalMaterial* PhysMat); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.SetRagdollImpulse
	void OnDeathBase(); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.OnDeathBase
	void Spawn Headshot Gibs(char DeathType); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.Spawn Headshot Gibs
	void ChangeVisibility(bool bNewVisibility); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.ChangeVisibility
	void SpawnLegGib(); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.SpawnLegGib
	void StartFadeBody(); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.StartFadeBody
	void SpawnLegGib_Local(); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.SpawnLegGib_Local
	void Play Body Death Effects(); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.Play Body Death Effects
	void OnFrozen(struct AActor* Source); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.OnFrozen
	void OnUnFrozen(); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.OnUnFrozen
	void Play Burn Death(); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.Play Burn Death
	void StartDissolve(); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.StartDissolve
	void Play Frozen Death(); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.Play Frozen Death
	void StartBurn(); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.StartBurn
	void SendRagdollImpulse(struct FVector Impulse); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.SendRagdollImpulse
	void HandleWeapointDeath(struct UFSDPhysicalMaterial* Material, struct UDamageClass* DamageClass); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.HandleWeapointDeath
	void PlayAnimatedDeath(int32_t AnimationIndex); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.PlayAnimatedDeath
	void ExplodedDeath(); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.ExplodedDeath
	void TrySpawnEnemies(); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.TrySpawnEnemies
	void BurrowingEscape(); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.BurrowingEscape
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(struct UHealthComponent* HealthComponent, float damageAmount, struct UDamageClass* DamageClass, struct AActor* damageCause, struct AController* Instigator, struct UFSDPhysicalMaterial* PhysicalMaterial); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature
	void GibbedDeath(); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.GibbedDeath
	void OnRagdoll(); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.OnRagdoll
	void DeathDetailedBase(float amount, struct UDamageClass* DamageClass, struct AActor* Causer, struct AController* Instigator, struct UFSDPhysicalMaterial* PhysicalMaterial); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.DeathDetailedBase
	void TriggerRagdollFromImpulse(struct FVector Impulse); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.TriggerRagdollFromImpulse
	void MakeElite(); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.MakeElite
	void ExecuteUbergraph_ENE_SpiderBase_Large(int32_t EntryPoint); // Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.ExecuteUbergraph_ENE_SpiderBase_Large
};

