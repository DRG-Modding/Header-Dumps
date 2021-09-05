// WidgetBlueprintGeneratedClass Announcement_Label.Announcement_Label_C
// Size: 0x29c (Inherited: 0x230)
struct UAnnouncement_Label_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnnounceAnim; // 0x238(0x08)
	UImage* Icon; // 0x240(0x08)
	UTextBlock* Label; // 0x248(0x08)
	UCanvasPanel* Root; // 0x250(0x08)
	FText Text; // 0x258(0x18)
	FLinearColor TextColor; // 0x270(0x10)
	UTexture2D* IconTexture; // 0x280(0x08)
	FLinearColor Icon Tint; // 0x288(0x10)
	float StartDelay; // 0x298(0x04)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnAnnounceAnimFinished();
	void ExecuteUbergraph_Announcement_Label(int32_t EntryPoint);
};

