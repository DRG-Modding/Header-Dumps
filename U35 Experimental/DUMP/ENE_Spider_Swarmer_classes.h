// BlueprintGeneratedClass ENE_Spider_Swarmer.ENE_Spider_Swarmer_C
// Size: 0x480 (Inherited: 0x450)
struct AENE_Spider_Swarmer_C : AENE_PF_SpiderBase_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* JumpAttack; 
	UPROPERTY(BlueprintReadWrite) UMeleeAttackComponent* MeleeAttack; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* DropShadow; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* SwarmerIdle_Cue; 

	UFUNCTION(BlueprintCallable) void OnDeathBase();
	UFUNCTION(BlueprintCallable) void ChangeVisibility(bool bNewVisibility);
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Swarmer(int32_t EntryPoint);
};

