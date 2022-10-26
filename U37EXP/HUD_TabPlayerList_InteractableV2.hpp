#ifndef UE4SS_SDK_HUD_TabPlayerList_InteractableV2_HPP
#define UE4SS_SDK_HUD_TabPlayerList_InteractableV2_HPP

class UHUD_TabPlayerList_InteractableV2_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_InviteFriends1;
    class UButton* Button_InviteFriends2;
    class UButton* Button_InviteFriends3;
    class UHorizontalBox* HorizontalBox_InviteFriend;
    class UHUD_TabPlayerListEntry_InteractableV2_C* HUD_TabPlayerListEntry_Interactable1;
    class UUI_AdvancedLabel_C* LabelInviteFriend;
    class UHorizontalBox* ParentPanel;
    class UHorizontalBox* PlayersPanel;
    class USizeBox* SizeBox_InviteFriends1;
    class USizeBox* SizeBox_InviteFriends2;
    class USizeBox* SizeBox_InviteFriends3;
    class USpacer* Spacer_InviteButtons;
    class USpacer* Spacer_IsInMission;
    TArray<class UButton*> InviteButtons;

    void FindPlayerList(TArray<class AFSDPlayerState*>& OutPlayers);
    void OnFailure_BB3F54234323B8FC909E35A9D25E3656();
    void OnSuccess_BB3F54234323B8FC909E35A9D25E3656();
    void Construct();
    void AddPlayer(class AFSDPlayerState* Player);
    void Update();
    void OnPlayerJoined_Event(class AFSDPlayerState* PlayerState);
    void OnPlayerLeave_Event(class AFSDPlayerState* PlayerState);
    void BndEvt__Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void InviteFriends();
    void BndEvt__Button_InviteFriends2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SizeBox_InviteFriends03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_HUD_TabPlayerList_InteractableV2(int32 EntryPoint);
};

#endif
