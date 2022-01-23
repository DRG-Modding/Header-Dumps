#ifndef UE4SS_SDK_DE_StrongerBarrelKicking_HPP
#define UE4SS_SDK_DE_StrongerBarrelKicking_HPP

class UDE_StrongerBarrelKicking_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APlayerCharacter* Character;

    void OnStartEffect(class APlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_StrongerBarrelKicking(int32 EntryPoint, int32 CallFunc_AddModifier_ReturnValue, class APlayerCharacter* K2Node_Event_character);
};

#endif
