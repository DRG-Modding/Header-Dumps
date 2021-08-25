// WidgetBlueprintGeneratedClass W_Button_Basic2.W_Button_Basic2_C
// Size: 0x270 (Inherited: 0x230)
struct UW_Button_Basic2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* ButtonTextBlock; // 0x238(0x08)
	struct UButton* SpawnButton; // 0x240(0x08)
	struct FText Button Text; // 0x248(0x18)
	struct FMulticastInlineDelegate On Button Clicked; // 0x260(0x10)

	void PreConstruct(bool IsDesignTime); // Function W_Button_Basic2.W_Button_Basic2_C.PreConstruct
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function W_Button_Basic2.W_Button_Basic2_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void ExecuteUbergraph_W_Button_Basic2(int32_t EntryPoint); // Function W_Button_Basic2.W_Button_Basic2_C.ExecuteUbergraph_W_Button_Basic2
	void On Button Clicked__DelegateSignature(); // Function W_Button_Basic2.W_Button_Basic2_C.On Button Clicked__DelegateSignature
};

