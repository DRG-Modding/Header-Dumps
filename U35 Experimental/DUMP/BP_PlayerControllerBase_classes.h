// BlueprintGeneratedClass BP_PlayerControllerBase.BP_PlayerControllerBase_C
// Size: 0x7f0 (Inherited: 0x7a0)
struct ABP_PlayerControllerBase_C : AFSDPlayerController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x7a0(0x08)
	FMulticastInlineDelegate ReplyToInviteRequest; // 0x7a8(0x10)
	UBP_Invitation_C* InviteRequest; // 0x7b8(0x08)
	float InviteTimeElapsed; // 0x7c0(0x04)
	FDateTime InviteWaitTime; // 0x7c8(0x08)
	int32_t AnselStatus; // 0x7d0(0x04)
	int32_t AnselCameraTries; // 0x7d4(0x04)
	ABP_FSDCameraManager_C* CameraManager; // 0x7d8(0x08)
	FTimerHandle AnselTimerHandle; // 0x7e0(0x08)
	UWindowWidget* RetirementPopup; // 0x7e8(0x08)

	void SetIsEscapeMenuEnabled(bool IsEscapeMenuEnabled);
	void SetHasShownCharacterSelector(bool HasShown);
	void ItemFilter(AActor* itemClass, bool Result);
	void SetClassAnalytics();
	void SetUnlockAnalytics(TArray<AActor*> primary, TArray<AActor*> Secundary);
	void GetUnlockedItems(enum class EItemCategory Category, TArray<AActor*> Unlocked Items);
	void ReStartAnsel();
	void StartAnsel();
	void StopAnsel();
	void CreateInviteRequestIfNotCreated();
	void InpActEvt_AcceptInvite_K2Node_InputActionEvent_3(FKey Key);
	void InpActEvt_RejectInvite_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1(FKey Key);
	void InpActEvt_Ctrl_O_K2Node_InputKeyEvent_1(FKey Key);
	void ReceiveBeginPlay();
	void SetPhotographyMode(bool Active);
	void Return Client Camera();
	void Setup Invite Handling();
	void Setup Retirement Notification();
	void OnCharacterCanRetire_Event(APlayerCharacter* CharacterClass);
	void UpdateAnalytics();
	void AdjustCamera();
	void Setup Change User();
	void ChangeUser();
	void ChangeUserReply(bool Yes);
	void Reset Player Location();
	void OnJoinRequest(FDiscordUserDataSDK joinRequest);
	void Event On Join Request Reply(int32_t Reply);
	void ExecuteUbergraph_BP_PlayerControllerBase(int32_t EntryPoint);
	void ReplyToInviteRequest__DelegateSignature(int32_t Reply);
};

