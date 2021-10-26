// BlueprintGeneratedClass BP_WeatherEffect.BP_WeatherEffect_C
// Size: 0x2b0 (Inherited: 0x220)
struct ABP_WeatherEffect_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* ActiveSound; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* FadingSound; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) UExponentialHeightFogComponent* Fog; 
	UPROPERTY(BlueprintReadWrite) float OriginalFogDensity; 
	UPROPERTY(BlueprintReadWrite) FLinearColor OriginalFogInscatteringColor; 
	UPROPERTY(BlueprintReadWrite) float OriginalFogMaxOpacity; 
	UPROPERTY(BlueprintReadWrite) float OriginalFogStartDistance; 
	UPROPERTY(BlueprintReadWrite) FVector2D LifetimeMinMax; 
	UPROPERTY(BlueprintReadWrite) FLinearColor FogInscatteringColor; 
	UPROPERTY(BlueprintReadWrite) float FogDensity; 
	UPROPERTY(BlueprintReadWrite) float FogMaxOpacity; 
	UPROPERTY(BlueprintReadWrite) float FogStartDistance; 
	UPROPERTY(BlueprintReadWrite) float Delay; 
	UPROPERTY(BlueprintReadWrite) enum class WeatherState State; 
	UPROPERTY(BlueprintReadWrite) UStatusEffect* StatusEffect; 
	UPROPERTY(BlueprintReadWrite) float ActiveSoundDelay; 
	UPROPERTY(BlueprintReadWrite) TArray<UStatusEffect*> GlobalEnemyStatusEffects; 

	UFUNCTION(BlueprintCallable) void EndGlobalStatusEffects();
	UFUNCTION(BlueprintCallable) void StartGlobalStatusEffects();
	UFUNCTION(BlueprintCallable) void FadeFogAndAudio(float alpha);
	UFUNCTION(BlueprintCallable) void OnRep_State();
	UFUNCTION(BlueprintCallable) void FadeFog(float alpha);
	UFUNCTION(BlueprintCallable) void SetOriginalValues();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ReceiveDestroyed();
	UFUNCTION(BlueprintCallable) void EndEffect();
	UFUNCTION(BlueprintCallable) void StartEffect();
	UFUNCTION(BlueprintCallable) void EffectActive();
	UFUNCTION(BlueprintCallable) void OnPlayerCharacterRegistered(APlayerCharacter* PlayerCharacter);
	UFUNCTION(BlueprintCallable) void FadeoutComplete();
	UFUNCTION(BlueprintCallable) void Initialize();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_WeatherEffect(int32_t EntryPoint);
};

