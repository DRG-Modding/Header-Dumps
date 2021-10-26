// WidgetBlueprintGeneratedClass HUD_FixDispenser.HUD_FixDispenser_C
// Size: 0x268 (Inherited: 0x238)
struct UHUD_FixDispenser_C : UFSDInWorldWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	UWidgetAnimation* AnimDownArrow; // 0x240(0x08)
	UUI_ImageTinted_C* IMG_DownArrow; // 0x248(0x08)
	UImage* IMG_Icon; // 0x250(0x08)
	AFSDRefinery* Refinery; // 0x258(0x08)
	UUsableComponentBase* Usable; // 0x260(0x08)

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_FixDispenser(int32_t EntryPoint);
};

