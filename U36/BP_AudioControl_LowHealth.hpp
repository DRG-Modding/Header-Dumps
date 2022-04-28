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
    class UCurveFloat* FadeInCurve;
    float FadeTimeLeft;
    float FadeInTime;
    float alpha;
    bool IsFadingIn;
    float FadeOutTime;
    bool prevIsLowHealth;
    float HealthChange;
    bool IsLowHealthOn;
    class UAudioComponent* Temperature_Low_Cue;
    class UAudioComponent* Temperature_VeryLow_Cue;

    void SetSoundFromAlpha(float FadeAlpha);
    bool ShouldSetTimestamp(bool IsActivate);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
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
