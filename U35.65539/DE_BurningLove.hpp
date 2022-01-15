#ifndef UE4SS_SDK_DE_BurningLove_HPP
#define UE4SS_SDK_DE_BurningLove_HPP

class UDE_BurningLove_C : UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    APlayerCharacter* Character;
    UParticleSystemComponent* FireEffect;
    UAudioComponent* BurningSoundEffect;

    void OnStartEffect(UPlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_BurningLove(int32 EntryPoint, bool CallFunc_IsLocallyControlled_ReturnValue, UPlayerCharacter* K2Node_Event_character, bool CallFunc_IsLocallyControlled_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_2, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2);
}

#endif
