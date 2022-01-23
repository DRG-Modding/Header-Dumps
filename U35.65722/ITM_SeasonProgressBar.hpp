#ifndef UE4SS_SDK_ITM_SeasonProgressBar_HPP
#define UE4SS_SDK_ITM_SeasonProgressBar_HPP

class UITM_SeasonProgressBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TrailTurnBlue;
    class UWidgetAnimation* NewLevel;
    class UImage* Image_96;
    class UImage* Image_258;
    class UImage* Image_NormalClaim;
    class UProgressBar* ProgressBar_LevelPercent;
    class UProgressBar* ProgressBar_Trail;
    class UTextBlock* Text_NextLevel;
    class UTextBlock* Text_PrevLevel;
    class UTextBlock* TextBlock_Slash;
    class UTextBlock* TextBlock_TotalXP;
    class UTextBlock* TextBlock_XP;
    float AnimTime;
    FITM_SeasonProgressBar_CXPCountFinished XPCountFinished;
    void XPCountFinished();
    bool IsCountingMissionXP;
    int32 CurrentLevelTotal;
    FITM_SeasonProgressBar_CLevelReached LevelReached;
    void LevelReached(int32 Level);

    void AnimateCount();
    void AnimateXP(int32 FromLevel, int32 ToLevel, float FromPercent, float ToPercent, int32 FromXP, int32 ToXP);
    void UpdateText(int32 CurrentLevel, float Percent);
    void UpdateTextFromXP(int32 XP);
    void UpdateXPText(int32 currXP);
    void ContinueCount();
    void ExecuteUbergraph_ITM_SeasonProgressBar(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float Temp_float_Variable, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Variable, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_GetMissionSuccessful_ReturnValue, int32 K2Node_CustomEvent_FromLevel, int32 K2Node_CustomEvent_ToLevel, float K2Node_CustomEvent_FromPercent, float K2Node_CustomEvent_ToPercent, int32 K2Node_CustomEvent_FromXP, int32 K2Node_CustomEvent_ToXP, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Lerp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 K2Node_CustomEvent_CurrentLevel, float K2Node_CustomEvent_Percent, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, float Temp_float_Variable_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue_1, int32 CallFunc_Round_ReturnValue, float CallFunc_Lerp_ReturnValue_2, int32 K2Node_CustomEvent_XP, int32 Temp_int_Loop_Counter_Variable, int32 K2Node_CustomEvent_currXP, int32 CallFunc_Add_IntInt_ReturnValue_2, FText CallFunc_Conv_IntToText_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_3, FText CallFunc_Conv_IntToText_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, int32 CallFunc_Round_ReturnValue_1, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, int32 CallFunc_GetLevelXP_ReturnValue, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, int32 CallFunc_GetSeasonLevelFromXP_level, float CallFunc_GetSeasonLevelFromXP_currentLevelPercent, int32 CallFunc_GetSeasonLevelFromXP_currentLevelXP, int32 CallFunc_GetSeasonLevelFromXP_LevelXPTotal, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, FText CallFunc_Conv_IntToText_ReturnValue_3, FSeasonMissionResult CallFunc_GetSeasonMissionResult_ReturnValue, int32 CallFunc_GetSeasonXP_ReturnValue, int32 CallFunc_GetSeasonLevelFromXP_level_1, float CallFunc_GetSeasonLevelFromXP_currentLevelPercent_1, int32 CallFunc_GetSeasonLevelFromXP_currentLevelXP_1, int32 CallFunc_GetSeasonLevelFromXP_LevelXPTotal_1, FSeasonEvent CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_GetSeasonLevelFromXP_level_2, float CallFunc_GetSeasonLevelFromXP_currentLevelPercent_2, int32 CallFunc_GetSeasonLevelFromXP_currentLevelXP_2, int32 CallFunc_GetSeasonLevelFromXP_LevelXPTotal_2);
    void LevelReached__DelegateSignature(int32 Level);
    void XPCountFinished__DelegateSignature();
};

#endif
