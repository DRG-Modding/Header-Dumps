#ifndef UE4SS_SDK_WND_Season_RewardClaimed_HPP
#define UE4SS_SDK_WND_Season_RewardClaimed_HPP

class UWND_Season_RewardClaimed_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Glow;
    class UWidgetAnimation* Zoom;
    class UWidgetAnimation* Intro;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_2;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_3;
    class UBorder* Border_Glow;
    class UButton* Button_0;
    class UOverlay* CustomOverlay;
    class UImage* Image_Background_Black;
    class UImage* Image_Background_Smoke;
    class UImage* Image_SelectedArrow;
    class UITM_Season_CharacterIcon_C* ITM_Season_CharacterIcon;
    class UITM_Season_RewardImageSingle_C* ITM_Season_RewardImageSingle;
    class UOverlay* Overlay_Skin;
    class UTextBlock* TextBlock_Category;
    class UTextBlock* TextBlock_Title;
    class UTextBlock* TextBlock_Unlocked;
    class UReward* Reward;
    FWND_Season_RewardClaimed_COnWindowClose OnWindowClose;
    void OnWindowClose();

    void SetDataFromReward(class UReward* Reward);
    void Setup();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void SetDataFromSkin(class UItemSkin* InSkin, class UItemID* InOptionalItem, class UPlayerCharacterID* InOptionalCharacter);
    void ClearCustomOverlays();
    void AddCustomOverlay(class UUserWidget* InCustomWidget, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment, FMargin Padding);
    void ExecuteUbergraph_WND_Season_RewardClaimed(int32 EntryPoint);
    void OnWindowClose__DelegateSignature();
};

#endif
