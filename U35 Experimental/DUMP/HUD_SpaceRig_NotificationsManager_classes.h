// WidgetBlueprintGeneratedClass HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C
// Size: 0x250 (Inherited: 0x230)
struct UHUD_SpaceRig_NotificationsManager_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UVerticalBox* EntryBox; // 0x238(0x08)
	UHUD_Milestone_Manager_C* HUD_Milestone_Manager; // 0x240(0x08)
	UBP_GameInstance_C* BP_GameInstance; // 0x248(0x08)

	void Construct();
	void CheckForNewNotifications(UFSDGameInstance* GameInstance);
	void CreateNotificationWidget(FSpaceRigNotification Notification);
	void CheckCraftingNotification();
	void ExecuteUbergraph_HUD_SpaceRig_NotificationsManager(int32_t EntryPoint);
};

