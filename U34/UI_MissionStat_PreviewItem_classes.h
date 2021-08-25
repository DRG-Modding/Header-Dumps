// WidgetBlueprintGeneratedClass UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C
// Size: 0x278 (Inherited: 0x230)
struct UUI_MissionStat_PreviewItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UUI_MaskedImage_C* ClassIcon; // 0x238(0x08)
	struct UUI_MaskedImage_C* ClassIcon_BG; // 0x240(0x08)
	struct UProgressBar* StatProgressBar; // 0x248(0x08)
	struct UTextBlock* TitleText; // 0x250(0x08)
	struct UTextBlock* ValueText; // 0x258(0x08)
	struct UMissionStat* MissionStat; // 0x260(0x08)
	struct APlayerCharacter* CharacterClass; // 0x268(0x08)
	float TargetPct; // 0x270(0x04)
	float AnimTime; // 0x274(0x04)

	void PreConstruct(bool IsDesignTime); // Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.PreConstruct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.Tick
	void SetMissionStat(struct UMissionStat* MissionStat); // Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.SetMissionStat
	void ExecuteUbergraph_UI_MissionStat_PreviewItem(int32_t EntryPoint); // Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.ExecuteUbergraph_UI_MissionStat_PreviewItem
};

