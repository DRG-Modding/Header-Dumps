// WidgetBlueprintGeneratedClass UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C
// Size: 0x268 (Inherited: 0x230)
struct UUI_CoreInfuser_Reward_Background_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimHover; // 0x238(0x08)
	struct UImage* BG; // 0x240(0x08)
	struct USizeBox* IconSizer; // 0x248(0x08)
	struct UImage* Overlay; // 0x250(0x08)
	bool Angled; // 0x258(0x01)
	bool IsHovering; // 0x259(0x01)
	char UnknownData_25A[0x2]; // 0x25a(0x02)
	float Size; // 0x25c(0x04)
	struct USchematicCategory* Category; // 0x260(0x08)

	void SetCategory(struct USchematicCategory* InSchematicCategory); // Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.SetCategory
	void SetSize(float InSize); // Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.SetSize
	void SetHovered(bool InHovering); // Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.SetHovered
	void SetAngled(bool Angled); // Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.SetAngled
	void PreConstruct(bool IsDesignTime); // Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.PreConstruct
	void ExecuteUbergraph_UI_CoreInfuser_Reward_Background(int32_t EntryPoint); // Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.ExecuteUbergraph_UI_CoreInfuser_Reward_Background
};

