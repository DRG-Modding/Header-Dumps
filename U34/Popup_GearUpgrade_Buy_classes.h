// WidgetBlueprintGeneratedClass Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C
// Size: 0x2d1 (Inherited: 0x270)
struct UPopup_GearUpgrade_Buy_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x278(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x280(0x08)
	struct UBasic_ButtonScalable2_C* BTN_No; // 0x288(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Yes; // 0x290(0x08)
	struct UTextBlock* TEXT_Purchase; // 0x298(0x08)
	struct UTextBlock* TEXT_UpgradeName; // 0x2a0(0x08)
	struct UVerticalBox* VerticalBox_Cost; // 0x2a8(0x08)
	struct UItemUpgrade* Upgrade; // 0x2b0(0x08)
	struct AActor* Item; // 0x2b8(0x08)
	struct AFSDPlayerState* Player; // 0x2c0(0x08)
	struct UAudioComponent* ShoutAudioComponent; // 0x2c8(0x08)
	bool HasAllUpgradesForItem; // 0x2d0(0x01)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.OnKeyUp
	void Show(struct AActor* Item, struct UItemUpgrade* Upgrade); // Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Show
	void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.PreConstruct
	void Back(); // Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Back
	void Buy(); // Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Buy
	void OnClosed(); // Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.OnClosed
	void ExecuteUbergraph_Popup_GearUpgrade_Buy(int32_t EntryPoint); // Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.ExecuteUbergraph_Popup_GearUpgrade_Buy
};

