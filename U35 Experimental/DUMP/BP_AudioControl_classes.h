// BlueprintGeneratedClass BP_AudioControl.BP_AudioControl_C
// Size: 0x1cc (Inherited: 0xb0)
struct UBP_AudioControl_C : UActorComponent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USoundSubmix* ExplosionsSubmix; 
	UPROPERTY(BlueprintReadWrite) USoundSubmix* WeaponFireSubmix; 
	UPROPERTY(BlueprintReadWrite) float CurrentAttack; 
	UPROPERTY(BlueprintReadWrite) float CurrentRelease; 
	UPROPERTY(BlueprintReadWrite) bool wasAbove; 
	UPROPERTY(BlueprintReadWrite) FRuntimeFloatCurve Blend; 
	UPROPERTY(BlueprintReadWrite) float BlendProgress; 
	UPROPERTY(BlueprintReadWrite) float DuckingPower; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* IronWillIsSpawned; 
	UPROPERTY(BlueprintReadWrite) bool LowHealthFade; 
	UPROPERTY(BlueprintReadWrite) USubmixEffectSubmixEQPreset* LowHealthEq; 
	UPROPERTY(BlueprintReadWrite) float DuckingLowHealthAmount; 
	UPROPERTY(BlueprintReadWrite) float DuckingDownStateAmount; 
	UPROPERTY(BlueprintReadWrite) float DuckingIronWillAmount; 
	UPROPERTY(BlueprintReadWrite) bool Off; 
	UPROPERTY(BlueprintReadWrite) bool DownStateFade; 
	UPROPERTY(BlueprintReadWrite) bool IronWillFade; 
	UPROPERTY(BlueprintReadWrite) USubmixEffectSubmixEQPreset* DownStateEq; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* LowHealthIsSpawned; 
	UPROPERTY(BlueprintReadWrite) USubmixEffectSubmixEQPreset* IronWillEq; 
	UPROPERTY(BlueprintReadWrite) APlayerCharacter* PlayerCharacter; 
	UPROPERTY(BlueprintReadWrite) UPlayerHealthComponent* PlayerHealthComponent; 
	UPROPERTY(BlueprintReadWrite) USubmixEffectReverbPreset* LowHealthReverb; 
	UPROPERTY(BlueprintReadWrite) float ReverbLoHealthWetLevel; 
	UPROPERTY(BlueprintReadWrite) float ReverbLoHealthDryLevel; 
	UPROPERTY(BlueprintReadWrite) float ReverbLoHealthGain; 

	UFUNCTION(BlueprintCallable) void DoFadeIronWill(bool ShouldFade);
	UFUNCTION(BlueprintCallable) void DoFadeDownState(bool DoFade);
	UFUNCTION(BlueprintCallable) void DoFadeLowHealth(bool ShouldFade);
	UFUNCTION(BlueprintCallable) void HealthAudio(USubmixEffectSubmixEQPreset* EQPreset, float HealthPercentage);
	UFUNCTION(BlueprintCallable) bool ShouldSetTimestamp(bool IsActivate);
	UFUNCTION(BlueprintCallable) void SubmixCompressor(float Volume, USoundSubmix* Master Listen Submix, float Threshold, float Attack, float Release, TArray<FCompressorData> CompressorData);
	UFUNCTION(BlueprintCallable) void SubmixDucking(USoundSubmix* ListenSubmix, int32_t ListenAttack Max 200, int32_t ListenRelease Max 1000, float ListenDuckMultiply, USubmixEffectSubmixEQPreset* TargetDuckingEQ, bool Multiply Value Print, UCurveFloat* DuckingCurve, UCurveFloat* AttackCurve, UCurveFloat* ReleaseCurve, float ListenArrayElement);
	UFUNCTION(BlueprintCallable) void ReceiveTick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void DamageTaken(float amount);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_AudioControl(int32_t EntryPoint);
};

