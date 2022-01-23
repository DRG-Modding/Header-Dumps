#ifndef UE4SS_SDK_UI_LockOn_Counter_HPP
#define UE4SS_SDK_UI_LockOn_Counter_HPP

class UUI_LockOn_Counter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* RowBoxV;
    int32 MaxTargets;
    TArray<class UUI_LockOn_Counter_Entry_C*> TargetCounters;
    class ALockOnWeapon* Item;
    int32 CurrentTargets;
    FMargin InnerPadding;

    void SetCurrentTargets(int32 InCount, int32 LimitIndex, int32 Index, class UUI_LockOn_Counter_Entry_C* Counter, int32 Temp_int_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, class UUI_LockOn_Counter_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue_2);
    void SetMaxTargets(int32 count, FSetMaxTargetsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, TArray<class UUI_LockOn_Counter_Entry_C*>& CallFunc_CreateOrReuseChildrenWithCallback_ReturnValue);
    void SetupTargetCounter(bool WasCreated, class UUserWidget* Widget, int32 ActiveIndex, class UVerticalBoxSlot* VerticalSlot, FSlateChildSize K2Node_MakeStruct_SlateChildSize, bool CallFunc_Less_IntInt_ReturnValue, class UUI_LockOn_TargetCounter_C* K2Node_DynamicCast_AsUI_Lock_on_Target_Counter, bool K2Node_DynamicCast_bSuccess, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void SetItem(class ALockOnWeapon* InItem);
    void OnLockOnCountChanged(int32 InCurrentCount);
    void ExecuteUbergraph_UI_LockOn_Counter(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class ALockOnWeapon* K2Node_CustomEvent_InItem, FExecuteUbergraph_UI_LockOn_CounterK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_InCurrentCount, bool CallFunc_Greater_IntInt_ReturnValue, FExecuteUbergraph_UI_LockOn_CounterK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1);
};

#endif
