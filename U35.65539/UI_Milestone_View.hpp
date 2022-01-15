#ifndef UE4SS_SDK_UI_Milestone_View_HPP
#define UE4SS_SDK_UI_Milestone_View_HPP

class UUI_Milestone_View_C : UUI_KPI_Tab_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    UWrapBox* ParentBox;
    UUI_AvailablePerkPoints_C* UI_AvailablePerkPoints;
    UUI_MissionStats_Categories_C* UI_MissionStats_Categories;
    TArray<UUI_Milestone_Item_C*> KPI_Items;
    FMargin ItemPadding;
    TArray<UTexture2D*> Categories;
    TArray<UTexture2D*> CategoryFilter;
    bool HasClaimableMilestones;
    FUI_Milestone_View_COnHasClaimableChanged OnHasClaimableChanged;
    void OnHasClaimableChanged(bool HasClaimable);
    TArray<UMilestoneAsset*> Milestones;

    void Update Has Claimable State(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UUI_Milestone_Item_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetIsClaimable_ItemClaimable);
    void Construct();
    void BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature();
    void Init Milestone Widget(UUI_Milestone_Item_C* Item);
    void OnItemClaimableChanged_Event(UUI_Milestone_Item_C* Milestone Item);
    void Refresh();
    void ExecuteUbergraph_UI_Milestone_View(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UUI_Milestone_Item_C* CallFunc_Create_ReturnValue, UTexture2D* CallFunc_GetIcon_Icon, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue, UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, TArray<UTexture2D*>& CallFunc_GetCategorySelection_Selection, UUI_Milestone_Item_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<UMilestoneAsset*>& CallFunc_SortMilestonesByProgress_ReturnValue, OnItemClaimableChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UMilestoneAsset* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, UUI_Milestone_Item_C* K2Node_CustomEvent_Item, UUI_Milestone_Item_C* K2Node_CustomEvent_Milestone_Item);
    void OnHasClaimableChanged__DelegateSignature(bool HasClaimable);
}

#endif
