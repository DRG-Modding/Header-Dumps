#ifndef UE4SS_SDK_DE_StrongerBarrelKicking_HPP
#define UE4SS_SDK_DE_StrongerBarrelKicking_HPP

class UDE_StrongerBarrelKicking_C : UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    APlayerCharacter* Character;

    void OnStartEffect(UPlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_StrongerBarrelKicking(int32 EntryPoint, int32 CallFunc_AddModifier_ReturnValue, UPlayerCharacter* K2Node_Event_character);
}

#endif
