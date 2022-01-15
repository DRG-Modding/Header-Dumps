#ifndef UE4SS_SDK_DE_ToothGrinder_HPP
#define UE4SS_SDK_DE_ToothGrinder_HPP

class UDE_ToothGrinder_C : UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    APlayerCharacter* Character;

    void OnStartEffect(UPlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_ToothGrinder(int32 EntryPoint, UPlayerCharacter* K2Node_Event_character);
}

#endif
