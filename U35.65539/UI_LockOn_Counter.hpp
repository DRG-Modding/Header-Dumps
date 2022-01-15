#ifndef UE4SS_SDK_UI_LockOn_Counter_HPP
#define UE4SS_SDK_UI_LockOn_Counter_HPP

class UUI_LockOn_Counter_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UVerticalBox* RowBoxV;
    int32 MaxTargets;
    TArray<UUI_LockOn_Counter_Entry_C*> TargetCounters;
    ALockOnWeapon* Item;
    int32 CurrentTargets;
    FMargin InnerPadding;

    void SetCurrentTargets(int32 InCount, int32 LimitIndex, int32 Index, UUI_LockOn_Counter_Entry_C* Counter, int32 Temp_int_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, UUI_LockOn_Counter_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue_2);
    void SetMaxTargets(int32 count, WidgetCreatedOrReusedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, TArray<UUI_LockOn_Counter_Entry_C*>& CallFunc_CreateOrReuseChildrenWithCallback_ReturnValue);
    void SetupTargetCounter(bool WasCreated, UUserWidget* Widget, int32 ActiveIndex, UVerticalBoxSlot* VerticalSlot, FSlateChildSize K2Node_MakeStruct_SlateChildSize, bool CallFunc_Less_IntInt_ReturnValue, UUI_LockOn_TargetCounter_C* K2Node_DynamicCast_AsUI_Lock_on_Target_Counter, bool K2Node_DynamicCast_bSuccess, UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void SetItem(ULockOnWeapon* InItem);
    void OnLockOnCountChanged(int32 InCurrentCount);
    void ExecuteUbergraph_UI_LockOn_Counter(int32 EntryPoint, bool K2Node_Event_IsDesignTime, ULockOnWeapon* K2Node_CustomEvent_InItem, MaxTargetsDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_InCurrentCount, bool CallFunc_Greater_IntInt_ReturnValue, LockOnCountDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1);
}

#endif
