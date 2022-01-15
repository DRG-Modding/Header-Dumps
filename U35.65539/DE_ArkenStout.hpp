#ifndef UE4SS_SDK_DE_ArkenStout_HPP
#define UE4SS_SDK_DE_ArkenStout_HPP

class UDE_ArkenStout_C : UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    APlayerCharacter* Character;

    void OnStopEffect();
    void OnStartEffect(UPlayerCharacter* Character);
    void ExecuteUbergraph_DE_ArkenStout(int32 EntryPoint, ECharacterState CallFunc_GetCurrentState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, UPlayerCharacter* K2Node_Event_character, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1);
}

#endif
