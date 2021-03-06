#ifndef UE4SS_SDK_TOOLTIP_Season_Levels_HPP
#define UE4SS_SDK_TOOLTIP_Season_Levels_HPP

class UTOOLTIP_Season_Levels_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UImage* Image_Background;
    class UTextBlock* TextBlock_Status;
    class UTextBlock* TextBlock_Title;

    void SetData(ESeasonVisibilityState State);
    void ExecuteUbergraph_TOOLTIP_Season_Levels(int32 EntryPoint, ESeasonVisibilityState Temp_byte_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, ESeasonVisibilityState K2Node_CustomEvent_State, FText K2Node_Select_Default);
};

#endif
