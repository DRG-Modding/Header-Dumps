#ifndef UE4SS_SDK_Cheat_SpawnEnemyAdvanced_HPP
#define UE4SS_SDK_Cheat_SpawnEnemyAdvanced_HPP

class UCheat_SpawnEnemyAdvanced_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    USpinBox* AdvAmountSel;
    USpinBox* BasAmountSel;
    UButton* Button_Close;
    UButton* Button_SpawnAll;
    UListView* ListView_Mactera;
    UListView* ListView_Specials;
    UListView* ListView_SpiderAdv;
    UListView* ListView_SpiderBasic;
    USpinBox* MacAmountSel;
    USpinBox* SpecAmountSel;
    FCheat_SpawnEnemyAdvanced_COn close requested On close requested;
    void On close requested();

    void Build Adv Spider list(TArray<UEnemyDescriptor*> Adv Spider list, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<UEnemyDescriptor*>& K2Node_MakeArray_Array, UEnemyDescriptor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void Build Basic Spider list(TArray<UEnemyDescriptor*> Basic Spider List, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<UEnemyDescriptor*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, UEnemyDescriptor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void Build Specials List(TArray<UEnemyDescriptor*> Specials List, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<UEnemyDescriptor*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, UEnemyDescriptor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void Build Mactera List(TArray<UEnemyDescriptor*> Mactera list, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<UEnemyDescriptor*>& K2Node_MakeArray_Array, UEnemyDescriptor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void Construct();
    void BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_SpawnAll_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Spawn From Listview(const UListView* Selected descriptors, const int32 Amount);
    void BndEvt__ListView_Mactera_K2Node_ComponentBoundEvent_8_SimpleListItemEventDynamic__DelegateSignature(UObject* Item);
    void BndEvt__ListView_Specials_K2Node_ComponentBoundEvent_11_SimpleListItemEventDynamic__DelegateSignature(UObject* Item);
    void BndEvt__ListView_SpiderAdv_K2Node_ComponentBoundEvent_12_SimpleListItemEventDynamic__DelegateSignature(UObject* Item);
    void BndEvt__ListView_SpiderBasic_K2Node_ComponentBoundEvent_13_SimpleListItemEventDynamic__DelegateSignature(UObject* Item);
    void ExecuteUbergraph_Cheat_SpawnEnemyAdvanced(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const UListView* K2Node_CustomEvent_Selected_descriptors, const int32 K2Node_CustomEvent_Amount, UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, TArray<UObject*>& CallFunc_BP_GetSelectedItems_Items, bool CallFunc_BP_GetSelectedItems_ReturnValue, UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UEnemyDescriptor* K2Node_DynamicCast_AsEnemy_Descriptor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetValue_ReturnValue, float CallFunc_GetValue_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, float CallFunc_GetValue_ReturnValue_2, float CallFunc_GetValue_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_3, UObject* K2Node_ComponentBoundEvent_Item_3, UObject* K2Node_ComponentBoundEvent_Item_2, UObject* K2Node_ComponentBoundEvent_Item_1, UObject* K2Node_ComponentBoundEvent_Item);
    void On close requested__DelegateSignature();
}

#endif
