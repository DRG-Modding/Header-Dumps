// WidgetBlueprintGeneratedClass HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C
// Size: 0x2d0 (Inherited: 0x250)
struct UHUD_TabPlayerList_InteractableV2_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UButton* Button_InviteFriends1; // 0x258(0x08)
	struct UButton* Button_InviteFriends2; // 0x260(0x08)
	struct UButton* Button_InviteFriends3; // 0x268(0x08)
	struct UHorizontalBox* HorizontalBox_InviteFriend; // 0x270(0x08)
	struct UHUD_TabPlayerListEntry_InteractableV2_C* HUD_TabPlayerListEntry_Interactable1; // 0x278(0x08)
	struct UUI_AdvancedLabel_C* LabelInviteFriend; // 0x280(0x08)
	struct UHorizontalBox* ParentPanel; // 0x288(0x08)
	struct UHorizontalBox* PlayersPanel; // 0x290(0x08)
	struct USizeBox* SizeBox_InviteFriends1; // 0x298(0x08)
	struct USizeBox* SizeBox_InviteFriends2; // 0x2a0(0x08)
	struct USizeBox* SizeBox_InviteFriends3; // 0x2a8(0x08)
	struct USpacer* Spacer_InviteButtons; // 0x2b0(0x08)
	struct USpacer* Spacer_IsInMission; // 0x2b8(0x08)
	struct TArray<struct UButton*> InviteButtons; // 0x2c0(0x10)

	void FindPlayerList(struct TArray<struct AFSDPlayerState*> OutPlayers); // Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.FindPlayerList
	void Construct(); // Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.Construct
	void AddPlayer(struct AFSDPlayerState* Player); // Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.AddPlayer
	void Update(); // Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.Update
	void OnPlayerJoined_Event(struct AFSDPlayerState* PlayerState); // Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.OnPlayerJoined_Event
	void OnPlayerLeave_Event(struct AFSDPlayerState* PlayerState); // Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.OnPlayerLeave_Event
	void BndEvt__Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void InviteFriends(); // Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.InviteFriends
	void BndEvt__Button_InviteFriends2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__Button_InviteFriends2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	void BndEvt__SizeBox_InviteFriends03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__SizeBox_InviteFriends03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	void ExecuteUbergraph_HUD_TabPlayerList_InteractableV2(int32_t EntryPoint); // Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.ExecuteUbergraph_HUD_TabPlayerList_InteractableV2
};

