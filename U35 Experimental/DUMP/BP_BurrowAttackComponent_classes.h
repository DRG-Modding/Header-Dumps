// BlueprintGeneratedClass BP_BurrowAttackComponent.BP_BurrowAttackComponent_C
// Size: 0x138 (Inherited: 0xf8)
struct UBP_BurrowAttackComponent_C : UDamageAttackComponent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) float BurrowDuration; 
	UPROPERTY(BlueprintReadWrite) FVector TargetLocation; 
	UPROPERTY(BlueprintReadWrite) float TargetingDelay; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* ParticlesOnTarget; 
	UPROPERTY(BlueprintReadWrite) USoundBase* SoundOnTarget; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* ParticlesOnDamage; 
	UPROPERTY(BlueprintReadWrite) USoundBase* SoundOnDamage; 

	UFUNCTION(BlueprintCallable) void ReceiveAttackTarget(AActor* Target);
	UFUNCTION(BlueprintCallable) void ShowTargetEffects(FVector_NetQuantize Location);
	UFUNCTION(BlueprintCallable) void ShowDamageEffects(FVector_NetQuantize Location);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_BurrowAttackComponent(int32_t EntryPoint);
};

