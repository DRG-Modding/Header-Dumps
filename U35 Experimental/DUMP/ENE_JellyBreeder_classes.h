// BlueprintGeneratedClass ENE_JellyBreeder.ENE_JellyBreeder_C
// Size: 0x68c (Inherited: 0x510)
struct AENE_JellyBreeder_C : AJellyBreeder {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UWeakpointGlowComponent* WeakpointGlow; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* JellyBreederDeath_Cue; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* JellyBreederIdle_Cue; 
	UPROPERTY(BlueprintReadWrite) UImpactComponent* Impact; 
	UPROPERTY(BlueprintReadWrite) UPhysicalAnimationComponent* PhysicalAnimation; 
	UPROPERTY(BlueprintReadWrite) TArray<FName> BoneNames; 
	UPROPERTY(BlueprintReadWrite) FName Profile; 
	UPROPERTY(BlueprintReadWrite) FVector Location; 
	UPROPERTY(BlueprintReadWrite) float Emission Multiplier; 
	UPROPERTY(BlueprintReadWrite) float EmissionFlash; 
	UPROPERTY(BlueprintReadWrite) FRuntimeFloatCurve EmissionGrow; 
	UPROPERTY(BlueprintReadWrite) FRuntimeFloatCurve EmissionFade; 
	UPROPERTY(BlueprintReadWrite) int32_t EmissionID; 

	UFUNCTION(BlueprintCallable) void ToggleBonePhysics(bool BonePhysics);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void StartFizzle();
	UFUNCTION(BlueprintCallable) void OnMessageAI(FName TriggerName);
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void BndEvt__Impact_K2Node_ComponentBoundEvent_5_ImpactedSignature__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BreedModeFlipped(bool aIsLayingEggs);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_JellyBreeder(int32_t EntryPoint);
};

