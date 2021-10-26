// WidgetBlueprintGeneratedClass UI_MicroMissileLauncher_Charge.UI_MicroMissileLauncher_Charge_C
// Size: 0x251 (Inherited: 0x230)
struct UUI_MicroMissileLauncher_Charge_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimCharged; // 0x238(0x08)
	UImage* Background; // 0x240(0x08)
	UImage* Charged; // 0x248(0x08)
	bool On; // 0x250(0x01)

	void PreConstruct(bool IsDesignTime);
	void SetOn(bool InOn);
	void ExecuteUbergraph_UI_MicroMissileLauncher_Charge(int32_t EntryPoint);
};

