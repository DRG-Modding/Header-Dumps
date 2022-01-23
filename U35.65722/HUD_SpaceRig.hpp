#ifndef UE4SS_SDK_HUD_SpaceRig_HPP
#define UE4SS_SDK_HUD_SpaceRig_HPP

class UHUD_SpaceRig_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* BeerBuffAnimation;
    class UOnScreenIndicator_UsableItem_Simple_C* BS_UsableItem_384;
    class UHUD_ActionHoldProgress_C* HUD_ActionHoldProgress;
    class UHUD_CrossHair_BasicDot_C* HUD_CrossHair_BasicDot_C_0;
    class UHUD_Frozen_C* HUD_Frozen;
    class UHUD_MinersManualNotification_Manager_C* HUD_MinersManualNotification_Manager;
    class UMissionControl_MainDialogue_C* HUD_MissionShoutWidget_111;
    class UHUD_Modding_Downloads_C* HUD_Modding_Downloads;
    class UHUD_ThrowCarriable_C* HUD_ThrowCarriable;
    class UHUD_TutorialWidget_C* HUD_TutorialWidget_1;
    class UMenu_ServerStatus_C* Menu_ServerStatus;
    class USafeZone* PlatformSafeZone;
    class URetainerBox* RetainerBox_2;
    class UScreen_CharacterInfo_C* Screen_CharacterInfo;
    class UUI_BeerBuff_Spacerig_C* UI_BeerBuff_Spacerig;
    class UUI_CurvedCanvas_C* UI_CurvedCanvas;
    class UUI_FPS_C* UI_FPS;
    class UUI_NetInfo_C* UI_NetInfo;
    class UOnScreenIndicator_UsableItem_WithDescription_C* Usable;

    void Construct();
    void OnCountdownCompleted_Event_0();
    void OnCameraModeChanged_Event(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode);
    void OnTemporaryBuffChanged(class UTemporaryBuff* buff, class APlayerCharacter* AffectedPlayer);
    void ExecuteUbergraph_HUD_SpaceRig(int32 EntryPoint, FExecuteUbergraph_HUD_SpaceRigK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_SpaceRigK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FExecuteUbergraph_HUD_SpaceRigK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig, bool K2Node_DynamicCast_bSuccess, ECharacterCameraMode K2Node_CustomEvent_NewCameraMode, ECharacterCameraMode K2Node_CustomEvent_OldCameraMode, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, ESlateVisibility K2Node_Select_Default, class UTemporaryBuff* K2Node_CustomEvent_buff, class APlayerCharacter* K2Node_CustomEvent_AffectedPlayer, bool CallFunc_IsLocallyControlled_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

#endif
