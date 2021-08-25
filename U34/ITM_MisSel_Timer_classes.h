// WidgetBlueprintGeneratedClass ITM_MisSel_Timer.ITM_MisSel_Timer_C
// Size: 0x258 (Inherited: 0x230)
struct UITM_MisSel_Timer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; // 0x240(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x248(0x08)
	struct UTextBlock* Counter; // 0x250(0x08)

	void Construct(); // Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.Construct
	void UpdateTime(); // Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.UpdateTime
	void PreConstruct(bool IsDesignTime); // Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.PreConstruct
	void ExecuteUbergraph_ITM_MisSel_Timer(int32_t EntryPoint); // Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.ExecuteUbergraph_ITM_MisSel_Timer
};

