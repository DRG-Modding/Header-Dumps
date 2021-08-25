// WidgetBlueprintGeneratedClass HUD_Itembar_Icon.HUD_Itembar_Icon_C
// Size: 0x2c8 (Inherited: 0x258)
struct UHUD_Itembar_Icon_C : UItemsBarIcon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UWidgetAnimation* AnimSelected; // 0x260(0x08)
	struct UBasic_HUD_BracketWindowBig_C* BasicWindow_Bracket; // 0x268(0x08)
	struct UImage* BG_Icon; // 0x270(0x08)
	struct UTextBlock* ButtonKey; // 0x278(0x08)
	struct UImage* edgeL; // 0x280(0x08)
	struct UImage* edgeR; // 0x288(0x08)
	struct UImage* Icon; // 0x290(0x08)
	struct UImage* NumberBG; // 0x298(0x08)
	struct FSlateColor NumberColor; // 0x2a0(0x28)

	void SetSelected(bool IsSelected); // Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.SetSelected
	void OnUnselect(); // Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.OnUnselect
	void OnSelect(); // Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.OnSelect
	void PreConstruct(bool IsDesignTime); // Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.PreConstruct
	void OnInit(); // Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.OnInit
	void ExecuteUbergraph_HUD_Itembar_Icon(int32_t EntryPoint); // Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.ExecuteUbergraph_HUD_Itembar_Icon
};

