#ifndef UE4SS_SDK_DE_SeasonedMoonrider_HPP
#define UE4SS_SDK_DE_SeasonedMoonrider_HPP

class UDE_SeasonedMoonrider_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APlayerCharacter* Character;
    class UAudioComponent* MoonriderSound;
    class UParticleSystemComponent* ParticleEffect;

    void OnStartEffect(class APlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_SeasonedMoonrider(int32 EntryPoint);
};

#endif
