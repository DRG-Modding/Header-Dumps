// WidgetBlueprintGeneratedClass Announcement_Skin.Announcement_Skin_C
// Size: 0x2b0 (Inherited: 0x230)
struct UAnnouncement_Skin_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnnounceAnim; // 0x238(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x240(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_84; // 0x248(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_86; // 0x250(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_87; // 0x258(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_88; // 0x260(0x08)
	struct UBorder* Border_2; // 0x268(0x08)
	struct UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x270(0x08)
	struct UITM_SkinIcon_C* ITM_SkinIcon; // 0x278(0x08)
	struct UUI_GenericLabel_C* NameLabel; // 0x280(0x08)
	struct UCanvasPanel* Root; // 0x288(0x08)
	struct UUI_Forge_Schematic_OwnerIcon_C* UI_SchematicOwnerIcon; // 0x290(0x08)
	float StartDelay; // 0x298(0x04)
	char UnknownData_29C[0x4]; // 0x29c(0x04)
	struct UItemSkin* Skin; // 0x2a0(0x08)
	struct UItemID* SkinOwner; // 0x2a8(0x08)

	void PreConstruct(bool IsDesignTime); // Function Announcement_Skin.Announcement_Skin_C.PreConstruct
	void Construct(); // Function Announcement_Skin.Announcement_Skin_C.Construct
	void OnAnnounceAnimFinished(); // Function Announcement_Skin.Announcement_Skin_C.OnAnnounceAnimFinished
	void ExecuteUbergraph_Announcement_Skin(int32_t EntryPoint); // Function Announcement_Skin.Announcement_Skin_C.ExecuteUbergraph_Announcement_Skin
};

