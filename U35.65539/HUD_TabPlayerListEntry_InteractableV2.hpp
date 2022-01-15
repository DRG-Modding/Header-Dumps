#ifndef UE4SS_SDK_HUD_TabPlayerListEntry_InteractableV2_HPP
#define UE4SS_SDK_HUD_TabPlayerListEntry_InteractableV2_HPP

class UHUD_TabPlayerListEntry_InteractableV2_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Exit;
    UWidgetAnimation* Enter;
    UBasic_ButtonCutCorner_C* BTN_Gamercard;
    UBasic_ButtonCutCorner_C* BTN_Kick;
    UBasic_ButtonCutCorner_C* BTN_mute;
    UBasic_ButtonCutCorner_C* BTN_Respawn_Spacerig;
    UBasic_ButtonCutCorner_C* BTN_unmute;
    UButton* Button_Hover;
    UHUD_TabPlayerListEntryV2_C* Entry;
    UHorizontalBox* HorizontalBox_Actions;
    UWidgetSwitcher* MuteSwitcher;
    AFSDPlayerState* PlayerState;
    APlayerController* PlayerController;
    FText KickReason;

    void SetPlayer(UFSDPlayerState* State, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void OnPlayerSet();
    void OnPlayerCharacterSpawned_Event(UPlayerCharacter* PlayerCharacter);
    void Update Mute Button();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void CheckHover();
    void BndEvt__BTN_mute_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
    void BndEvt__BTN_unmute_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
    void BndEvt__BTN_Gamercard_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
    void BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
    void BndEvt__BTN_Respawn_Spacerig_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
    void OnFinished();
    void ExecuteUbergraph_HUD_TabPlayerListEntry_InteractableV2(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, bool CallFunc_IsValid_ReturnValue, EFSDTargetPlatform Temp_byte_Variable_5, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, ESlateVisibility Temp_byte_Variable_10, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocalPlayerController_ReturnValue, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_11, ESlateVisibility Temp_byte_Variable_12, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerCharacter* K2Node_CustomEvent_PlayerCharacter, bool CallFunc_SetPlayerVoiceMuted_ReturnValue, bool CallFunc_SetPlayerVoiceMuted_ReturnValue_1, bool CallFunc_IsPlayerVoiceMuted_ReturnValue, EFSDTargetPlatform Temp_byte_Variable_13, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool K2Node_Event_IsDesignTime, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, ESlateVisibility K2Node_Select_Default, PlayerSpawnedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UWindowManager* CallFunc_GetWindowManager_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_1, UPOPUP_KickPlayerConfirm_C* CallFunc_OpenWindowFromClass_ReturnValue, ESlateVisibility K2Node_Select_Default_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default_2, bool Temp_bool_Variable_1, UBP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess_1, UWidget* K2Node_Select_Default_3, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1, UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_4, bool CallFunc_BooleanOR_ReturnValue, UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_3, UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_2, UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_1, UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button, bool CallFunc_Not_PreBool_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
}

#endif
