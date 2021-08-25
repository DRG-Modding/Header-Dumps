// WidgetBlueprintGeneratedClass ITM_FactionToolTip.ITM_FactionToolTip_C
// Size: 0x2a0 (Inherited: 0x250)
struct UITM_FactionToolTip_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x258(0x08)
	struct UVerticalBox* CCDescription; // 0x260(0x08)
	struct UTextBlock* FactionDescription; // 0x268(0x08)
	struct UImage* FactionLogo; // 0x270(0x08)
	struct UTextBlock* FactionTitle; // 0x278(0x08)
	struct UImage* outline; // 0x280(0x08)
	struct UCommunityGoalFaction* Faction; // 0x288(0x08)
	struct FMulticastInlineDelegate FactionSelected; // 0x290(0x10)

	void Initialize(int32_t New Fee, struct UCommunityGoalFaction* Faction); // Function ITM_FactionToolTip.ITM_FactionToolTip_C.Initialize
	void SetFaction(struct UCommunityGoalFaction* Faction); // Function ITM_FactionToolTip.ITM_FactionToolTip_C.SetFaction
	void PreConstruct(bool IsDesignTime); // Function ITM_FactionToolTip.ITM_FactionToolTip_C.PreConstruct
	void ExecuteUbergraph_ITM_FactionToolTip(int32_t EntryPoint); // Function ITM_FactionToolTip.ITM_FactionToolTip_C.ExecuteUbergraph_ITM_FactionToolTip
	void FactionSelected__DelegateSignature(); // Function ITM_FactionToolTip.ITM_FactionToolTip_C.FactionSelected__DelegateSignature
};

