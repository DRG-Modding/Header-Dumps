#ifndef UE4SS_SDK_Screen_LoadDeepDive_HPP
#define UE4SS_SDK_Screen_LoadDeepDive_HPP

class UScreen_LoadDeepDive_C : UScreen_BaseLoadLevel_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHorizontalBox* PlayerBox;
    UUI_CurvedCanvas_C* UI_CurvedCanvas;

    void RemovePlayer(UPlayerState* PlayerState, bool Temp_bool_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_RemoveChildAt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, UPlayerReadyBox_C* K2Node_DynamicCast_AsPlayer_Ready_Box, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void AddPlayer(UFSDPlayerState* PlayerState, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UPlayerReadyBox_C* CallFunc_Create_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue);
    void StartLoadSeq();
    void PlayerJoined(UFSDPlayerState* PlayerState);
    void PlayerLeft(UFSDPlayerState* PlayerState);
    void ExecuteUbergraph_Screen_LoadDeepDive(int32 EntryPoint, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, PlayerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, PlayerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, UFSDPlayerState* K2Node_CustomEvent_PlayerState_1, UPlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, UFSDPlayerState* K2Node_CustomEvent_PlayerState);
}

#endif
