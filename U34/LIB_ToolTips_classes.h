// BlueprintGeneratedClass LIB_ToolTips.LIB_ToolTips_C
// Size: 0x28 (Inherited: 0x28)
struct ULIB_ToolTips_C : UBlueprintFunctionLibrary {

	void CreateToolTip(struct UWidget* ToolTipTarget, struct UUserWidget* ToolTipClass, struct FVector2D Offset, struct UObject* __WorldContext, struct UUserWidget* OutToolTip); // Function LIB_ToolTips.LIB_ToolTips_C.CreateToolTip
	void CreateBiomeToolTip(struct UWidget* Target, struct FVector2D Position, struct FVector2D Alignment, struct UResourceData* ResourceA, struct UResourceData* ResourceB, struct UObject* __WorldContext, struct UBiome_ToolTip_C* ToolTipWidget); // Function LIB_ToolTips.LIB_ToolTips_C.CreateBiomeToolTip
	void CreateBasicToolTip(struct UWidget* Target, struct FText Text, struct FVector2D Position, struct FVector2D Alignment, struct UObject* __WorldContext, struct UBasic_ToolTip_C* ToolTipWidget); // Function LIB_ToolTips.LIB_ToolTips_C.CreateBasicToolTip
};

