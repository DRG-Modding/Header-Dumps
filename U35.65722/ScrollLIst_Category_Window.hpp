#ifndef UE4SS_SDK_ScrollLIst_Category_Window_HPP
#define UE4SS_SDK_ScrollLIst_Category_Window_HPP

class UScrollLIst_Category_Window_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULore_List_Element_C* Basic_List_Element;
    class ULore_List_Element_C* Basic_List_Element_C_0;
    class ULore_List_Element_C* Basic_List_Element_C_1;
    class ULore_List_Filler_C* Lore_List_Filler;
    class UScrollBox* ScrollBox_List;
    class U_MENU_MinersManual_C* _MENU_MinersManual;
    class ULore_List_Element_C* SelectedButton;
    TArray<class ULore_List_Element_C*> CurrButtons;
    int32 TempIndex;
    TArray<class ULore_List_Element_C*> AnimationQueue;
    float TimeBetweenAnimations;
    float LastAnimStartTime;
    int32 PendingButtonClick;
    bool IsAutoScrolling;
    class ULore_List_Filler_C* FillerElement;
    int32 #PendingButtons;

    void SelectNext(int32 Direction, int32 Index, int32 CallFunc_Add_IntInt_ReturnValue, class ULore_List_Element_C* CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
    void CreateButton(FMM_ButtonInfo Button, FText HeaderText, bool ShouldClick, bool ShowArrow, int32 Index, class ULore_List_Element_C* tempButton, class ULore_List_Element_C* CallFunc_Create_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class ULore_List_Header_C* CallFunc_Create_ReturnValue_1, FCreateButtonK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1);
    void OnClicked(int32 Index);
    void SetData(class U_MENU_MinersManual_C* _MENU_MinersManual);
    void PlayButtonIntro(class ULore_List_Element_C* Target);
    void Clear();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PlayAnimInternal(class ULore_List_Element_C* Target);
    void CheckForHeader(class ULore_List_Element_C* Target);
    void Construct();
    void CustomEvent(float CurrentOffset);
    void ScrollIntoViewDelay(class UWidget* WidgetToFind);
    void PrepareNewSection(int32 NumberOfButtons);
    void OnInitialized();
    void DecreseFillSpace();
    void SetSelectedButton(int32 Index);
    void ExecuteUbergraph_ScrollLIst_Category_Window(int32 EntryPoint, class U_MENU_MinersManual_C* K2Node_CustomEvent__Menu_MinersManual, int32 K2Node_CustomEvent_Index_1, class ULore_List_Element_C* K2Node_CustomEvent_Target_2, float CallFunc_GetRealTimeSeconds_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_GetRealTimeSeconds_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, class ULore_List_Element_C* K2Node_CustomEvent_Target_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class ULore_List_Element_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ULore_List_Element_C* K2Node_CustomEvent_Target, int32 CallFunc_GetChildIndex_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class ULore_List_Filler_C* CallFunc_Create_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class ULore_List_Header_C* K2Node_DynamicCast_AsLore_List_Header, bool K2Node_DynamicCast_bSuccess, float K2Node_CustomEvent_CurrentOffset, float CallFunc_GetGlobalTimeDilation_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FExecuteUbergraph_ScrollLIst_Category_WindowK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UWidget* K2Node_CustomEvent_WidgetToFind, float CallFunc_GetGlobalTimeDilation_ReturnValue_1, int32 K2Node_CustomEvent_NumberOfButtons, float CallFunc_Divide_FloatFloat_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, int32 K2Node_CustomEvent_Index, class ULore_List_Element_C* CallFunc_Array_Get_Item_1);
};

#endif
