#ifndef UE4SS_SDK_HUD_TeamDisplay_Small_HPP
#define UE4SS_SDK_HUD_TeamDisplay_Small_HPP

class UHUD_TeamDisplay_Small_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHUD_TeamDisplay_Bosco_C* HUD_TeamDisplay_Bosco;
    class UVerticalBox* TeamBox;
    bool animate;

    void Construct();
    void OnPlayerJoined(class AFSDPlayerState* PlayerState);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_TeamDisplay_Small(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class AFSDPlayerState* K2Node_CustomEvent_PlayerState, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FExecuteUbergraph_HUD_TeamDisplay_SmallK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UHUD_TeamDisplay_SmallItem_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 Temp_int_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UHUD_TeamDisplay_SmallItem_C* CallFunc_Create_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, class APlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue);
};

#endif
