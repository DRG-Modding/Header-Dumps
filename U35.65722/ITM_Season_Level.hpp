#ifndef UE4SS_SDK_ITM_Season_Level_HPP
#define UE4SS_SDK_ITM_Season_Level_HPP

class UITM_Season_Level_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ClaimSpecialGlow;
    class UWidgetAnimation* ClaimNormalGlow;
    class UWidgetAnimation* NextLevel;
    class UImage* BG_Color;
    class UImage* I_VerticalLine;
    class UImage* Image_NormalCheckmark;
    class UImage* Image_NormalClaim;
    class UImage* Image_NormalClaim_1;
    class UImage* Image_NormalShade;
    class UImage* Image_SelectedArrow;
    class UImage* Image_SelectedGlow;
    class UImage* Image_SelectedOutline;
    class UImage* Image_SelectedSmallArrow;
    class UImage* Image_TOP_SelectedArrow;
    class UImage* Image_TOP_SelectedGlow;
    class UImage* Image_TOP_SelectedSmallArrow;
    class UITM_Season_RewardImageSingle_C* ITM_BP_RewardImage;
    class UProgressBar* ProgressBar_Level;
    class UTextBlock* TextBlock_Level;
    int32 Level;
    bool HasNormalReward;
    bool NormalRewardLoaded;
    bool IsUnlocked;
    bool IsNormalClaimed;
    bool IsSpecialClaimed;
    bool HasBoughtSeason;
    FITM_Season_Level_CRewardClaimed RewardClaimed;
    void RewardClaimed(class UReward* Reward);
    FSeasonLevel LevelInfo;

    void RefreshState(bool CallFunc_Not_PreBool_ReturnValue, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsRewardClaimed_isNormalClaimed, bool CallFunc_IsRewardClaimed_isSpecialClaimed, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    void SetData(int32 inLevel, FSeasonLevel LevelInfo, bool LastInRow, bool IsCompleted, float ShadeAlpha, int32 SeasonLevel, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_GetSeasonBought_isBought, float CallFunc_GetLevelProgress_levelPercent, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, int32 CallFunc_GetSeasonLevel_level, float CallFunc_GetSeasonLevel_currentLevelPercent, int32 CallFunc_GetSeasonLevel_currentLevelXP, int32 CallFunc_GetSeasonLevel_LevelXPTotal, bool CallFunc_IsRewardClaimed_isNormalClaimed, bool CallFunc_IsRewardClaimed_isSpecialClaimed, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, bool CallFunc_IsRewardClaimed_isNormalClaimed_1, bool CallFunc_IsRewardClaimed_isSpecialClaimed_1, bool CallFunc_Not_PreBool_ReturnValue);
    void Construct();
    void NormalImageReady();
    void SetNextLevel(bool IsNextLevel);
    void SetClaimed(class UWidgetAnimation* Anim, bool ShowAsClaimed);
    void BndEvt__ITM_BP_RewardImage_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature();
    void BndEvt__ITM_BP_RewardImage_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature();
    void BndEvt__ITM_BP_RewardImage_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
    void BndEvt__ITM_BP_RewardImageSpecial_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
    void ExecuteUbergraph_ITM_Season_Level(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool K2Node_CustomEvent_IsNextLevel, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UWidgetAnimation* K2Node_CustomEvent_Anim, bool K2Node_CustomEvent_ShowAsClaimed, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ClaimReward_ReturnValue, bool CallFunc_ClaimReward_ReturnValue_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, FExecuteUbergraph_ITM_Season_LevelK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate);
    void RewardClaimed__DelegateSignature(class UReward* Reward);
};

#endif
