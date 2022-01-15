#ifndef UE4SS_SDK_TOOLTIP_Season_EventBonus_HPP
#define UE4SS_SDK_TOOLTIP_Season_EventBonus_HPP

class UTOOLTIP_Season_EventBonus_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Intro;
    UTextBlock* +1;
    UImage* Image_Background;
    UImage* Image_NormalClaim_1;
    UImage* Scrip;
    UTextBlock* TextBlock_Status;
    UTextBlock* TextBlock_Title;

    ESlateVisibility SetScripAmountVisibility();
    void SetData(ESeasonVisibilityState State);
    void ExecuteUbergraph_TOOLTIP_Season_EventBonus(int32 EntryPoint, ESeasonVisibilityState Temp_byte_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, ESeasonVisibilityState K2Node_CustomEvent_State, FText K2Node_Select_Default, FString CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Contains_ReturnValue);
}

#endif
