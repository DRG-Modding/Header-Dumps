// WidgetBlueprintGeneratedClass ITM_FactionSelect.ITM_FactionSelect_C
// Size: 0x2c4 (Inherited: 0x250)
struct UITM_FactionSelect_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x258(0x08)
	struct UVerticalBox* CCDescription; // 0x260(0x08)
	struct UTextBlock* CostTextBlock; // 0x268(0x08)
	struct UTextBlock* FactionDescription; // 0x270(0x08)
	struct UImage* FactionLogo; // 0x278(0x08)
	struct UTextBlock* FactionTitle; // 0x280(0x08)
	struct UHorizontalBox* FeeBox; // 0x288(0x08)
	struct UImage* Image_430; // 0x290(0x08)
	struct UBasic_ButtonScalable_C* JoinButton; // 0x298(0x08)
	struct UImage* outline; // 0x2a0(0x08)
	struct UCommunityGoalFaction* Faction; // 0x2a8(0x08)
	struct FMulticastInlineDelegate FactionSelected; // 0x2b0(0x10)
	int32_t Fee; // 0x2c0(0x04)

	void Initialize(int32_t New Fee, struct UCommunityGoalFaction* Faction); // Function ITM_FactionSelect.ITM_FactionSelect_C.Initialize
	void SetFaction(struct UCommunityGoalFaction* Faction); // Function ITM_FactionSelect.ITM_FactionSelect_C.SetFaction
	void SetFee(int32_t New Fee); // Function ITM_FactionSelect.ITM_FactionSelect_C.SetFee
	void PreConstruct(bool IsDesignTime); // Function ITM_FactionSelect.ITM_FactionSelect_C.PreConstruct
	void BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function ITM_FactionSelect.ITM_FactionSelect_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void AnswerCC(bool Yes); // Function ITM_FactionSelect.ITM_FactionSelect_C.AnswerCC
	void ExecuteUbergraph_ITM_FactionSelect(int32_t EntryPoint); // Function ITM_FactionSelect.ITM_FactionSelect_C.ExecuteUbergraph_ITM_FactionSelect
	void FactionSelected__DelegateSignature(); // Function ITM_FactionSelect.ITM_FactionSelect_C.FactionSelected__DelegateSignature
};

