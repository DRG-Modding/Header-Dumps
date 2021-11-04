// WidgetBlueprintGeneratedClass Announcement_Skin.Announcement_Skin_C
// Size: 0x2b0 (Inherited: 0x230)
struct UAnnouncement_Skin_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnnounceAnim; // 0x238(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x240(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_84; // 0x248(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_86; // 0x250(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_87; // 0x258(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_88; // 0x260(0x08)
	UBorder* Border_2; // 0x268(0x08)
	UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x270(0x08)
	UITM_SkinIcon_C* ITM_SkinIcon; // 0x278(0x08)
	UBasic_Label_C* NameLabel; // 0x280(0x08)
	UCanvasPanel* Root; // 0x288(0x08)
	UUI_Forge_Schematic_OwnerIcon_C* UI_SchematicOwnerIcon; // 0x290(0x08)
	float StartDelay; // 0x298(0x04)
	UItemSkin* Skin; // 0x2a0(0x08)
	UItemID* SkinOwner; // 0x2a8(0x08)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnAnnounceAnimFinished();
	void ExecuteUbergraph_Announcement_Skin(int32_t EntryPoint);
};

