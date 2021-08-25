// WidgetBlueprintGeneratedClass UI_Forge_LevelIcon.UI_Forge_LevelIcon_C
// Size: 0x25c (Inherited: 0x230)
struct UUI_Forge_LevelIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* DataLevel; // 0x238(0x08)
	struct USizeBox* IconSize; // 0x240(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted; // 0x248(0x08)
	float Size; // 0x250(0x04)
	char IconColor; // 0x254(0x01)
	char UnknownData_255[0x3]; // 0x255(0x03)
	int32_t Level; // 0x258(0x04)

	void GetLevel(int32_t Level); // Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.GetLevel
	void SetLevelFromSchematic(struct USchematic* Schematic); // Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetLevelFromSchematic
	void SetLevel(int32_t InLevel); // Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetLevel
	void SetIconColor(char InColor); // Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetIconColor
	void SetSize(float InSize); // Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetSize
	void PreConstruct(bool IsDesignTime); // Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.PreConstruct
	void ExecuteUbergraph_UI_Forge_LevelIcon(int32_t EntryPoint); // Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.ExecuteUbergraph_UI_Forge_LevelIcon
};

