#ifndef UE4SS_SDK_ITM_Season_Progress_TerminalVersion_HPP
#define UE4SS_SDK_ITM_Season_Progress_TerminalVersion_HPP

class UITM_Season_Progress_TerminalVersion_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBorder* Border_3;
    UImage* I_BG_Black;
    UImage* I_BG_BlueGradient;
    UImage* Image_152;
    UProgressBar* ProgressBar_262;
    UTextBlock* Text_CurrentLevel;
    UTextBlock* Text_CurrentLevel_1;
    UTextBlock* TextBlock_XP;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITM_Season_Progress_TerminalVersion(int32 EntryPoint, bool K2Node_Event_IsDesignTime, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, int32 CallFunc_GetSeasonLevel_level, float CallFunc_GetSeasonLevel_currentLevelPercent, int32 CallFunc_GetSeasonLevel_currentLevelXP, int32 CallFunc_GetSeasonLevel_LevelXPTotal, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Format_ReturnValue);
}

#endif
