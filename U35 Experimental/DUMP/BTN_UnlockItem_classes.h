// WidgetBlueprintGeneratedClass BTN_UnlockItem.BTN_UnlockItem_C
// Size: 0x299 (Inherited: 0x230)
struct UBTN_UnlockItem_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBlurBackground_C* BlurBackground; // 0x238(0x08)
	UTextBlock* DATA_Rank; // 0x240(0x08)
	UImage* ICON_Padlock; // 0x248(0x08)
	UImage* ICON_Rank; // 0x250(0x08)
	UImage* Image_107; // 0x258(0x08)
	UVerticalBox* RankLock; // 0x260(0x08)
	FText ButtonText; // 0x268(0x18)
	bool ShowInput; // 0x280(0x01)
	FLinearColor Tint_Base; // 0x284(0x10)
	float Tint_Hover; // 0x294(0x04)
	enum class ENUM_MenuColors TextColor; // 0x298(0x01)

	void SetData(TScriptInterface<ICraftable> Item, APlayerCharacter* Character);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BTN_UnlockItem(int32_t EntryPoint);
};

