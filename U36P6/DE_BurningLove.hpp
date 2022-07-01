#ifndef UE4SS_SDK_DE_BurningLove_HPP
#define UE4SS_SDK_DE_BurningLove_HPP

class UDE_BurningLove_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APlayerCharacter* Character;
    class UParticleSystemComponent* FireEffect;
    class UAudioComponent* BurningSoundEffect;

    void OnStartEffect(class APlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_BurningLove(int32 EntryPoint);
};

#endif
