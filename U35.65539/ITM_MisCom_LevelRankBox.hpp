#ifndef UE4SS_SDK_ITM_MisCom_LevelRankBox_HPP
#define UE4SS_SDK_ITM_MisCom_LevelRankBox_HPP

class UITM_MisCom_LevelRankBox_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* BorderBottom;
    UImage* BorderCenter;
    UImage* BorderTop;
    UTextBlock* DATA_CharacterLevel;
    UICON_Rank_C* ICON_Rank;
    UImage* RankBG;
    UProgressBar* XP_bar;
    AFSDPlayerState* PlayerState;

    void PreConstruct(bool IsDesignTime);
    void Update(UFSDPlayerState* PlayerState);
    void ExecuteUbergraph_ITM_MisCom_LevelRankBox(int32 EntryPoint, bool K2Node_Event_IsDesignTime, UFSDPlayerState* K2Node_CustomEvent_PlayerState, FCharacterProgress CallFunc_GetSelectCharacterProgress_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, FSlateBrush K2Node_MakeStruct_SlateBrush, FProgressBarStyle K2Node_MakeStruct_ProgressBarStyle, FLinearColor CallFunc_MenuColors_OutputColor_2);
}

#endif
