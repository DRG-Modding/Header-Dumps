// WidgetBlueprintGeneratedClass HUD_CoolDownManager.HUD_CoolDownManager_C
// Size: 0x260 (Inherited: 0x230)
struct UHUD_CoolDownManager_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHUD_CooldownWidget_C* CooldownWidget_3; // 0x238(0x08)
	struct UHUD_CooldownWidget_C* CooldownWidget_C_4; // 0x240(0x08)
	struct UHUD_CooldownWidget_C* CooldownWidget_C_5; // 0x248(0x08)
	struct UHUD_CooldownWidget_C* CooldownWidget_C_6; // 0x250(0x08)
	struct UVerticalBox* IconBox; // 0x258(0x08)

	void GetOrCreateWidget(struct UObject* CoolDownOwner, struct FCoolDownProgressStyle CoolDownStyle, struct UCoolDownProgressWidget* Widget); // Function HUD_CoolDownManager.HUD_CoolDownManager_C.GetOrCreateWidget
	void Construct(); // Function HUD_CoolDownManager.HUD_CoolDownManager_C.Construct
	void OnCoolDownProgress_Event(struct UObject* CoolDownObject, struct FCoolDownProgressStyle Style, float Progress); // Function HUD_CoolDownManager.HUD_CoolDownManager_C.OnCoolDownProgress_Event
	void ExecuteUbergraph_HUD_CoolDownManager(int32_t EntryPoint); // Function HUD_CoolDownManager.HUD_CoolDownManager_C.ExecuteUbergraph_HUD_CoolDownManager
};

