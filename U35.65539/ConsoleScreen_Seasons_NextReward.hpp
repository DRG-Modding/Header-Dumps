#ifndef UE4SS_SDK_ConsoleScreen_Seasons_NextReward_HPP
#define UE4SS_SDK_ConsoleScreen_Seasons_NextReward_HPP

class UConsoleScreen_Seasons_NextReward_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* BGglow;
    UBorder* Border_3;
    UImage* I_Background;
    UImage* I_Gradient;
    UITM_Season_RewardImageSingle_C* ITM_BP_RewardImageSingle;
    UITM_Season_CharacterIcon_C* ITM_Season_CharacterIcon;
    UTextBlock* TextBlock_Category;
    UTextBlock* TextBlock_Title;
    UTextBlock* TextBlock_Title_1;

    void SetData(FSeasonLevel Season Level);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ConsoleScreen_Seasons_NextReward(int32 EntryPoint, FSeasonLevel K2Node_CustomEvent_Season_Level, bool K2Node_Event_IsDesignTime, FText CallFunc_GetRewardText_Title, FText CallFunc_GetRewardText_Category, FText CallFunc_GetRewardText_Description, bool CallFunc_GetRewardText_HasOptionalCharacterID, UPlayerCharacterID* CallFunc_GetRewardText_CharacterID, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FSeasonLevel CallFunc_GetNextReward_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor);
}

#endif
