// WidgetBlueprintGeneratedClass ShadowBG.ShadowBG_C
// Size: 0x254 (Inherited: 0x230)
struct UShadowBG_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Image_63; // 0x238(0x08)
	struct FLinearColor Color; // 0x240(0x10)
	float EdgeSharpness; // 0x250(0x04)

	void SetEdgeSharpness(float EdgeSharpness1); // Function ShadowBG.ShadowBG_C.SetEdgeSharpness
	void SetColor(struct FLinearColor Color); // Function ShadowBG.ShadowBG_C.SetColor
	void PreConstruct(bool IsDesignTime); // Function ShadowBG.ShadowBG_C.PreConstruct
	void ExecuteUbergraph_ShadowBG(int32_t EntryPoint); // Function ShadowBG.ShadowBG_C.ExecuteUbergraph_ShadowBG
};

