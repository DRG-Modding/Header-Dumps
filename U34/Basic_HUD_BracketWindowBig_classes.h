// WidgetBlueprintGeneratedClass Basic_HUD_BracketWindowBig.Basic_HUD_BracketWindowBig_C
// Size: 0x284 (Inherited: 0x230)
struct UBasic_HUD_BracketWindowBig_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* bgL; // 0x238(0x08)
	struct UBorder* bgM; // 0x240(0x08)
	struct UImage* bgR; // 0x248(0x08)
	struct UImage* edgeL; // 0x250(0x08)
	struct UBorder* edgeM; // 0x258(0x08)
	struct UImage* edgeR; // 0x260(0x08)
	struct UNamedSlot* PutStuffHere; // 0x268(0x08)
	float BG_Opacity; // 0x270(0x04)
	struct FLinearColor Edge_Tint; // 0x274(0x10)

	void PreConstruct(bool IsDesignTime); // Function Basic_HUD_BracketWindowBig.Basic_HUD_BracketWindowBig_C.PreConstruct
	void Set Edge Color(struct FLinearColor Edge_Tint); // Function Basic_HUD_BracketWindowBig.Basic_HUD_BracketWindowBig_C.Set Edge Color
	void Set Background Opacity(float BG_Opacity); // Function Basic_HUD_BracketWindowBig.Basic_HUD_BracketWindowBig_C.Set Background Opacity
	void ExecuteUbergraph_Basic_HUD_BracketWindowBig(int32_t EntryPoint); // Function Basic_HUD_BracketWindowBig.Basic_HUD_BracketWindowBig_C.ExecuteUbergraph_Basic_HUD_BracketWindowBig
};

