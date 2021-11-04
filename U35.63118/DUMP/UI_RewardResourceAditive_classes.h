// WidgetBlueprintGeneratedClass UI_RewardResourceAditive.UI_RewardResourceAditive_C
// Size: 0x264 (Inherited: 0x238)
struct UUI_RewardResourceAditive_C : URewardWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	UTextBlock* ResourceAmount; // 0x240(0x08)
	UImage* ResourceIcon; // 0x248(0x08)
	UTextBlock* TextBlock_1; // 0x250(0x08)
	UResourceData* Resource; // 0x258(0x08)
	int32_t Amount; // 0x260(0x04)

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_RewardResourceAditive(int32_t EntryPoint);
};

