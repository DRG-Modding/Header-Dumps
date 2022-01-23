#ifndef UE4SS_SDK_DE_ArkenStout_HPP
#define UE4SS_SDK_DE_ArkenStout_HPP

class UDE_ArkenStout_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APlayerCharacter* Character;

    void OnStopEffect();
    void OnStartEffect(class APlayerCharacter* Character);
    void ExecuteUbergraph_DE_ArkenStout(int32 EntryPoint, ECharacterState CallFunc_GetCurrentState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class APlayerCharacter* K2Node_Event_character, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1);
};

#endif
