#ifndef UE4SS_SDK_ITM_Overclock_Details_HPP
#define UE4SS_SDK_ITM_Overclock_Details_HPP

class UITM_Overclock_Details_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UVerticalBox* LineBox;
    UItemUpgrade* Upgrade;
    int32 FontSize;
    int32 Linespace;

    void Clear();
    void AddStat(FItemUpgradeStatText InStat, float Temp_float_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool Temp_bool_Variable, float K2Node_Select_Default, FMargin K2Node_MakeStruct_Margin, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_Overclock_Details_Item_C* CallFunc_Create_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBoxEx_OutSlot, UVerticalBox* CallFunc_AddChildToVerticalBoxEx_OutVerticalBox, UITM_Overclock_Details_Item_C* CallFunc_AddChildToVerticalBoxEx_ReturnValue);
    void SetData(UItemUpgrade* InUpgrade, TArray<FItemUpgradeStatText> NegativeStats, FItemUpgradeStatText Stat, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FItemUpgradeStatText CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable_1, FItemUpgradeStatText CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Overclock_Details(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
