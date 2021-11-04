// WidgetBlueprintGeneratedClass ITM_Season_Progress_TerminalVersion.ITM_Season_Progress_TerminalVersion_C
// Size: 0x278 (Inherited: 0x230)
struct UITM_Season_Progress_TerminalVersion_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* Border_4; // 0x238(0x08)
	UImage* I_BG_Black; // 0x240(0x08)
	UImage* I_BG_BlueGradient; // 0x248(0x08)
	UImage* Image_153; // 0x250(0x08)
	UProgressBar* ProgressBar_263; // 0x258(0x08)
	UTextBlock* Text_CurrentLevel; // 0x260(0x08)
	UTextBlock* Text_CurrentLevel_2; // 0x268(0x08)
	UTextBlock* TextBlock_XP; // 0x270(0x08)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_ITM_Season_Progress_TerminalVersion(int32_t EntryPoint);
};

