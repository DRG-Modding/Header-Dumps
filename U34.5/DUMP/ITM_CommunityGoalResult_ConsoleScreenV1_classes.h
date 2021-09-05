// WidgetBlueprintGeneratedClass ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C
// Size: 0x378 (Inherited: 0x250)
struct UITM_CommunityGoalResult_ConsoleScreenV1_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UOverlay* BronzeImage; // 0x258(0x08)
	UOverlay* GoldImage; // 0x260(0x08)
	UImage* Icon; // 0x268(0x08)
	UImage* ImageB; // 0x270(0x08)
	UImage* ImageG; // 0x278(0x08)
	UImage* ImageNT; // 0x280(0x08)
	UImage* Images; // 0x288(0x08)
	UOverlay* NoTierImage; // 0x290(0x08)
	UOverlay* SilverImage; // 0x298(0x08)
	UTextBlock* TierTextBlock; // 0x2a0(0x08)
	UTextBlock* TitleTextBlock; // 0x2a8(0x08)
	UUI_ImageTinted_C* UI_ImageTinted; // 0x2b0(0x08)
	UUI_ImageTinted_C* UI_ImageTinted_268; // 0x2b8(0x08)
	FText Title; // 0x2c0(0x18)
	int32_t TitleSize; // 0x2d8(0x04)
	FSlateBrush IconImage; // 0x2e0(0x88)
	UCommunityGoalFaction* Faction; // 0x368(0x08)
	FVector2D TierIconSize; // 0x370(0x08)

	void UpdateTitle();
	void UpdateIcon();
	void SetFaction(UCommunityGoalFaction* Faction);
	void PreConstruct(bool IsDesignTime);
	void SetResult(int32_t Score, int32_t Tier);
	void ExecuteUbergraph_ITM_CommunityGoalResult_ConsoleScreenV1(int32_t EntryPoint);
};

