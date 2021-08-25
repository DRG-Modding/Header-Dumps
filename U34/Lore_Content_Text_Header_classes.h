// WidgetBlueprintGeneratedClass Lore_Content_Text_Header.Lore_Content_Text_Header_C
// Size: 0x264 (Inherited: 0x230)
struct ULore_Content_Text_Header_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_BG_CutCorner_C* Basic_BG_Window_66; // 0x238(0x08)
	struct UImage* Image_Icon; // 0x240(0x08)
	struct UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic; // 0x248(0x08)
	struct USpacer* Spacer_Size; // 0x250(0x08)
	struct UTextBlock* TextBlock_Headline; // 0x258(0x08)
	float MinDesiredWidth; // 0x260(0x04)

	void SetData(struct FText Header Text, struct UTexture2D* Icon, struct FObjectiveMissionIcon MissionIcon); // Function Lore_Content_Text_Header.Lore_Content_Text_Header_C.SetData
	void PreConstruct(bool IsDesignTime); // Function Lore_Content_Text_Header.Lore_Content_Text_Header_C.PreConstruct
	void ExecuteUbergraph_Lore_Content_Text_Header(int32_t EntryPoint); // Function Lore_Content_Text_Header.Lore_Content_Text_Header_C.ExecuteUbergraph_Lore_Content_Text_Header
};

