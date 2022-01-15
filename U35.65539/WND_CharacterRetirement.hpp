#ifndef UE4SS_SDK_WND_CharacterRetirement_HPP
#define UE4SS_SDK_WND_CharacterRetirement_HPP

class UWND_CharacterRetirement_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimPanBackground;
    UWidgetAnimation* FadeOut;
    UWidgetAnimation* WarningPulse;
    UBorder* BackgroundFade;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_LargeWindowWithHeader_C* Basic_Menu_LargeWindowWithHeader;
    UBlurBackground_C* BlurBackground;
    UBasic_ButtonScalable2_C* BTN_No;
    UBasic_ButtonScalable2_C* BTN_Yes;
    USizeBox* DialogBox;
    UFSDLabelWidget* FSDLabelWidget_0;
    UHorizontalBox* HorizontalBox_Cost;
    UImage* Image_0;
    UImage* Image_1;
    UITM_Craft_ResourceBig_C* ITM_Craft_ResourceBig;
    UMissionControl_MainDialogue_C* MissionControl;
    UOVERLAY_RetirementGranted_C* OVERLAY_RetirementGranted;
    UUI_PlayerSpeaking_List_C* UI_PlayerSpeaking_List;
    UPlayerCharacterID* characterID;
    TMap<UResourceData*, int32> RetirementCost;
    int32 RetiredCount;
    UAudioComponent* CharacterAudio;
    UAudioComponent* FanfareAudio;

    void StopAudio(UAudioComponent* InAudioComponent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue);
    bool IsAudioFinished(UAudioComponent* InAudioComponentbool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void BuildCostList(TArray<int32> Values, TArray<UResourceData*> Keys, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UResourceData* CallFunc_Array_Get_Item, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<int32>& CallFunc_Map_Values_Values, TArray<UResourceData*>& CallFunc_Map_Keys_Keys, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_CanAfford_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_Craft_ResourceBig_C* CallFunc_Create_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue);
    void OnFailure_8D7CEF664ECE349247F068951073F0FE();
    void OnSuccess_8D7CEF664ECE349247F068951073F0FE();
    void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void SetData(UPlayerCharacterID* characterID);
    void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void OnShown();
    void HideMouseCursor();
    void BndEvt__OVERLAY_RetirementGranted_K2Node_ComponentBoundEvent_1_OnFinished__DelegateSignature();
    void Retire();
    void FadeInBackground(float Duration);
    void Stop Character Audio();
    void OnClosed();
    void OnRewardsClosed(UWindowWidget* Window);
    void ExecuteUbergraph_WND_CharacterRetirement(int32 EntryPoint, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, UBP_HUD_SpaceRig_C* K2Node_DynamicCast_AsBP_HUD_Space_Rig, bool K2Node_DynamicCast_bSuccess, bool CallFunc_FetchPromotionRewards_OutSuccess, WindowDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UPlayerCharacterID* K2Node_CustomEvent_characterID, UGameData* CallFunc_GetFSDGameData_ReturnValue, const FRetirementCostItem CallFunc_GetCharacterRetirementCost_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, UAudioComponent* CallFunc_PlayPitched_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, bool CallFunc_TryDeductResources_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, float CallFunc_SpeakManually_Duration, UAudioComponent* CallFunc_SpeakManually_AudioComponent, bool CallFunc_IsAudioFinished_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, int32 CallFunc_RetireCharacter_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor_1, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess_2, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, FText CallFunc_Select_Character_Class_Text_OutText, FSpaceRigNotification K2Node_MakeStruct_SpaceRigNotification, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_3, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, UBP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess_3, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, UBP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base_1, bool K2Node_DynamicCast_bSuccess_4, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_5, float K2Node_CustomEvent_Duration, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool Temp_bool_IsClosed_Variable, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_6, UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_7, UWindowWidget* K2Node_CustomEvent_Window, UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, UWND_RetirementRewards_C* CallFunc_OpenWindowFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
}

#endif
