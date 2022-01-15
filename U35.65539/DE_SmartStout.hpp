#ifndef UE4SS_SDK_DE_SmartStout_HPP
#define UE4SS_SDK_DE_SmartStout_HPP

class UDE_SmartStout_C : UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    APlayerCharacter* Character;
    UAudioComponent* MoonriderSound;
    UParticleSystemComponent* ParticleEffect;

    void OnStartEffect(UPlayerCharacter* Character);
    void ExecuteUbergraph_DE_SmartStout(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, UPlayerCharacter* K2Node_Event_character, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1);
}

#endif
