// WidgetBlueprintGeneratedClass HUD_Itembar_Icon.HUD_Itembar_Icon_C
// Size: 0x2c8 (Inherited: 0x258)
struct UHUD_Itembar_Icon_C : UItemsBarIcon {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	UWidgetAnimation* AnimSelected; // 0x260(0x08)
	UBasic_HUD_BracketWindowBig_C* BasicWindow_Bracket; // 0x268(0x08)
	UImage* BG_Icon; // 0x270(0x08)
	UTextBlock* ButtonKey; // 0x278(0x08)
	UImage* edgeL; // 0x280(0x08)
	UImage* edgeR; // 0x288(0x08)
	UImage* Icon; // 0x290(0x08)
	UImage* NumberBG; // 0x298(0x08)
	FSlateColor NumberColor; // 0x2a0(0x28)

	void SetSelected(bool IsSelected);
	void OnUnselect();
	void OnSelect();
	void PreConstruct(bool IsDesignTime);
	void OnInit();
	void ExecuteUbergraph_HUD_Itembar_Icon(int32_t EntryPoint);
};

