#ifndef UE4SS_SDK_HUD_SpaceRig_NotificationsManager_HPP
#define UE4SS_SDK_HUD_SpaceRig_NotificationsManager_HPP

class UHUD_SpaceRig_NotificationsManager_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* EntryBox;
    class UHUD_Milestone_Manager_C* HUD_Milestone_Manager;
    class UBP_GameInstance_C* BP_GameInstance;

    void Construct();
    void CheckForNewNotifications(class UFSDGameInstance* GameInstance);
    void CreateNotificationWidget(FSpaceRigNotification Notification);
    void CheckCraftingNotification();
    void ExecuteUbergraph_HUD_SpaceRig_NotificationsManager(int32 EntryPoint, FExecuteUbergraph_HUD_SpaceRig_NotificationsManagerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_SpaceRig_NotificationsManagerK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UFSDGameInstance* K2Node_CustomEvent_GameInstance, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, FSpaceRigNotification K2Node_CustomEvent_Notification, FSpaceRigNotification CallFunc_GetNextSpaceRigNotification_NextNotification, bool CallFunc_GetNextSpaceRigNotification_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHUD_SpaceRig_Notification_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_4, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_5, FLinearColor CallFunc_MenuColors_OutputColor, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, FSpaceRigNotification K2Node_MakeStruct_SpaceRigNotification, class UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<class UObject*>& K2Node_MakeArray_Array, bool CallFunc_CheckItemUINotification_HasNotification);
};

#endif
