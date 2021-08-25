// WidgetBlueprintGeneratedClass ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C
// Size: 0x370 (Inherited: 0x250)
struct UITM_CommunityGoalInformation_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x258(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2; // 0x260(0x08)
	struct UUI_ImageTinted_C* Border; // 0x268(0x08)
	struct UButton* FactionIconToolTip; // 0x270(0x08)
	struct UTextBlock* GoalText; // 0x278(0x08)
	struct UImage* Icon; // 0x280(0x08)
	struct UVerticalBox* InfoBox; // 0x288(0x08)
	struct UTextBlock* TextBlock_1; // 0x290(0x08)
	struct UTextBlock* TitleText; // 0x298(0x08)
	struct UUI_HorizontalResourceBar_C* UI_HorizontalResourceBar; // 0x2a0(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted_268; // 0x2a8(0x08)
	struct FText Title; // 0x2b0(0x18)
	struct FSlateBrush IconImage; // 0x2c8(0x88)
	struct UCommunityGoal* CurrentGoal; // 0x350(0x08)
	struct UCommunityGoalFaction* Faction; // 0x358(0x08)
	bool IsShowingCurrentPlayerFaction; // 0x360(0x01)
	char UnknownData_361[0x7]; // 0x361(0x07)
	struct UITM_FactionToolTip_C* FactionToolTip; // 0x368(0x08)

	void DoFactionToolTip(); // Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.DoFactionToolTip
	void SetResourceBox(int32_t Tier); // Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.SetResourceBox
	void UpdateIcon(); // Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.UpdateIcon
	void SetFaction(struct UCommunityGoalFaction* Faction); // Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.SetFaction
	void ResetAnim(); // Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.ResetAnim
	void PreConstruct(bool IsDesignTime); // Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.PreConstruct
	void SetGoal(struct UCommunityGoal* Goal); // Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.SetGoal
	void CheckFaction(); // Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.CheckFaction
	void SetFactionAndGoal(struct UCommunityGoalFaction* Faction, struct UCommunityGoal* Goal); // Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.SetFactionAndGoal
	void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_ITM_CommunityGoalInformation(int32_t EntryPoint); // Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.ExecuteUbergraph_ITM_CommunityGoalInformation
};

