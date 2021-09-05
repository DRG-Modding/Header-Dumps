// WidgetBlueprintGeneratedClass ITM_FactionSelect.ITM_FactionSelect_C
// Size: 0x2c4 (Inherited: 0x250)
struct UITM_FactionSelect_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x258(0x08)
	UVerticalBox* CCDescription; // 0x260(0x08)
	UTextBlock* CostTextBlock; // 0x268(0x08)
	UTextBlock* FactionDescription; // 0x270(0x08)
	UImage* FactionLogo; // 0x278(0x08)
	UTextBlock* FactionTitle; // 0x280(0x08)
	UHorizontalBox* FeeBox; // 0x288(0x08)
	UImage* Image_430; // 0x290(0x08)
	UBasic_ButtonScalable_C* JoinButton; // 0x298(0x08)
	UImage* outline; // 0x2a0(0x08)
	UCommunityGoalFaction* Faction; // 0x2a8(0x08)
	FMulticastInlineDelegate FactionSelected; // 0x2b0(0x10)
	int32_t Fee; // 0x2c0(0x04)

	void Initialize(int32_t New Fee, UCommunityGoalFaction* Faction);
	void SetFaction(UCommunityGoalFaction* Faction);
	void SetFee(int32_t New Fee);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void AnswerCC(bool Yes);
	void ExecuteUbergraph_ITM_FactionSelect(int32_t EntryPoint);
	void FactionSelected__DelegateSignature();
};

