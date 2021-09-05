// WidgetBlueprintGeneratedClass ITM_MisSel_Timer.ITM_MisSel_Timer_C
// Size: 0x258 (Inherited: 0x230)
struct UITM_MisSel_Timer_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; // 0x240(0x08)
	UBlurBackground_C* BlurBackground; // 0x248(0x08)
	UTextBlock* Counter; // 0x250(0x08)

	void Construct();
	void UpdateTime();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_MisSel_Timer(int32_t EntryPoint);
};

