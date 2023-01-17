#ifndef UE4SS_SDK_WND_KPI_HPP
#define UE4SS_SDK_WND_KPI_HPP

class UWND_KPI_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBorder* Border_0;
    class UBasic_ButtonTab_C* BTN_Milestones;
    class UBasic_ButtonTab_C* BTN_Perks;
    class UBasic_ButtonTab_C* BTN_Statistics;
    class UTextBlock* MainHeader;
    class UMENU_SpaceRigTemplate_C* MENU_TopBar;
    class UWidgetSwitcher* TabSwitcher;
    class UUI_Milestone_View_C* VIEW_Milestones;
    class UUI_Perks_View_C* VIEW_Perks;
    class UUI_MissionStats_View_C* VIEW_Statistics;
    class UBasic_ButtonTab_C* ActiveTabButton;
    class UUI_KPI_Tab_C* ActiveTabContent;

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SelectNextTab(int32 Direction);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SelectTab(class UBasic_ButtonTab_C* Button, class UUI_KPI_Tab_C* Content);
    void BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
    void BndEvt__BTN_KPI_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__BTN_Perks_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void SelectStatistics();
    void BndEvt__KPIView_K2Node_ComponentBoundEvent_3_OnHasClaimableChanged__DelegateSignature(bool HasClaimable);
    void Close Window();
    void OnShown();
    void PreConstruct(bool IsDesignTime);
    void selectperks();
    void ExecuteUbergraph_WND_KPI(int32 EntryPoint);
};

#endif
