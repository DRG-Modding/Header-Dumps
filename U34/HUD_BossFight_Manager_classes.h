// WidgetBlueprintGeneratedClass HUD_BossFight_Manager.HUD_BossFight_Manager_C
// Size: 0x25d (Inherited: 0x230)
struct UHUD_BossFight_Manager_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USizeBox* BarSize; // 0x238(0x08)
	struct UHorizontalBox* EntryBox; // 0x240(0x08)
	float MinDesiredWidth; // 0x248(0x04)
	char UnknownData_24C[0x4]; // 0x24c(0x04)
	struct UHUD_BossFight_BaseEntry_C* DefaultClassReference; // 0x250(0x08)
	int32_t PreviewEntries; // 0x258(0x04)
	bool IsPreviewing; // 0x25c(0x01)

	void AddBossFight(struct TScriptInterface<None> BossFight); // Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.AddBossFight
	void OnLoaded_7CEF0B6F41A50A9529F16780A3E45EE9(struct UObject* Loaded); // Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.OnLoaded_7CEF0B6F41A50A9529F16780A3E45EE9
	void Construct(); // Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.Construct
	void OnNewBossFight(struct TScriptInterface<None> BossFight); // Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.OnNewBossFight
	void PreConstruct(bool IsDesignTime); // Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.PreConstruct
	void ExecuteUbergraph_HUD_BossFight_Manager(int32_t EntryPoint); // Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.ExecuteUbergraph_HUD_BossFight_Manager
};

