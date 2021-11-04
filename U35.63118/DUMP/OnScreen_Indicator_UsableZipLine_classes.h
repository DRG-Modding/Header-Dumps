// WidgetBlueprintGeneratedClass OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C
// Size: 0x294 (Inherited: 0x230)
struct UOnScreen_Indicator_UsableZipLine_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UUI_ImageTinted_C* BoostIcon; // 0x238(0x08)
	UUI_AdvancedLabel_C* BoostInputLabel; // 0x240(0x08)
	UProgressBar* BoostProgress; // 0x248(0x08)
	UVerticalBox* BoxBoost; // 0x250(0x08)
	USpacer* BoxSpacer; // 0x258(0x08)
	UImage* IconControllerBoost; // 0x260(0x08)
	UWidgetSwitcher* InputSwitcherIcon; // 0x268(0x08)
	UUI_AdvancedLabel_C* ReverseInputLabel; // 0x270(0x08)
	UCanvasPanel* RootCanvas; // 0x278(0x08)
	USizeBox* SizeBoostProgress; // 0x280(0x08)
	UZipLineStateComponent* ZiplineState; // 0x288(0x08)
	float Size; // 0x290(0x04)

	void Refresh();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void OnCharacterStateChanged_Event(enum class ECharacterState NewState);
	void OnInputSourceChanged_Event(enum class EFSDInputSource InputSource);
	void ExecuteUbergraph_OnScreen_Indicator_UsableZipLine(int32_t EntryPoint);
};

