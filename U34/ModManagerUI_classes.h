// WidgetBlueprintGeneratedClass ModManagerUI.ModManagerUI_C
// Size: 0x298 (Inherited: 0x230)
struct UModManagerUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* CloseButtonImage; // 0x238(0x08)
	struct UTextBlock* CloseButtonLabel; // 0x240(0x08)
	struct UButton* CloseMenuButton; // 0x248(0x08)
	struct UCanvasPanel* MainContentCanvas; // 0x250(0x08)
	struct UTextBlock* ModAuthor; // 0x258(0x08)
	struct UCanvasPanel* ModInfoPanel; // 0x260(0x08)
	struct UScrollBox* ModList; // 0x268(0x08)
	struct UTextBlock* ModNameAndVersion; // 0x270(0x08)
	struct UWidgetSwitcher* ModUIHost; // 0x278(0x08)
	struct UScrollBox* ModUIScrollBox; // 0x280(0x08)
	struct UTextBlock* WindowTitle; // 0x288(0x08)
	struct AModManager_C* Manager ; // 0x290(0x08)

	void Construct(); // Function ModManagerUI.ModManagerUI_C.Construct
	void BndEvt__ModList_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function ModManagerUI.ModManagerUI_C.BndEvt__ModList_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
	void BndEvt__ModUIScrollBox_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function ModManagerUI.ModManagerUI_C.BndEvt__ModUIScrollBox_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature
	void ExecuteUbergraph_ModManagerUI(int32_t EntryPoint); // Function ModManagerUI.ModManagerUI_C.ExecuteUbergraph_ModManagerUI
};

