#ifndef UE4SS_SDK_ITM_Season_Progress_TerminalVersion_HPP
#define UE4SS_SDK_ITM_Season_Progress_TerminalVersion_HPP

class UITM_Season_Progress_TerminalVersion_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_3;
    class UImage* I_BG_Black;
    class UImage* I_BG_BlueGradient;
    class UImage* Image_152;
    class UProgressBar* ProgressBar_262;
    class UTextBlock* Text_CurrentLevel;
    class UTextBlock* Text_CurrentLevel_1;
    class UTextBlock* TextBlock_XP;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITM_Season_Progress_TerminalVersion(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, int32 CallFunc_GetSeasonLevel_level, float CallFunc_GetSeasonLevel_currentLevelPercent, int32 CallFunc_GetSeasonLevel_currentLevelXP, int32 CallFunc_GetSeasonLevel_LevelXPTotal, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Format_ReturnValue);
};

#endif
