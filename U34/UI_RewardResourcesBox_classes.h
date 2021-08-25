// WidgetBlueprintGeneratedClass UI_RewardResourcesBox.UI_RewardResourcesBox_C
// Size: 0x280 (Inherited: 0x238)
struct UUI_RewardResourcesBox_C : URewardWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* CelebrateAnim; // 0x240(0x08)
	struct UHorizontalBox* HorizontalBox_2; // 0x248(0x08)
	struct UImage* IconLeft; // 0x250(0x08)
	struct UImage* IconRight; // 0x258(0x08)
	struct UHorizontalBox* ResourceHolder; // 0x260(0x08)
	struct UTextBlock* UnlockedText; // 0x268(0x08)
	struct TArray<struct URewardWidget*> ResourceWidgets; // 0x270(0x10)

	void HasResources(bool HasResources); // Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.HasResources
	void PreConstruct(bool IsDesignTime); // Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.PreConstruct
	void PlayReceiveAnim(); // Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.PlayReceiveAnim
	void AddResource(struct URewardWidget* RewardWidget); // Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.AddResource
	void Clear(); // Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.Clear
	void ExecuteUbergraph_UI_RewardResourcesBox(int32_t EntryPoint); // Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.ExecuteUbergraph_UI_RewardResourcesBox
};

