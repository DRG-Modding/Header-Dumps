#ifndef UE4SS_SDK_HUD_SpaceRig_HPP
#define UE4SS_SDK_HUD_SpaceRig_HPP

class UHUD_SpaceRig_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* BeerBuffAnimation;
    UOnScreenIndicator_UsableItem_Simple_C* BS_UsableItem_384;
    UHUD_ActionHoldProgress_C* HUD_ActionHoldProgress;
    UHUD_CrossHair_BasicDot_C* HUD_CrossHair_BasicDot_C_0;
    UHUD_Frozen_C* HUD_Frozen;
    UHUD_MinersManualNotification_Manager_C* HUD_MinersManualNotification_Manager;
    UMissionControl_MainDialogue_C* HUD_MissionShoutWidget_111;
    UHUD_Modding_Downloads_C* HUD_Modding_Downloads;
    UHUD_ThrowCarriable_C* HUD_ThrowCarriable;
    UHUD_TutorialWidget_C* HUD_TutorialWidget_1;
    UMenu_ServerStatus_C* Menu_ServerStatus;
    USafeZone* PlatformSafeZone;
    URetainerBox* RetainerBox_2;
    UScreen_CharacterInfo_C* Screen_CharacterInfo;
    UUI_BeerBuff_Spacerig_C* UI_BeerBuff_Spacerig;
    UUI_CurvedCanvas_C* UI_CurvedCanvas;
    UUI_FPS_C* UI_FPS;
    UUI_NetInfo_C* UI_NetInfo;
    UOnScreenIndicator_UsableItem_WithDescription_C* Usable;

    void Construct();
    void OnCountdownCompleted_Event_0();
    void OnCameraModeChanged_Event(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode);
    void OnTemporaryBuffChanged(UTemporaryBuff* buff, UPlayerCharacter* AffectedPlayer);
    void ExecuteUbergraph_HUD_SpaceRig(int32 EntryPoint, OnCountdownCompleted__DelegateSignature K2Node_CreateDelegate_OutputDelegate, CameraModeChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, TemporaryBuffChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UGameStateBase* CallFunc_GetGameState_ReturnValue, UBP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig, bool K2Node_DynamicCast_bSuccess, ECharacterCameraMode K2Node_CustomEvent_NewCameraMode, ECharacterCameraMode K2Node_CustomEvent_OldCameraMode, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, ESlateVisibility K2Node_Select_Default, UTemporaryBuff* K2Node_CustomEvent_buff, UPlayerCharacter* K2Node_CustomEvent_AffectedPlayer, bool CallFunc_IsLocallyControlled_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
