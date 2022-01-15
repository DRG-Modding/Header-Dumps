#ifndef UE4SS_SDK__MENU_DeepDives_HPP
#define UE4SS_SDK__MENU_DeepDives_HPP

class U_MENU_DeepDives_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBorder* B_MainBG;
    UBasic_Label_C* Data_PageCaption;
    UBasic_Label_C* Data_ResetTimer;
    UITM_InfoBox_C* ITM_InfoBox;
    UMENU_LockedTemplate_C* MENU_LockedTemplate;
    UMENU_SpaceRigTemplate_C* MenuTemplate;
    UITM_DeepDives_Join_C* TabPage_Join;
    UITM_DeepDives_Start_C* TabPage_Start;
    UWidgetSwitcher* TabSwitcher;
    ESteamServerJoinStatus ServerType;
    UWidget* ActivePage;
    FTimerHandle UpdateTimeHandle;
    TSoftObjectPtr<UDialogDataAsset> FirstTimeShout;

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventbool CallFunc_HandleKeyDown_OutHandled, FEventReply CallFunc_HandleKeyDown_OutReply, bool CallFunc_HandleKeyDown_OutHandled_1, FEventReply CallFunc_HandleKeyDown_OutReply_1);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEventbool CallFunc_IsBackMenuMouse_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue);
    FText ConvertDurationToText(FTimespan Aint32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FText CallFunc_Conv_IntToText_ReturnValue_2, FText CallFunc_Conv_IntToText_ReturnValue_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void SetPage(UWidget* InPage, bool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FText K2Node_Select_Default, FText CallFunc_TextToUpper_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventbool CallFunc_IsCloseOrBackMenu_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue);
    void OnShown();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__TabPage_Start_K2Node_ComponentBoundEvent_0_OnJoinMission__DelegateSignature(bool EliteDeepDive);
    void BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_1_OnClosedClicked__DelegateSignature();
    void BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_2_OnBackClicked__DelegateSignature();
    void Update Time();
    void OnClosed();
    void First Time Shout();
    void ExecuteUbergraph__MENU_DeepDives(int32 EntryPoint, bool CallFunc_IsValidSoftObjectReference_ReturnValue, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UDialogDataAsset* K2Node_DynamicCast_AsDialog_Data_Asset, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, bool K2Node_ComponentBoundEvent_EliteDeepDive, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_RequireOnePromotedCharacter_Locked, UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, UAudioComponent* CallFunc_PlayPitched_ReturnValue, FDateTime CallFunc_UtcNow_ReturnValue, bool CallFunc_GetIsUnlocked_Locked, FTimespan CallFunc_Subtract_DateTimeDateTime_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FText CallFunc_ConvertDurationToText_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, UBP_GameState_SpaceRig_C* CallFunc_GetSRGameState_gameState, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, TArray<UDifficultySetting*>& K2Node_MakeArray_Array, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_4, FFSDServerSearchOptions K2Node_MakeStruct_FSDServerSearchOptions);
}

#endif
