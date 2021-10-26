// WidgetBlueprintGeneratedClass LoreScreen_MinersManual.LoreScreen_MinersManual_C
// Size: 0x2f0 (Inherited: 0x2c8)
struct ULoreScreen_MinersManual_C : ULoreScreen_Master_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	UImage* Image_382; // 0x2d0(0x08)
	ULoreScreen_Template_C* LoreScreen_Template; // 0x2d8(0x08)
	bool IsHovering; // 0x2e0(0x01)
	UAudioComponent* HoverSound; // 0x2e8(0x08)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_LoreScreen_MinersManual(int32_t EntryPoint);
};

