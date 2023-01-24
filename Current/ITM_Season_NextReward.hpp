#ifndef UE4SS_SDK_ITM_Season_NextReward_HPP
#define UE4SS_SDK_ITM_Season_NextReward_HPP

class UITM_Season_NextReward_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* BGglow;
    class UImage* BG_Top;
    class UImage* I_Background;
    class UImage* I_BG_Black;
    class UImage* I_Gradient;
    class UImage* Image_NextRewardOutline;
    class UImage* Image_SelectedArrow;
    class UImage* Image_SelectedArrow_1;
    class UImage* Image_SelectedGlow;
    class UImage* Image_SelectedSmallArrow;
    class UImage* Image_SelectedSmallArrow_1;
    class UImage* Image_SelectedSmallArrow_2;
    class UITM_Season_RewardImageSingle_C* ITM_BP_RewardImageSingle;
    class UITM_Season_CharacterIcon_C* ITM_Season_CharacterIcon;
    class UITM_Season_Progress_Small_C* ITM_Season_Progress_Small;
    class UOverlay* Overlay_1;
    class UTextBlock* TextBlock_Category;
    class UTextBlock* TextBlock_Title;
    class UTextBlock* TextBlock_Title_1;

    class UWidget* Get Tooltip();
    void SetData(FSeasonLevel Season Level);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Season_NextReward(int32 EntryPoint);
};

#endif
