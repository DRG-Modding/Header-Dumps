// WidgetBlueprintGeneratedClass Announcement_Schematic.Announcement_Schematic_C
// Size: 0x28c (Inherited: 0x230)
struct UAnnouncement_Schematic_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnnounceAnim; // 0x238(0x08)
	struct UImage* Image_168; // 0x240(0x08)
	struct UCanvasPanel* Root; // 0x248(0x08)
	struct UUI_GenericLabel_C* TitleLabel; // 0x250(0x08)
	struct UUI_Forge_Schematic_C* UI_Forge_Schematic; // 0x258(0x08)
	float StartDelay; // 0x260(0x04)
	char UnknownData_264[0x4]; // 0x264(0x04)
	struct USchematic* Schematic; // 0x268(0x08)
	struct FText Title; // 0x270(0x18)
	float TitleProgress; // 0x288(0x04)

	void SetTitleProgress(float InProgress); // Function Announcement_Schematic.Announcement_Schematic_C.SetTitleProgress
	void PreConstruct(bool IsDesignTime); // Function Announcement_Schematic.Announcement_Schematic_C.PreConstruct
	void Construct(); // Function Announcement_Schematic.Announcement_Schematic_C.Construct
	void OnAnnounceAnimFinished(); // Function Announcement_Schematic.Announcement_Schematic_C.OnAnnounceAnimFinished
	void ExecuteUbergraph_Announcement_Schematic(int32_t EntryPoint); // Function Announcement_Schematic.Announcement_Schematic_C.ExecuteUbergraph_Announcement_Schematic
};

