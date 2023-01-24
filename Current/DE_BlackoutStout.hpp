#ifndef UE4SS_SDK_DE_BlackoutStout_HPP
#define UE4SS_SDK_DE_BlackoutStout_HPP

class UDE_BlackoutStout_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool PEffect;
    class UParticleSystemComponent* Particle Effect;
    class UAudioComponent* soundComp;
    class UAudioComponent* soundCompDown;

    void OnStartEffect(class APlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_BlackoutStout(int32 EntryPoint);
};

#endif
