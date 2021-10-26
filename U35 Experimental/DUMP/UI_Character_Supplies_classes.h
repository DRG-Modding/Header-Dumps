// WidgetBlueprintGeneratedClass UI_Character_Supplies.UI_Character_Supplies_C
// Size: 0x24a (Inherited: 0x230)
struct UUI_Character_Supplies_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UITM_SupplyBar_C* ITM_SupplyBar_Ammo; // 0x238(0x08)
	UITM_SupplyBar_C* ITM_SupplyBar_Health; // 0x240(0x08)
	bool SuppliesVisible; // 0x248(0x01)
	bool HealthVisible; // 0x249(0x01)

	void HandleVisiblity();
	void SetData(AFSDPlayerState* Player);
	void OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Character_Supplies(int32_t EntryPoint);
};

