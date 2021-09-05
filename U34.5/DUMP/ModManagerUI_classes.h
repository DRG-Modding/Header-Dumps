// WidgetBlueprintGeneratedClass ModManagerUI.ModManagerUI_C
// Size: 0x298 (Inherited: 0x230)
struct UModManagerUI_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* CloseButtonImage; // 0x238(0x08)
	UTextBlock* CloseButtonLabel; // 0x240(0x08)
	UButton* CloseMenuButton; // 0x248(0x08)
	UCanvasPanel* MainContentCanvas; // 0x250(0x08)
	UTextBlock* ModAuthor; // 0x258(0x08)
	UCanvasPanel* ModInfoPanel; // 0x260(0x08)
	UScrollBox* ModList; // 0x268(0x08)
	UTextBlock* ModNameAndVersion; // 0x270(0x08)
	UWidgetSwitcher* ModUIHost; // 0x278(0x08)
	UScrollBox* ModUIScrollBox; // 0x280(0x08)
	UTextBlock* WindowTitle; // 0x288(0x08)
	AModManager_C* Manager ; // 0x290(0x08)

	void Construct();
	void BndEvt__ModList_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void BndEvt__ModUIScrollBox_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void ExecuteUbergraph_ModManagerUI(int32_t EntryPoint);
};

