// BlueprintGeneratedClass LIB_ToolTips.LIB_ToolTips_C
// Size: 0x28 (Inherited: 0x28)
struct ULIB_ToolTips_C : UBlueprintFunctionLibrary {

	void CreateToolTip(UWidget* ToolTipTarget, UUserWidget* ToolTipClass, FVector2D Offset, UObject* __WorldContext, UUserWidget* OutToolTip);
	void CreateBiomeToolTip(UWidget* Target, FVector2D Position, FVector2D Alignment, UResourceData* ResourceA, UResourceData* ResourceB, UObject* __WorldContext, UBiome_ToolTip_C* ToolTipWidget);
	void CreateBasicToolTip(UWidget* Target, FText Text, FVector2D Position, FVector2D Alignment, UObject* __WorldContext, UBasic_ToolTip_C* ToolTipWidget);
};

