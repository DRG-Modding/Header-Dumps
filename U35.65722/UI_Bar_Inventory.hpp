#ifndef UE4SS_SDK_UI_Bar_Inventory_HPP
#define UE4SS_SDK_UI_Bar_Inventory_HPP

class UUI_Bar_Inventory_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* InventoryBox;
    TArray<class UResourceData*> Resources;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Bar_Inventory(int32 EntryPoint, FMargin K2Node_MakeStruct_Margin, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UResourceData* CallFunc_Array_Get_Item, class UITM_TopBar_ResourceCounter_C* CallFunc_Create_ReturnValue, float CallFunc_GetOwnedAmount_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBoxEx_OutSlot, class UHorizontalBox* CallFunc_AddChildToHorizontalBoxEx_OutHorizontalBox, class UITM_TopBar_ResourceCounter_C* CallFunc_AddChildToHorizontalBoxEx_ReturnValue);
};

#endif
