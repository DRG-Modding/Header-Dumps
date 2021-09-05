// WidgetBlueprintGeneratedClass HUD_BossFight_Manager.HUD_BossFight_Manager_C
// Size: 0x25d (Inherited: 0x230)
struct UHUD_BossFight_Manager_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	USizeBox* BarSize; // 0x238(0x08)
	UHorizontalBox* EntryBox; // 0x240(0x08)
	float MinDesiredWidth; // 0x248(0x04)
	UHUD_BossFight_BaseEntry_C* DefaultClassReference; // 0x250(0x08)
	int32_t PreviewEntries; // 0x258(0x04)
	bool IsPreviewing; // 0x25c(0x01)

	void AddBossFight(TScriptInterface<IBossFightInterface> BossFight);
	void OnLoaded_7CEF0B6F41A50A9529F16780A3E45EE9(UObject* Loaded);
	void Construct();
	void OnNewBossFight(TScriptInterface<IBossFightInterface> BossFight);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_BossFight_Manager(int32_t EntryPoint);
};

