// WidgetBlueprintGeneratedClass LoreScreen_MinersManual.LoreScreen_MinersManual_C
// Size: 0x2f0 (Inherited: 0x2c8)
struct ULoreScreen_MinersManual_C : ULoreScreen_Master_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* Image_382; // 0x2d0(0x08)
	struct ULoreScreen_Template_C* LoreScreen_Template; // 0x2d8(0x08)
	bool IsHovering; // 0x2e0(0x01)
	char UnknownData_2E1[0x7]; // 0x2e1(0x07)
	struct UAudioComponent* HoverSound; // 0x2e8(0x08)

	void PreConstruct(bool IsDesignTime); // Function LoreScreen_MinersManual.LoreScreen_MinersManual_C.PreConstruct
	void Construct(); // Function LoreScreen_MinersManual.LoreScreen_MinersManual_C.Construct
	void ExecuteUbergraph_LoreScreen_MinersManual(int32_t EntryPoint); // Function LoreScreen_MinersManual.LoreScreen_MinersManual_C.ExecuteUbergraph_LoreScreen_MinersManual
};

