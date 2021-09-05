// WidgetBlueprintGeneratedClass UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C
// Size: 0x268 (Inherited: 0x230)
struct UUI_CoreInfuser_Reward_Background_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimHover; // 0x238(0x08)
	UImage* BG; // 0x240(0x08)
	USizeBox* IconSizer; // 0x248(0x08)
	UImage* Overlay; // 0x250(0x08)
	bool Angled; // 0x258(0x01)
	bool IsHovering; // 0x259(0x01)
	float Size; // 0x25c(0x04)
	USchematicCategory* Category; // 0x260(0x08)

	void SetCategory(USchematicCategory* InSchematicCategory);
	void SetSize(float InSize);
	void SetHovered(bool InHovering);
	void SetAngled(bool Angled);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_CoreInfuser_Reward_Background(int32_t EntryPoint);
};

