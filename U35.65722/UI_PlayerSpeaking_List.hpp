#ifndef UE4SS_SDK_UI_PlayerSpeaking_List_HPP
#define UE4SS_SDK_UI_PlayerSpeaking_List_HPP

class UUI_PlayerSpeaking_List_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* Box_Horizontal;
    class UVerticalBox* Box_Vertical;
    TArray<class UUI_PlayerSpeaking_WithName_C*> Entries;
    bool Vertical;
    TArray<class AFSDPlayerState*> PlayerStates;

    void GetPlayerStates(TArray<class AFSDPlayerState*>& OutStates, TArray<class AFSDPlayerState*> States, class APlayerState* ThisState, class AFSDPlayerState* LocalState, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void GetPlayerState(int32 Index, class AFSDPlayerState*& State, class AFSDPlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void UpdateEntries();
    void OnPlayerJoined(class AFSDPlayerState* PlayerState);
    void OnPlayerLeave(class AFSDPlayerState* PlayerState);
    void ExecuteUbergraph_UI_PlayerSpeaking_List(int32 EntryPoint, TArray<class AFSDPlayerState*>& CallFunc_GetPlayerStates_OutStates, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, class AFSDPlayerState* CallFunc_GetPlayerState_State, FExecuteUbergraph_UI_PlayerSpeaking_ListK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, int32 Temp_int_Loop_Counter_Variable, class UUI_PlayerSpeaking_WithName_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class AFSDPlayerState* K2Node_CustomEvent_PlayerState_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, class AFSDPlayerState* K2Node_CustomEvent_PlayerState, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, class UUI_PlayerSpeaking_WithName_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, FExecuteUbergraph_UI_PlayerSpeaking_ListK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UPanelWidget* K2Node_Select_Default, class UPanelSlot* CallFunc_AddChild_ReturnValue);
};

#endif
