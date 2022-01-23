#ifndef UE4SS_SDK_DE_GenericBuffEffect_HPP
#define UE4SS_SDK_DE_GenericBuffEffect_HPP

class UDE_GenericBuffEffect_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnStartEffect(class APlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_GenericBuffEffect(int32 EntryPoint, class APlayerCharacter* K2Node_Event_character, bool CallFunc_IsLocallyControlled_ReturnValue, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
};

#endif
