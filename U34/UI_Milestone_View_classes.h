// WidgetBlueprintGeneratedClass UI_Milestone_View.UI_Milestone_View_C
// Size: 0x2c0 (Inherited: 0x230)
struct UUI_Milestone_View_C : UUI_KPI_Tab_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x238(0x08)
	struct UWrapBox* ParentBox; // 0x240(0x08)
	struct UUI_AvailablePerkPoints_C* UI_AvailablePerkPoints; // 0x248(0x08)
	struct UUI_MissionStats_Categories_C* UI_MissionStats_Categories; // 0x250(0x08)
	struct TArray<struct UUI_Milestone_Item_C*> KPI_Items; // 0x258(0x10)
	struct FMargin ItemPadding; // 0x268(0x10)
	struct TArray<struct UTexture2D*> Categories; // 0x278(0x10)
	struct TArray<struct UTexture2D*> CategoryFilter; // 0x288(0x10)
	bool HasClaimableMilestones; // 0x298(0x01)
	char UnknownData_299[0x7]; // 0x299(0x07)
	struct FMulticastInlineDelegate OnHasClaimableChanged; // 0x2a0(0x10)
	struct TArray<struct UMilestoneAsset*> Milestones; // 0x2b0(0x10)

	void Update Has Claimable State(); // Function UI_Milestone_View.UI_Milestone_View_C.Update Has Claimable State
	void Construct(); // Function UI_Milestone_View.UI_Milestone_View_C.Construct
	void BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature(); // Function UI_Milestone_View.UI_Milestone_View_C.BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature
	void Init Milestone Widget(struct UUI_Milestone_Item_C* Item); // Function UI_Milestone_View.UI_Milestone_View_C.Init Milestone Widget
	void OnItemClaimableChanged_Event(struct UUI_Milestone_Item_C* Milestone Item); // Function UI_Milestone_View.UI_Milestone_View_C.OnItemClaimableChanged_Event
	void Refresh(); // Function UI_Milestone_View.UI_Milestone_View_C.Refresh
	void ExecuteUbergraph_UI_Milestone_View(int32_t EntryPoint); // Function UI_Milestone_View.UI_Milestone_View_C.ExecuteUbergraph_UI_Milestone_View
	void OnHasClaimableChanged__DelegateSignature(bool HasClaimable); // Function UI_Milestone_View.UI_Milestone_View_C.OnHasClaimableChanged__DelegateSignature
};

