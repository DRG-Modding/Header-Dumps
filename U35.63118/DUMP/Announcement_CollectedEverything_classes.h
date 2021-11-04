// WidgetBlueprintGeneratedClass Announcement_CollectedEverything.Announcement_CollectedEverything_C
// Size: 0x2a0 (Inherited: 0x230)
struct UAnnouncement_CollectedEverything_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnnounceAnim; // 0x238(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x240(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_84; // 0x248(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_86; // 0x250(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_87; // 0x258(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_88; // 0x260(0x08)
	UBorder* Border_2; // 0x268(0x08)
	URichTextBlock* RichMessageText; // 0x270(0x08)
	UCanvasPanel* Root; // 0x278(0x08)
	float StartDelay; // 0x280(0x04)
	FText Message; // 0x288(0x18)

	void SetMessage(FText Text);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnAnnounceAnimFinished();
	void ExecuteUbergraph_Announcement_CollectedEverything(int32_t EntryPoint);
};

