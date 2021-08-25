// WidgetBlueprintGeneratedClass BTN_UnlockItem.BTN_UnlockItem_C
// Size: 0x299 (Inherited: 0x230)
struct UBTN_UnlockItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x238(0x08)
	struct UTextBlock* DATA_Rank; // 0x240(0x08)
	struct UImage* ICON_Padlock; // 0x248(0x08)
	struct UImage* ICON_Rank; // 0x250(0x08)
	struct UImage* Image_107; // 0x258(0x08)
	struct UVerticalBox* RankLock; // 0x260(0x08)
	struct FText ButtonText; // 0x268(0x18)
	bool ShowInput; // 0x280(0x01)
	char UnknownData_281[0x3]; // 0x281(0x03)
	struct FLinearColor Tint_Base; // 0x284(0x10)
	float Tint_Hover; // 0x294(0x04)
	char TextColor; // 0x298(0x01)

	void SetData(struct TScriptInterface<None> Item, struct APlayerCharacter* Character); // Function BTN_UnlockItem.BTN_UnlockItem_C.SetData
	void PreConstruct(bool IsDesignTime); // Function BTN_UnlockItem.BTN_UnlockItem_C.PreConstruct
	void ExecuteUbergraph_BTN_UnlockItem(int32_t EntryPoint); // Function BTN_UnlockItem.BTN_UnlockItem_C.ExecuteUbergraph_BTN_UnlockItem
};

