// WidgetBlueprintGeneratedClass OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C
// Size: 0x294 (Inherited: 0x230)
struct UOnScreen_Indicator_UsableZipLine_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UUI_ImageTinted_C* BoostIcon; // 0x238(0x08)
	struct UUI_AdvancedLabel_C* BoostInputLabel; // 0x240(0x08)
	struct UProgressBar* BoostProgress; // 0x248(0x08)
	struct UVerticalBox* BoxBoost; // 0x250(0x08)
	struct USpacer* BoxSpacer; // 0x258(0x08)
	struct UImage* IconControllerBoost; // 0x260(0x08)
	struct UWidgetSwitcher* InputSwitcherIcon; // 0x268(0x08)
	struct UUI_AdvancedLabel_C* ReverseInputLabel; // 0x270(0x08)
	struct UCanvasPanel* RootCanvas; // 0x278(0x08)
	struct USizeBox* SizeBoostProgress; // 0x280(0x08)
	struct UZipLineStateComponent* ZiplineState; // 0x288(0x08)
	float Size; // 0x290(0x04)

	void Refresh(); // Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Refresh
	void Construct(); // Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Construct
	void PreConstruct(bool IsDesignTime); // Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.PreConstruct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Tick
	void OnCharacterStateChanged_Event(enum class ECharacterState NewState); // Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.OnCharacterStateChanged_Event
	void OnInputSourceChanged_Event(enum class EFSDInputSource InputSource); // Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.OnInputSourceChanged_Event
	void ExecuteUbergraph_OnScreen_Indicator_UsableZipLine(int32_t EntryPoint); // Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.ExecuteUbergraph_OnScreen_Indicator_UsableZipLine
};

