// WidgetBlueprintGeneratedClass ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C
// Size: 0x244 (Inherited: 0x230)
struct UITM_TopBar_PlayerCounter_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* ClassIcon; // 0x238(0x08)
	int32_t Index; // 0x240(0x04)

	void GetPlayerClass(APlayerCharacter* OutPlayerCharacter);
	void Refresh();
	void Construct();
	void ExecuteUbergraph_ITM_TopBar_PlayerCounter(int32_t EntryPoint);
};

