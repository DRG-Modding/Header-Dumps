#ifndef UE4SS_SDK_DE_CanaryDew_HPP
#define UE4SS_SDK_DE_CanaryDew_HPP

class UDE_CanaryDew_C : UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    APlayerCharacter* Character;

    void OnStartEffect(UPlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_CanaryDew(int32 EntryPoint, UPlayerCharacter* K2Node_Event_character);
}

#endif
