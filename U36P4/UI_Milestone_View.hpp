#ifndef UE4SS_SDK_UI_Milestone_View_HPP
#define UE4SS_SDK_UI_Milestone_View_HPP

class UUI_Milestone_View_C : public UUI_KPI_Tab_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWrapBox* ItemWrapBox;
    class UBasic_ScrollBarBox_C* ScrollBar;
    class UUI_AvailablePerkPoints_C* UI_AvailablePerkPoints;
    class UUI_MissionStats_Categories_C* UI_MissionStats_Categories;
    TArray<class UUI_Milestone_Item_C*> KPI_Items;
    TArray<class UTexture2D*> Categories;
    TArray<class UTexture2D*> CategoryFilter;
    bool HasClaimableMilestones;
    FUI_Milestone_View_COnHasClaimableChanged OnHasClaimableChanged;
    void OnHasClaimableChanged(bool HasClaimable);
    TArray<class UMilestoneAsset*> Milestones;

    void AddMilestone(class UMilestoneAsset* InMilestone);
    void Clear();
    void BuildList();
    void Update Has Claimable State();
    void Construct();
    void BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature();
    void Init Milestone Widget(class UUI_Milestone_Item_C* Item);
    void OnItemClaimableChanged_Event(class UUI_Milestone_Item_C* Milestone Item);
    void Refresh();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Milestone_View(int32 EntryPoint);
    void OnHasClaimableChanged__DelegateSignature(bool HasClaimable);
};

#endif
