// WidgetBlueprintGeneratedClass Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C
// Size: 0x27e (Inherited: 0x230)
struct UBasic_HUD_BracketWindowBig_Single_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* bgM; // 0x238(0x08)
	UImage* bgR; // 0x240(0x08)
	UCanvasPanel* CanvasPanel_1; // 0x248(0x08)
	UBorder* edgeM; // 0x250(0x08)
	UImage* edgeR; // 0x258(0x08)
	UNamedSlot* PutStuffHere; // 0x260(0x08)
	float BG_Opacity; // 0x268(0x04)
	FLinearColor Edge_Tint; // 0x26c(0x10)
	bool Mirror; // 0x27c(0x01)
	enum class ENUM_MenuColors Color; // 0x27d(0x01)

	void PreConstruct(bool IsDesignTime);
	void Set Edge Color(FLinearColor Edge_Tint);
	void Set Background Opacity(float BG_Opacity);
	void ExecuteUbergraph_Basic_HUD_BracketWindowBig_Single(int32_t EntryPoint);
};

