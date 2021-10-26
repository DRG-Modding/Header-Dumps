// WidgetBlueprintGeneratedClass HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C
// Size: 0x280 (Inherited: 0x258)
struct UHUD_Itemwheel_Icon_C : UItemsBarIcon {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	UWidgetAnimation* AnimSelected; // 0x260(0x08)
	UBasic_HUD_BracketWindowBig_C* BasicWindow_Bracket; // 0x268(0x08)
	UImage* BG_Icon; // 0x270(0x08)
	UImage* Icon; // 0x278(0x08)

	void OnUnselect();
	void OnSelect();
	void OnInit();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_Itemwheel_Icon(int32_t EntryPoint);
};

