// WidgetBlueprintGeneratedClass Lore_List_Filler.Lore_List_Filler_C
// Size: 0x268 (Inherited: 0x230)
struct ULore_List_Filler_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* FadeOutNavigationIcon; // 0x238(0x08)
	UWidgetAnimation* IntroAnim; // 0x240(0x08)
	USpacer* Spacer_162; // 0x248(0x08)
	FMulticastInlineDelegate OnClicked; // 0x250(0x10)
	float ButtonYSize; // 0x260(0x04)
	int32_t NumberOfButtons; // 0x264(0x04)

	void SetSize(int32_t Number Of Buttons);
	void DecrementSize();
	void ExecuteUbergraph_Lore_List_Filler(int32_t EntryPoint);
	void OnClicked__DelegateSignature(int32_t Index);
};

