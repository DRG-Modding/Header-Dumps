// WidgetBlueprintGeneratedClass Options_Console_QualitySetting.Options_Console_QualitySetting_C
// Size: 0x259 (Inherited: 0x230)
struct UOptions_Console_QualitySetting_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_OptionSwitcher_C* Basic_OptionSwitcher; // 0x238(0x08)
	FText CustomText; // 0x240(0x18)
	enum class EConsoleGraphicsMode NewVar_1; // 0x258(0x01)

	void Construct();
	void UINeedsUpdate();
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature(FText Value, int32_t Index);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Options_Console_QualitySetting(int32_t EntryPoint);
};

