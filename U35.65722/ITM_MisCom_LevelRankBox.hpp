#ifndef UE4SS_SDK_ITM_MisCom_LevelRankBox_HPP
#define UE4SS_SDK_ITM_MisCom_LevelRankBox_HPP

class UITM_MisCom_LevelRankBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BorderBottom;
    class UImage* BorderCenter;
    class UImage* BorderTop;
    class UTextBlock* DATA_CharacterLevel;
    class UICON_Rank_C* ICON_Rank;
    class UImage* RankBG;
    class UProgressBar* XP_bar;
    class AFSDPlayerState* PlayerState;

    void PreConstruct(bool IsDesignTime);
    void Update(class AFSDPlayerState* PlayerState);
    void ExecuteUbergraph_ITM_MisCom_LevelRankBox(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class AFSDPlayerState* K2Node_CustomEvent_PlayerState, FCharacterProgress CallFunc_GetSelectCharacterProgress_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, FSlateBrush K2Node_MakeStruct_SlateBrush, FProgressBarStyle K2Node_MakeStruct_ProgressBarStyle, FLinearColor CallFunc_MenuColors_OutputColor_2);
};

#endif
