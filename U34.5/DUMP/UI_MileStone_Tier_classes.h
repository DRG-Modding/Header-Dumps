// WidgetBlueprintGeneratedClass UI_MileStone_Tier.UI_Milestone_Tier_C
// Size: 0x280 (Inherited: 0x230)
struct UUI_Milestone_Tier_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Tier01; // 0x238(0x08)
	UImage* Tier02; // 0x240(0x08)
	UImage* Tier03; // 0x248(0x08)
	UImage* Tier04; // 0x250(0x08)
	UImage* Tier05; // 0x258(0x08)
	UImage* Tier06; // 0x260(0x08)
	TArray<UImage*> Tiers; // 0x268(0x10)
	int32_t MilestoneTier; // 0x278(0x04)
	float ImageDimension; // 0x27c(0x04)

	void InitTierImage(UImage* Image);
	void Set Tier(int32_t Tier);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Milestone_Tier(int32_t EntryPoint);
};

