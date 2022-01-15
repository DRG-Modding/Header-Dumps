#ifndef UE4SS_SDK_WND_AssignmentMissionComplete_HPP
#define UE4SS_SDK_WND_AssignmentMissionComplete_HPP

class UWND_AssignmentMissionComplete_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* NewAnimation;
    UWidgetAnimation* FadeIn;
    UWidgetAnimation* RemoveUI;
    UWidgetAnimation* AppearV2;
    UWidgetAnimation* MoveInProgressBarV2;
    UWidgetAnimation* MoveToTopProgressBar;
    UWidgetAnimation* MoveInProgressBar;
    UWidgetAnimation* Appear;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    UImage* CampaignImage;
    UTextBlock* CampaignProgressText;
    UCanvasPanel* ContentCanvas;
    UBasic_ButtonScalable2_C* ContinueButton;
    UBorder* HeaderBorder;
    UImage* IconBackground;
    UITM_CampaignProgress_C* ITM_CampaignProgressMain;
    UITM_MenuBackground_C* ITM_MenuBackground;
    UUI_ImageTinted_C* LeftTriangleOuter;
    UMissionControl_MainDialogue_C* MissionControl_MainDialogue;
    UHorizontalBox* OtherRewardsBox;
    UOverlay* RewardOverlay;
    UUI_ImageTinted_C* RightTriangleInner;
    UUI_ImageTinted_C* RightTriangleOuter;
    UUI_RewardResourcesBox_C* UI_RewardResourcesBox;
    UVerticalBox* UnlockRewardsBox;
    UCampaignNotification* CampaignNotification;
    FDialogStruct ShoutEntry;
    USoundBase* MissionControlCue;
    UAudioComponent* MissionControlAudioComponent;
    int32 Countdown;
    bool CountDownActive;
    FTimerHandle WaitHandle;
    TArray<URewardWidget*> RewardWidgets;
    int32 RewardIndex;
    int32 UnclaimedRewards;
    bool CountdownPaused;
    UPlayerCharacterID* RetirableCharacter;

    void CheckMinersManualNotifications(FText Biome String, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, UReward* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UUnlockPlanetZoneReward* K2Node_DynamicCast_AsUnlock_Planet_Zone_Reward, bool K2Node_DynamicCast_bSuccess, UUnlockMissionTypeReward* K2Node_DynamicCast_AsUnlock_Mission_Type_Reward, bool K2Node_DynamicCast_bSuccess_1, const TArray<UBiome*>& CallFunc_GetBiomes_ReturnValue, UBiome* CallFunc_Array_Get_Item_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, UBiome* CallFunc_Array_Get_Item_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void UpdateGoogleAnalytics(UMissionStat* MissionStat, FString CampaignName, UCampaignNotification* Notification, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetStatCountTotal_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, TSubclassOf<UCampaign> CallFunc_GetObjectClass_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue_1, FString CallFunc_ProcessCampaignName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FString CallFunc_MakeLiteralString_ReturnValue, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue);
    void UpdateCampaignProgressBar(bool ShowLastMission, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue);
    bool IsWindowOpen(UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_IsWindowOpen_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFKey CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FEventReply CallFunc_Handled_ReturnValue);
    void SetFrameColor(uint8 Color, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1);
    void GetMissionCompleteShout(UDialogDataAsset*& MissionCompleteShout, bool CallFunc_IsValid_ReturnValue);
    void CreateRewardWidget(UReward* Reward, URewardWidget*& Widget, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UUI_RewardUnlock_Vanity_C* CallFunc_Create_ReturnValue, UPickaxePartReward* K2Node_DynamicCast_AsPickaxe_Part_Reward, bool K2Node_DynamicCast_bSuccess, UVanityReward* K2Node_DynamicCast_AsVanity_Reward, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanOR_ReturnValue, UResourceReward* K2Node_DynamicCast_AsResource_Reward, bool K2Node_DynamicCast_bSuccess_2, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, USchematicReward* K2Node_DynamicCast_AsSchematic_Reward, bool K2Node_DynamicCast_bSuccess_3, UUI_RewardSchematic_C* CallFunc_Create_ReturnValue_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, UUI_RewardUnlock_C* CallFunc_Create_ReturnValue_2, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, UUI_RewardResource_C* CallFunc_Create_ReturnValue_3);
    void Add Reward List(const TArray<UReward*>& List, ESlateVisibility Temp_byte_Variable, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, UReward* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
    void Add Reward(UReward* Reward, TMap<UResourceData*, float> ResourceMap, URewardWidget* Widget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<UResourceData*>& CallFunc_Map_Keys_Keys, UResourceData* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, URetirementReward* K2Node_DynamicCast_AsRetirement_Reward, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, UWeeklyResourceReward* K2Node_DynamicCast_AsWeekly_Resource_Reward, bool K2Node_DynamicCast_bSuccess_1, UResourceReward* K2Node_DynamicCast_AsResource_Reward, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_BooleanOR_ReturnValue, URewardWidget* CallFunc_CreateRewardWidget_Widget, UWeeklyResourceReward* K2Node_DynamicCast_AsWeekly_Resource_Reward_1, bool K2Node_DynamicCast_bSuccess_3, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, UUI_RewardResource_C* CallFunc_Create_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess_4, TMap<UResourceData*, float> CallFunc_GetRewards_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void OnShown();
    void OnClosed();
    void SetMissionControlPaused(bool IsPaused);
    void Continue();
    void CursorInputHack();
    void Init Window();
    void Start Mission Control Speak();
    void OnAppearFinished();
    void On Mission Control Finished();
    void Count Down();
    void Reward Claimed();
    void OnNewTopWindow();
    void OnProgressBarMoveFinished();
    void OnUpdateProgressBarFinished();
    void OnProgressBarUpdateStep();
    void ExecuteUbergraph_WND_AssignmentMissionComplete(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_Event_IsDesignTime, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UDialogDataAsset* CallFunc_GetMissionCompleteShout_MissionCompleteShout, FDialogStruct CallFunc_SelectEntry_Dialog, bool CallFunc_SelectEntry_ReturnValue, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_CustomEvent_isPaused, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool Temp_bool_Variable, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess_2, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_IsWindowOpen_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsWindowOpen_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, uint8 Temp_byte_Variable, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, uint8 Temp_byte_Variable_1, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Variable_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, UWND_PromotionDirections_C* CallFunc_OpenSingleUseWindow_ReturnValue, bool CallFunc_IsValid_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, int32 CallFunc_Array_Length_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, uint8 K2Node_Select_Default, const FText K2Node_Select_Default_1, FText CallFunc_TextToUpper_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_HasResources_HasResources, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, URewardWidget* CallFunc_Array_Get_Item, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_4);
}

#endif
