#ifndef UE4SS_SDK_DE_SmartStout_HPP
#define UE4SS_SDK_DE_SmartStout_HPP

class UDE_SmartStout_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APlayerCharacter* Character;
    class UAudioComponent* MoonriderSound;
    class UParticleSystemComponent* ParticleEffect;

    void OnStartEffect(class APlayerCharacter* Character);
    void ExecuteUbergraph_DE_SmartStout(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class APlayerCharacter* K2Node_Event_character, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1);
};

#endif
