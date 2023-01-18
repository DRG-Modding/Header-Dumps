#ifndef UE4SS_SDK_BP_AudioControl_LowHealth_HPP
#define UE4SS_SDK_BP_AudioControl_LowHealth_HPP

class UBP_AudioControl_LowHealth_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool wasAbove;
    class UAudioComponent* IronWillIsSpawned;
    class USubmixEffectSubmixEQPreset* LowHealthEq;
    bool On/Off;
    class UAudioComponent* Health_Low_Cue;
    class APlayerCharacter* PlayerCharacter;
    class UPlayerHealthComponent* PlayerHealthComponent;
    class USubmixEffectReverbPreset* LowHealthReverb;
    class UCurveFloat* fadeInCurve;
    float FadeTimeLeft;
    float FadeInTime;
    float alpha;
    bool IsFadingIn;
    float FadeOutTime;
    bool prevIsLowHealth;
    float HealthChange;
    bool IsLowHealthOn;
    class UAudioComponent* Temperature_Low_Cue;
    class USoundCue* PlagueInfected;
    class UAudioComponent* Temperature_VeryLow_Cue;
    class USubmixEffectStereoDelayPreset* PlagueInfectedAudioEcho;
    class USubmixEffectFilterPreset* PlagueInfectedFilter;
    class UAudioComponent* InfectedSound;
    float Infection Level max;
    float Infection Level Current;

    void SetSoundFromAlpha(float FadeAlpha);
    bool ShouldSetTimestamp(bool IsActivate);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void HealthChanged(float Amount);
    void FadeInLowHealth();
    void FadeOutLowHealth();
    void HandleHeartbeat(bool TurnOn);
    void HandleLowHealthMuffling(bool TurnOn);
    void OnDeath_Event(class UHealthComponentBase* HealthComponent);
    void OnDestroyed_Event(class AActor* DestroyedActor);
    void OnDeahtAndDestroyed();
    void ExecuteUbergraph_BP_AudioControl_LowHealth(int32 EntryPoint);
};

#endif
