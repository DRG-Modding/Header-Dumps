// WidgetBlueprintGeneratedClass UI_TeamDisplay.UI_TeamDisplay_C
// Size: 0x282 (Inherited: 0x230)
struct UUI_TeamDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USizeBox* Holder_FriendInvite; // 0x238(0x08)
	struct UITEM_SpaceRig_PersonalCharacterLevel_C* HUD_PlayerClass_SpaceRig; // 0x240(0x08)
	struct UUI_AdvancedLabel_C* InviteLabel; // 0x248(0x08)
	struct UITEM_SpaceRig_TeamMember_C* ITEM_SpaceRig_TeamMember; // 0x250(0x08)
	struct UITEM_SpaceRig_TeamMember_C* ITEM_SpaceRig_TeamMember_260; // 0x258(0x08)
	struct UITEM_SpaceRig_TeamMember_C* ITEM_SpaceRig_TeamMember_576; // 0x260(0x08)
	struct TArray<struct UITEM_SpaceRig_TeamMember_C*> TeamIcons; // 0x268(0x10)
	struct AFSDGameModeSpaceRig* GameMode; // 0x278(0x08)
	bool IsSoloSession; // 0x280(0x01)
	bool IsSessionStarted; // 0x281(0x01)

	void GetParents(struct TArray<struct FString> Names1); // Function UI_TeamDisplay.UI_TeamDisplay_C.GetParents
	void GetTeam(struct TArray<struct AFSDPlayerState*> OutTeamMembers); // Function UI_TeamDisplay.UI_TeamDisplay_C.GetTeam
	void UpdateIcons(); // Function UI_TeamDisplay.UI_TeamDisplay_C.UpdateIcons
	void Construct(); // Function UI_TeamDisplay.UI_TeamDisplay_C.Construct
	void OnFirstWindowOpened(); // Function UI_TeamDisplay.UI_TeamDisplay_C.OnFirstWindowOpened
	void OnLastWindowClosed(); // Function UI_TeamDisplay.UI_TeamDisplay_C.OnLastWindowClosed
	void Setup Invite Friends(); // Function UI_TeamDisplay.UI_TeamDisplay_C.Setup Invite Friends
	void PreConstruct(bool IsDesignTime); // Function UI_TeamDisplay.UI_TeamDisplay_C.PreConstruct
	void UpdateFriendInviteVisibility(); // Function UI_TeamDisplay.UI_TeamDisplay_C.UpdateFriendInviteVisibility
	void OnPlayerJoined_Event(struct AFSDPlayerState* PlayerState); // Function UI_TeamDisplay.UI_TeamDisplay_C.OnPlayerJoined_Event
	void OnPlayerLeave_Event(struct AFSDPlayerState* PlayerState); // Function UI_TeamDisplay.UI_TeamDisplay_C.OnPlayerLeave_Event
	void ExecuteUbergraph_UI_TeamDisplay(int32_t EntryPoint); // Function UI_TeamDisplay.UI_TeamDisplay_C.ExecuteUbergraph_UI_TeamDisplay
};

