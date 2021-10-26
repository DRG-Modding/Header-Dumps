// BlueprintGeneratedClass ENE_Spider_Exploding.ENE_Spider_Exploding_C
// Size: 0x4ea (Inherited: 0x4b4)
struct AENE_Spider_Exploding_C : AENE_SpiderBase_Large_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* Light_BackBody; 
	UPROPERTY(BlueprintReadWrite) bool Exploded; 
	UPROPERTY(BlueprintReadWrite) bool IsFleeing_1; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* ExplosionParticles; 
	UPROPERTY(BlueprintReadWrite) bool ExplodeOnDeath; 
	UPROPERTY(BlueprintReadWrite) bool NearbyExplodersFlee; 

	UFUNCTION(BlueprintCallable) bool GetIsTargetable();
	UFUNCTION(BlueprintCallable) bool ShouldExplode();
	UFUNCTION(BlueprintCallable) float GetDistanceToLocalPlayer();
	UFUNCTION(BlueprintCallable) void DamageAndCarve();
	UFUNCTION(BlueprintCallable) void PlayRumbeAndShake();
	UFUNCTION(BlueprintCallable) void MakeNearbyExplodersFlee();
	UFUNCTION(BlueprintCallable) void OnRep_Exploded();
	UFUNCTION(BlueprintCallable) void Explode();
	UFUNCTION(BlueprintCallable) void OnExploded();
	UFUNCTION(BlueprintCallable) void OnMessageAI(FName TriggerName);
	UFUNCTION(BlueprintCallable) void Play Burn Death();
	UFUNCTION(BlueprintCallable) void Play Body Death Effects();
	UFUNCTION(BlueprintCallable) void SetRagdollImpulse(UDamageClass* DamageClass, UFSDPhysicalMaterial* PhysMat);
	UFUNCTION(BlueprintCallable) void Spawn Headshot Gibs(enum class Spider_DeathType DeathType);
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void OnUnFrozen();
	UFUNCTION(BlueprintCallable) void Play Frozen Death();
	UFUNCTION(BlueprintCallable) void DisableExplosion();
	UFUNCTION(BlueprintCallable) void StopMontagesOnDeath();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Exploding(int32_t EntryPoint);
};

