#ifndef UE4SS_SDK_MENU_Forge_HPP
#define UE4SS_SDK_MENU_Forge_HPP

class UMENU_Forge_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimShowMasteryBar;
    class UWidgetAnimation* AnimEnterSelection;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_142;
    class UBasic_ButtonScalable2_C* ButtonHistory;
    class UBasic_ButtonScalable2_C* ButtonSkip;
    class UBasic_ButtonScalable2_C* CancelForgeBtn;
    class UUI_Forge_MasteryBar_C* Forge_MasteryBar;
    class UITM_BigButton_C* ForgeButton;
    class UUI_Forge_SchematicList_C* ForgeHistoryList;
    class UUI_Forge_SchematicList_C* ForgeInventoryList;
    class UUI_HorizontalResourceBar_C* ForgeItemCost;
    class UWidgetSwitcher* ListSwitcher;
    class UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate;
    class UMENU_LockedTemplate_C* Overlay_ConsoleLocked;
    class UUI_Forge_Completed_C* Overlay_ForgingCompleted;
    class UOverlay* Overlay_HideCursor;
    class UUI_Forge_Rewards_Display_C* Overlay_MasteryReward;
    class UUI_Forge_Rewards_Selector_C* Overlay_Rewards_Selector;
    class UOverlay* Overlay_StartForging;
    class UUI_Forge_Details_C* UI_Forge_Details;
    class UBorder* WindowBorder;
    class UTextBlock* WindowHeader;
    float ItemSize;
    class UUI_Forge_Schematic_C* SelectedItem;
    bool SelectionBoxOpen;
    bool ItemPopUpOpen;
    bool MasteryBarOpen;
    float EnterAnimSpeed;
    class USchematic* ForgingMasteryReward;
    FForgingResult ForgingResult;
    bool XPBarUpdatesAllowed;

    void SetCursorVisible(bool IsVisible);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ToggleMasteryBar(bool Visible, bool AllowClaimButton);
    void Forge Schematic(class UUI_Forge_Schematic_C* InSchematic, bool& success);
    void ToggleItemPopUp(bool Visible);
    void ToggleSelectionList(bool Visible);
    void IncreaseCraftingStat();
    void SetHeader(const FText InText);
    void ShowSkipButton(bool InVisible);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void ShowList(bool History, bool Force Rebuild);
    void ShowItem(class UUI_Forge_Schematic_C* Item);
    void Refresh();
    void UpdateLevelProgress(bool animate);
    void BndEvt__TabOverclocks_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature(class UUI_Forge_Schematic_C* Item);
    void OnShown();
    void BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_8_OnBackClicked__DelegateSignature();
    void OnForgingXPChanged_Event(float XP);
    void BndEvt__CancelForgeBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ForgeDone();
    void BndEvt__UI_Forge_Completed_K2Node_ComponentBoundEvent_3_OnFinished__DelegateSignature();
    void BndEvt__UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_4_OnCountingFinished__DelegateSignature(uint8 Reward);
    void BndEvt__UI_Forge_MasteryReward_K2Node_ComponentBoundEvent_6_OnFinished__DelegateSignature();
    void Display Pending Mastery Reward();
    void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ShoutLocally(float Delay, class UDialogDataAsset* ShoutData);
    void ShoutLocallySoftPtr(float Delay, TSoftObjectPtr<UDialogDataAsset> ShoutData);
    void OnClosed();
    void BndEvt__ButtonSkip_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
    void BndEvt__MENU_Forge_Forge_Rewards_Selector_K2Node_ComponentBoundEvent_5_OnRewardSelected__DelegateSignature(class USchematic* InReward);
    void FinishMasteryReward();
    void BndEvt__MENU_Forge_UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_10_OnClaimClicked__DelegateSignature(int32 InLevel, int32 InSeed);
    void ExecuteUbergraph_MENU_Forge(int32 EntryPoint);
};

#endif
