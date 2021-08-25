// WidgetBlueprintGeneratedClass Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C
// Size: 0x268 (Inherited: 0x230)
struct UBasic_HUD_BracketWindowSmall_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* bgL; // 0x238(0x08)
	struct UBorder* bgM; // 0x240(0x08)
	struct UImage* bgR; // 0x248(0x08)
	struct UImage* edgeL; // 0x250(0x08)
	struct UImage* edgeR; // 0x258(0x08)
	struct UNamedSlot* PutStuffHere; // 0x260(0x08)

	void SetEdgeColor(char Input); // Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.SetEdgeColor
	void PreConstruct(bool IsDesignTime); // Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.PreConstruct
	void ExecuteUbergraph_Basic_HUD_BracketWindowSmall(int32_t EntryPoint); // Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.ExecuteUbergraph_Basic_HUD_BracketWindowSmall
};

