#ifndef UE4SS_SDK_Options_Tab_UI_HPP
#define UE4SS_SDK_Options_Tab_UI_HPP

class UOptions_Tab_UI_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Option_C* Basic_Option_C_0;
    class UBasic_Option_C* Basic_Option_C_1;
    class UBasic_Option_C* OPT_FPScounter;
    class UBasic_Option_C* OPT_NetInfo;
    class UBasic_Option_C* OPT_ProfanityFilter;
    class UBasic_Option_C* Opt_ShowInfoScreen;
    class UBasic_Option_C* OPT_ShowUIAnimations;
    class UBasic_Option_C* OPT_UIscale;
    class UOptions_Chat_FadeTime_C* Options_Chat_FadeTime;
    class UOptions_Chat_FontSize_C* Options_Chat_FontSize;
    class UOptions_HUD_ElementPresets_C* Options_HUD_ElementPresets;
    class UVerticalBox* Options_HudElements;
    class UOptions_ProfanityFilter_C* Options_ProfanityFilter;
    class UOptions_ShowFPS_C* Options_ShowFPS;
    class UOptions_ShowInfoScreen_C* Options_ShowInfoScreen;
    class UOptions_ShowNetInfo_C* Options_ShowNetInfo;
    class UOptions_ShowUIAnimations_C* Options_ShowUIAnimations;
    class UOptions_SoundOnChatMessage_C* Options_SoundOnChatMessage;
    class UOptions_UIScale_Slider_C* Options_UIScale_Slider;
    class UBasic_Option_C* PlaySoundOnChatMessage;
    FOptions_Tab_UI_CSettingsChanged SettingsChanged;
    void SettingsChanged();

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnIsUserGeneratedContentAllowed(const class APlayerState* CheckedPlayerState, EBlueprintableUserPrivileges CheckedPrivilege, EBlueprintablePrivilegeResults PrivilegeResult);
    void ExecuteUbergraph_Options_Tab_UI(int32 EntryPoint, EFSDTargetPlatform Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility Temp_byte_Variable_6, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, EBlueprintablePrivilegeResults Temp_byte_Variable_7, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, ESlateVisibility Temp_byte_Variable_10, ESlateVisibility Temp_byte_Variable_11, ESlateVisibility Temp_byte_Variable_12, ESlateVisibility Temp_byte_Variable_13, ESlateVisibility Temp_byte_Variable_14, ESlateVisibility Temp_byte_Variable_15, ESlateVisibility Temp_byte_Variable_16, ESlateVisibility Temp_byte_Variable_17, ESlateVisibility Temp_byte_Variable_18, ESlateVisibility Temp_byte_Variable_19, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UOptions_HUD_Element_C* CallFunc_Create_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, TArray<class UHUDVisibilityGroup*>& CallFunc_GetAllVisibilityGroups_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, class UHUDVisibilityGroup* CallFunc_Array_Get_Item, ESlateVisibility K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Select_Default_1, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_1, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FExecuteUbergraph_Options_Tab_UIK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, const class APlayerState* K2Node_CustomEvent_CheckedPlayerState, EBlueprintableUserPrivileges K2Node_CustomEvent_CheckedPrivilege, EBlueprintablePrivilegeResults K2Node_CustomEvent_PrivilegeResult, ESlateVisibility K2Node_Select_Default_2);
    void SettingsChanged__DelegateSignature();
};

#endif
