// WidgetBlueprintGeneratedClass Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C
// Size: 0x268 (Inherited: 0x230)
struct UBasic_HUD_BracketWindowSmall_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* bgL; // 0x238(0x08)
	UBorder* bgM; // 0x240(0x08)
	UImage* bgR; // 0x248(0x08)
	UImage* edgeL; // 0x250(0x08)
	UImage* edgeR; // 0x258(0x08)
	UNamedSlot* PutStuffHere; // 0x260(0x08)

	void SetEdgeColor(enum class ENUM_MenuColors Input);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Basic_HUD_BracketWindowSmall(int32_t EntryPoint);
};

