// WidgetBlueprintGeneratedClass ITM_FactionToolTip.ITM_FactionToolTip_C
// Size: 0x2a0 (Inherited: 0x250)
struct UITM_FactionToolTip_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x258(0x08)
	UVerticalBox* CCDescription; // 0x260(0x08)
	UTextBlock* FactionDescription; // 0x268(0x08)
	UImage* FactionLogo; // 0x270(0x08)
	UTextBlock* FactionTitle; // 0x278(0x08)
	UImage* outline; // 0x280(0x08)
	UCommunityGoalFaction* Faction; // 0x288(0x08)
	FMulticastInlineDelegate FactionSelected; // 0x290(0x10)

	void Initialize(int32_t New Fee, UCommunityGoalFaction* Faction);
	void SetFaction(UCommunityGoalFaction* Faction);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_FactionToolTip(int32_t EntryPoint);
	void FactionSelected__DelegateSignature();
};

