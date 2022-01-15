#ifndef UE4SS_SDK_ITM_Season_LevelInfinity_HPP
#define UE4SS_SDK_ITM_Season_LevelInfinity_HPP

class UITM_Season_LevelInfinity_C : USeasonInfinityLevelWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* ClaimSpecialGlow;
    UWidgetAnimation* ClaimNormalGlow;
    UWidgetAnimation* NextLevel;
    UImage* BG_Color;
    UImage* Image_NormalClaim;
    UImage* Image_SelectedArrow;
    UImage* Image_SelectedGlow;
    UImage* Image_SelectedOutline;
    UImage* Image_SelectedSmallArrow;
    UImage* Image_TOP_SelectedArrow;
    UImage* Image_TOP_SelectedGlow;
    UImage* Image_TOP_SelectedSmallArrow;
    UITM_Season_RewardImageSingle_C* ITM_BP_RewardImage;
    UProgressBar* ProgressBar_Level;
    UTextBlock* TextBlock_Level;
    bool IsUnlocked_0;
    bool IsNormalClaimed_0;
    bool IsSpecialClaimed_0;
    FITM_Season_LevelInfinity_CRewardClaimed RewardClaimed;
    void RewardClaimed(UReward* Reward);

    void BndEvt__ITM_BP_RewardImage_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature();
    void BndEvt__ITM_BP_RewardImage_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature();
    void BndEvt__ITM_BP_RewardImage_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
    void BndEvt__ITM_BP_RewardImageSpecial_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
    void RefreshState();
    void OnDataSet();
    void ExecuteUbergraph_ITM_Season_LevelInfinity(int32 EntryPoint, bool CallFunc_TryClaimReward_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TryClaimReward_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_GetLevelProgress_levelPercent);
    void RewardClaimed__DelegateSignature(UReward* Reward);
}

#endif
