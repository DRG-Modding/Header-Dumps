// WidgetBlueprintGeneratedClass ITM_RestoreSave.ITM_RestoreSave_C
// Size: 0x2d0 (Inherited: 0x270)
struct UITM_RestoreSave_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* AnimShow; // 0x278(0x08)
	struct UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x280(0x08)
	struct UBasic_ButtonScalable2_C* BTN_No; // 0x288(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Yes; // 0x290(0x08)
	struct UHorizontalBox* buttons; // 0x298(0x08)
	struct UTextBlock* DATA_Content; // 0x2a0(0x08)
	struct UTextBlock* DATA_Header; // 0x2a8(0x08)
	struct FMulticastInlineDelegate ImageReady; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnShowRestoreSaveClicked; // 0x2c0(0x10)

	void ShowWindow(); // Function ITM_RestoreSave.ITM_RestoreSave_C.ShowWindow
	void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature(); // Function ITM_RestoreSave.ITM_RestoreSave_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
	void BndEvt__BTN_No_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature(); // Function ITM_RestoreSave.ITM_RestoreSave_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature
	void HideUIDelayed(); // Function ITM_RestoreSave.ITM_RestoreSave_C.HideUIDelayed
	void Check Savegame(); // Function ITM_RestoreSave.ITM_RestoreSave_C.Check Savegame
	void PreConstruct(bool IsDesignTime); // Function ITM_RestoreSave.ITM_RestoreSave_C.PreConstruct
	void ExecuteUbergraph_ITM_RestoreSave(int32_t EntryPoint); // Function ITM_RestoreSave.ITM_RestoreSave_C.ExecuteUbergraph_ITM_RestoreSave
	void OnShowRestoreSaveClicked__DelegateSignature(); // Function ITM_RestoreSave.ITM_RestoreSave_C.OnShowRestoreSaveClicked__DelegateSignature
	void ImageReady__DelegateSignature(struct FString URL); // Function ITM_RestoreSave.ITM_RestoreSave_C.ImageReady__DelegateSignature
};

