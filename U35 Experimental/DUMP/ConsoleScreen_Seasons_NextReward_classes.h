// WidgetBlueprintGeneratedClass ConsoleScreen_Seasons_NextReward.ConsoleScreen_Seasons_NextReward_C
// Size: 0x280 (Inherited: 0x230)
struct UConsoleScreen_Seasons_NextReward_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* BGglow; // 0x238(0x08)
	UBorder* Border_4; // 0x240(0x08)
	UImage* I_Background; // 0x248(0x08)
	UImage* I_Gradient; // 0x250(0x08)
	UITM_Season_RewardImageSingle_C* ITM_BP_RewardImageSingle; // 0x258(0x08)
	UITM_Season_CharacterIcon_C* ITM_Season_CharacterIcon; // 0x260(0x08)
	UTextBlock* TextBlock_Category; // 0x268(0x08)
	UTextBlock* TextBlock_Title; // 0x270(0x08)
	UTextBlock* TextBlock_Title_2; // 0x278(0x08)

	void SetData(FSeasonLevel Season Level);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_ConsoleScreen_Seasons_NextReward(int32_t EntryPoint);
};

