// WidgetBlueprintGeneratedClass Basic_HUD_BracketWindowBig.Basic_HUD_BracketWindowBig_C
// Size: 0x284 (Inherited: 0x230)
struct UBasic_HUD_BracketWindowBig_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* bgL; // 0x238(0x08)
	UBorder* bgM; // 0x240(0x08)
	UImage* bgR; // 0x248(0x08)
	UImage* edgeL; // 0x250(0x08)
	UBorder* edgeM; // 0x258(0x08)
	UImage* edgeR; // 0x260(0x08)
	UNamedSlot* PutStuffHere; // 0x268(0x08)
	float BG_Opacity; // 0x270(0x04)
	FLinearColor Edge_Tint; // 0x274(0x10)

	void PreConstruct(bool IsDesignTime);
	void Set Edge Color(FLinearColor Edge_Tint);
	void Set Background Opacity(float BG_Opacity);
	void ExecuteUbergraph_Basic_HUD_BracketWindowBig(int32_t EntryPoint);
};

