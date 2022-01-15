#ifndef UE4SS_SDK_Cheat_SetDifficulty_HPP
#define UE4SS_SDK_Cheat_SetDifficulty_HPP

class UCheat_SetDifficulty_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UScrollBox* ScrollBox_0;
    TArray<UDifficultySetting*> Difficulty;
    TArray<UCheat_SetDifficultyRow_C*> myListItems;

    void Construct();
    void Build Difficulty List();
    void On Change diff();
    void ExecuteUbergraph_Cheat_SetDifficulty(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, On Difficulty Selected__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, UCheat_SetDifficultyRow_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable_1, UDifficultySetting* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UCheat_SetDifficultyRow_C* CallFunc_Create_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
}

#endif
