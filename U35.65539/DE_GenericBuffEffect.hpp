#ifndef UE4SS_SDK_DE_GenericBuffEffect_HPP
#define UE4SS_SDK_DE_GenericBuffEffect_HPP

class UDE_GenericBuffEffect_C : UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnStartEffect(UPlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_GenericBuffEffect(int32 EntryPoint, UPlayerCharacter* K2Node_Event_character, bool CallFunc_IsLocallyControlled_ReturnValue, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
}

#endif
