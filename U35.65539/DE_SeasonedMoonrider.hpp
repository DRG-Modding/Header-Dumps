#ifndef UE4SS_SDK_DE_SeasonedMoonrider_HPP
#define UE4SS_SDK_DE_SeasonedMoonrider_HPP

class UDE_SeasonedMoonrider_C : UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    APlayerCharacter* Character;
    UAudioComponent* MoonriderSound;
    UParticleSystemComponent* ParticleEffect;

    void OnStartEffect(UPlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_SeasonedMoonrider(int32 EntryPoint, FVector CallFunc_MakeVector_ReturnValue, UPlayerCharacter* K2Node_Event_character, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_2);
}

#endif
