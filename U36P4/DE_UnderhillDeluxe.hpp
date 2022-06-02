#ifndef UE4SS_SDK_DE_UnderhillDeluxe_HPP
#define UE4SS_SDK_DE_UnderhillDeluxe_HPP

class UDE_UnderhillDeluxe_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float TargetScale;
    class APlayerCharacter* Character;
    float StartScale;
    float Progress;
    float CurrentScale;
    float Scale Check Cooldown;
    bool IsScalingActive;
    float Previous Progress;
    float StartCameraOffset;
    float TargetCameraOffset;
    float CurrentCameraOffset;
    bool EffectEnabled;
    float OriginalPitchValue;

    void OnRep_CurrentCameraOffset();
    void OnRep_CurrentScale();
    void TraceForScaledCollision(bool& IsNextScaleColliding);
    void ReceiveTick(float DeltaSeconds);
    void OnStartEffect(class APlayerCharacter* Character);
    void OnStopEffect();
    void Handle Scaling(float DeltaTime);
    void Reset Voice();
    void ExecuteUbergraph_DE_UnderhillDeluxe(int32 EntryPoint);
};

#endif
