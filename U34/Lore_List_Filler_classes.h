// WidgetBlueprintGeneratedClass Lore_List_Filler.Lore_List_Filler_C
// Size: 0x268 (Inherited: 0x230)
struct ULore_List_Filler_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* FadeOutNavigationIcon; // 0x238(0x08)
	struct UWidgetAnimation* IntroAnim; // 0x240(0x08)
	struct USpacer* Spacer_162; // 0x248(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x250(0x10)
	float ButtonYSize; // 0x260(0x04)
	int32_t NumberOfButtons; // 0x264(0x04)

	void SetSize(int32_t Number Of Buttons); // Function Lore_List_Filler.Lore_List_Filler_C.SetSize
	void DecrementSize(); // Function Lore_List_Filler.Lore_List_Filler_C.DecrementSize
	void ExecuteUbergraph_Lore_List_Filler(int32_t EntryPoint); // Function Lore_List_Filler.Lore_List_Filler_C.ExecuteUbergraph_Lore_List_Filler
	void OnClicked__DelegateSignature(int32_t Index); // Function Lore_List_Filler.Lore_List_Filler_C.OnClicked__DelegateSignature
};

