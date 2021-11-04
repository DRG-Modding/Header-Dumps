// WidgetBlueprintGeneratedClass ICON_Rank.ICON_Rank_C
// Size: 0x292 (Inherited: 0x250)
struct UICON_Rank_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UTextBlock* DataRank; // 0x258(0x08)
	UBorder* Icon_BG; // 0x260(0x08)
	UBorder* Icon_Center; // 0x268(0x08)
	UBorder* Icon_Left; // 0x270(0x08)
	UBorder* Icon_Right; // 0x278(0x08)
	UBorder* Icon_Top; // 0x280(0x08)
	UImage* RankIcon; // 0x288(0x08)
	bool HideBorder; // 0x290(0x01)
	bool ShowIcon; // 0x291(0x01)

	void Construct();
	void Update(AFSDPlayerState* PlayerState);
	void PreConstruct(bool IsDesignTime);
	void SetRankAndStars(int32_t Rank, int32_t Stars);
	void ExecuteUbergraph_ICON_Rank(int32_t EntryPoint);
};

