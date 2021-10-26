// WidgetBlueprintGeneratedClass UI_TeamDisplay.UI_TeamDisplay_C
// Size: 0x282 (Inherited: 0x230)
struct UUI_TeamDisplay_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	USizeBox* Holder_FriendInvite; // 0x238(0x08)
	UITEM_SpaceRig_PersonalCharacterLevel_C* HUD_PlayerClass_SpaceRig; // 0x240(0x08)
	UUI_AdvancedLabel_C* InviteLabel; // 0x248(0x08)
	UITEM_SpaceRig_TeamMember_C* ITEM_SpaceRig_TeamMember; // 0x250(0x08)
	UITEM_SpaceRig_TeamMember_C* ITEM_SpaceRig_TeamMember_260; // 0x258(0x08)
	UITEM_SpaceRig_TeamMember_C* ITEM_SpaceRig_TeamMember_576; // 0x260(0x08)
	TArray<UITEM_SpaceRig_TeamMember_C*> TeamIcons; // 0x268(0x10)
	AFSDGameModeSpaceRig* GameMode; // 0x278(0x08)
	bool IsSoloSession; // 0x280(0x01)
	bool IsSessionStarted; // 0x281(0x01)

	void GetParents(TArray<FString> Names1);
	void GetTeam(TArray<AFSDPlayerState*> OutTeamMembers);
	void UpdateIcons();
	void Construct();
	void OnFirstWindowOpened();
	void OnLastWindowClosed();
	void Setup Invite Friends();
	void PreConstruct(bool IsDesignTime);
	void UpdateFriendInviteVisibility();
	void OnPlayerJoined_Event(AFSDPlayerState* PlayerState);
	void OnPlayerLeave_Event(AFSDPlayerState* PlayerState);
	void OnSessionLeaderChanged(APlayerState* PlayerState);
	void ExecuteUbergraph_UI_TeamDisplay(int32_t EntryPoint);
};

