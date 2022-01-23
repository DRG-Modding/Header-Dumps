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
    void ExecuteUbergraph_ENE_Parasite(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float CallFunc_RandomFloatInRange_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
};

#endif
