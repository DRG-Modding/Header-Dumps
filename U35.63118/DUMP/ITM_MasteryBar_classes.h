// WidgetBlueprintGeneratedClass ITM_MasteryBar.ITM_MasteryBar_C
// Size: 0x2c0 (Inherited: 0x230)
struct UITM_MasteryBar_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	USizeBox* BarSize; // 0x238(0x08)
	UHorizontalBox* MasteryBar; // 0x240(0x08)
	UBorder* MasteryBar_BG; // 0x248(0x08)
	AFSDPlayerState* PlayerState; // 0x250(0x08)
	UItemID* itemClass; // 0x258(0x08)
	UMasteryIconWidget* CurrentMasteryWidget; // 0x260(0x08)
	float Height; // 0x268(0x04)
	int32_t PreviewCurrentMastery; // 0x26c(0x04)
	int32_t PreviewMaxMastery; // 0x270(0x04)
	TArray<FMasteryItem> PreviewMasteryLevels; // 0x278(0x10)
	FMargin Padding_Border; // 0x288(0x10)
	FMargin Padding_Node; // 0x298(0x10)
	bool Show Icons; // 0x2a8(0x01)
	FMulticastInlineDelegate OnItemRewarded; // 0x2b0(0x10)

	void SetMasteryData(AFSDPlayerState* Player, UItemID* Item, bool HasMasteryLevels);
	void AddMasteryBox(UWidget* Content);
	void CreateMasteryLevels(int32_t maxMastery, int32_t CurrentMastery, UItemID* Item, TArray<FMasteryItem> masteryLevels);
	void PreConstruct(bool IsDesignTime);
	void ItemUpgradePurchased();
	void ExecuteUbergraph_ITM_MasteryBar(int32_t EntryPoint);
	void OnItemRewarded__DelegateSignature(FMasteryItem Reward);
};

