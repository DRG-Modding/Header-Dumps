#ifndef UE4SS_SDK_ITM_Challenge_InfoBox_HPP
#define UE4SS_SDK_ITM_Challenge_InfoBox_HPP

class UITM_Challenge_InfoBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* HoverAnim;
    class UWidgetAnimation* ClickAnim;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UImage* BG_Solid;
    class UButton* BTN_Info;
    class UButton* Button_Arrow;
    class UGridPanel* Grid_Challenges;
    class UImage* Image_BG;
    class UOverlay* InfoOverlay;
    class UOverlay* Overlay_ChallengeIcon;
    class UOverlay* Overlay_Challenges;
    class USizeBox* SBOX_ButtonGFX;
    bool IsOpen;
    FITM_Challenge_InfoBox_COnChallengeHovered OnChallengeHovered;
    void OnChallengeHovered(TArray<class UObject*>& AssetReferences, bool InHovered, class USeasonChallenge* Challenge);

    void OnNewChallenge();
    void AddChallengeToGrid(FChallengeInfo ChallengeInfo, int32 Column, class UItm_SeasonChallenge_Small_C*& W_Challenge);
    void SetOpen(bool InIsOpen);
    void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void RefreshChallenges();
    void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Arrow_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void OnChallengeHover(bool IsHovered, int32 Index);
    void Construct();
    void Click();
    void ExecuteUbergraph_ITM_Challenge_InfoBox(int32 EntryPoint);
    void OnChallengeHovered__DelegateSignature(TArray<class UObject*>& AssetReferences, bool InHovered, class USeasonChallenge* Challenge);
};

#endif
