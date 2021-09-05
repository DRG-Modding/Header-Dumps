// WidgetBlueprintGeneratedClass UI_CommunityRewardResource.UI_CommunityRewardResource_C
// Size: 0x25c (Inherited: 0x238)
struct UUI_CommunityRewardResource_C : URewardWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	UTextBlock* ResourceAmount; // 0x240(0x08)
	UImage* ResourceIcon; // 0x248(0x08)
	UResourceData* Resource; // 0x250(0x08)
	int32_t amount; // 0x258(0x04)

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_CommunityRewardResource(int32_t EntryPoint);
};

