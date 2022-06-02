#ifndef UE4SS_SDK_BP_PlasmaTrail_LineCutter_HPP
#define UE4SS_SDK_BP_PlasmaTrail_LineCutter_HPP

class ABP_PlasmaTrail_LineCutter_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* ParticleSystem;
    class UCapsuleComponent* Capsule;
    class UStatusEffectTriggerComponent* StatusEffectTrigger;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void SetLineWidth(float Width);
    void ExecuteUbergraph_BP_PlasmaTrail_LineCutter(int32 EntryPoint);
};

#endif
