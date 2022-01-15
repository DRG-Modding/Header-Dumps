#ifndef UE4SS_SDK_DE_MinersLament_HPP
#define UE4SS_SDK_DE_MinersLament_HPP

class UDE_MinersLament_C : UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    APlayerCharacter* Character;

    void OnStartEffect(UPlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_MinersLament(int32 EntryPoint, UPlayerCharacter* K2Node_Event_character, int32 CallFunc_AddModifier_ReturnValue);
}

#endif
