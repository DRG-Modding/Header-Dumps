// WidgetBlueprintGeneratedClass HUD_GameTags.HUD_GameTags_C
// Size: 0x248 (Inherited: 0x230)
struct UHUD_GameTags_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHUD_GameTags_Entry_C* GameTag_Experimental; // 0x238(0x08)
	UHUD_GameTags_Entry_C* GameTag_Sandbox; // 0x240(0x08)

	void UpdateSandboxTag();
	void UpdateExperimentalTag();
	void Construct();
	void ExecuteUbergraph_HUD_GameTags(int32_t EntryPoint);
};

