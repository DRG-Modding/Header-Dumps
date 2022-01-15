#ifndef UE4SS_SDK_HUD_TeamDisplay_Small_HPP
#define UE4SS_SDK_HUD_TeamDisplay_Small_HPP

class UHUD_TeamDisplay_Small_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHUD_TeamDisplay_Bosco_C* HUD_TeamDisplay_Bosco;
    UVerticalBox* TeamBox;
    bool animate;

    void Construct();
    void OnPlayerJoined(UFSDPlayerState* PlayerState);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_TeamDisplay_Small(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UFSDPlayerState* K2Node_CustomEvent_PlayerState, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, PlayerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UHUD_TeamDisplay_SmallItem_C* CallFunc_Create_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 Temp_int_Variable, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, UHUD_TeamDisplay_SmallItem_C* CallFunc_Create_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, UPlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue);
}

#endif
