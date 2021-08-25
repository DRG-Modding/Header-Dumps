// WidgetBlueprintGeneratedClass PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C
// Size: 0x2d0 (Inherited: 0x270)
struct UPopUp_CommunityGoal_SelectNewFaction_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x278(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x280(0x08)
	struct UBasic_ButtonScalable_C* Close; // 0x288(0x08)
	struct UTextBlock* DATA_Header; // 0x290(0x08)
	struct UITM_FactionSelect_C* ITM_FactionSelect; // 0x298(0x08)
	struct UITM_FactionSelect_C* ITM_FactionSelect_195; // 0x2a0(0x08)
	struct FMulticastInlineDelegate CheckState; // 0x2a8(0x10)
	int32_t Fee; // 0x2b8(0x04)
	char UnknownData_2BC[0x4]; // 0x2bc(0x04)
	struct UCommunityGoalFaction* Faction1; // 0x2c0(0x08)
	struct UCommunityGoalFaction* Faction2; // 0x2c8(0x08)

	void Initialize(int32_t Fee, struct UCommunityGoalFaction* Faction1, struct UCommunityGoalFaction* Faction2); // Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.Initialize
	void Construct(); // Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.Construct
	void Faction1Selected(); // Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.Faction1Selected
	void Faction2Selected(); // Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.Faction2Selected
	void BndEvt__Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.BndEvt__Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void ExecuteUbergraph_PopUp_CommunityGoal_SelectNewFaction(int32_t EntryPoint); // Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.ExecuteUbergraph_PopUp_CommunityGoal_SelectNewFaction
	void CheckState__DelegateSignature(bool Changed); // Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.CheckState__DelegateSignature
};

