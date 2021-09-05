// WidgetBlueprintGeneratedClass ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C
// Size: 0x370 (Inherited: 0x250)
struct UITM_CommunityGoalInformation_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x258(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2; // 0x260(0x08)
	UUI_ImageTinted_C* Border; // 0x268(0x08)
	UButton* FactionIconToolTip; // 0x270(0x08)
	UTextBlock* GoalText; // 0x278(0x08)
	UImage* Icon; // 0x280(0x08)
	UVerticalBox* InfoBox; // 0x288(0x08)
	UTextBlock* TextBlock_1; // 0x290(0x08)
	UTextBlock* TitleText; // 0x298(0x08)
	UUI_HorizontalResourceBar_C* UI_HorizontalResourceBar; // 0x2a0(0x08)
	UUI_ImageTinted_C* UI_ImageTinted_268; // 0x2a8(0x08)
	FText Title; // 0x2b0(0x18)
	FSlateBrush IconImage; // 0x2c8(0x88)
	UCommunityGoal* CurrentGoal; // 0x350(0x08)
	UCommunityGoalFaction* Faction; // 0x358(0x08)
	bool IsShowingCurrentPlayerFaction; // 0x360(0x01)
	UITM_FactionToolTip_C* FactionToolTip; // 0x368(0x08)

	void DoFactionToolTip();
	void SetResourceBox(int32_t Tier);
	void UpdateIcon();
	void SetFaction(UCommunityGoalFaction* Faction);
	void ResetAnim();
	void PreConstruct(bool IsDesignTime);
	void SetGoal(UCommunityGoal* Goal);
	void CheckFaction();
	void SetFactionAndGoal(UCommunityGoalFaction* Faction, UCommunityGoal* Goal);
	void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_CommunityGoalInformation(int32_t EntryPoint);
};

