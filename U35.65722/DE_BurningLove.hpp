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
    void ExecuteUbergraph_DE_BurningLove(int32 EntryPoint, bool CallFunc_IsLocallyControlled_ReturnValue, class APlayerCharacter* K2Node_Event_character, bool CallFunc_IsLocallyControlled_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2);
};

#endif
