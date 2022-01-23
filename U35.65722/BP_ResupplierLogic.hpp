#ifndef UE4SS_SDK_BP_ResupplierLogic_HPP
#define UE4SS_SDK_BP_ResupplierLogic_HPP

class UBP_ResupplierLogic_C : public UPerkLogic
{
    FPointerToUberGraphFrame UberGraphFrame;

    FText GetAdditionalText(int32 Rankbool Temp_bool_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FText Temp_text_Variable, FText Temp_text_Variable_1, FText K2Node_Select_Default);
    void StartLogic(int32 Rank);
    void OnResupplied(float percentage);
    void Client_InstantlyReload();
    void ExecuteUbergraph_BP_ResupplierLogic(int32 EntryPoint, FExecuteUbergraph_BP_ResupplierLogicK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 K2Node_Event_rank, float K2Node_CustomEvent_percentage, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, const TArray<class AItem*>& CallFunc_GetAllItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AItem* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AAmmoDrivenWeapon* K2Node_DynamicCast_AsAmmo_Driven_Weapon, bool K2Node_DynamicCast_bSuccess);
};

#endif
