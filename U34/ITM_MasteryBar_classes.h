// WidgetBlueprintGeneratedClass ITM_MasteryBar.ITM_MasteryBar_C
// Size: 0x2c0 (Inherited: 0x230)
struct UITM_MasteryBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USizeBox* BarSize; // 0x238(0x08)
	struct UHorizontalBox* MasteryBar; // 0x240(0x08)
	struct UBorder* MasteryBar_BG; // 0x248(0x08)
	struct AFSDPlayerState* PlayerState; // 0x250(0x08)
	struct UItemID* itemClass; // 0x258(0x08)
	struct UMasteryIconWidget* CurrentMasteryWidget; // 0x260(0x08)
	float Height; // 0x268(0x04)
	int32_t PreviewCurrentMastery; // 0x26c(0x04)
	int32_t PreviewMaxMastery; // 0x270(0x04)
	char UnknownData_274[0x4]; // 0x274(0x04)
	struct TArray<struct FMasteryItem> PreviewMasteryLevels; // 0x278(0x10)
	struct FMargin Padding_Border; // 0x288(0x10)
	struct FMargin Padding_Node; // 0x298(0x10)
	bool Show Icons; // 0x2a8(0x01)
	char UnknownData_2A9[0x7]; // 0x2a9(0x07)
	struct FMulticastInlineDelegate OnItemRewarded; // 0x2b0(0x10)

	void SetMasteryData(struct AFSDPlayerState* Player, struct UItemID* Item, bool HasMasteryLevels); // Function ITM_MasteryBar.ITM_MasteryBar_C.SetMasteryData
	void AddMasteryBox(struct UWidget* Content); // Function ITM_MasteryBar.ITM_MasteryBar_C.AddMasteryBox
	void CreateMasteryLevels(int32_t maxMastery, int32_t CurrentMastery, struct UItemID* Item, struct TArray<struct FMasteryItem> masteryLevels); // Function ITM_MasteryBar.ITM_MasteryBar_C.CreateMasteryLevels
	void PreConstruct(bool IsDesignTime); // Function ITM_MasteryBar.ITM_MasteryBar_C.PreConstruct
	void ItemUpgradePurchased(); // Function ITM_MasteryBar.ITM_MasteryBar_C.ItemUpgradePurchased
	void ExecuteUbergraph_ITM_MasteryBar(int32_t EntryPoint); // Function ITM_MasteryBar.ITM_MasteryBar_C.ExecuteUbergraph_ITM_MasteryBar
	void OnItemRewarded__DelegateSignature(struct FMasteryItem Reward); // Function ITM_MasteryBar.ITM_MasteryBar_C.OnItemRewarded__DelegateSignature
};

