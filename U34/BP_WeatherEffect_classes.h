// BlueprintGeneratedClass BP_WeatherEffect.BP_WeatherEffect_C
// Size: 0x2b0 (Inherited: 0x220)
struct ABP_WeatherEffect_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UAudioComponent* ActiveSound; // 0x228(0x08)
	struct UAudioComponent* FadingSound; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct UExponentialHeightFogComponent* Fog; // 0x240(0x08)
	float OriginalFogDensity; // 0x248(0x04)
	struct FLinearColor OriginalFogInscatteringColor; // 0x24c(0x10)
	float OriginalFogMaxOpacity; // 0x25c(0x04)
	float OriginalFogStartDistance; // 0x260(0x04)
	struct FVector2D LifetimeMinMax; // 0x264(0x08)
	struct FLinearColor FogInscatteringColor; // 0x26c(0x10)
	float FogDensity; // 0x27c(0x04)
	float FogMaxOpacity; // 0x280(0x04)
	float FogStartDistance; // 0x284(0x04)
	float Delay; // 0x288(0x04)
	char State; // 0x28c(0x01)
	char UnknownData_28D[0x3]; // 0x28d(0x03)
	struct UStatusEffect* StatusEffect; // 0x290(0x08)
	float ActiveSoundDelay; // 0x298(0x04)
	char UnknownData_29C[0x4]; // 0x29c(0x04)
	struct TArray<struct UStatusEffect*> GlobalEnemyStatusEffects; // 0x2a0(0x10)

	void EndGlobalStatusEffects(); // Function BP_WeatherEffect.BP_WeatherEffect_C.EndGlobalStatusEffects
	void StartGlobalStatusEffects(); // Function BP_WeatherEffect.BP_WeatherEffect_C.StartGlobalStatusEffects
	void FadeFogAndAudio(float alpha); // Function BP_WeatherEffect.BP_WeatherEffect_C.FadeFogAndAudio
	void OnRep_State(); // Function BP_WeatherEffect.BP_WeatherEffect_C.OnRep_State
	void FadeFog(float alpha); // Function BP_WeatherEffect.BP_WeatherEffect_C.FadeFog
	void SetOriginalValues(); // Function BP_WeatherEffect.BP_WeatherEffect_C.SetOriginalValues
	void ReceiveBeginPlay(); // Function BP_WeatherEffect.BP_WeatherEffect_C.ReceiveBeginPlay
	void ReceiveDestroyed(); // Function BP_WeatherEffect.BP_WeatherEffect_C.ReceiveDestroyed
	void EndEffect(); // Function BP_WeatherEffect.BP_WeatherEffect_C.EndEffect
	void StartEffect(); // Function BP_WeatherEffect.BP_WeatherEffect_C.StartEffect
	void EffectActive(); // Function BP_WeatherEffect.BP_WeatherEffect_C.EffectActive
	void OnPlayerCharacterRegistered(struct APlayerCharacter* PlayerCharacter); // Function BP_WeatherEffect.BP_WeatherEffect_C.OnPlayerCharacterRegistered
	void FadeoutComplete(); // Function BP_WeatherEffect.BP_WeatherEffect_C.FadeoutComplete
	void Initialize(); // Function BP_WeatherEffect.BP_WeatherEffect_C.Initialize
	void ExecuteUbergraph_BP_WeatherEffect(int32_t EntryPoint); // Function BP_WeatherEffect.BP_WeatherEffect_C.ExecuteUbergraph_BP_WeatherEffect
};

