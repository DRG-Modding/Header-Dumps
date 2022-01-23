#ifndef UE4SS_SDK_Cheat_SetPerk_HPP
#define UE4SS_SDK_Cheat_SetPerk_HPP

class UCheat_SetPerk_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UScrollBox* ScrollBox_79;
    TArray<class UCheat_SetPerk_Row_C*> Perk Rows;
    TArray<class UPerkAsset*> EquippedPerks;

    void Construct();
    void Set Perk In Row State(class UCheat_SetPerk_Row_C* Buff row to skip);
    void ExecuteUbergraph_Cheat_SetPerk(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Array_Index_Variable, class AFSDPlayerControllerBase* K2Node_DynamicCast_AsFSDPlayer_Controller_Base, bool K2Node_DynamicCast_bSuccess, FExecuteUbergraph_Cheat_SetPerkK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const TArray<class UPerkAsset*>& CallFunc_GetAvailablePerks_ReturnValue, class UPerkAsset* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UCheat_SetPerk_Row_C* K2Node_CustomEvent_Buff_row_to_skip, class UCheat_SetPerk_Row_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class UCheat_SetPerk_Row_C* CallFunc_Create_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class APlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, class APlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue_1, TArray<class UPerkAsset*>& CallFunc_GetCharacterEquippedPerks_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue);
};

#endif
