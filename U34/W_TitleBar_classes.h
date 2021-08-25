// WidgetBlueprintGeneratedClass W_TitleBar.W_TitleBar_C
// Size: 0x288 (Inherited: 0x230)
struct UW_TitleBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* TextBlock_157; // 0x238(0x08)
	struct FText Group Text; // 0x240(0x18)
	struct FMulticastInlineDelegate On Spawn Button Clicked; // 0x258(0x10)
	struct FMulticastInlineDelegate On Clear Button Clicked; // 0x268(0x10)
	struct FString Game Object Name; // 0x278(0x10)

	void PreConstruct(bool IsDesignTime); // Function W_TitleBar.W_TitleBar_C.PreConstruct
	void ExecuteUbergraph_W_TitleBar(int32_t EntryPoint); // Function W_TitleBar.W_TitleBar_C.ExecuteUbergraph_W_TitleBar
	void On Clear Button Clicked__DelegateSignature(struct FString Game Object Name); // Function W_TitleBar.W_TitleBar_C.On Clear Button Clicked__DelegateSignature
	void On Spawn Button Clicked__DelegateSignature(struct FString Game Object Name); // Function W_TitleBar.W_TitleBar_C.On Spawn Button Clicked__DelegateSignature
};

