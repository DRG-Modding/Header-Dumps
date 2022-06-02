#ifndef UE4SS_SDK_DE_SmartStout_HPP
#define UE4SS_SDK_DE_SmartStout_HPP

class UDE_SmartStout_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APlayerCharacter* Character;
    class UAudioComponent* MoonriderSound;
    class UParticleSystemComponent* ParticleEffect;

    void OnStartEffect(class APlayerCharacter* Character);
    void ExecuteUbergraph_DE_SmartStout(int32 EntryPoint);
};

#endif
