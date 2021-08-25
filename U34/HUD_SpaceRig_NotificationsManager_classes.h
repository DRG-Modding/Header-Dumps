// WidgetBlueprintGeneratedClass HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C
// Size: 0x250 (Inherited: 0x230)
struct UHUD_SpaceRig_NotificationsManager_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UVerticalBox* EntryBox; // 0x238(0x08)
	struct UHUD_Milestone_Manager_C* HUD_Milestone_Manager; // 0x240(0x08)
	struct UBP_GameInstance_C* BP_GameInstance; // 0x248(0x08)

	void Construct(); // Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.Construct
	void CheckForNewNotifications(struct UFSDGameInstance* GameInstance); // Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CheckForNewNotifications
	void CreateNotificationWidget(struct FSpaceRigNotification Notification); // Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CreateNotificationWidget
	void CheckCraftingNotification(); // Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CheckCraftingNotification
	void ExecuteUbergraph_HUD_SpaceRig_NotificationsManager(int32_t EntryPoint); // Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.ExecuteUbergraph_HUD_SpaceRig_NotificationsManager
};

