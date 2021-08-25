// WidgetBlueprintGeneratedClass HUD_ActivatablePerks.HUD_ActivatablePerks_C
// Size: 0x261 (Inherited: 0x250)
struct UHUD_ActivatablePerks_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UHorizontalBox* WidgetBox; // 0x258(0x08)
	enum class EPerkHUDActivationLocation Location; // 0x260(0x01)

	void SetPerks(struct TArray<struct UPerkAsset*> Array); // Function HUD_ActivatablePerks.HUD_ActivatablePerks_C.SetPerks
	void Construct(); // Function HUD_ActivatablePerks.HUD_ActivatablePerks_C.Construct
	void PreConstruct(bool IsDesignTime); // Function HUD_ActivatablePerks.HUD_ActivatablePerks_C.PreConstruct
	void ExecuteUbergraph_HUD_ActivatablePerks(int32_t EntryPoint); // Function HUD_ActivatablePerks.HUD_ActivatablePerks_C.ExecuteUbergraph_HUD_ActivatablePerks
};

