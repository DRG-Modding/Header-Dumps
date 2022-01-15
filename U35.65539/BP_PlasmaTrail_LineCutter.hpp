#ifndef UE4SS_SDK_BP_PlasmaTrail_LineCutter_HPP
#define UE4SS_SDK_BP_PlasmaTrail_LineCutter_HPP

class ABP_PlasmaTrail_LineCutter_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* ParticleSystem;
    UCapsuleComponent* Capsule;
    UStatusEffectTriggerComponent* StatusEffectTrigger;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void SetLineWidth(float Width);
    void ExecuteUbergraph_BP_PlasmaTrail_LineCutter(int32 EntryPoint, float K2Node_CustomEvent_Width, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
}

#endif
