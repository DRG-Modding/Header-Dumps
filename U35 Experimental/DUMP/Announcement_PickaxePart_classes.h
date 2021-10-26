// WidgetBlueprintGeneratedClass Announcement_PickaxePart.Announcement_PickaxePart_C
// Size: 0x278 (Inherited: 0x230)
struct UAnnouncement_PickaxePart_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnnounceAnim; // 0x238(0x08)
	UBorder* InnerBorder; // 0x240(0x08)
	UITM_GeneratedIcon_Item_C* ITM_GeneratedIcon_Item; // 0x248(0x08)
	UBasic_Label_C* NameLabel; // 0x250(0x08)
	UCanvasPanel* Root; // 0x258(0x08)
	float StartDelay; // 0x260(0x04)
	UPickaxePart* PickaxePart; // 0x268(0x08)
	UTextureRenderTarget2D* IconRenderTarget; // 0x270(0x08)

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnAnnounceAnimFinished();
	void ExecuteUbergraph_Announcement_PickaxePart(int32_t EntryPoint);
};

