#ifndef UE4SS_SDK_Lore_Content_Statistics_HPP
#define UE4SS_SDK_Lore_Content_Statistics_HPP

class ULore_Content_Statistics_C : UUserWidget
{
    ULore_Content_ProgressBar_C* Bar_Damage;
    ULore_Content_ProgressBar_C* Bar_Health;
    ULore_Content_ProgressBar_C* Bar_Speed;
    ULore_Content_Weaknesses_C* Lore_Content_Resistances;
    ULore_Content_Weaknesses_C* Lore_Content_Weaknesses;

    void SetData(UEnemyMinersManualData* enemy, const TArray<FDamageTypeDescription>& WeaknessesIcons, const TArray<FDamageTypeDescription>& ResistancesIcons, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, FDamageTypeDescription CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, FDamageTypeDescription CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
}

#endif
