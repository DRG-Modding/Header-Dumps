#ifndef UE4SS_SDK_HUD_SpaceRig_NotificationsManager_HPP
#define UE4SS_SDK_HUD_SpaceRig_NotificationsManager_HPP

class UHUD_SpaceRig_NotificationsManager_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* EntryBox;
    class UHUD_Milestone_Manager_C* HUD_Milestone_Manager;
    class UBP_GameInstance_C* BP_GameInstance;

    void Construct();
    void CreateNotificationWidget(FSpaceRigNotification Notification);
    void CheckCraftingNotification();
    void CheckForNewSpacerigNotifications();
    void ExecuteUbergraph_HUD_SpaceRig_NotificationsManager(int32 EntryPoint);
};

#endif
