// WidgetBlueprintGeneratedClass HUD_RefineryUsebutton.HUD_RefineryUseButton_C
// Size: 0x260 (Inherited: 0x238)
struct UHUD_RefineryUseButton_C : UFSDInWorldWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* AnimDownArrow; // 0x240(0x08)
	struct UUI_ImageTinted_C* IMG_DownArrow; // 0x248(0x08)
	struct UImage* Img_Icon; // 0x250(0x08)
	struct AFSDRefinery* Refinery; // 0x258(0x08)

	void UpdateState(); // Function HUD_RefineryUsebutton.HUD_RefineryUseButton_C.UpdateState
	void Construct(); // Function HUD_RefineryUsebutton.HUD_RefineryUseButton_C.Construct
	void OnRefineryStateChanged(enum class ERefineryState InRefineryState); // Function HUD_RefineryUsebutton.HUD_RefineryUseButton_C.OnRefineryStateChanged
	void PreConstruct(bool IsDesignTime); // Function HUD_RefineryUsebutton.HUD_RefineryUseButton_C.PreConstruct
	void SetRefinery(struct AFSDRefinery* InRefinery); // Function HUD_RefineryUsebutton.HUD_RefineryUseButton_C.SetRefinery
	void OnCanStartRefineryChanged(bool canUse); // Function HUD_RefineryUsebutton.HUD_RefineryUseButton_C.OnCanStartRefineryChanged
	void ExecuteUbergraph_HUD_RefineryUseButton(int32_t EntryPoint); // Function HUD_RefineryUsebutton.HUD_RefineryUseButton_C.ExecuteUbergraph_HUD_RefineryUseButton
};

