// BlueprintGeneratedClass BP_WeatherEffect.BP_WeatherEffect_C
// Size: 0x2b0 (Inherited: 0x220)
struct ABP_WeatherEffect_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UAudioComponent* ActiveSound; // 0x228(0x08)
	UAudioComponent* FadingSound; // 0x230(0x08)
	USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	UExponentialHeightFogComponent* Fog; // 0x240(0x08)
	float OriginalFogDensity; // 0x248(0x04)
	FLinearColor OriginalFogInscatteringColor; // 0x24c(0x10)
	float OriginalFogMaxOpacity; // 0x25c(0x04)
	float OriginalFogStartDistance; // 0x260(0x04)
	FVector2D LifetimeMinMax; // 0x264(0x08)
	FLinearColor FogInscatteringColor; // 0x26c(0x10)
	float FogDensity; // 0x27c(0x04)
	float FogMaxOpacity; // 0x280(0x04)
	float FogStartDistance; // 0x284(0x04)
	float Delay; // 0x288(0x04)
	enum class WeatherState State; // 0x28c(0x01)
	UStatusEffect* StatusEffect; // 0x290(0x08)
	float ActiveSoundDelay; // 0x298(0x04)
	TArray<UStatusEffect*> GlobalEnemyStatusEffects; // 0x2a0(0x10)

	void EndGlobalStatusEffects();
	void StartGlobalStatusEffects();
	void FadeFogAndAudio(float alpha);
	void OnRep_State();
	void FadeFog(float alpha);
	void SetOriginalValues();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void EndEffect();
	void StartEffect();
	void EffectActive();
	void OnPlayerCharacterRegistered(APlayerCharacter* PlayerCharacter);
	void FadeoutComplete();
	void Initialize();
	void ExecuteUbergraph_BP_WeatherEffect(int32_t EntryPoint);
};

