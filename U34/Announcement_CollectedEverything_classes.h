// WidgetBlueprintGeneratedClass Announcement_CollectedEverything.Announcement_CollectedEverything_C
// Size: 0x2a0 (Inherited: 0x230)
struct UAnnouncement_CollectedEverything_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnnounceAnim; // 0x238(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x240(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_84; // 0x248(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_86; // 0x250(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_87; // 0x258(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_88; // 0x260(0x08)
	struct UBorder* Border_2; // 0x268(0x08)
	struct URichTextBlock* RichMessageText; // 0x270(0x08)
	struct UCanvasPanel* Root; // 0x278(0x08)
	float StartDelay; // 0x280(0x04)
	char UnknownData_284[0x4]; // 0x284(0x04)
	struct FText Message; // 0x288(0x18)

	void SetMessage(struct FText Text); // Function Announcement_CollectedEverything.Announcement_CollectedEverything_C.SetMessage
	void PreConstruct(bool IsDesignTime); // Function Announcement_CollectedEverything.Announcement_CollectedEverything_C.PreConstruct
	void Construct(); // Function Announcement_CollectedEverything.Announcement_CollectedEverything_C.Construct
	void OnAnnounceAnimFinished(); // Function Announcement_CollectedEverything.Announcement_CollectedEverything_C.OnAnnounceAnimFinished
	void ExecuteUbergraph_Announcement_CollectedEverything(int32_t EntryPoint); // Function Announcement_CollectedEverything.Announcement_CollectedEverything_C.ExecuteUbergraph_Announcement_CollectedEverything
};

