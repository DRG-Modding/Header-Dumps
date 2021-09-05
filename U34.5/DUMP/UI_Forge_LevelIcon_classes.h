// WidgetBlueprintGeneratedClass UI_Forge_LevelIcon.UI_Forge_LevelIcon_C
// Size: 0x25c (Inherited: 0x230)
struct UUI_Forge_LevelIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* DataLevel; // 0x238(0x08)
	USizeBox* IconSize; // 0x240(0x08)
	UUI_ImageTinted_C* UI_ImageTinted; // 0x248(0x08)
	float Size; // 0x250(0x04)
	enum class ENUM_MenuColors IconColor; // 0x254(0x01)
	int32_t Level; // 0x258(0x04)

	void GetLevel(int32_t Level);
	void SetLevelFromSchematic(USchematic* Schematic);
	void SetLevel(int32_t InLevel);
	void SetIconColor(enum class ENUM_MenuColors InColor);
	void SetSize(float InSize);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Forge_LevelIcon(int32_t EntryPoint);
};

