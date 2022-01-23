#ifndef UE4SS_SDK_ITM_MisSel_MissionMapIcon_HPP
#define UE4SS_SDK_ITM_MisSel_MissionMapIcon_HPP

class UITM_MisSel_MissionMapIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Click;
    class UWidgetAnimation* Hover;
    class UBasic_ButtonScalable2_C* BTN_HostPrivate;
    class UBasic_ButtonScalable2_C* BTN_HostPublic;
    class UBasic_ButtonScalable2_C* BTN_Join;
    class UBasic_ButtonScalable2_C* BTN_Solo;
    class UButton* Button_Selection;
    class UBasic_Menu_MinimalWindow_C* ButtonWindow;
    class UITM_SeasonChallengeIcon_C* ChallengeIcon;
    class UOverlay* Content;
    class UImage* ICON_TargetDot;
    class UITM_MisSel_MissionIconBasic_C* ITEM_MissionSelection_MissionIconBasic;
    class UITM_Campaign_Icon_C* ITM_Campaign_Icon;
    class UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty;
    class UITM_MutatorIcon_C* ITM_MutatorIcon;
    class UITM_MutatorIcon_C* ITM_MutatorIcon_1;
    class UVerticalBox* VerticalBox_Anomalies;
    class UVerticalBox* VerticalBox_Warnings;
    class UITM_MissionMapIcon_LevelLock_C* WDG_LevelLock;
    class UITM_MissionMapIcon_Objective_C* WDG_Resource;
    class UITM_MissionMap_Icon_BG_C* WindowBG;
    class UGeneratedMission* mission;
    class UITM_MisSel_FullBiome_C* BiomeController;
    FLinearColor Tint_MissionIconColor;

    void SetMutators(class UGeneratedMission* Target, class UITM_MutatorIcon_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UMissionMutator*>& K2Node_MakeArray_Array, bool Temp_bool_Variable, TArray<class UMissionMutator*>& Temp_object_Variable, int32 Temp_int_Array_Index_Variable, TArray<class UMissionMutator*>& K2Node_Select_Default, class UMissionMutator* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class UITM_MutatorIcon_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UMissionWarning* CallFunc_Array_Get_Item_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
    void SetButtonState(class UBasic_ButtonScalable2_C* Button, bool Enabled, TEnumAsByte<EMissionSelection_Mode::Type> Mode, class ABP_SR_PlayerControllerBase_C* CallFunc_GetSRController_SRController, class UWindowWidget* CallFunc_GetMissionSelect_Widget, class U_SCREEN_MissionSelectionMK3_C* K2Node_DynamicCast_As_SCREEN_Mission_Selection_MK3, bool K2Node_DynamicCast_bSuccess, TEnumAsByte<EMissionSelection_Mode::Type> CallFunc_GetMode_Mode, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void ShouldEnableSoloButton(bool& Show, bool CallFunc_IsPlayingOffline_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
    void ShouldEnableHostButton(bool& Show, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
    void ShouldEnableJoinButton(bool& Show, EFSDTargetPlatform Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool K2Node_Select_Default, bool CallFunc_IsPlayingOffline_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
    void GetPlayerController(class ABP_PlayerController_SpaceRig_C*& AsBP Player Controller Space Rig, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess);
    void SelectOptions(EFSDTargetPlatform Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool CallFunc_ShouldEnableJoinButton_show, bool CallFunc_ShouldEnableHostButton_show, bool CallFunc_ShouldEnableSoloButton_show, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, int32 CallFunc_GetNumPlayers_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, int32 CallFunc_GetNumPlayers_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_ShouldEnableSoloButton_show_1, bool CallFunc_ShouldEnableJoinButton_show_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class ABP_PlayerController_SpaceRig_C* CallFunc_GetPlayerController_AsBP_Player_Controller_Space_Rig, class U_SCREEN_MissionSelectionMK3_C* K2Node_DynamicCast_As_SCREEN_Mission_Selection_MK3, bool K2Node_DynamicCast_bSuccess, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_ShouldEnableHostButton_show_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void GetActiveSelectionMode(TEnumAsByte<EMissionSelection_Mode::Type>& NewParam, bool Temp_bool_Variable, TEnumAsByte<EMissionSelection_Mode::Type> Temp_byte_Variable, TEnumAsByte<EMissionSelection_Mode::Type> Temp_byte_Variable_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TEnumAsByte<EMissionSelection_Mode::Type> K2Node_Select_Default, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ABP_SpaceRig_Gamemode_C* K2Node_DynamicCast_AsBP_Space_Rig_Gamemode, bool K2Node_DynamicCast_bSuccess, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void GetNumberOfActiveMissions(TArray<FBlueprintSessionResult>& Array, int32& sessions, int32 MatchingSessions, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, FBlueprintSessionResult CallFunc_Array_Get_Item, bool CallFunc_FSDIsPrivateServer_ReturnValue, int32 CallFunc_FSDGetGlobalMissionSeed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_FSDGetMissionSeed_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, int32 CallFunc_GetGlobalMissionSeed_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
    bool HasMission(bool CallFunc_IsValid_ReturnValue);
    void SetData(class UGeneratedMission* mission, class UITM_MisSel_FullBiome_C* BiomeController);
    void Reset();
    void Unselect();
    void Construct();
    void ServerUpdate();
    void BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature();
    void OnTeamMemberCampaignMissionChangedEvent();
    void ShowChallengeIcon(bool inHighlight, class UTexture2D* Icon, FLinearColor Color);
    void ExecuteUbergraph_ITM_MisSel_MissionMapIcon(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility Temp_byte_Variable_6, bool Temp_bool_Variable_1, FLinearColor K2Node_MakeStruct_LinearColor, FLinearColor K2Node_MakeStruct_LinearColor_1, FExecuteUbergraph_ITM_MisSel_MissionMapIconK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UGeneratedMission* K2Node_CustomEvent_Mission, class UITM_MisSel_FullBiome_C* K2Node_CustomEvent_BiomeController, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig, bool K2Node_DynamicCast_bSuccess, class ABP_PlayerController_SpaceRig_C* CallFunc_GetPlayerController_AsBP_Player_Controller_Space_Rig, class ABP_PlayerController_SpaceRig_C* CallFunc_GetPlayerController_AsBP_Player_Controller_Space_Rig_1, class U_SCREEN_MissionSelectionMK3_C* K2Node_DynamicCast_As_SCREEN_Mission_Selection_MK3, bool K2Node_DynamicCast_bSuccess_1, class U_SCREEN_MissionSelectionMK3_C* K2Node_DynamicCast_As_SCREEN_Mission_Selection_MK3_1, bool K2Node_DynamicCast_bSuccess_2, class ABP_PlayerController_SpaceRig_C* CallFunc_GetPlayerController_AsBP_Player_Controller_Space_Rig_2, class U_MENU_ServerList_C* K2Node_DynamicCast_As_MENU_Server_List, bool K2Node_DynamicCast_bSuccess_3, class ABP_PlayerController_SpaceRig_C* CallFunc_GetPlayerController_AsBP_Player_Controller_Space_Rig_3, class ABP_PlayerController_SpaceRig_C* CallFunc_GetPlayerController_AsBP_Player_Controller_Space_Rig_4, class U_SCREEN_MissionSelectionMK3_C* K2Node_DynamicCast_As_SCREEN_Mission_Selection_MK3_2, bool K2Node_DynamicCast_bSuccess_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsLocked_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, class ABP_PlayerController_SpaceRig_C* CallFunc_GetPlayerController_AsBP_Player_Controller_Space_Rig_5, class U_SCREEN_MissionSelectionMK3_C* K2Node_DynamicCast_As_SCREEN_Mission_Selection_MK3_3, bool K2Node_DynamicCast_bSuccess_5, FLinearColor CallFunc_MenuColors_OutputColor, EFSDTargetPlatform Temp_byte_Variable_7, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility K2Node_Select_Default, ESlateVisibility Temp_byte_Variable_9, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, const TArray<class UGeneratedMission*>& K2Node_MakeArray_Array, bool CallFunc_IsLocked_ReturnValue_1, ESlateVisibility K2Node_Select_Default_1, FLinearColor K2Node_Select_Default_2, float CallFunc_GetMissionScale_ReturnValue, class UTexture2D* CallFunc_GetObjectiveIconFromClass_ReturnValue, class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, int32 CallFunc_GetObjectiveAmountFromClass_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, const TArray<class UGeneratedMission*>& K2Node_MakeArray_Array_1, bool Temp_bool_Variable_2, ESlateVisibility K2Node_Select_Default_3, FExecuteUbergraph_ITM_MisSel_MissionMapIconK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_inHighlight, class UTexture2D* K2Node_CustomEvent_Icon, FLinearColor K2Node_CustomEvent_Color);
};

#endif
