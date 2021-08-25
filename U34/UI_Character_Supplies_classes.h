// WidgetBlueprintGeneratedClass UI_Character_Supplies.UI_Character_Supplies_C
// Size: 0x24a (Inherited: 0x230)
struct UUI_Character_Supplies_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UITM_SupplyBar_C* ITM_SupplyBar_Ammo; // 0x238(0x08)
	struct UITM_SupplyBar_C* ITM_SupplyBar_Health; // 0x240(0x08)
	bool SuppliesVisible; // 0x248(0x01)
	bool HealthVisible; // 0x249(0x01)

	void HandleVisiblity(); // Function UI_Character_Supplies.UI_Character_Supplies_C.HandleVisiblity
	void SetData(struct AFSDPlayerState* Player); // Function UI_Character_Supplies.UI_Character_Supplies_C.SetData
	void OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01); // Function UI_Character_Supplies.UI_Character_Supplies_C.OnSupplyStatusChangedEvent
	void PreConstruct(bool IsDesignTime); // Function UI_Character_Supplies.UI_Character_Supplies_C.PreConstruct
	void ExecuteUbergraph_UI_Character_Supplies(int32_t EntryPoint); // Function UI_Character_Supplies.UI_Character_Supplies_C.ExecuteUbergraph_UI_Character_Supplies
};

