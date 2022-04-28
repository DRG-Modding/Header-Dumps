#ifndef UE4SS_SDK_BP_WeatherEffect_HPP
#define UE4SS_SDK_BP_WeatherEffect_HPP

class ABP_WeatherEffect_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* ActiveSound;
    class UAudioComponent* FadingSound;
    class USceneComponent* DefaultSceneRoot;
    class UExponentialHeightFogComponent* Fog;
    float OriginalFogDensity;
    FLinearColor OriginalFogInscatteringColor;
    float OriginalFogMaxOpacity;
    float OriginalFogStartDistance;
    FVector2D LifetimeMinMax;
    FLinearColor FogInscatteringColor;
    float FogDensity;
    float FogMaxOpacity;
    float FogStartDistance;
    float Delay;
    TEnumAsByte<WeatherState::Type> State;
    TSubclassOf<class UStatusEffect> StatusEffect;
    float ActiveSoundDelay;
    TArray<class TSubclassOf<UStatusEffect>> GlobalEnemyStatusEffects;

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
    void OnPlayerCharacterRegistered(class APlayerCharacter* PlayerCharacter);
    void FadeoutComplete();
    void Initialize();
    void ExecuteUbergraph_BP_WeatherEffect(int32 EntryPoint);
};

#endif
