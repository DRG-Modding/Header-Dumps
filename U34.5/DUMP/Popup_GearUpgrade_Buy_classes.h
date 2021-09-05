// WidgetBlueprintGeneratedClass Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C
// Size: 0x2d1 (Inherited: 0x270)
struct UPopup_GearUpgrade_Buy_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x278(0x08)
	UBlurBackground_C* BlurBackground; // 0x280(0x08)
	UBasic_ButtonScalable2_C* BTN_No; // 0x288(0x08)
	UBasic_ButtonScalable2_C* BTN_Yes; // 0x290(0x08)
	UTextBlock* TEXT_Purchase; // 0x298(0x08)
	UTextBlock* TEXT_UpgradeName; // 0x2a0(0x08)
	UVerticalBox* VerticalBox_Cost; // 0x2a8(0x08)
	UItemUpgrade* Upgrade; // 0x2b0(0x08)
	AActor* Item; // 0x2b8(0x08)
	AFSDPlayerState* Player; // 0x2c0(0x08)
	UAudioComponent* ShoutAudioComponent; // 0x2c8(0x08)
	bool HasAllUpgradesForItem; // 0x2d0(0x01)

	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void Show(AActor* Item, UItemUpgrade* Upgrade);
	void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Back();
	void Buy();
	void OnClosed();
	void ExecuteUbergraph_Popup_GearUpgrade_Buy(int32_t EntryPoint);
};

