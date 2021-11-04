// WidgetBlueprintGeneratedClass HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C
// Size: 0x260 (Inherited: 0x240)
struct UHUD_BossFight_BaseEntry_C : UBossFightWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	FBossFight BossFightInfo; // 0x248(0x18)

	void GetBossFight(FBossFight BossFight);
	void OnCanTakeDamageChanged(bool OutCanTakeDamage);
	void OnDeath();
	void OnDisengaged();
	void OnHealthChanged(float Health);
	void Construct();
	void OnFightRemoved(TScriptInterface<IBossFightInterface> BossFight);
	void Setup Invulnerability();
	void ExecuteUbergraph_HUD_BossFight_BaseEntry(int32_t EntryPoint);
};

