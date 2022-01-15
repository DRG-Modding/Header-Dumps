#ifndef UE4SS_SDK_Cheat_SetPerk_HPP
#define UE4SS_SDK_Cheat_SetPerk_HPP

class UCheat_SetPerk_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UScrollBox* ScrollBox_79;
    TArray<UCheat_SetPerk_Row_C*> Perk Rows;
    TArray<UPerkAsset*> EquippedPerks;

    void Construct();
    void Set Perk In Row State(UCheat_SetPerk_Row_C* Buff row to skip);
    void ExecuteUbergraph_Cheat_SetPerk(int32 EntryPoint, UPlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Array_Index_Variable, UFSDPlayerControllerBase* K2Node_DynamicCast_AsFSDPlayer_Controller_Base, bool K2Node_DynamicCast_bSuccess, On PerkRow checked__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const TArray<UPerkAsset*>& CallFunc_GetAvailablePerks_ReturnValue, UPerkAsset* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, UCheat_SetPerk_Row_C* K2Node_CustomEvent_Buff_row_to_skip, UCheat_SetPerk_Row_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, UCheat_SetPerk_Row_C* CallFunc_Create_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, UPanelSlot* CallFunc_AddChild_ReturnValue, UPlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, UPlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue_1, TArray<UPerkAsset*>& CallFunc_GetCharacterEquippedPerks_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue);
}

#endif
