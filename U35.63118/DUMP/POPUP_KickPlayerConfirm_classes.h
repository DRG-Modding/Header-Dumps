// WidgetBlueprintGeneratedClass POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C
// Size: 0x2f8 (Inherited: 0x270)
struct UPOPUP_KickPlayerConfirm_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UBasic_CheckBox_C* Basic_CheckBox_AFK; // 0x278(0x08)
	UBasic_CheckBox_C* Basic_CheckBox_NoReason; // 0x280(0x08)
	UBasic_CheckBox_C* Basic_CheckBox_Private; // 0x288(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x290(0x08)
	UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x298(0x08)
	UBlurBackground_C* BlurBackground; // 0x2a0(0x08)
	UBasic_ButtonScalable2_C* BTN_Cancel; // 0x2a8(0x08)
	UBasic_ButtonScalable2_C* BTN_Kick; // 0x2b0(0x08)
	UTextBlock* DATA_PlayerName; // 0x2b8(0x08)
	UTextBlock* TXT_KickHeader; // 0x2c0(0x08)
	UTextBlock* TXT_ReasonHeader; // 0x2c8(0x08)
	UTextBlock* TXT_ReasonNotResponding; // 0x2d0(0x08)
	UTextBlock* TXT_ReasonOther; // 0x2d8(0x08)
	UTextBlock* TXT_ReasonPrivate; // 0x2e0(0x08)
	enum class EDisconnectReason KickReason; // 0x2e8(0x01)
	APlayerController* PlayerToKick; // 0x2f0(0x08)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__Basic_CheckBox_C_1_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__Basic_CheckBox_AFK_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__Basic_CheckBox_Private_K2Node_ComponentBoundEvent_16_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature();
	void SetPlayer(APlayerController* Player);
	void BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature();
	void ExecuteUbergraph_POPUP_KickPlayerConfirm(int32_t EntryPoint);
};

