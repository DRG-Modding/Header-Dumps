// WidgetBlueprintGeneratedClass UI_MileStone_Tier.UI_Milestone_Tier_C
// Size: 0x280 (Inherited: 0x230)
struct UUI_Milestone_Tier_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Tier01; // 0x238(0x08)
	struct UImage* Tier02; // 0x240(0x08)
	struct UImage* Tier03; // 0x248(0x08)
	struct UImage* Tier04; // 0x250(0x08)
	struct UImage* Tier05; // 0x258(0x08)
	struct UImage* Tier06; // 0x260(0x08)
	struct TArray<struct UImage*> Tiers; // 0x268(0x10)
	int32_t MilestoneTier; // 0x278(0x04)
	float ImageDimension; // 0x27c(0x04)

	void InitTierImage(struct UImage* Image); // Function UI_MileStone_Tier.UI_Milestone_Tier_C.InitTierImage
	void Set Tier(int32_t Tier); // Function UI_MileStone_Tier.UI_Milestone_Tier_C.Set Tier
	void PreConstruct(bool IsDesignTime); // Function UI_MileStone_Tier.UI_Milestone_Tier_C.PreConstruct
	void ExecuteUbergraph_UI_Milestone_Tier(int32_t EntryPoint); // Function UI_MileStone_Tier.UI_Milestone_Tier_C.ExecuteUbergraph_UI_Milestone_Tier
};

