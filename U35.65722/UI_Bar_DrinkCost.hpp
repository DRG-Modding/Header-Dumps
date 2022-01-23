#ifndef UE4SS_SDK_UI_Bar_DrinkCost_HPP
#define UE4SS_SDK_UI_Bar_DrinkCost_HPP

class UUI_Bar_DrinkCost_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_13;
    class UTextBlock* TXT_Free;
    class UDrinkableDataAsset* Drinkable;
    bool ShowUnlockCost;
    float Height;

    void SetCostWidgets(const TMap<UResourceData*, int32>& TargetMap, const class UResourceData* Temp_object_Variable, TArray<class UResourceData*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, FMargin K2Node_MakeStruct_Margin, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UResourceData* CallFunc_Array_Get_Item, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class UResourceData* Temp_object_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_Bar_DrinkCostPrice_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBoxEx_OutSlot, class UHorizontalBox* CallFunc_AddChildToHorizontalBoxEx_OutHorizontalBox, class UUI_Bar_DrinkCostPrice_C* CallFunc_AddChildToHorizontalBoxEx_ReturnValue);
    void ShowCost(class UDrinkableDataAsset* Drinkable, bool ShowUnlockPrice);
    void Construct();
    void OnFreeBeerRewardChanged(bool IsBeersFree);
    void ShowFixedCost(const TMap<UResourceData*, int32>& Cost);
    void ExecuteUbergraph_UI_Bar_DrinkCost(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FExecuteUbergraph_UI_Bar_DrinkCostK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UDrinkableDataAsset* K2Node_CustomEvent_Drinkable, bool K2Node_CustomEvent_ShowUnlockPrice, bool K2Node_CustomEvent_IsBeersFree, bool Temp_bool_Variable, bool CallFunc_IsDrinkFree_ReturnValue, const TMap<UResourceData*, int32> K2Node_CustomEvent_Cost, ESlateVisibility K2Node_Select_Default);
};

#endif
