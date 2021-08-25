// WidgetBlueprintGeneratedClass ICON_Rank.ICON_Rank_C
// Size: 0x292 (Inherited: 0x250)
struct UICON_Rank_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UTextBlock* DataRank; // 0x258(0x08)
	struct UBorder* Icon_BG; // 0x260(0x08)
	struct UBorder* Icon_Center; // 0x268(0x08)
	struct UBorder* Icon_Left; // 0x270(0x08)
	struct UBorder* Icon_Right; // 0x278(0x08)
	struct UBorder* Icon_Top; // 0x280(0x08)
	struct UImage* RankIcon; // 0x288(0x08)
	bool HideBorder; // 0x290(0x01)
	bool ShowIcon; // 0x291(0x01)

	void Construct(); // Function ICON_Rank.ICON_Rank_C.Construct
	void Update(struct AFSDPlayerState* PlayerState); // Function ICON_Rank.ICON_Rank_C.Update
	void PreConstruct(bool IsDesignTime); // Function ICON_Rank.ICON_Rank_C.PreConstruct
	void SetRankAndStars(int32_t Rank, int32_t Stars); // Function ICON_Rank.ICON_Rank_C.SetRankAndStars
	void ExecuteUbergraph_ICON_Rank(int32_t EntryPoint); // Function ICON_Rank.ICON_Rank_C.ExecuteUbergraph_ICON_Rank
};

