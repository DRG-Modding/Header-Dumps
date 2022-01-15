#ifndef UE4SS_SDK_ITM_Season_Progress_Small_HPP
#define UE4SS_SDK_ITM_Season_Progress_Small_HPP

class UITM_Season_Progress_Small_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* I_BG_Black;
    UImage* I_BG_BlueGradient;
    UImage* Image_152;
    UProgressBar* ProgressBar_262;
    UTextBlock* Text_CurrentLevel;
    UTextBlock* TextBlock_NextReward;
    UTextBlock* TextBlock_XP;

    void Construct();
    void ExecuteUbergraph_ITM_Season_Progress_Small(int32 EntryPoint, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_GetSeasonLevel_level, float CallFunc_GetSeasonLevel_currentLevelPercent, int32 CallFunc_GetSeasonLevel_currentLevelXP, int32 CallFunc_GetSeasonLevel_LevelXPTotal, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue, FText CallFunc_Format_ReturnValue_1);
}

#endif
