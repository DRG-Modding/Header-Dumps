// WidgetBlueprintGeneratedClass UI_Forge_Completed.UI_Forge_Completed_C
// Size: 0x268 (Inherited: 0x230)
struct UUI_Forge_Completed_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimIntro; // 0x238(0x08)
	UITM_BigButton_C* ContinueButton; // 0x240(0x08)
	UImage* NoiseImage; // 0x248(0x08)
	UUI_Forge_Details_C* UI_Forge_Details; // 0x250(0x08)
	FMulticastInlineDelegate OnFinished; // 0x258(0x10)

	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void Show(USchematic* InSchematic);
	void Construct();
	void OnIntroStarted();
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__UI_Forge_Details_K2Node_ComponentBoundEvent_1_OnMatrixCoreOpened__DelegateSignature();
	void ClickContinue();
	void ExecuteUbergraph_UI_Forge_Completed(int32_t EntryPoint);
	void OnFinished__DelegateSignature();
};

