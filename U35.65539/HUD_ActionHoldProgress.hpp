#ifndef UE4SS_SDK_HUD_ActionHoldProgress_HPP
#define UE4SS_SDK_HUD_ActionHoldProgress_HPP

class UHUD_ActionHoldProgress_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHUD_DefaultLabel_C* ActionText;
    UProgressBar* HoldingProgress;
    UInvalidationBox* Invalidation;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnActionHoldProgress(FText Description, float Progress);
    void ExecuteUbergraph_HUD_ActionHoldProgress(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, FText K2Node_CustomEvent_Description, float K2Node_CustomEvent_progress, bool CallFunc_Less_FloatFloat_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, ESlateVisibility K2Node_Select_Default, ActionHoldEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
}

#endif
