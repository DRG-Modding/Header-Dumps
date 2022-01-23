#ifndef UE4SS_SDK_Lobby_BarTop_Countdown_HPP
#define UE4SS_SDK_Lobby_BarTop_Countdown_HPP

class ULobby_BarTop_Countdown_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Pulse;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_0;
    class UBorder* Border_28;
    class UImage* Icon_Warning;
    class UImage* Image_1;
    class UImage* Image_2;
    class UCanvasPanel* RootCanvas;
    class UTextBlock* TimerText;
    bool Ansel;

    void Construct();
    void CountDownChanged(bool IsActive);
    void TimerChanged(float newTime);
    void HostCoundownChanged(bool IsActive);
    void CustomEvent(float newTime);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Lobby_BarTop_Countdown(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, FExecuteUbergraph_Lobby_BarTop_CountdownK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_Lobby_BarTop_CountdownK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_Lobby_BarTop_CountdownK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool K2Node_CustomEvent_isActive_1, class ABP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float K2Node_CustomEvent_NewTime_1, int32 CallFunc_FCeil_ReturnValue, bool K2Node_CustomEvent_isActive, float CallFunc_Conv_IntToFloat_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, FText CallFunc_Conv_FloatToText_ReturnValue, class ABP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig_1, bool K2Node_DynamicCast_bSuccess_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float K2Node_CustomEvent_NewTime, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, int32 CallFunc_FCeil_ReturnValue_1, class ABP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig_2, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, FText CallFunc_Conv_FloatToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, ESlateVisibility Temp_byte_Variable_1, FText CallFunc_Format_ReturnValue_1, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class ABP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base_1, bool K2Node_DynamicCast_bSuccess_4, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, FExecuteUbergraph_Lobby_BarTop_CountdownK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3);
};

#endif
