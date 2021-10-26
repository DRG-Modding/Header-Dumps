// WidgetBlueprintGeneratedClass HUD_ActivatablePerks.HUD_ActivatablePerks_C
// Size: 0x261 (Inherited: 0x250)
struct UHUD_ActivatablePerks_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UHorizontalBox* WidgetBox; // 0x258(0x08)
	enum class EPerkHUDActivationLocation Location; // 0x260(0x01)

	void SetPerks(TArray<UPerkAsset*> Array);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_ActivatablePerks(int32_t EntryPoint);
};

