// WidgetBlueprintGeneratedClass MENU_Forge.MENU_Forge_C
// Size: 0x331 (Inherited: 0x270)
struct UMENU_Forge_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UWidgetAnimation* AnimShowMasteryBar; // 0x278(0x08)
	UWidgetAnimation* AnimEnterSelection; // 0x280(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_143; // 0x288(0x08)
	UBasic_ButtonScalable2_C* ButtonHistory; // 0x290(0x08)
	UBasic_ButtonScalable2_C* CancelForgeBtn; // 0x298(0x08)
	UUI_Forge_SchematicList_C* ForgeHistoryList; // 0x2a0(0x08)
	UUI_Forge_SchematicList_C* ForgeInventoryList; // 0x2a8(0x08)
	UUI_HorizontalResourceBar_C* ForgeItemCost; // 0x2b0(0x08)
	UOverlay* ForgePopUpOverlay; // 0x2b8(0x08)
	UITM_BigButton_C* ITM_BigButton; // 0x2c0(0x08)
	UWidgetSwitcher* ListSwitcher; // 0x2c8(0x08)
	UMENU_LockedTemplate_C* MENU_LockedTemplate; // 0x2d0(0x08)
	UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate; // 0x2d8(0x08)
	UUI_Forge_Completed_C* UI_Forge_Completed; // 0x2e0(0x08)
	UUI_Forge_Details_C* UI_Forge_Details; // 0x2e8(0x08)
	UUI_Forge_MasteryBar_C* UI_Forge_MasteryBar; // 0x2f0(0x08)
	UUI_Forge_MasteryReward_C* UI_Forge_MasteryReward; // 0x2f8(0x08)
	UBorder* WindowBorder; // 0x300(0x08)
	UTextBlock* WindowHeader; // 0x308(0x08)
	float ItemSize; // 0x310(0x04)
	UUI_Forge_Schematic_C* SelectedItem; // 0x318(0x08)
	bool SelectionBoxOpen; // 0x320(0x01)
	bool ItemPopUpOpen; // 0x321(0x01)
	bool MasteryBarOpen; // 0x322(0x01)
	float EnterAnimSpeed; // 0x324(0x04)
	USchematic* ForgingMasteryReward; // 0x328(0x08)
	bool XPBarUpdatesAllowed; // 0x330(0x01)

	FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void ToggleMasteryBar(bool Visible);
	void Forge Schematic(UUI_Forge_Schematic_C* InSchematic, bool success);
	void ToggleItemPopUp(bool Visible);
	void ToggleSelectionList(bool Visible);
	void IncreaseCraftingStat();
	void SetHeader(FText InText);
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void ShowList(bool History, bool Force Rebuild);
	void ShowItem(UUI_Forge_Schematic_C* Item);
	void Refresh();
	void UpdateLevelProgress(bool animate);
	void BndEvt__TabOverclocks_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature(UUI_Forge_Schematic_C* Item);
	void BndEvt__ForgeBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void OnShown();
	void BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_8_OnBackClicked__DelegateSignature();
	void BndEvt__CancelForgeBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void ForgeDone();
	void BndEvt__UI_Forge_Completed_K2Node_ComponentBoundEvent_3_OnFinished__DelegateSignature();
	void BndEvt__UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_4_OnCountingFinished__DelegateSignature(char Reward);
	void BndEvt__UI_Forge_MasteryReward_K2Node_ComponentBoundEvent_6_OnFinished__DelegateSignature();
	void Display Pending Mastery Reward();
	void OnForgingXPChanged_Event(float XP);
	void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void Construct();
	void ShoutLocally(float Delay, UDialogDataAsset* ShoutData);
	void PreConstruct(bool IsDesignTime);
	void ShoutLocallySoftPtr(float Delay, TSoftObjectPtr<UDialogDataAsset> ShoutData);
	void OnClosed();
	void ExecuteUbergraph_MENU_Forge(int32_t EntryPoint);
};

