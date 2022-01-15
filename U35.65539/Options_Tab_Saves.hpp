#ifndef UE4SS_SDK_Options_Tab_Saves_HPP
#define UE4SS_SDK_Options_Tab_Saves_HPP

class UOptions_Tab_Saves_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UMenu_SaveSlots_C* Menu_SaveSlots;
    UOptions_ResetProgress_C* Options_ResetProgress;
    UOptions_RestoreSave_C* Options_RestoreSave;
    UBasic_Option_C* Reset_Progress;
    UBasic_Option_C* Restore_Save;
    FOptions_Tab_Saves_CSettingsChanged SettingsChanged;
    void SettingsChanged();

    void Construct();
    void ExecuteUbergraph_Options_Tab_Saves(int32 EntryPoint, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, ESlateVisibility Temp_byte_Variable, int32 CallFunc_Array_Length_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, EFSDTargetPlatform Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, UGameModeBase* CallFunc_GetGameMode_ReturnValue, UFSDGameModeSpaceRig* K2Node_DynamicCast_AsFSDGame_Mode_Space_Rig, bool K2Node_DynamicCast_bSuccess, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, UGameModeBase* CallFunc_GetGameMode_ReturnValue_1, UFSDGameModeSpaceRig* K2Node_DynamicCast_AsFSDGame_Mode_Space_Rig_1, bool K2Node_DynamicCast_bSuccess_1, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_1, UGameModeBase* CallFunc_GetGameMode_ReturnValue_2, UFSDGameModeSpaceRig* K2Node_DynamicCast_AsFSDGame_Mode_Space_Rig_2, bool K2Node_DynamicCast_bSuccess_2, ESlateVisibility K2Node_Select_Default, ESlateVisibility Temp_byte_Variable_10, EFSDTargetPlatform Temp_byte_Variable_11, ESlateVisibility K2Node_Select_Default_1);
    void SettingsChanged__DelegateSignature();
}

#endif
