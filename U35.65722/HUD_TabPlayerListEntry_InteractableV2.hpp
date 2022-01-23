#ifndef UE4SS_SDK_HUD_TabPlayerListEntry_InteractableV2_HPP
#define UE4SS_SDK_HUD_TabPlayerListEntry_InteractableV2_HPP

class UHUD_TabPlayerListEntry_InteractableV2_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Exit;
    class UWidgetAnimation* Enter;
    class UBasic_ButtonCutCorner_C* BTN_Gamercard;
    class UBasic_ButtonCutCorner_C* BTN_Kick;
    class UBasic_ButtonCutCorner_C* BTN_mute;
    class UBasic_ButtonCutCorner_C* BTN_Respawn_Spacerig;
    class UBasic_ButtonCutCorner_C* BTN_unmute;
    class UButton* Button_Hover;
    class UHUD_TabPlayerListEntryV2_C* Entry;
    class UHorizontalBox* HorizontalBox_Actions;
    class UWidgetSwitcher* MuteSwitcher;
    class AFSDPlayerState* PlayerState;
    class APlayerController* PlayerController;
    FText KickReason;

    void SetPlayer(class AFSDPlayerState* State, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void OnPlayerSet();
    void OnPlayerCharacterSpawned_Event(class APlayerCharacter* PlayerCharacter);
    void Update Mute Button();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void CheckHover();
    void BndEvt__BTN_mute_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void BndEvt__BTN_unmute_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void BndEvt__BTN_Gamercard_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void BndEvt__BTN_Respawn_Spacerig_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void OnFinished();
    void ExecuteUbergraph_HUD_TabPlayerListEntry_InteractableV2(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, bool CallFunc_IsValid_ReturnValue, EFSDTargetPlatform Temp_byte_Variable_5, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, ESlateVisibility Temp_byte_Variable_10, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocalPlayerController_ReturnValue, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_11, ESlateVisibility Temp_byte_Variable_12, FExecuteUbergraph_HUD_TabPlayerListEntry_InteractableV2K2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APlayerCharacter* K2Node_CustomEvent_PlayerCharacter, bool CallFunc_SetPlayerVoiceMuted_ReturnValue, bool CallFunc_SetPlayerVoiceMuted_ReturnValue_1, bool CallFunc_IsPlayerVoiceMuted_ReturnValue, EFSDTargetPlatform Temp_byte_Variable_13, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool K2Node_Event_IsDesignTime, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, ESlateVisibility K2Node_Select_Default, FExecuteUbergraph_HUD_TabPlayerListEntry_InteractableV2K2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_1, class UPOPUP_KickPlayerConfirm_C* CallFunc_OpenWindowFromClass_ReturnValue, ESlateVisibility K2Node_Select_Default_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default_2, bool Temp_bool_Variable_1, class ABP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess_1, class UWidget* K2Node_Select_Default_3, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1, class UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_4, bool CallFunc_BooleanOR_ReturnValue, class UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_3, class UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_2, class UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_1, class UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
};

#endif
