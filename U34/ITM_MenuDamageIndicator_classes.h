// WidgetBlueprintGeneratedClass ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C
// Size: 0x250 (Inherited: 0x230)
struct UITM_MenuDamageIndicator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* DamageTaken; // 0x238(0x08)
	struct UImage* Image_Damage; // 0x240(0x08)
	struct UUserWidget* Menu; // 0x248(0x08)

	void PreConstruct(bool IsDesignTime); // Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.PreConstruct
	void OnHit(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.OnHit
	void OnAnimFinished(); // Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.OnAnimFinished
	void SetMenu(struct UUserWidget* EscapeMenu); // Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.SetMenu
	void ExecuteUbergraph_ITM_MenuDamageIndicator(int32_t EntryPoint); // Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.ExecuteUbergraph_ITM_MenuDamageIndicator
};

