// WidgetBlueprintGeneratedClass W_TabButton.W_TabButton_C
// Size: 0x271 (Inherited: 0x230)
struct UW_TabButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* Button_TextBlock; // 0x238(0x08)
	struct UButton* TabButton; // 0x240(0x08)
	struct FText Button Text; // 0x248(0x18)
	struct FMulticastInlineDelegate Event Tab Button Clicked; // 0x260(0x10)
	bool Is Active State; // 0x270(0x01)

	void Set Active State(bool Active); // Function W_TabButton.W_TabButton_C.Set Active State
	void Set Buttons Tint Alpha(float alpha); // Function W_TabButton.W_TabButton_C.Set Buttons Tint Alpha
	void PreConstruct(bool IsDesignTime); // Function W_TabButton.W_TabButton_C.PreConstruct
	void BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function W_TabButton.W_TabButton_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void ExecuteUbergraph_W_TabButton(int32_t EntryPoint); // Function W_TabButton.W_TabButton_C.ExecuteUbergraph_W_TabButton
	void Event Tab Button Clicked__DelegateSignature(struct FText Tab Name); // Function W_TabButton.W_TabButton_C.Event Tab Button Clicked__DelegateSignature
};

