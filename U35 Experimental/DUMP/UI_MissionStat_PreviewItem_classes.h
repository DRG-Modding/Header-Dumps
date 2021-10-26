// WidgetBlueprintGeneratedClass UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C
// Size: 0x278 (Inherited: 0x230)
struct UUI_MissionStat_PreviewItem_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UUI_MaskedImage_C* ClassIcon; // 0x238(0x08)
	UUI_MaskedImage_C* ClassIcon_BG; // 0x240(0x08)
	UProgressBar* StatProgressBar; // 0x248(0x08)
	UTextBlock* TitleText; // 0x250(0x08)
	UTextBlock* ValueText; // 0x258(0x08)
	UMissionStat* MissionStat; // 0x260(0x08)
	APlayerCharacter* CharacterClass; // 0x268(0x08)
	float TargetPct; // 0x270(0x04)
	float AnimTime; // 0x274(0x04)

	void PreConstruct(bool IsDesignTime);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void SetMissionStat(UMissionStat* MissionStat);
	void ExecuteUbergraph_UI_MissionStat_PreviewItem(int32_t EntryPoint);
};

