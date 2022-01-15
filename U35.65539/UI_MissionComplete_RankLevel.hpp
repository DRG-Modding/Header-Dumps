#ifndef UE4SS_SDK_UI_MissionComplete_RankLevel_HPP
#define UE4SS_SDK_UI_MissionComplete_RankLevel_HPP

class UUI_MissionComplete_RankLevel_C : UMissionPlayerAndCharacterWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* BorderBottom;
    UImage* BorderCenter;
    UImage* BorderTop;
    UICON_Rank_C* ICON_Rank_C_0;
    UImage* Image_0;
    UTextBlock* TextBlock_Level;
    UProgressBar* XP_bar;
    FUI_MissionComplete_RankLevel_CCounterAnimFinished CounterAnimFinished;
    void CounterAnimFinished();
    float StartTime;

    void SetBorderColor(FLinearColor InColorAndOpacity);
    void SetRankStarsAndLevel(int32 Rank, int32 Stars, int32 Level, float LevelProgress, FText CallFunc_Conv_IntToText_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Begin(UFSDPlayerState* PlayerState);
    void Finish(UFSDPlayerState* PlayerState);
    void PingPlayerRank();
    void UpdateValues(int32 PlayerRank, int32 PlayerStars, int32 CharacterLevel, float CharacterProgress);
    void PingCharacterLevel(int32 Level, int32 Stars);
    void Start Counter(FPlayerProgress PlayerProgressStart, FPlayerProgress PlayerProgressFinish, FCharacterProgress CharacterProgressStart, FCharacterProgress CharacterProgressFinish);
    void ExecuteUbergraph_UI_MissionComplete_RankLevel(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_2, UFSDPlayerState* K2Node_CustomEvent_PlayerState_1, UFSDPlayerState* K2Node_CustomEvent_PlayerState, int32 K2Node_Event_PlayerRank, int32 K2Node_Event_PlayerStars, int32 K2Node_Event_CharacterLevel, float K2Node_Event_CharacterProgress, int32 K2Node_Event_Level, int32 K2Node_Event_Stars, FPlayerProgress K2Node_CustomEvent_PlayerProgressStart, FPlayerProgress K2Node_CustomEvent_PlayerProgressFinish, FCharacterProgress K2Node_CustomEvent_CharacterProgressStart, FCharacterProgress K2Node_CustomEvent_CharacterProgressFinish, bool CallFunc_StepCounter_CounterFinished, FSlateBrush K2Node_MakeStruct_SlateBrush, FProgressBarStyle K2Node_MakeStruct_ProgressBarStyle, FLinearColor CallFunc_MenuColors_OutputColor_3, FLinearColor CallFunc_MenuColors_OutputColor_4, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue);
    void CounterAnimFinished__DelegateSignature();
}

#endif
