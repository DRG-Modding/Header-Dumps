#ifndef UE4SS_SDK_ITM_HealthBarPercentWWarning_HPP
#define UE4SS_SDK_ITM_HealthBarPercentWWarning_HPP

class UITM_HealthBarPercentWWarning_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* PingWarning;
    UImage* Image_RightGradient;
    UImage* Image_RightIcon;
    UImage* Line_RightPercent;
    UImage* Line_RightPercent2;
    UTextBlock* Text_RightPercent;
    bool ShowUpLine;

    void PreConstruct(bool IsDesignTime);
    void SetText(FText Text, bool PingWarning);
    void PingFinished();
    void Construct();
    void ExecuteUbergraph_ITM_HealthBarPercentWWarning(int32 EntryPoint, bool Temp_bool_Variable, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FText K2Node_CustomEvent_Text, bool K2Node_CustomEvent_PingWarning, FSlateColor K2Node_MakeStruct_SlateColor, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, ESlateVisibility K2Node_Select_Default);
}

#endif
