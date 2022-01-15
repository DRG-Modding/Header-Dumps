#ifndef UE4SS_SDK_UI_PlayerSpeaking_List_HPP
#define UE4SS_SDK_UI_PlayerSpeaking_List_HPP

class UUI_PlayerSpeaking_List_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHorizontalBox* Box_Horizontal;
    UVerticalBox* Box_Vertical;
    TArray<UUI_PlayerSpeaking_WithName_C*> Entries;
    bool Vertical;
    TArray<AFSDPlayerState*> PlayerStates;

    void GetPlayerStates(TArray<UFSDPlayerState*>& OutStates, TArray<UFSDPlayerState*> States, UPlayerState* ThisState, UFSDPlayerState* LocalState, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UPlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void GetPlayerState(int32 Index, UFSDPlayerState*& State, UFSDPlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void UpdateEntries();
    void OnPlayerJoined(UFSDPlayerState* PlayerState);
    void OnPlayerLeave(UFSDPlayerState* PlayerState);
    void ExecuteUbergraph_UI_PlayerSpeaking_List(int32 EntryPoint, TArray<UFSDPlayerState*>& CallFunc_GetPlayerStates_OutStates, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, UFSDPlayerState* CallFunc_GetPlayerState_State, PlayerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, int32 Temp_int_Loop_Counter_Variable, UUI_PlayerSpeaking_WithName_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UFSDPlayerState* K2Node_CustomEvent_PlayerState_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, UFSDPlayerState* K2Node_CustomEvent_PlayerState, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, UUI_PlayerSpeaking_WithName_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, PlayerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPanelWidget* K2Node_Select_Default, UPanelSlot* CallFunc_AddChild_ReturnValue);
}

#endif
