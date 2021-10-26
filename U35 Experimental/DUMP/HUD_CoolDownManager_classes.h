// WidgetBlueprintGeneratedClass HUD_CoolDownManager.HUD_CoolDownManager_C
// Size: 0x260 (Inherited: 0x230)
struct UHUD_CoolDownManager_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHUD_CooldownWidget_C* CooldownWidget_3; // 0x238(0x08)
	UHUD_CooldownWidget_C* CooldownWidget_C_4; // 0x240(0x08)
	UHUD_CooldownWidget_C* CooldownWidget_C_5; // 0x248(0x08)
	UHUD_CooldownWidget_C* CooldownWidget_C_6; // 0x250(0x08)
	UVerticalBox* IconBox; // 0x258(0x08)

	void GetOrCreateWidget(UObject* CoolDownOwner, FCoolDownProgressStyle CoolDownStyle, UCoolDownProgressWidget* Widget);
	void Construct();
	void OnCoolDownProgress_Event(UObject* CoolDownObject, FCoolDownProgressStyle Style, float Progress);
	void ExecuteUbergraph_HUD_CoolDownManager(int32_t EntryPoint);
};

