// WidgetBlueprintGeneratedClass HUD_DamageClass_Item.HUD_DamageClass_Item_C
// Size: 0x269 (Inherited: 0x230)
struct UHUD_DamageClass_Item_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimDeactivate; // 0x238(0x08)
	UWidgetAnimation* AnimActivate; // 0x240(0x08)
	UImage* Icon; // 0x248(0x08)
	FMulticastInlineDelegate Elapsed; // 0x250(0x10)
	UPawnAffliction* affliction; // 0x260(0x08)
	bool Activated; // 0x268(0x01)

	void Construct();
	void Deactivate();
	void Activate();
	void OnDeactivedFinished();
	void ExecuteUbergraph_HUD_DamageClass_Item(int32_t EntryPoint);
	void Elapsed__DelegateSignature(UHUD_DamageClass_Item_C* Item);
};

