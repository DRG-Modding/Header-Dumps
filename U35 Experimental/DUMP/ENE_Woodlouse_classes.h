// BlueprintGeneratedClass ENE_Woodlouse.ENE_Woodlouse_C
// Size: 0x5e0 (Inherited: 0x580)
struct AENE_Woodlouse_C : AWoodLouse {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* ProjectileHit; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UEnemyComponent* enemy; 
	UPROPERTY(BlueprintReadWrite) UPawnStatsComponent* PawnStats; 
	UPROPERTY(BlueprintReadWrite) UArmorHealthDamageComponent* ArmorHealthDamage; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleSystem; 
	UPROPERTY(BlueprintReadWrite) FVector_NetQuantize RagdollImpact; 
	UPROPERTY(BlueprintReadWrite) USoundCue* deathSound; 
	UPROPERTY(BlueprintReadWrite) USoundCue* FoldSound; 
	UPROPERTY(BlueprintReadWrite) USoundCue* UnfoldSound; 

	UFUNCTION(BlueprintCallable) void OnRep_RagdollImpact();
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void OnMessageAI(FName TriggerName);
	UFUNCTION(BlueprintCallable) void Fizzle();
	UFUNCTION(BlueprintCallable) void SwitchedState(enum class EWoodLouseState CurrentState);
	UFUNCTION(BlueprintCallable) void BumpedTarget();
	UFUNCTION(BlueprintCallable) void ChangePhysicsAsset();
	UFUNCTION(BlueprintCallable) void IncrementCommunityGoal();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Woodlouse(int32_t EntryPoint);
};

