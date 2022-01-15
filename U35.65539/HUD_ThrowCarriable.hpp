#ifndef UE4SS_SDK_HUD_ThrowCarriable_HPP
#define UE4SS_SDK_HUD_ThrowCarriable_HPP

class UHUD_ThrowCarriable_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UProgressBar* HoldingProgressL;
    UProgressBar* HoldingProgressR;
    UHorizontalBox* HorizontalBox_0;
    UInvalidationBox* Invalidation;

    void Construct();
    void OnThrowCarriableProgress_Event(float Progress, float timeToCancel, bool isDone);
    void ExecuteUbergraph_HUD_ThrowCarriable(int32 EntryPoint, ThrowCarriableDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, float K2Node_CustomEvent_progress, float K2Node_CustomEvent_timeToCancel, bool K2Node_CustomEvent_isDone, bool Temp_bool_Variable, float CallFunc_MakeLiteralFloat_ReturnValue, float K2Node_MathExpression_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_Less_FloatFloat_ReturnValue);
}

#endif
