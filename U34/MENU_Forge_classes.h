// WidgetBlueprintGeneratedClass MENU_Forge.MENU_Forge_C
// Size: 0x331 (Inherited: 0x270)
struct UMENU_Forge_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* AnimShowMasteryBar; // 0x278(0x08)
	struct UWidgetAnimation* AnimEnterSelection; // 0x280(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_143; // 0x288(0x08)
	struct UBasic_ButtonScalable2_C* ButtonHistory; // 0x290(0x08)
	struct UBasic_ButtonScalable2_C* CancelForgeBtn; // 0x298(0x08)
	struct UUI_Forge_SchematicList_C* ForgeHistoryList; // 0x2a0(0x08)
	struct UUI_Forge_SchematicList_C* ForgeInventoryList; // 0x2a8(0x08)
	struct UUI_HorizontalResourceBar_C* ForgeItemCost; // 0x2b0(0x08)
	struct UOverlay* ForgePopUpOverlay; // 0x2b8(0x08)
	struct UITM_BigButton_C* ITM_BigButton; // 0x2c0(0x08)
	struct UWidgetSwitcher* ListSwitcher; // 0x2c8(0x08)
	struct UMENU_LockedTemplate_C* MENU_LockedTemplate; // 0x2d0(0x08)
	struct UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate; // 0x2d8(0x08)
	struct UUI_Forge_Completed_C* UI_Forge_Completed; // 0x2e0(0x08)
	struct UUI_Forge_Details_C* UI_Forge_Details; // 0x2e8(0x08)
	struct UUI_Forge_MasteryBar_C* UI_Forge_MasteryBar; // 0x2f0(0x08)
	struct UUI_Forge_MasteryReward_C* UI_Forge_MasteryReward; // 0x2f8(0x08)
	struct UBorder* WindowBorder; // 0x300(0x08)
	struct UTextBlock* WindowHeader; // 0x308(0x08)
	float ItemSize; // 0x310(0x04)
	char UnknownData_314[0x4]; // 0x314(0x04)
	struct UUI_Forge_Schematic_C* SelectedItem; // 0x318(0x08)
	bool SelectionBoxOpen; // 0x320(0x01)
	bool ItemPopUpOpen; // 0x321(0x01)
	bool MasteryBarOpen; // 0x322(0x01)
	char UnknownData_323[0x1]; // 0x323(0x01)
	float EnterAnimSpeed; // 0x324(0x04)
	struct USchematic* ForgingMasteryReward; // 0x328(0x08)
	bool XPBarUpdatesAllowed; // 0x330(0x01)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function MENU_Forge.MENU_Forge_C.OnMouseButtonUp
	void ToggleMasteryBar(bool Visible); // Function MENU_Forge.MENU_Forge_C.ToggleMasteryBar
	void Forge Schematic(struct UUI_Forge_Schematic_C* InSchematic, bool success); // Function MENU_Forge.MENU_Forge_C.Forge Schematic
	void ToggleItemPopUp(bool Visible); // Function MENU_Forge.MENU_Forge_C.ToggleItemPopUp
	void ToggleSelectionList(bool Visible); // Function MENU_Forge.MENU_Forge_C.ToggleSelectionList
	void IncreaseCraftingStat(); // Function MENU_Forge.MENU_Forge_C.IncreaseCraftingStat
	void SetHeader(struct FText InText); // Function MENU_Forge.MENU_Forge_C.SetHeader
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function MENU_Forge.MENU_Forge_C.OnKeyUp
	void ShowList(bool History, bool Force Rebuild); // Function MENU_Forge.MENU_Forge_C.ShowList
	void ShowItem(struct UUI_Forge_Schematic_C* Item); // Function MENU_Forge.MENU_Forge_C.ShowItem
	void Refresh(); // Function MENU_Forge.MENU_Forge_C.Refresh
	void UpdateLevelProgress(bool animate); // Function MENU_Forge.MENU_Forge_C.UpdateLevelProgress
	void BndEvt__TabOverclocks_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature(struct UUI_Forge_Schematic_C* Item); // Function MENU_Forge.MENU_Forge_C.BndEvt__TabOverclocks_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature
	void BndEvt__ForgeBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(); // Function MENU_Forge.MENU_Forge_C.BndEvt__ForgeBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	void OnShown(); // Function MENU_Forge.MENU_Forge_C.OnShown
	void BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_8_OnBackClicked__DelegateSignature(); // Function MENU_Forge.MENU_Forge_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_8_OnBackClicked__DelegateSignature
	void BndEvt__CancelForgeBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function MENU_Forge.MENU_Forge_C.BndEvt__CancelForgeBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function MENU_Forge.MENU_Forge_C.BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void ForgeDone(); // Function MENU_Forge.MENU_Forge_C.ForgeDone
	void BndEvt__UI_Forge_Completed_K2Node_ComponentBoundEvent_3_OnFinished__DelegateSignature(); // Function MENU_Forge.MENU_Forge_C.BndEvt__UI_Forge_Completed_K2Node_ComponentBoundEvent_3_OnFinished__DelegateSignature
	void BndEvt__UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_4_OnCountingFinished__DelegateSignature(char Reward); // Function MENU_Forge.MENU_Forge_C.BndEvt__UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_4_OnCountingFinished__DelegateSignature
	void BndEvt__UI_Forge_MasteryReward_K2Node_ComponentBoundEvent_6_OnFinished__DelegateSignature(); // Function MENU_Forge.MENU_Forge_C.BndEvt__UI_Forge_MasteryReward_K2Node_ComponentBoundEvent_6_OnFinished__DelegateSignature
	void Display Pending Mastery Reward(); // Function MENU_Forge.MENU_Forge_C.Display Pending Mastery Reward
	void OnForgingXPChanged_Event(float XP); // Function MENU_Forge.MENU_Forge_C.OnForgingXPChanged_Event
	void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(); // Function MENU_Forge.MENU_Forge_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	void Construct(); // Function MENU_Forge.MENU_Forge_C.Construct
	void ShoutLocally(float Delay, struct UDialogDataAsset* ShoutData); // Function MENU_Forge.MENU_Forge_C.ShoutLocally
	void PreConstruct(bool IsDesignTime); // Function MENU_Forge.MENU_Forge_C.PreConstruct
	void ShoutLocallySoftPtr(float Delay, struct TSoftObjectPtr<struct UDialogDataAsset> ShoutData); // Function MENU_Forge.MENU_Forge_C.ShoutLocallySoftPtr
	void OnClosed(); // Function MENU_Forge.MENU_Forge_C.OnClosed
	void ExecuteUbergraph_MENU_Forge(int32_t EntryPoint); // Function MENU_Forge.MENU_Forge_C.ExecuteUbergraph_MENU_Forge
};

