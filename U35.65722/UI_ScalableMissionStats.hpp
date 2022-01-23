#ifndef UE4SS_SDK_UI_ScalableMissionStats_HPP
#define UE4SS_SDK_UI_ScalableMissionStats_HPP

class UUI_ScalableMissionStats_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_1;
    class UTextBlock* DATA_Deaths;
    class UTextBlock* Data_Kills;
    class UTextBlock* Data_Mining;
    class UTextBlock* Data_Revives;
    class UImage* Icon_Kills;
    class UImage* Icon_Mining;
    class UImage* Icon_Revives;
    class UImage* Image_Deaths;
    class USizeBox* SizeBox_1;
    class USpacer* Spacer_90;
    float LeftMargin;
    float Width;

    void FromPlayerState(class AFSDPlayerState* PlayerState);
    void SetData(int32 Kills, float ResourcesMined, int32 PlayersRevived, int32 TimesKilled, int32 CallFunc_FFloor_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue_2, FText CallFunc_Conv_IntToText_ReturnValue_3);
    void SetWidth(float Width);
    void SetLeftMargin(float LeftMargin, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void SetColors(FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_ScalableMissionStats(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
