// WidgetBlueprintGeneratedClass ITM_ResetFaction.ITM_ResetFaction_C
// Size: 0x2b0 (Inherited: 0x230)
struct UITM_ResetFaction_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_ButtonScalable_C* Basic_ButtonScalable; // 0x238(0x08)
	struct UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x240(0x08)
	struct UTextBlock* CostTextBlock; // 0x248(0x08)
	struct USizeBox* CurrentSizebox; // 0x250(0x08)
	struct UImage* FactionLogo; // 0x258(0x08)
	struct UTextBlock* FactionNameTextBlock; // 0x260(0x08)
	struct UImage* Image_430; // 0x268(0x08)
	struct UUI_GradientMasked_Image_C* UI_GradientMasked_Image; // 0x270(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted; // 0x278(0x08)
	struct UCommunityGoalFaction* CurrentFaction; // 0x280(0x08)
	int32_t Cost; // 0x288(0x04)
	char UnknownData_28C[0x4]; // 0x28c(0x04)
	struct FMulticastInlineDelegate CheckState; // 0x290(0x10)
	struct TArray<struct UCommunityGoalFaction*> FactionArray; // 0x2a0(0x10)

	int32_t CurrentFactionID(); // Function ITM_ResetFaction.ITM_ResetFaction_C.CurrentFactionID
	void PreConstruct(bool IsDesignTime); // Function ITM_ResetFaction.ITM_ResetFaction_C.PreConstruct
	void Set Faction(struct UCommunityGoalFaction* Faction); // Function ITM_ResetFaction.ITM_ResetFaction_C.Set Faction
	void BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function ITM_ResetFaction.ITM_ResetFaction_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void OnFactionSwitch(bool Changed); // Function ITM_ResetFaction.ITM_ResetFaction_C.OnFactionSwitch
	void ExecuteUbergraph_ITM_ResetFaction(int32_t EntryPoint); // Function ITM_ResetFaction.ITM_ResetFaction_C.ExecuteUbergraph_ITM_ResetFaction
	void CheckState__DelegateSignature(); // Function ITM_ResetFaction.ITM_ResetFaction_C.CheckState__DelegateSignature
};

