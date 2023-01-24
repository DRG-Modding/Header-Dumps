#ifndef UE4SS_SDK_ENE_Parasite_HPP
#define UE4SS_SDK_ENE_Parasite_HPP

class AENE_Parasite_C : public AParasiteEnemy
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWeakpointGlowComponent* WeakpointGlow;
    class USphereComponent* Sphere;
    class UMaterialInstanceDynamic* Dynamic Material;
    float Emission Multiplier;
    float Emission Flash;
    float Displacement Intensity;
    float Displacement Burst;

    void ShowDamageEffects(class UParticleSystem* Particles, FVector Location, FRotator Orientation);
    void ReceiveBeginPlay();
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_ENE_Parasite(int32 EntryPoint);
};

#endif
