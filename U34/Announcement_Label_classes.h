// WidgetBlueprintGeneratedClass Announcement_Label.Announcement_Label_C
// Size: 0x29c (Inherited: 0x230)
struct UAnnouncement_Label_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnnounceAnim; // 0x238(0x08)
	struct UImage* Icon; // 0x240(0x08)
	struct UTextBlock* Label; // 0x248(0x08)
	struct UCanvasPanel* Root; // 0x250(0x08)
	struct FText Text; // 0x258(0x18)
	struct FLinearColor TextColor; // 0x270(0x10)
	struct UTexture2D* IconTexture; // 0x280(0x08)
	struct FLinearColor Icon Tint; // 0x288(0x10)
	float StartDelay; // 0x298(0x04)

	void PreConstruct(bool IsDesignTime); // Function Announcement_Label.Announcement_Label_C.PreConstruct
	void Construct(); // Function Announcement_Label.Announcement_Label_C.Construct
	void OnAnnounceAnimFinished(); // Function Announcement_Label.Announcement_Label_C.OnAnnounceAnimFinished
	void ExecuteUbergraph_Announcement_Label(int32_t EntryPoint); // Function Announcement_Label.Announcement_Label_C.ExecuteUbergraph_Announcement_Label
};

