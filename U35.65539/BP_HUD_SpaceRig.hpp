#ifndef UE4SS_SDK_BP_HUD_SpaceRig_HPP
#define UE4SS_SDK_BP_HUD_SpaceRig_HPP

class ABP_HUD_SpaceRig_C : USpaceRigHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    APlayerCharacter* PlayerCharacter;
    UHUD_SpaceRig_C* HUD;
    TArray<UUserWidget*> OwnedWidgets;
    TArray<FClaimableRewardEntry> PendingPromotionRewards;
    bool PendingFirstPromotion;
    UGameDLCSettings* DLCSettings;
    UWindowWidget* CheatMenu;

    void TryShowNextNotification(UFSDEvent* FSDEvent, UWindowWidget* Window, UObject* NotificationObject, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, UFSDEvent* K2Node_DynamicCast_AsFSDEvent, bool K2Node_DynamicCast_bSuccess, UWND_ClaimableRewards_C* CallFunc_Create_ReturnValue, UDialogDataAsset* K2Node_DynamicCast_AsDialog_Data_Asset, bool K2Node_DynamicCast_bSuccess_1, UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, int32 CallFunc_MissionShoutLocally_ReturnValue, UWindowWidget* K2Node_DynamicCast_AsWindow_Widget, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsNotificationQueueEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasUnseenClaimableRewards_ReturnValue, UObject* CallFunc_DequeueNotificationObject_ReturnValue, bool CallFunc_IsMissionControlSpeaking_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue_2, bool CallFunc_AnyWindowsOpen_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
    void FetchPromotionRewards(bool& OutSuccess, UPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TArray<FClaimableRewardEntry>& CallFunc_ClaimPromotionRewards_OutRewards, bool CallFunc_ClaimPromotionRewards_OutFirstPromotion, bool CallFunc_ClaimPromotionRewards_ReturnValue);
    void EnqueueWindow(SoftClassProperty WidgetClass, UWindowWidget*& OutWindow, UWindowWidget* CallFunc_QueueWindowClass_ReturnValue);
    void PlayerSpawned(UPlayerCharacter* Player);
    void OnVisibilityChanged();
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void OnCountdownCompleted();
    void Update Visibility();
    void Handle Count Down();
    void Setup Campaign Notifications();
    void OnCampaignNotification_Event(UCampaignNotification* Notification);
    void Setup Retirement Shouts();
    void OnEligibleForRetirementAssignment(UBP_GameInstance_C* GameInstance);
    void Setup Spacerig Notifications();
    void Setup UI Notifications();
    void Setup Promotion Rewards();
    void Setup First Infused Core();
    void Setup Pending Rewards();
    void Setup FSD Events();
    void OnFSDEventActiveChanged(const UFSDEvent* InFsdEvent, bool InIsActive);
    void SetupTutorialMessage();
    void CheckForTutorialPrompt();
    void Stop Check For Tutorial Prompt();
    void Setup Game DLC Announcements();
    void ReceiveNotificationQueueActivated();
    void ReceiveNotificationAdded(UObject* InNotification);
    void Setup Notification Queue();
    void CheatMenuRequest();
    void Setup Cheat Menu();
    void Shouting Done();
    void SetupModWarnings]();
    void ExecuteUbergraph_BP_HUD_SpaceRig(int32 EntryPoint, int32 CallFunc_MissionShoutLocally_ReturnValue, MissionShoutEndDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable, OnCountdownCompleted__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPlayerCharacter* K2Node_Event_player, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsHUDVisible_ReturnValue, UGameStateBase* CallFunc_GetGameState_ReturnValue, UBP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig, bool K2Node_DynamicCast_bSuccess, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, OnCheatRequested__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, UHUD_SpaceRig_C* CallFunc_Create_ReturnValue, UCampaignNotification* K2Node_CustomEvent_Notification, bool Temp_bool_Variable, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, UBP_GameInstance_C* K2Node_CustomEvent_GameInstance, UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsEligibleForRetirementAassignment_EligibleForRetirementAssignment, int32 CallFunc_MissionShoutLocally_ReturnValue_1, UFSDEventManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, TArray<UFSDEvent*>& CallFunc_GetActiveEventHandlers_ReturnValue, UFSDEventManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, UFSDEvent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, UPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, UHUD_SpaceRig_NotificationsManager_C* CallFunc_Create_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue, WindowManagerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FSDEventActivateChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, UWindowWidget* CallFunc_EnqueueWindow_OutWindow, UWindowWidget* CallFunc_EnqueueWindow_OutWindow_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_ShouldDisplayFirstSchematicMessage_ReturnValue, bool CallFunc_HasPendingReward_ReturnValue, UWindowWidget* CallFunc_EnqueueWindow_OutWindow_2, UWindowWidget* CallFunc_EnqueueWindow_OutWindow_3, bool CallFunc_FetchPromotionRewards_OutSuccess, const UFSDEvent* K2Node_CustomEvent_InFsdEvent, bool K2Node_CustomEvent_InIsActive, OnEligibleForRetirementAssignment__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_HasUnseenClaimableRewards_ReturnValue, UPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, bool CallFunc_GiveRewards_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, UWindowManager* CallFunc_GetWindowManager_ReturnValue_2, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_AnyWindowsOpen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess_2, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_3, UWindowManager* CallFunc_GetWindowManager_ReturnValue_3, WindowManagerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, TArray<UGameDLC*>& CallFunc_GetAnnouncableDLCs_ReturnValue, UGameDLC* CallFunc_Array_Get_Item_1, CampaignNotificationSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, UWindowWidget* CallFunc_EnqueueWindow_OutWindow_4, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, UObject* K2Node_Event_InNotification, UWindowManager* CallFunc_GetWindowManager_ReturnValue_4, WindowManagerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, TSubclassOf<UWindowWidget> CallFunc_LoadWindowWidgetClass_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_3, UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, UPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_4, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess_3, UPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_5, int32 Temp_int_Array_Index_Variable_2, UWindowWidget* CallFunc_Create_ReturnValue_2, UUserWidget* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsNotificationQueueEmpty_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, UWindowWidget* CallFunc_EnqueueWindow_OutWindow_5, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_HasTooManyModsEnabled_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_4, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_1);
}

#endif
