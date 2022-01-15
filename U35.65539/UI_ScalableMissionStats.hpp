#ifndef UE4SS_SDK_UI_ScalableMissionStats_HPP
#define UE4SS_SDK_UI_ScalableMissionStats_HPP

class UUI_ScalableMissionStats_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBorder* Border_1;
    UTextBlock* DATA_Deaths;
    UTextBlock* Data_Kills;
    UTextBlock* Data_Mining;
    UTextBlock* Data_Revives;
    UImage* Icon_Kills;
    UImage* Icon_Mining;
    UImage* Icon_Revives;
    UImage* Image_Deaths;
    USizeBox* SizeBox_1;
    USpacer* Spacer_90;
    float LeftMargin;
    float Width;

    void FromPlayerState(UFSDPlayerState* PlayerState);
    void SetData(int32 Kills, float ResourcesMined, int32 PlayersRevived, int32 TimesKilled, int32 CallFunc_FFloor_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue_2, FText CallFunc_Conv_IntToText_ReturnValue_3);
    void SetWidth(float Width);
    void SetLeftMargin(float LeftMargin, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void SetColors(FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_ScalableMissionStats(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
