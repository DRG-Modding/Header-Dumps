// WidgetBlueprintGeneratedClass UI_RewardResourcesBox.UI_RewardResourcesBox_C
// Size: 0x280 (Inherited: 0x238)
struct UUI_RewardResourcesBox_C : URewardWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	UWidgetAnimation* CelebrateAnim; // 0x240(0x08)
	UHorizontalBox* HorizontalBox_2; // 0x248(0x08)
	UImage* IconLeft; // 0x250(0x08)
	UImage* IconRight; // 0x258(0x08)
	UHorizontalBox* ResourceHolder; // 0x260(0x08)
	UTextBlock* UnlockedText; // 0x268(0x08)
	TArray<URewardWidget*> ResourceWidgets; // 0x270(0x10)

	void HasResources(bool HasResources);
	void PreConstruct(bool IsDesignTime);
	void PlayReceiveAnim();
	void AddResource(URewardWidget* RewardWidget);
	void Clear();
	void ExecuteUbergraph_UI_RewardResourcesBox(int32_t EntryPoint);
};

