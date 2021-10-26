// WidgetBlueprintGeneratedClass ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C
// Size: 0x294 (Inherited: 0x250)
struct UITM_TopBar_PlayerRank_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UBorder* Border_2; // 0x258(0x08)
	UTextBlock* DataRank; // 0x260(0x08)
	UBorder* Icon_BG; // 0x268(0x08)
	UBorder* Icon_Center; // 0x270(0x08)
	UBorder* Icon_Left; // 0x278(0x08)
	UBorder* Icon_Right; // 0x280(0x08)
	UBorder* Icon_Top; // 0x288(0x08)
	int32_t NewVar_1; // 0x290(0x04)

	void FromPlayerState(APlayerState* PlayerState);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetRankAndStars(int32_t Rank, int32_t Stars);
	void OnPlayerProgressChanged(AFSDPlayerState* PlayerState, FPlayerProgress Progress);
	void ExecuteUbergraph_ITM_TopBar_PlayerRank(int32_t EntryPoint);
};

