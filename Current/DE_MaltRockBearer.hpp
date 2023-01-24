#ifndef UE4SS_SDK_DE_MaltRockBearer_HPP
#define UE4SS_SDK_DE_MaltRockBearer_HPP

class UDE_MaltRockBearer_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APlayerCharacter* Character;
    float StartScale;
    float TargetScale;
    float Progress;
    float Current Scale;
    float Previous Progress;
    bool IsScalingActive;
    float ScaleCheckCooldown;
    bool EffectEnabled;
    float OriginalPitchValue;

    void OnRep_Current Scale();
    void TraceForScaledCollision(bool& IsNextScaleColliding);
    void ReceiveTick(float DeltaSeconds);
    void OnStartEffect(class APlayerCharacter* Character);
    void OnStopEffect();
    void Handle Scaling(float DeltaTime);
    void Reset Voice();
    void ExecuteUbergraph_DE_MaltRockBearer(int32 EntryPoint);
};

#endif
