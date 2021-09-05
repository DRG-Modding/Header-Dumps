// WidgetBlueprintGeneratedClass Announcement_Schematic.Announcement_Schematic_C
// Size: 0x28c (Inherited: 0x230)
struct UAnnouncement_Schematic_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnnounceAnim; // 0x238(0x08)
	UImage* Image_168; // 0x240(0x08)
	UCanvasPanel* Root; // 0x248(0x08)
	UUI_GenericLabel_C* TitleLabel; // 0x250(0x08)
	UUI_Forge_Schematic_C* UI_Forge_Schematic; // 0x258(0x08)
	float StartDelay; // 0x260(0x04)
	USchematic* Schematic; // 0x268(0x08)
	FText Title; // 0x270(0x18)
	float TitleProgress; // 0x288(0x04)

	void SetTitleProgress(float InProgress);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnAnnounceAnimFinished();
	void ExecuteUbergraph_Announcement_Schematic(int32_t EntryPoint);
};

