// WidgetBlueprintGeneratedClass Options_Tab_GFX.Options_Tab_GFX_C
// Size: 0x251 (Inherited: 0x230)
struct UOptions_Tab_GFX_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UOptions_Tab_GFX_Console_C* Options_Tab_GFX_Console; // 0x238(0x08)
	UOptions_Tab_GFX_Steam_C* Options_Tab_GFX_Steam; // 0x240(0x08)
	UWidgetSwitcher* PlatformSwitcher; // 0x248(0x08)
	enum class EFSDTargetPlatform Platform; // 0x250(0x01)

	void SetPlatform(enum class EFSDTargetPlatform Platform);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Options_Tab_GFX(int32_t EntryPoint);
};

