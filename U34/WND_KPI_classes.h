// WidgetBlueprintGeneratedClass WND_KPI.WND_KPI_C
// Size: 0x2d0 (Inherited: 0x270)
struct UWND_KPI_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBasic_Menu_LargeWindowWithHeader_C* Basic_Menu_LargeWindowWithHeader; // 0x278(0x08)
	struct UBasic_ButtonTab_C* BTN_Milestones; // 0x280(0x08)
	struct UBasic_ButtonTab_C* BTN_Perks; // 0x288(0x08)
	struct UBasic_ButtonTab_C* BTN_Statistics; // 0x290(0x08)
	struct UMENU_SpaceRigTemplate_C* MENU_TopBar; // 0x298(0x08)
	struct UWidgetSwitcher* TabSwitcher; // 0x2a0(0x08)
	struct UUI_Milestone_View_C* VIEW_Milestones; // 0x2a8(0x08)
	struct UUI_Perks_View_C* VIEW_Perks; // 0x2b0(0x08)
	struct UUI_MissionStats_View_C* VIEW_Statistics; // 0x2b8(0x08)
	struct UBasic_ButtonTab_C* ActiveTabButton; // 0x2c0(0x08)
	struct UUI_KPI_Tab_C* ActiveTabContent; // 0x2c8(0x08)

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WND_KPI.WND_KPI_C.OnKeyDown
	void SelectNextTab(int32_t Direction); // Function WND_KPI.WND_KPI_C.SelectNextTab
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WND_KPI.WND_KPI_C.OnKeyUp
	void SelectTab(struct UBasic_ButtonTab_C* Button, struct UUI_KPI_Tab_C* Content); // Function WND_KPI.WND_KPI_C.SelectTab
	void BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(); // Function WND_KPI.WND_KPI_C.BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	void BndEvt__BTN_KPI_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function WND_KPI.WND_KPI_C.BndEvt__BTN_KPI_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__BTN_Perks_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function WND_KPI.WND_KPI_C.BndEvt__BTN_Perks_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void SelectStatistics(); // Function WND_KPI.WND_KPI_C.SelectStatistics
	void BndEvt__KPIView_K2Node_ComponentBoundEvent_3_OnHasClaimableChanged__DelegateSignature(bool HasClaimable); // Function WND_KPI.WND_KPI_C.BndEvt__KPIView_K2Node_ComponentBoundEvent_3_OnHasClaimableChanged__DelegateSignature
	void Close Window(); // Function WND_KPI.WND_KPI_C.Close Window
	void OnShown(); // Function WND_KPI.WND_KPI_C.OnShown
	void ExecuteUbergraph_WND_KPI(int32_t EntryPoint); // Function WND_KPI.WND_KPI_C.ExecuteUbergraph_WND_KPI
};

