// WidgetBlueprintGeneratedClass HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C
// Size: 0x2d0 (Inherited: 0x250)
struct UHUD_TabPlayerList_InteractableV2_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UButton* Button_InviteFriends1; // 0x258(0x08)
	UButton* Button_InviteFriends2; // 0x260(0x08)
	UButton* Button_InviteFriends3; // 0x268(0x08)
	UHorizontalBox* HorizontalBox_InviteFriend; // 0x270(0x08)
	UHUD_TabPlayerListEntry_InteractableV2_C* HUD_TabPlayerListEntry_Interactable1; // 0x278(0x08)
	UUI_AdvancedLabel_C* LabelInviteFriend; // 0x280(0x08)
	UHorizontalBox* ParentPanel; // 0x288(0x08)
	UHorizontalBox* PlayersPanel; // 0x290(0x08)
	USizeBox* SizeBox_InviteFriends1; // 0x298(0x08)
	USizeBox* SizeBox_InviteFriends2; // 0x2a0(0x08)
	USizeBox* SizeBox_InviteFriends3; // 0x2a8(0x08)
	USpacer* Spacer_InviteButtons; // 0x2b0(0x08)
	USpacer* Spacer_IsInMission; // 0x2b8(0x08)
	TArray<UButton*> InviteButtons; // 0x2c0(0x10)

	void FindPlayerList(TArray<AFSDPlayerState*> OutPlayers);
	void OnFailure_BB3F54234323B8FC909E35A9D25E3656();
	void OnSuccess_BB3F54234323B8FC909E35A9D25E3656();
	void Construct();
	void AddPlayer(AFSDPlayerState* Player);
	void Update();
	void OnPlayerJoined_Event(AFSDPlayerState* PlayerState);
	void OnPlayerLeave_Event(AFSDPlayerState* PlayerState);
	void BndEvt__Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void InviteFriends();
	void BndEvt__Button_InviteFriends2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SizeBox_InviteFriends03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_HUD_TabPlayerList_InteractableV2(int32_t EntryPoint);
};

