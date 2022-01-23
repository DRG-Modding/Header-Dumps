#ifndef UE4SS_SDK_WND_KPI_HPP
#define UE4SS_SDK_WND_KPI_HPP

class UWND_KPI_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_LargeWindowWithHeader_C* Basic_Menu_LargeWindowWithHeader;
    class UBasic_ButtonTab_C* BTN_Milestones;
    class UBasic_ButtonTab_C* BTN_Perks;
    class UBasic_ButtonTab_C* BTN_Statistics;
    class UMENU_SpaceRigTemplate_C* MENU_TopBar;
    class UWidgetSwitcher* TabSwitcher;
    class UUI_Milestone_View_C* VIEW_Milestones;
    class UUI_Perks_View_C* VIEW_Perks;
    class UUI_MissionStats_View_C* VIEW_Statistics;
    class UBasic_ButtonTab_C* ActiveTabButton;
    class UUI_KPI_Tab_C* ActiveTabContent;

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventbool CallFunc_IsValid_ReturnValue, bool CallFunc_IsSelectNext_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_HandleKeyEvent_OutHandled, FEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_IsSelectPrevious_ReturnValue, FEventReply CallFunc_Handled_ReturnValue_1, FEventReply CallFunc_Handled_ReturnValue_2);
    void SelectNextTab(int32 Direction, int32 Index, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_GetNumWidgets_ReturnValue, int32 CallFunc_SignOfInteger_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UUI_KPI_Tab_C* K2Node_Select_Default, class UBasic_ButtonTab_C* K2Node_Select_Default_1);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventbool CallFunc_IsValid_ReturnValue, bool CallFunc_HandleKeyEvent_OutHandled, FEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue, FEventReply CallFunc_Handled_ReturnValue_1);
    void SelectTab(class UBasic_ButtonTab_C* Button, class UUI_KPI_Tab_C* Content, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    void BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
    void BndEvt__BTN_KPI_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__BTN_Perks_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void SelectStatistics();
    void BndEvt__KPIView_K2Node_ComponentBoundEvent_3_OnHasClaimableChanged__DelegateSignature(bool HasClaimable);
    void Close Window();
    void OnShown();
    void ExecuteUbergraph_WND_KPI(int32 EntryPoint, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool K2Node_ComponentBoundEvent_HasClaimable, class UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_GetAmountOfPurchasedPerks_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue);
};

#endif
