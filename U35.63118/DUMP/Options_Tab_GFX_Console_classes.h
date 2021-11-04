// WidgetBlueprintGeneratedClass Options_Tab_GFX_Console.Options_Tab_GFX_Console_C
// Size: 0x278 (Inherited: 0x230)
struct UOptions_Tab_GFX_Console_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Option_C* OPT_Gamma; // 0x238(0x08)
	UBasic_Option_C* OPT_HDR_Gamma; // 0x240(0x08)
	UBasic_Option_C* OPT_OverallQuality; // 0x248(0x08)
	UOptions_Console_QualitySetting_C* Options_Console_QualitySetting; // 0x250(0x08)
	UOptions_GFX_Gamma_C* Options_GFX_Gamma; // 0x258(0x08)
	UOptions_GFX_HDR_Gamma_C* Options_GFX_HDR_Gamma; // 0x260(0x08)
	FMulticastInlineDelegate SettingsChanged; // 0x268(0x10)

	void Construct();
	void ExecuteUbergraph_Options_Tab_GFX_Console(int32_t EntryPoint);
	void SettingsChanged__DelegateSignature();
};

