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
    void ExecuteUbergraph_DE_SeasonedMoonrider(int32 EntryPoint, FVector CallFunc_MakeVector_ReturnValue, class APlayerCharacter* K2Node_Event_character, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_2);
};

#endif
