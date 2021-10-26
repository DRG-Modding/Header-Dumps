// BlueprintGeneratedClass ENE_SpiderBase_Large.ENE_SpiderBase_Large_C
// Size: 0x4b4 (Inherited: 0x450)
struct AENE_SpiderBase_Large_C : AENE_PF_SpiderBase_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* GlyphidPraetorianIdle_Cue; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* DropShadow; 
	UPROPERTY(BlueprintReadWrite) float RagdollImpulseSpeed; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* HeadshotParticle; 
	UPROPERTY(BlueprintReadWrite) AActor* FrontLegGib; 
	UPROPERTY(BlueprintReadWrite) USoundBase* HeadGibSound; 
	UPROPERTY(BlueprintReadWrite) enum class Spider_DeathType DeathType; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* GibDeathParticles; 
	UPROPERTY(BlueprintReadWrite) FVector_NetQuantize RagdollImpulse; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* HeadGoreMesh; 
	UPROPERTY(BlueprintReadWrite) float DissolveDelay; 

	UFUNCTION(BlueprintCallable) void OnRep_RagdollImpulse();
	UFUNCTION(BlueprintCallable) void IsWeakPointDeath(UFSDPhysicalMaterial* Material, bool IsWeakPoint);
	UFUNCTION(BlueprintCallable) void GetEnemySpawnedCount(int32_t SpawnCount);
	UFUNCTION(BlueprintCallable) bool ShouldExplode();
	UFUNCTION(BlueprintCallable) void SetAnimatedDeathType(int32_t AnimationIndex);
	UFUNCTION(BlueprintCallable) void TrySelectDeathAnimation(bool WasWeakpoint, int32_t AnimationIndex, bool HasSelectedAnimation);
	UFUNCTION(BlueprintCallable) void SetDeathType(enum class Spider_DeathType DeathType);
	UFUNCTION(BlueprintCallable) void OnRep_DeathType();
	UFUNCTION(BlueprintCallable) void SpawnLeg(FName InSocketName);
	UFUNCTION(BlueprintCallable) void SetRagdollImpulse(UDamageClass* DamageClass, UFSDPhysicalMaterial* PhysMat);
	UFUNCTION(BlueprintCallable) void OnDeathBase();
	UFUNCTION(BlueprintCallable) void Spawn Headshot Gibs(enum class Spider_DeathType DeathType);
	UFUNCTION(BlueprintCallable) void ChangeVisibility(bool bNewVisibility);
	UFUNCTION(BlueprintCallable) void SpawnLegGib();
	UFUNCTION(BlueprintCallable) void StartFadeBody();
	UFUNCTION(BlueprintCallable) void SpawnLegGib_Local();
	UFUNCTION(BlueprintCallable) void Play Body Death Effects();
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void OnUnFrozen();
	UFUNCTION(BlueprintCallable) void Play Burn Death();
	UFUNCTION(BlueprintCallable) void StartDissolve();
	UFUNCTION(BlueprintCallable) void Play Frozen Death();
	UFUNCTION(BlueprintCallable) void StartBurn();
	UFUNCTION(BlueprintCallable) void SendRagdollImpulse(FVector Impulse);
	UFUNCTION(BlueprintCallable) void HandleWeapointDeath(UFSDPhysicalMaterial* Material, UDamageClass* DamageClass);
	UFUNCTION(BlueprintCallable) void PlayAnimatedDeath(int32_t AnimationIndex);
	UFUNCTION(BlueprintCallable) void ExplodedDeath();
	UFUNCTION(BlueprintCallable) void TrySpawnEnemies();
	UFUNCTION(BlueprintCallable) void BurrowingEscape();
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
	UFUNCTION(BlueprintCallable) void GibbedDeath();
	UFUNCTION(BlueprintCallable) void OnRagdoll();
	UFUNCTION(BlueprintCallable) void DeathDetailedBase(float amount, UDamageClass* DamageClass, AActor* Causer, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
	UFUNCTION(BlueprintCallable) void TriggerRagdollFromImpulse(FVector Impulse);
	UFUNCTION(BlueprintCallable) void MakeElite();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_SpiderBase_Large(int32_t EntryPoint);
};

