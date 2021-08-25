// WidgetBlueprintGeneratedClass _MENU_DeepDives._MENU_DeepDives_C
// Size: 0x300 (Inherited: 0x270)
struct U_MENU_DeepDives_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBorder* B_MainBG; // 0x278(0x08)
	struct UUI_GenericLabel_C* Data_PageCaption; // 0x280(0x08)
	struct UUI_GenericLabel_C* Data_ResetTimer; // 0x288(0x08)
	struct UITM_InfoBox_C* ITM_InfoBox; // 0x290(0x08)
	struct UMENU_LockedTemplate_C* MENU_LockedTemplate; // 0x298(0x08)
	struct UMENU_SpaceRigTemplate_C* MenuTemplate; // 0x2a0(0x08)
	struct UITM_DeepDives_Join_C* TabPage_Join; // 0x2a8(0x08)
	struct UITM_DeepDives_Start_C* TabPage_Start; // 0x2b0(0x08)
	struct UWidgetSwitcher* TabSwitcher; // 0x2b8(0x08)
	enum class ESteamServerJoinStatus ServerType; // 0x2c0(0x01)
	char UnknownData_2C1[0x7]; // 0x2c1(0x07)
	struct UWidget* ActivePage; // 0x2c8(0x08)
	struct FTimerHandle UpdateTimeHandle; // 0x2d0(0x08)
	struct TSoftObjectPtr<struct UDialogDataAsset> FirstTimeShout; // 0x2d8(0x28)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function _MENU_DeepDives._MENU_DeepDives_C.OnMouseButtonDown
	struct FText ConvertDurationToText(struct FTimespan A); // Function _MENU_DeepDives._MENU_DeepDives_C.ConvertDurationToText
	void SetPage(struct UWidget* InPage); // Function _MENU_DeepDives._MENU_DeepDives_C.SetPage
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function _MENU_DeepDives._MENU_DeepDives_C.OnKeyUp
	void OnShown(); // Function _MENU_DeepDives._MENU_DeepDives_C.OnShown
	void PreConstruct(bool IsDesignTime); // Function _MENU_DeepDives._MENU_DeepDives_C.PreConstruct
	void BndEvt__TabPage_Start_K2Node_ComponentBoundEvent_0_OnJoinMission__DelegateSignature(bool EliteDeepDive); // Function _MENU_DeepDives._MENU_DeepDives_C.BndEvt__TabPage_Start_K2Node_ComponentBoundEvent_0_OnJoinMission__DelegateSignature
	void BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_1_OnClosedClicked__DelegateSignature(); // Function _MENU_DeepDives._MENU_DeepDives_C.BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_1_OnClosedClicked__DelegateSignature
	void BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_2_OnBackClicked__DelegateSignature(); // Function _MENU_DeepDives._MENU_DeepDives_C.BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_2_OnBackClicked__DelegateSignature
	void Update Time(); // Function _MENU_DeepDives._MENU_DeepDives_C.Update Time
	void OnClosed(); // Function _MENU_DeepDives._MENU_DeepDives_C.OnClosed
	void First Time Shout(); // Function _MENU_DeepDives._MENU_DeepDives_C.First Time Shout
	void ExecuteUbergraph__MENU_DeepDives(int32_t EntryPoint); // Function _MENU_DeepDives._MENU_DeepDives_C.ExecuteUbergraph__MENU_DeepDives
};

