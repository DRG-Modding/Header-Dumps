#ifndef UE4SS_SDK_UI_TeamDisplay_HPP
#define UE4SS_SDK_UI_TeamDisplay_HPP

class UUI_TeamDisplay_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USizeBox* Holder_FriendInvite;
    class UITEM_SpaceRig_PersonalCharacterLevel_C* HUD_PlayerClass_SpaceRig;
    class UUI_AdvancedLabel_C* InviteLabel;
    class UITEM_SpaceRig_TeamMember_C* ITEM_SpaceRig_TeamMember;
    class UITEM_SpaceRig_TeamMember_C* ITEM_SpaceRig_TeamMember_259;
    class UITEM_SpaceRig_TeamMember_C* ITEM_SpaceRig_TeamMember_575;
    TArray<class UITEM_SpaceRig_TeamMember_C*> TeamIcons;
    class AFSDGameModeSpaceRig* GameMode;
    bool IsSoloSession;
    bool IsSessionStarted;

    void GetParents(TArray<FString>& Names1);
    void GetTeam(TArray<class AFSDPlayerState*>& OutTeamMembers);
    void UpdateIcons();
    void Construct();
    void OnFirstWindowOpened();
    void OnLastWindowClosed();
    void Setup Invite Friends();
    void PreConstruct(bool IsDesignTime);
    void UpdateFriendInviteVisibility();
    void OnPlayerJoined_Event(class AFSDPlayerState* PlayerState);
    void OnPlayerLeave_Event(class AFSDPlayerState* PlayerState);
    void OnSessionLeaderChanged(const class APlayerState* PlayerState);
    void ExecuteUbergraph_UI_TeamDisplay(int32 EntryPoint);
};

#endif
