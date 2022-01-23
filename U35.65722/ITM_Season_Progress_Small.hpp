#ifndef UE4SS_SDK_ITM_Season_Progress_Small_HPP
#define UE4SS_SDK_ITM_Season_Progress_Small_HPP

class UITM_Season_Progress_Small_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* I_BG_Black;
    class UImage* I_BG_BlueGradient;
    class UImage* Image_152;
    class UProgressBar* ProgressBar_262;
    class UTextBlock* Text_CurrentLevel;
    class UTextBlock* TextBlock_NextReward;
    class UTextBlock* TextBlock_XP;

    void Construct();
    void ExecuteUbergraph_ITM_Season_Progress_Small(int32 EntryPoint, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_GetSeasonLevel_level, float CallFunc_GetSeasonLevel_currentLevelPercent, int32 CallFunc_GetSeasonLevel_currentLevelXP, int32 CallFunc_GetSeasonLevel_LevelXPTotal, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue, FText CallFunc_Format_ReturnValue_1);
};

#endif
