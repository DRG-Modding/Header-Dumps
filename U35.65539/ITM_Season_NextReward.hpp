#ifndef UE4SS_SDK_ITM_Season_NextReward_HPP
#define UE4SS_SDK_ITM_Season_NextReward_HPP

class UITM_Season_NextReward_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* BGglow;
    UImage* BG_Top;
    UImage* I_Background;
    UImage* I_BG_Black;
    UImage* I_Gradient;
    UImage* Image_NextRewardOutline;
    UImage* Image_SelectedArrow;
    UImage* Image_SelectedArrow_1;
    UImage* Image_SelectedGlow;
    UImage* Image_SelectedSmallArrow;
    UImage* Image_SelectedSmallArrow_1;
    UImage* Image_SelectedSmallArrow_2;
    UITM_Season_RewardImageSingle_C* ITM_BP_RewardImageSingle;
    UITM_Season_CharacterIcon_C* ITM_Season_CharacterIcon;
    UITM_Season_Progress_Small_C* ITM_Season_Progress_Small;
    UOverlay* Overlay_1;
    UTextBlock* TextBlock_Category;
    UTextBlock* TextBlock_Title;
    UTextBlock* TextBlock_Title_1;

    UWidget* Get Tooltip();
    void SetData(FSeasonLevel Season Level);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Season_NextReward(int32 EntryPoint, FSeasonLevel K2Node_CustomEvent_Season_Level, bool K2Node_Event_IsDesignTime, FText CallFunc_GetRewardText_Title, FText CallFunc_GetRewardText_Category, FText CallFunc_GetRewardText_Description, bool CallFunc_GetRewardText_HasOptionalCharacterID, UPlayerCharacterID* CallFunc_GetRewardText_CharacterID, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor);
}

#endif
