#ifndef UE4SS_SDK_Cheat_SpawnEnemyAdvanced_HPP
#define UE4SS_SDK_Cheat_SpawnEnemyAdvanced_HPP

class UCheat_SpawnEnemyAdvanced_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpinBox* AdvAmountSel;
    class USpinBox* BasAmountSel;
    class UButton* Button_Close;
    class UButton* Button_SpawnAll;
    class UListView* ListView_Mactera;
    class UListView* ListView_Specials;
    class UListView* ListView_SpiderAdv;
    class UListView* ListView_SpiderBasic;
    class USpinBox* MacAmountSel;
    class USpinBox* SpecAmountSel;
    FCheat_SpawnEnemyAdvanced_COn close requested On close requested;
    void On close requested();

    void Build Adv Spider list(TArray<class UEnemyDescriptor*> Adv Spider list, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UEnemyDescriptor*>& K2Node_MakeArray_Array, class UEnemyDescriptor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void Build Basic Spider list(TArray<class UEnemyDescriptor*> Basic Spider List, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UEnemyDescriptor*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UEnemyDescriptor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void Build Specials List(TArray<class UEnemyDescriptor*> Specials List, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UEnemyDescriptor*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UEnemyDescriptor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void Build Mactera List(TArray<class UEnemyDescriptor*> Mactera list, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UEnemyDescriptor*>& K2Node_MakeArray_Array, class UEnemyDescriptor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void Construct();
    void BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_SpawnAll_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Spawn From Listview(const class UListView* Selected descriptors, const int32 Amount);
    void BndEvt__ListView_Mactera_K2Node_ComponentBoundEvent_8_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
    void BndEvt__ListView_Specials_K2Node_ComponentBoundEvent_11_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
    void BndEvt__ListView_SpiderAdv_K2Node_ComponentBoundEvent_12_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
    void BndEvt__ListView_SpiderBasic_K2Node_ComponentBoundEvent_13_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
    void ExecuteUbergraph_Cheat_SpawnEnemyAdvanced(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class UListView* K2Node_CustomEvent_Selected_descriptors, const int32 K2Node_CustomEvent_Amount, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, TArray<class UObject*>& CallFunc_BP_GetSelectedItems_Items, bool CallFunc_BP_GetSelectedItems_ReturnValue, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UEnemyDescriptor* K2Node_DynamicCast_AsEnemy_Descriptor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetValue_ReturnValue, float CallFunc_GetValue_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, float CallFunc_GetValue_ReturnValue_2, float CallFunc_GetValue_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_3, class UObject* K2Node_ComponentBoundEvent_Item_3, class UObject* K2Node_ComponentBoundEvent_Item_2, class UObject* K2Node_ComponentBoundEvent_Item_1, class UObject* K2Node_ComponentBoundEvent_Item);
    void On close requested__DelegateSignature();
};

#endif
