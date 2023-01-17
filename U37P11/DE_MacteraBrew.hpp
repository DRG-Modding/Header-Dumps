#ifndef UE4SS_SDK_DE_MacteraBrew_HPP
#define UE4SS_SDK_DE_MacteraBrew_HPP

class UDE_MacteraBrew_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool PEffect;
    class UParticleSystemComponent* Particle Effect;
    class UAudioComponent* soundComp;

    void OnStopEffect();
    void OnStartEffect(class APlayerCharacter* Character);
    void ExecuteUbergraph_DE_MacteraBrew(int32 EntryPoint);
};

#endif
