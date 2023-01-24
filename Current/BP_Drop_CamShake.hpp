#ifndef UE4SS_SDK_BP_Drop_CamShake_HPP
#define UE4SS_SDK_BP_Drop_CamShake_HPP

class ABP_Drop_CamShake_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;

    void SetStandingDown(bool IsStandingDown);
    void TriggerShakeSequence();
    void ExecuteUbergraph_BP_Drop_CamShake(int32 EntryPoint);
};

#endif
