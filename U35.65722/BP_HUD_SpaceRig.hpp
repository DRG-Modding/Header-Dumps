#ifndef UE4SS_SDK_BP_HUD_SpaceRig_HPP
#define UE4SS_SDK_BP_HUD_SpaceRig_HPP

class ABP_HUD_SpaceRig_C : public ASpaceRigHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class APlayerCharacter* PlayerCharacter;
    class UHUD_SpaceRig_C* HUD;
    TArray<class UUserWidget*> OwnedWidgets;
    TArray<FClaimableRewardEntry> PendingPromotionRewards;
    bool PendingFirstPromotion;
    class UGameDLCSettings* DLCSettings;
    class UWindowWidget* CheatMenu;

    void TryShowNextNotification(class UFSDEvent* FSDEvent, class UWindowWidget* Window, class UObject* NotificationObject, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UFSDEvent* K2Node_DynamicCast_AsFSDEvent, bool K2Node_DynamicCast_bSuccess, class UWND_ClaimableRewards_C* CallFunc_Create_ReturnValue, class UDialogDataAsset* K2Node_DynamicCast_AsDialog_Data_Asset, bool K2Node_DynamicCast_bSuccess_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, int32 CallFunc_MissionShoutLocally_ReturnValue, class UWindowWidget* K2Node_DynamicCast_AsWindow_Widget, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsNotificationQueueEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasUnseenClaimableRewards_ReturnValue, class UObject* CallFunc_DequeueNotificationObject_ReturnValue, bool CallFunc_IsMissionControlSpeaking_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_2, bool CallFunc_AnyWindowsOpen_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
    void FetchPromotionRewards(bool& OutSuccess, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TArray<FClaimableRewardEntry>& CallFunc_ClaimPromotionRewards_OutRewards, bool CallFunc_ClaimPromotionRewards_OutFirstPromotion, bool CallFunc_ClaimPromotionRewards_ReturnValue);
    void EnqueueWindow(TSoftClassPtr<UWindowWidget> WidgetClass, class UWindowWidget*& OutWindow, class UWindowWidget* CallFunc_QueueWindowClass_ReturnValue);
    void PlayerSpawned(class APlayerCharacter* Player);
    void OnVisibilityChanged();
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void OnCountdownCompleted();
    void Update Visibility();
    void Handle Count Down();
    void Setup Campaign Notifications();
    void OnCampaignNotification_Event(class UCampaignNotification* Notification);
    void Setup Retirement Shouts();
    void OnEligibleForRetirementAssignment(class UBP_GameInstance_C* GameInstance);
    void Setup Spacerig Notifications();
    void Setup UI Notifications();
    void Setup Promotion Rewards();
    void Setup First Infused Core();
    void Setup Pending Rewards();
    void Setup FSD Events();
    void OnFSDEventActiveChanged(const class UFSDEvent* InFsdEvent, bool InIsActive);
    void SetupTutorialMessage();
    void CheckForTutorialPrompt();
    void Stop Check For Tutorial Prompt();
    void Setup Game DLC Announcements();
    void ReceiveNotificationQueueActivated();
    void ReceiveNotificationAdded(class UObject* InNotification);
    void Setup Notification Queue();
    void CheatMenuRequest();
    void Setup Cheat Menu();
    void Shouting Done();
    void SetupModWarnings]();
    void ExecuteUbergraph_BP_HUD_SpaceRig(int32 EntryPoint, int32 CallFunc_MissionShoutLocally_ReturnValue, FExecuteUbergraph_BP_HUD_SpaceRigK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable, FExecuteUbergraph_BP_HUD_SpaceRigK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class APlayerCharacter* K2Node_Event_player, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsHUDVisible_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig, bool K2Node_DynamicCast_bSuccess, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_BP_HUD_SpaceRigK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UHUD_SpaceRig_C* CallFunc_Create_ReturnValue, class UCampaignNotification* K2Node_CustomEvent_Notification, bool Temp_bool_Variable, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, class UBP_GameInstance_C* K2Node_CustomEvent_GameInstance, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsEligibleForRetirementAassignment_EligibleForRetirementAssignment, int32 CallFunc_MissionShoutLocally_ReturnValue_1, class UFSDEventManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, TArray<class UFSDEvent*>& CallFunc_GetActiveEventHandlers_ReturnValue, class UFSDEventManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UFSDEvent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class UHUD_SpaceRig_NotificationsManager_C* CallFunc_Create_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue, FExecuteUbergraph_BP_HUD_SpaceRigK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FExecuteUbergraph_BP_HUD_SpaceRigK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, class UWindowWidget* CallFunc_EnqueueWindow_OutWindow, class UWindowWidget* CallFunc_EnqueueWindow_OutWindow_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_ShouldDisplayFirstSchematicMessage_ReturnValue, bool CallFunc_HasPendingReward_ReturnValue, class UWindowWidget* CallFunc_EnqueueWindow_OutWindow_2, class UWindowWidget* CallFunc_EnqueueWindow_OutWindow_3, bool CallFunc_FetchPromotionRewards_OutSuccess, const class UFSDEvent* K2Node_CustomEvent_InFsdEvent, bool K2Node_CustomEvent_InIsActive, FExecuteUbergraph_BP_HUD_SpaceRigK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_HasUnseenClaimableRewards_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, bool CallFunc_GiveRewards_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_2, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_AnyWindowsOpen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess_2, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_3, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_3, FExecuteUbergraph_BP_HUD_SpaceRigK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6, TArray<class UGameDLC*>& CallFunc_GetAnnouncableDLCs_ReturnValue, class UGameDLC* CallFunc_Array_Get_Item_1, FExecuteUbergraph_BP_HUD_SpaceRigK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7, class UWindowWidget* CallFunc_EnqueueWindow_OutWindow_4, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UObject* K2Node_Event_InNotification, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_4, FExecuteUbergraph_BP_HUD_SpaceRigK2Node_CreateDelegate_OutputDelegate_8 K2Node_CreateDelegate_OutputDelegate_8, TSubclassOf<class UWindowWidget> CallFunc_LoadWindowWidgetClass_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_3, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_4, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess_3, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_5, int32 Temp_int_Array_Index_Variable_2, class UWindowWidget* CallFunc_Create_ReturnValue_2, class UUserWidget* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsNotificationQueueEmpty_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UWindowWidget* CallFunc_EnqueueWindow_OutWindow_5, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_HasTooManyModsEnabled_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_4, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_1);
};

#endif
