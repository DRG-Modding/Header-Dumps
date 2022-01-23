#ifndef UE4SS_SDK_Cheat_GiveBeerBuff_HPP
#define UE4SS_SDK_Cheat_GiveBeerBuff_HPP

class UCheat_GiveBeerBuff_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UScrollBox* ScrollBox_79;
    TArray<class UTemporaryBuff*> BeerBuffList;
    TArray<class UCheat_GiveBeerBuff_Row_C*> my beer buff rows;

    void Construct();
    void set selected row active(class UCheat_GiveBeerBuff_Row_C* Buff row to skip);
    void ExecuteUbergraph_Cheat_GiveBeerBuff(int32 EntryPoint, class UCheat_GiveBeerBuff_Row_C* K2Node_CustomEvent_Buff_row_to_skip, int32 Temp_int_Array_Index_Variable, FExecuteUbergraph_Cheat_GiveBeerBuffK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UCheat_GiveBeerBuff_Row_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UTemporaryBuff* CallFunc_Array_Get_Item, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UCheat_GiveBeerBuff_Row_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
};

#endif
