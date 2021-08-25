// WidgetBlueprintGeneratedClass ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C
// Size: 0x378 (Inherited: 0x250)
struct UITM_CommunityGoalResult_ConsoleScreenV1_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UOverlay* BronzeImage; // 0x258(0x08)
	struct UOverlay* GoldImage; // 0x260(0x08)
	struct UImage* Icon; // 0x268(0x08)
	struct UImage* ImageB; // 0x270(0x08)
	struct UImage* ImageG; // 0x278(0x08)
	struct UImage* ImageNT; // 0x280(0x08)
	struct UImage* Images; // 0x288(0x08)
	struct UOverlay* NoTierImage; // 0x290(0x08)
	struct UOverlay* SilverImage; // 0x298(0x08)
	struct UTextBlock* TierTextBlock; // 0x2a0(0x08)
	struct UTextBlock* TitleTextBlock; // 0x2a8(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted; // 0x2b0(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted_268; // 0x2b8(0x08)
	struct FText Title; // 0x2c0(0x18)
	int32_t TitleSize; // 0x2d8(0x04)
	char UnknownData_2DC[0x4]; // 0x2dc(0x04)
	struct FSlateBrush IconImage; // 0x2e0(0x88)
	struct UCommunityGoalFaction* Faction; // 0x368(0x08)
	struct FVector2D TierIconSize; // 0x370(0x08)

	void UpdateTitle(); // Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.UpdateTitle
	void UpdateIcon(); // Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.UpdateIcon
	void SetFaction(struct UCommunityGoalFaction* Faction); // Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.SetFaction
	void PreConstruct(bool IsDesignTime); // Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.PreConstruct
	void SetResult(int32_t Score, int32_t Tier); // Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.SetResult
	void ExecuteUbergraph_ITM_CommunityGoalResult_ConsoleScreenV1(int32_t EntryPoint); // Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.ExecuteUbergraph_ITM_CommunityGoalResult_ConsoleScreenV1
};

