#ifndef UE4SS_SDK_DE_GutWrecker_HPP
#define UE4SS_SDK_DE_GutWrecker_HPP

class UDE_GutWrecker_C : public UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APlayerCharacter* Character;

    void ReceiveTick(float DeltaSeconds);
    void OnStartEffect(class APlayerCharacter* Character);
    void OnStopEffect();
    void ExecuteUbergraph_DE_GutWrecker(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class APlayerCharacter* K2Node_Event_character, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1);
};

#endif
