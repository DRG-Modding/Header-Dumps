// WidgetBlueprintGeneratedClass UI_Milestone_View.UI_Milestone_View_C
// Size: 0x2c0 (Inherited: 0x230)
struct UUI_Milestone_View_C : UUI_KPI_Tab_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x238(0x08)
	UWrapBox* ParentBox; // 0x240(0x08)
	UUI_AvailablePerkPoints_C* UI_AvailablePerkPoints; // 0x248(0x08)
	UUI_MissionStats_Categories_C* UI_MissionStats_Categories; // 0x250(0x08)
	TArray<UUI_Milestone_Item_C*> KPI_Items; // 0x258(0x10)
	FMargin ItemPadding; // 0x268(0x10)
	TArray<UTexture2D*> Categories; // 0x278(0x10)
	TArray<UTexture2D*> CategoryFilter; // 0x288(0x10)
	bool HasClaimableMilestones; // 0x298(0x01)
	FMulticastInlineDelegate OnHasClaimableChanged; // 0x2a0(0x10)
	TArray<UMilestoneAsset*> Milestones; // 0x2b0(0x10)

	void Update Has Claimable State();
	void Construct();
	void BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature();
	void Init Milestone Widget(UUI_Milestone_Item_C* Item);
	void OnItemClaimableChanged_Event(UUI_Milestone_Item_C* Milestone Item);
	void Refresh();
	void ExecuteUbergraph_UI_Milestone_View(int32_t EntryPoint);
	void OnHasClaimableChanged__DelegateSignature(bool HasClaimable);
};

