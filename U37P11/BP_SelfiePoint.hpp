#ifndef UE4SS_SDK_BP_SelfiePoint_HPP
#define UE4SS_SDK_BP_SelfiePoint_HPP

class UBP_SelfiePoint_C : public USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ACameraActor* Camera;
    float FOV;
    float EaseMultiplier;
    TEnumAsByte<EEasingFunc::Type> EaseFunction;
    float BlendExp;
    int32 Steps;
    bool LookAtPlayerOffset;
    FVector PlayerOffset;

    FTransform GetTargetTransform();
    void DeactivateCamera();
    void ActivateCamera();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SelfiePoint(int32 EntryPoint);
};

#endif
