// WidgetBlueprintGeneratedClass HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C
// Size: 0x280 (Inherited: 0x258)
struct UHUD_Itemwheel_Icon_C : UItemsBarIcon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UWidgetAnimation* AnimSelected; // 0x260(0x08)
	struct UBasic_HUD_BracketWindowBig_C* BasicWindow_Bracket; // 0x268(0x08)
	struct UImage* BG_Icon; // 0x270(0x08)
	struct UImage* Icon; // 0x278(0x08)

	void OnUnselect(); // Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnUnselect
	void OnSelect(); // Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnSelect
	void OnInit(); // Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnInit
	void PreConstruct(bool IsDesignTime); // Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.PreConstruct
	void ExecuteUbergraph_HUD_Itemwheel_Icon(int32_t EntryPoint); // Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.ExecuteUbergraph_HUD_Itemwheel_Icon
};

