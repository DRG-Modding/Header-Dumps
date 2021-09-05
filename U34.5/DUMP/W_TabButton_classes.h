// WidgetBlueprintGeneratedClass W_TabButton.W_TabButton_C
// Size: 0x271 (Inherited: 0x230)
struct UW_TabButton_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* Button_TextBlock; // 0x238(0x08)
	UButton* TabButton; // 0x240(0x08)
	FText Button Text; // 0x248(0x18)
	FMulticastInlineDelegate Event Tab Button Clicked; // 0x260(0x10)
	bool Is Active State; // 0x270(0x01)

	void Set Active State(bool Active);
	void Set Buttons Tint Alpha(float alpha);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_W_TabButton(int32_t EntryPoint);
	void Event Tab Button Clicked__DelegateSignature(FText Tab Name);
};

