// WidgetBlueprintGeneratedClass HUD_DamageClass_Item.HUD_DamageClass_Item_C
// Size: 0x269 (Inherited: 0x230)
struct UHUD_DamageClass_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimDeactivate; // 0x238(0x08)
	struct UWidgetAnimation* AnimActivate; // 0x240(0x08)
	struct UImage* Icon; // 0x248(0x08)
	struct FMulticastInlineDelegate Elapsed; // 0x250(0x10)
	struct UPawnAffliction* affliction; // 0x260(0x08)
	bool Activated; // 0x268(0x01)

	void Construct(); // Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Construct
	void Deactivate(); // Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Deactivate
	void Activate(); // Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Activate
	void OnDeactivedFinished(); // Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.OnDeactivedFinished
	void ExecuteUbergraph_HUD_DamageClass_Item(int32_t EntryPoint); // Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.ExecuteUbergraph_HUD_DamageClass_Item
	void Elapsed__DelegateSignature(struct UHUD_DamageClass_Item_C* Item); // Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Elapsed__DelegateSignature
};

