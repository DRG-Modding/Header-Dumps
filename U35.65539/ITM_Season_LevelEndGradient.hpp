#ifndef UE4SS_SDK_ITM_Season_LevelEndGradient_HPP
#define UE4SS_SDK_ITM_Season_LevelEndGradient_HPP

class UITM_Season_LevelEndGradient_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* BG_Color;
    UImage* I_VerticalLine;
    UImage* Image_NotUnlocked;
    UProgressBar* ProgressBar_Level;
    URetainerBox* RetainerBox_Gradient;
    UTextBlock* TextBlock_Level;
    int32 Level;
    bool HasNormalReward;
    bool HasSpecialReward;
    bool NormalRewardLoaded;
    bool SpecialRewardLoaded;

    void Set Data(int32 Level, bool FirstInRow, float ShadeAlpha, int32 SeasonLevel, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, UMaterialInterface* Temp_object_Variable, UMaterialInterface* Temp_object_Variable_1, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UMaterialInterface* K2Node_Select_Default, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, int32 CallFunc_GetSeasonLevel_level, float CallFunc_GetSeasonLevel_currentLevelPercent, int32 CallFunc_GetSeasonLevel_currentLevelXP, int32 CallFunc_GetSeasonLevel_LevelXPTotal, int32 CallFunc_Add_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_GetLevelProgress_levelPercent, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default_1, bool CallFunc_Greater_IntInt_ReturnValue, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor);
    void SlowDownRender();
    void OnShown();
    void ExecuteUbergraph_ITM_Season_LevelEndGradient(int32 EntryPoint);
}

#endif
