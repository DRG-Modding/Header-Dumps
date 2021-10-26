// WidgetBlueprintGeneratedClass ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C
// Size: 0x250 (Inherited: 0x230)
struct UITM_MenuDamageIndicator_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* DamageTaken; // 0x238(0x08)
	UImage* Image_Damage; // 0x240(0x08)
	UUserWidget* Menu; // 0x248(0x08)

	void PreConstruct(bool IsDesignTime);
	void OnHit(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	void OnAnimFinished();
	void SetMenu(UUserWidget* EscapeMenu);
	void ExecuteUbergraph_ITM_MenuDamageIndicator(int32_t EntryPoint);
};

