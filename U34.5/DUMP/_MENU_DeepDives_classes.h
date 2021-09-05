// WidgetBlueprintGeneratedClass _MENU_DeepDives._MENU_DeepDives_C
// Size: 0x300 (Inherited: 0x270)
struct U_MENU_DeepDives_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UBorder* B_MainBG; // 0x278(0x08)
	UUI_GenericLabel_C* Data_PageCaption; // 0x280(0x08)
	UUI_GenericLabel_C* Data_ResetTimer; // 0x288(0x08)
	UITM_InfoBox_C* ITM_InfoBox; // 0x290(0x08)
	UMENU_LockedTemplate_C* MENU_LockedTemplate; // 0x298(0x08)
	UMENU_SpaceRigTemplate_C* MenuTemplate; // 0x2a0(0x08)
	UITM_DeepDives_Join_C* TabPage_Join; // 0x2a8(0x08)
	UITM_DeepDives_Start_C* TabPage_Start; // 0x2b0(0x08)
	UWidgetSwitcher* TabSwitcher; // 0x2b8(0x08)
	enum class ESteamServerJoinStatus ServerType; // 0x2c0(0x01)
	UWidget* ActivePage; // 0x2c8(0x08)
	FTimerHandle UpdateTimeHandle; // 0x2d0(0x08)
	TSoftObjectPtr<UDialogDataAsset> FirstTimeShout; // 0x2d8(0x28)

	FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent MouseEvent);
	FText ConvertDurationToText(FTimespan A);
	void SetPage(UWidget* InPage);
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void OnShown();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__TabPage_Start_K2Node_ComponentBoundEvent_0_OnJoinMission__DelegateSignature(bool EliteDeepDive);
	void BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_1_OnClosedClicked__DelegateSignature();
	void BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_2_OnBackClicked__DelegateSignature();
	void Update Time();
	void OnClosed();
	void First Time Shout();
	void ExecuteUbergraph__MENU_DeepDives(int32_t EntryPoint);
};

