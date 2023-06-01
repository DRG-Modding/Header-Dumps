#ifndef UE4SS_SDK_BP_PlayerControllerBase_HPP
#define UE4SS_SDK_BP_PlayerControllerBase_HPP

class ABP_PlayerControllerBase_C : public AFSDPlayerController
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBP_PlayerControllerBase_CReplyToInviteRequest ReplyToInviteRequest;
    void ReplyToInviteRequest(int32 Reply);
    class UBP_Invitation_C* InviteRequest;
    float InviteTimeElapsed;
    FDateTime InviteWaitTime;
    int32 AnselStatus;
    int32 AnselCameraTries;
    class ABP_FSDCameraManager_C* CameraManager;
    FTimerHandle AnselTimerHandle;
    class UWindowWidget* RetirementPopup;
    TSoftClassPtr<UObject> hudClass;

    void GetEditorCharacterClass(class UPlayerCharacterID*& Character Class);
    void SetIsEscapeMenuEnabled(bool IsEscapeMenuEnabled);
    void SetHasShownCharacterSelector(bool HasShown);
    void ItemFilter(TSubclassOf<class AActor> itemClass, bool& Result);
    void SetClassAnalytics();
    void SetUnlockAnalytics(TArray<class TSubclassOf<AActor>>& Primary, TArray<class TSubclassOf<AActor>>& Secundary);
    void GetUnlockedItems(EItemCategory Category, TArray<class TSubclassOf<AActor>>& Unlocked Items);
    void ReStartAnsel();
    void StartAnsel();
    void StopAnsel();
    void CreateInviteRequestIfNotCreated();
    void InpActEvt_AcceptInvite_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_RejectInvite_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_IgnoreInvite_K2Node_InputActionEvent_0(FKey Key);
    void InpActEvt_Ctrl_O_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void SetPhotographyMode(bool Active);
    void Return Client Camera();
    void Setup Invite Handling();
    void Setup Retirement Notification();
    void OnCharacterCanRetire_Event(TSubclassOf<class APlayerCharacter> CharacterClass);
    void UpdateAnalytics();
    void AdjustCamera();
    void Setup Change User();
    void ChangeUser();
    void ChangeUserReply(bool Yes);
    void Reset Player Location();
    void CustomEvent_1();
    void SpawnHUDAsync();
    void OnJoinRequest(const FDiscordUserDataSDK& joinRequest);
    void Event On Join Request Reply(int32 Reply);
    void ExecuteUbergraph_BP_PlayerControllerBase(int32 EntryPoint);
    void ReplyToInviteRequest__DelegateSignature(int32 Reply);
};

#endif
