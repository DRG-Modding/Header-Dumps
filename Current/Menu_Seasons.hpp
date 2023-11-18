#ifndef UE4SS_SDK_Menu_Seasons_HPP
#define UE4SS_SDK_Menu_Seasons_HPP

class UMenu_Seasons_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ShowSeasonPage;
    class UWidgetAnimation* NotEnoughTokens;
    class UWidgetAnimation* NewSectionOpen;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UHeader_ButtonCutCorner_C* BTN_CheatCollectCellRack;
    class UHeader_ButtonCutCorner_C* BTN_ClearChallenges;
    class UHeader_ButtonCutCorner_C* BTN_EndFlow_Little;
    class UHeader_ButtonCutCorner_C* BTN_EndFlow_Medium;
    class UHeader_ButtonCutCorner_C* BTN_EndFlow_Much;
    class UHeader_ButtonCutCorner_C* BTN_Maintenance;
    class UHeader_ButtonCutCorner_C* BTN_NewChallenge;
    class UHeader_ButtonCutCorner_C* BTN_ResetRenew;
    class UHeader_ButtonCutCorner_C* BTN_ResetReroll;
    class UHeader_ButtonCutCorner_C* BTN_Season;
    class UHeader_ButtonCutCorner_C* BTN_ShowCheats;
    class UHeader_ButtonCutCorner_C* BTN_Story;
    class UHeader_ButtonCutCorner_C* BTN_TreeOfVanity;
    class UBasic_ButtonScalable2_C* CloseButton;
    class UVerticalBox* HBox_Cheats;
    class UImage* Icon_Token;
    class UImage* Image_BlackgroundDim;
    class UITM_SeasonLogo_C* ITM_SeasonLogo;
    class UITM_SeasonMenu_BG_C* ITM_SeasonMenu_BG;
    class UUI_AdvancedLabel_C* OptionIconNext;
    class UUI_AdvancedLabel_C* OptionIconPrev;
    class UTextBlock* Text_NumberOfTokens;
    class UUI_PlayerSpeaking_List_C* UI_PlayerSpeaking_List;
    class UVerticalBox* VerticalBox_Cheats;
    class UWnd_SeasonBriefing_C* Wnd_SeasonBriefing;
    class UWND_SeasonOverview_C* WND_SeasonOverview;
    class UWND_TreeOfVanity_C* WND_TreeOfVanity;
    class UWND_WeaponMaintenance_C* WND_WeaponMaintenance;
    class UHeader_ButtonCutCorner_C* SelectedButton;
    class UMissionStat* CellStat;
    class UMissionStat* RackStat;
    class UWindowWidget* SelectedSection;
    TArray<class UWindowWidget*> Sections;
    TArray<class UHeader_ButtonCutCorner_C*> buttons;
    bool CanShowExclamation;

    void SelectSection(class UWindowWidget* InSection, class UHeader_ButtonCutCorner_C* InButton);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Start End Flow(int32 numberOfChallenges, bool hasEvent, int32 ExtrsXP);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Toggle Button On(class UHeader_ButtonCutCorner_C* Button);
    void BndEvt__BTN_Season_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void BndEvt__BTN_TreeOfVanity_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void OnXPChanged();
    void Construct();
    void OnTokensChanged(int32 NumberOfTokens, int32 Change);
    void OnClickedWithoutTokens();
    void BndEvt__BTN_TestEndFlow_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void OnShown();
    void OnClosed();
    void BndEvt__BTN_ResetReroll_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void BndEvt__BTN_NewChallenge_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void BndEvt__BTN_ClearChallenges_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void BndEvt__BTN_ResetRenew_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void BndEvt__BTN_CheatCollectCellRack_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void BndEvt__BTN_TestEndFlow3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void BndEvt__BTN_TestEndFlow2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void BndEvt__BTN_Story_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void BndEvt__BTN_ShowCheats_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void PreConstruct(bool IsDesignTime);
    void HideScripExclamation(bool InHide);
    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
    void BndEvt__Menu_Seasons_BTN_Maintenance_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void UpdateWeaponMaintenance();
    void BndEvt__Menu_Seasons_Wnd_WeaponMaintenance_K2Node_ComponentBoundEvent_14_OnWeaponMaintenanceChanged__DelegateSignature();
    void ExecuteUbergraph_Menu_Seasons(int32 EntryPoint);
};

#endif
