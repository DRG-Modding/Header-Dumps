#ifndef UE4SS_SDK_UI_Milestone_View_HPP
#define UE4SS_SDK_UI_Milestone_View_HPP

class UUI_Milestone_View_C : public UUI_KPI_Tab_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    class UWrapBox* ParentBox;
    class UUI_AvailablePerkPoints_C* UI_AvailablePerkPoints;
    class UUI_MissionStats_Categories_C* UI_MissionStats_Categories;
    TArray<class UUI_Milestone_Item_C*> KPI_Items;
    FMargin ItemPadding;
    TArray<class UTexture2D*> Categories;
    TArray<class UTexture2D*> CategoryFilter;
    bool HasClaimableMilestones;
    FUI_Milestone_View_COnHasClaimableChanged OnHasClaimableChanged;
    void OnHasClaimableChanged(bool HasClaimable);
    TArray<class UMilestoneAsset*> Milestones;

    void Update Has Claimable State(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUI_Milestone_Item_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetIsClaimable_ItemClaimable);
    void Construct();
    void BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature();
    void Init Milestone Widget(class UUI_Milestone_Item_C* Item);
    void OnItemClaimableChanged_Event(class UUI_Milestone_Item_C* Milestone Item);
    void Refresh();
    void ExecuteUbergraph_UI_Milestone_View(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_Milestone_Item_C* CallFunc_Create_ReturnValue, class UTexture2D* CallFunc_GetIcon_Icon, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, TArray<class UTexture2D*>& CallFunc_GetCategorySelection_Selection, class UUI_Milestone_Item_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UMilestoneAsset*>& CallFunc_SortMilestonesByProgress_ReturnValue, FExecuteUbergraph_UI_Milestone_ViewK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UMilestoneAsset* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UUI_Milestone_Item_C* K2Node_CustomEvent_Item, class UUI_Milestone_Item_C* K2Node_CustomEvent_Milestone_Item);
    void OnHasClaimableChanged__DelegateSignature(bool HasClaimable);
};

#endif
