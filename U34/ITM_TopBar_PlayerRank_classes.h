// WidgetBlueprintGeneratedClass ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C
// Size: 0x294 (Inherited: 0x250)
struct UITM_TopBar_PlayerRank_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UBorder* Border_2; // 0x258(0x08)
	struct UTextBlock* DataRank; // 0x260(0x08)
	struct UBorder* Icon_BG; // 0x268(0x08)
	struct UBorder* Icon_Center; // 0x270(0x08)
	struct UBorder* Icon_Left; // 0x278(0x08)
	struct UBorder* Icon_Right; // 0x280(0x08)
	struct UBorder* Icon_Top; // 0x288(0x08)
	int32_t NewVar_1; // 0x290(0x04)

	void FromPlayerState(struct APlayerState* PlayerState); // Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.FromPlayerState
	void Construct(); // Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.Construct
	void PreConstruct(bool IsDesignTime); // Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.PreConstruct
	void SetRankAndStars(int32_t Rank, int32_t Stars); // Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.SetRankAndStars
	void OnPlayerProgressChanged(struct AFSDPlayerState* PlayerState, struct FPlayerProgress Progress); // Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.OnPlayerProgressChanged
	void ExecuteUbergraph_ITM_TopBar_PlayerRank(int32_t EntryPoint); // Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.ExecuteUbergraph_ITM_TopBar_PlayerRank
};

