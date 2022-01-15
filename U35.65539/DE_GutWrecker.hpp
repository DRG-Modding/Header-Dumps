#ifndef UE4SS_SDK_DE_GutWrecker_HPP
#define UE4SS_SDK_DE_GutWrecker_HPP

class UDE_GutWrecker_C : UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    APlayerCharacter* Character;

    void ReceiveTick(float DeltaSeconds);
    void OnStartEffect(UPlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_GutWrecker(int32 EntryPoint, float K2Node_Event_DeltaSeconds, UPlayerCharacter* K2Node_Event_character, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1);
}

#endif
