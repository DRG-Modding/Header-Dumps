#ifndef UE4SS_SDK_WND_CharacterRetirement_HPP
#define UE4SS_SDK_WND_CharacterRetirement_HPP

class UWND_CharacterRetirement_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimPanBackground;
    class UWidgetAnimation* FadeOut;
    class UWidgetAnimation* WarningPulse;
    class UBorder* BackgroundFade;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_LargeWindowWithHeader_C* Basic_Menu_LargeWindowWithHeader;
    class UBlurBackground_C* BlurBackground;
    class UBasic_ButtonScalable2_C* BTN_No;
    class UBasic_ButtonScalable2_C* BTN_Yes;
    class USizeBox* DialogBox;
    class UFSDLabelWidget* FSDLabelWidget_0;
    class UHorizontalBox* HorizontalBox_Cost;
    class UImage* Image_0;
    class UImage* Image_1;
    class UITM_Craft_ResourceBig_C* ITM_Craft_ResourceBig;
    class UMissionControl_MainDialogue_C* MissionControl;
    class UOVERLAY_RetirementGranted_C* OVERLAY_RetirementGranted;
    class UUI_PlayerSpeaking_List_C* UI_PlayerSpeaking_List;
    class UPlayerCharacterID* characterID;
    TMap<UResourceData*, int32> RetirementCost;
    int32 RetiredCount;
    class UAudioComponent* CharacterAudio;
    class UAudioComponent* FanfareAudio;

    void StopAudio(class UAudioComponent* InAudioComponent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue);
    bool IsAudioFinished(class UAudioComponent* InAudioComponentbool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void BuildCostList(TArray<int32> Values, TArray<class UResourceData*> Keys, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UResourceData* CallFunc_Array_Get_Item, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<int32>& CallFunc_Map_Values_Values, TArray<class UResourceData*>& CallFunc_Map_Keys_Keys, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_CanAfford_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_Craft_ResourceBig_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
    void OnFailure_8D7CEF664ECE349247F068951073F0FE();
    void OnSuccess_8D7CEF664ECE349247F068951073F0FE();
    void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void SetData(class UPlayerCharacterID* characterID);
    void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void OnShown();
    void HideMouseCursor();
    void BndEvt__OVERLAY_RetirementGranted_K2Node_ComponentBoundEvent_1_OnFinished__DelegateSignature();
    void Retire();
    void FadeInBackground(float Duration);
    void Stop Character Audio();
    void OnClosed();
    void OnRewardsClosed(class UWindowWidget* Window);
    void ExecuteUbergraph_WND_CharacterRetirement(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class ABP_HUD_SpaceRig_C* K2Node_DynamicCast_AsBP_HUD_Space_Rig, bool K2Node_DynamicCast_bSuccess, bool CallFunc_FetchPromotionRewards_OutSuccess, FExecuteUbergraph_WND_CharacterRetirementK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UPlayerCharacterID* K2Node_CustomEvent_characterID, class UGameData* CallFunc_GetFSDGameData_ReturnValue, const FRetirementCostItem CallFunc_GetCharacterRetirementCost_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, class UAudioComponent* CallFunc_PlayPitched_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, bool CallFunc_TryDeductResources_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, float CallFunc_SpeakManually_Duration, class UAudioComponent* CallFunc_SpeakManually_AudioComponent, bool CallFunc_IsAudioFinished_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, int32 CallFunc_RetireCharacter_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor_1, FExecuteUbergraph_WND_CharacterRetirementK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess_2, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, FText CallFunc_Select_Character_Class_Text_OutText, FSpaceRigNotification K2Node_MakeStruct_SpaceRigNotification, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class ABP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, class ABP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base_1, bool K2Node_DynamicCast_bSuccess_4, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_5, float K2Node_CustomEvent_Duration, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool Temp_bool_IsClosed_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_6, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, FExecuteUbergraph_WND_CharacterRetirementK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_7, class UWindowWidget* K2Node_CustomEvent_Window, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, class UWND_RetirementRewards_C* CallFunc_OpenWindowFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

#endif
