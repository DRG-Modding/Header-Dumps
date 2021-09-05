// WidgetBlueprintGeneratedClass Lore_Content_Text_Header.Lore_Content_Text_Header_C
// Size: 0x264 (Inherited: 0x230)
struct ULore_Content_Text_Header_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_BG_CutCorner_C* Basic_BG_Window_66; // 0x238(0x08)
	UImage* Image_Icon; // 0x240(0x08)
	UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic; // 0x248(0x08)
	USpacer* Spacer_Size; // 0x250(0x08)
	UTextBlock* TextBlock_Headline; // 0x258(0x08)
	float MinDesiredWidth; // 0x260(0x04)

	void SetData(FText Header Text, UTexture2D* Icon, FObjectiveMissionIcon MissionIcon);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Lore_Content_Text_Header(int32_t EntryPoint);
};

