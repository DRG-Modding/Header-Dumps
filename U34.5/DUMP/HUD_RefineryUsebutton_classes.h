// WidgetBlueprintGeneratedClass HUD_RefineryUsebutton.HUD_RefineryUseButton_C
// Size: 0x260 (Inherited: 0x238)
struct UHUD_RefineryUseButton_C : UFSDInWorldWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	UWidgetAnimation* AnimDownArrow; // 0x240(0x08)
	UUI_ImageTinted_C* IMG_DownArrow; // 0x248(0x08)
	UImage* Img_Icon; // 0x250(0x08)
	AFSDRefinery* Refinery; // 0x258(0x08)

	void UpdateState();
	void Construct();
	void OnRefineryStateChanged(enum class ERefineryState InRefineryState);
	void PreConstruct(bool IsDesignTime);
	void SetRefinery(AFSDRefinery* InRefinery);
	void OnCanStartRefineryChanged(bool canUse);
	void ExecuteUbergraph_HUD_RefineryUseButton(int32_t EntryPoint);
};

