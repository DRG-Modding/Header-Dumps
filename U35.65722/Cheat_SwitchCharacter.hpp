#ifndef UE4SS_SDK_Cheat_SwitchCharacter_HPP
#define UE4SS_SDK_Cheat_SwitchCharacter_HPP

class UCheat_SwitchCharacter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UComboBoxString* ComboBoxString_0;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_SwitchCharacter(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Array_Index_Variable, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UPlayerCharacterID*>& CallFunc_GetPlayableCharacterIDs_ReturnValue, class UPlayerCharacterID* CallFunc_Array_Get_Item, class UPlayerCharacterID* CallFunc_Array_Get_Item_1, const FText CallFunc_GetName_ReturnValue, const FText CallFunc_GetName_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, FString CallFunc_GetSelectedOption_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue);
};

#endif
