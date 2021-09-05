// WidgetBlueprintGeneratedClass W_Button_Slim.W_Button_Slim_C
// Size: 0x270 (Inherited: 0x230)
struct UW_Button_Slim_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* ButtonTextBlock; // 0x238(0x08)
	UButton* SpawnButton; // 0x240(0x08)
	FText Button Text; // 0x248(0x18)
	FMulticastInlineDelegate On Button Clicked; // 0x260(0x10)

	void PreConstruct(bool IsDesignTime);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_W_Button_Slim(int32_t EntryPoint);
	void On Button Clicked__DelegateSignature();
};

