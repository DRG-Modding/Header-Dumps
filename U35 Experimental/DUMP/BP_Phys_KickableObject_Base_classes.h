// BlueprintGeneratedClass BP_Phys_KickableObject_Base.BP_Phys_KickableObject_Base_C
// Size: 0x294 (Inherited: 0x220)
struct ABP_Phys_KickableObject_Base_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Scene; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* UseCapsule_ForKicking; 
	UPROPERTY(BlueprintReadWrite) UInstantUsable* InstantUsable; 
	UPROPERTY(BlueprintReadWrite) bool CanTriggerSound; 
	UPROPERTY(BlueprintReadWrite) APlayerCharacter* KickedBy; 
	UPROPERTY(BlueprintReadWrite) float KickStrength; 
	UPROPERTY(BlueprintReadWrite) float DamageImpulseStrength; 
	UPROPERTY(BlueprintReadWrite) UAnimMontage* KickMontage; 
	UPROPERTY(BlueprintReadWrite) USoundBase* KickSound; 
	UPROPERTY(BlueprintReadWrite) USoundBase* ImpactSound; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* deathParticles; 
	UPROPERTY(BlueprintReadWrite) USoundCue* deathSound; 
	UPROPERTY(BlueprintReadWrite) float ImpactSoundCoolDown; 

	UFUNCTION(BlueprintCallable) void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	UFUNCTION(BlueprintCallable) void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void destroy();
	UFUNCTION(BlueprintCallable) void DestroyOvertime();
	UFUNCTION(BlueprintCallable) void Play_Kick(APlayerCharacter* Kicker);
	UFUNCTION(BlueprintCallable) void Spawn Bronzehead Effects();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_7_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_8_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void SpawnKickSound();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Phys_KickableObject_Base(int32_t EntryPoint);
};

