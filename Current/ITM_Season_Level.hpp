#ifndef UE4SS_SDK_ITM_Season_Level_HPP
#define UE4SS_SDK_ITM_Season_Level_HPP

class UITM_Season_Level_C : public USeasonLevelWidget
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

    void BndEvt__ITM_BP_RewardImage_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature();
    void BndEvt__ITM_BP_RewardImage_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature();
    void BndEvt__ITM_BP_RewardImage_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
    void OnDataSet();
    void RefreshState();
    void ExecuteUbergraph_ITM_Season_Level(int32 EntryPoint);
};

#endif
