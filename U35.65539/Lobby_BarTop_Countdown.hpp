#ifndef UE4SS_SDK_Lobby_BarTop_Countdown_HPP
#define UE4SS_SDK_Lobby_BarTop_Countdown_HPP

class ULobby_BarTop_Countdown_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Pulse;
    UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_0;
    UBorder* Border_28;
    UImage* Icon_Warning;
    UImage* Image_1;
    UImage* Image_2;
    UCanvasPanel* RootCanvas;
    UTextBlock* TimerText;
    bool Ansel;

    void Construct();
    void CountDownChanged(bool IsActive);
    void TimerChanged(float newTime);
    void HostCoundownChanged(bool IsActive);
    void CustomEvent(float newTime);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Lobby_BarTop_Countdown(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, OnMissionTimerChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnHostCountdownChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, OnHostTimerChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool K2Node_CustomEvent_isActive_1, UBP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float K2Node_CustomEvent_NewTime_1, int32 CallFunc_FCeil_ReturnValue, bool K2Node_CustomEvent_isActive, float CallFunc_Conv_IntToFloat_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, FText CallFunc_Conv_FloatToText_ReturnValue, UBP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig_1, bool K2Node_DynamicCast_bSuccess_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float K2Node_CustomEvent_NewTime, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, int32 CallFunc_FCeil_ReturnValue_1, UBP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig_2, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, FText CallFunc_Conv_FloatToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, ESlateVisibility Temp_byte_Variable_1, FText CallFunc_Format_ReturnValue_1, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UBP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess_3, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UBP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base_1, bool K2Node_DynamicCast_bSuccess_4, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, OnMissionCountdownChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3);
}

#endif
