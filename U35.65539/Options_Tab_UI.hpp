#ifndef UE4SS_SDK_Options_Tab_UI_HPP
#define UE4SS_SDK_Options_Tab_UI_HPP

class UOptions_Tab_UI_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Option_C* Basic_Option_C_0;
    UBasic_Option_C* Basic_Option_C_1;
    UBasic_Option_C* OPT_FPScounter;
    UBasic_Option_C* OPT_NetInfo;
    UBasic_Option_C* OPT_ProfanityFilter;
    UBasic_Option_C* Opt_ShowInfoScreen;
    UBasic_Option_C* OPT_ShowUIAnimations;
    UBasic_Option_C* OPT_UIscale;
    UOptions_Chat_FadeTime_C* Options_Chat_FadeTime;
    UOptions_Chat_FontSize_C* Options_Chat_FontSize;
    UOptions_HUD_ElementPresets_C* Options_HUD_ElementPresets;
    UVerticalBox* Options_HudElements;
    UOptions_ProfanityFilter_C* Options_ProfanityFilter;
    UOptions_ShowFPS_C* Options_ShowFPS;
    UOptions_ShowInfoScreen_C* Options_ShowInfoScreen;
    UOptions_ShowNetInfo_C* Options_ShowNetInfo;
    UOptions_ShowUIAnimations_C* Options_ShowUIAnimations;
    UOptions_SoundOnChatMessage_C* Options_SoundOnChatMessage;
    UOptions_UIScale_Slider_C* Options_UIScale_Slider;
    UBasic_Option_C* PlaySoundOnChatMessage;
    FOptions_Tab_UI_CSettingsChanged SettingsChanged;
    void SettingsChanged();

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnIsUserGeneratedContentAllowed(const UPlayerState* CheckedPlayerState, EBlueprintableUserPrivileges CheckedPrivilege, EBlueprintablePrivilegeResults PrivilegeResult);
    void ExecuteUbergraph_Options_Tab_UI(int32 EntryPoint, EFSDTargetPlatform Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility Temp_byte_Variable_6, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, EBlueprintablePrivilegeResults Temp_byte_Variable_7, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, ESlateVisibility Temp_byte_Variable_10, ESlateVisibility Temp_byte_Variable_11, ESlateVisibility Temp_byte_Variable_12, ESlateVisibility Temp_byte_Variable_13, ESlateVisibility Temp_byte_Variable_14, ESlateVisibility Temp_byte_Variable_15, ESlateVisibility Temp_byte_Variable_16, ESlateVisibility Temp_byte_Variable_17, ESlateVisibility Temp_byte_Variable_18, ESlateVisibility Temp_byte_Variable_19, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UOptions_HUD_Element_C* CallFunc_Create_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue, TArray<UHUDVisibilityGroup*>& CallFunc_GetAllVisibilityGroups_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, UHUDVisibilityGroup* CallFunc_Array_Get_Item, ESlateVisibility K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Select_Default_1, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_1, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, OnGetUserPrivilegeCompleteBPDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const UPlayerState* K2Node_CustomEvent_CheckedPlayerState, EBlueprintableUserPrivileges K2Node_CustomEvent_CheckedPrivilege, EBlueprintablePrivilegeResults K2Node_CustomEvent_PrivilegeResult, ESlateVisibility K2Node_Select_Default_2);
    void SettingsChanged__DelegateSignature();
}

#endif
