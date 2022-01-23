#ifndef UE4SS_SDK_ITM_Season_LevelInfinity_HPP
#define UE4SS_SDK_ITM_Season_LevelInfinity_HPP

class UITM_Season_LevelInfinity_C : public USeasonInfinityLevelWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ClaimSpecialGlow;
    class UWidgetAnimation* ClaimNormalGlow;
    class UWidgetAnimation* NextLevel;
    class UImage* BG_Color;
    class UImage* Image_NormalClaim;
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
    bool IsUnlocked_0;
    bool IsNormalClaimed_0;
    bool IsSpecialClaimed_0;
    FITM_Season_LevelInfinity_CRewardClaimed RewardClaimed;
    void RewardClaimed(class UReward* Reward);

    void BndEvt__ITM_BP_RewardImage_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature();
    void BndEvt__ITM_BP_RewardImage_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature();
    void BndEvt__ITM_BP_RewardImage_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
    void BndEvt__ITM_BP_RewardImageSpecial_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
    void RefreshState();
    void OnDataSet();
    void ExecuteUbergraph_ITM_Season_LevelInfinity(int32 EntryPoint, bool CallFunc_TryClaimReward_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TryClaimReward_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_GetLevelProgress_levelPercent);
    void RewardClaimed__DelegateSignature(class UReward* Reward);
};

#endif
