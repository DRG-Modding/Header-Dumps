#ifndef UE4SS_SDK_TOOLTIP_Season_EventBonus_HPP
#define UE4SS_SDK_TOOLTIP_Season_EventBonus_HPP

class UTOOLTIP_Season_EventBonus_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UTextBlock* +1;
    class UImage* Image_Background;
    class UImage* Image_NormalClaim_1;
    class UImage* Scrip;
    class UTextBlock* TextBlock_Status;
    class UTextBlock* TextBlock_Title;

    ESlateVisibility SetScripAmountVisibility();
    void SetData(ESeasonVisibilityState State);
    void ExecuteUbergraph_TOOLTIP_Season_EventBonus(int32 EntryPoint, ESeasonVisibilityState Temp_byte_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, ESeasonVisibilityState K2Node_CustomEvent_State, FText K2Node_Select_Default, FString CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Contains_ReturnValue);
};

#endif
