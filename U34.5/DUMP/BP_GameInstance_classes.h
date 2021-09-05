// BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
// Size: 0xfe0 (Inherited: 0xd70)
struct UBP_GameInstance_C : UFSDGameInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0xd70(0x08)
	FMulticastInlineDelegate OnAvailableCraftingItems; // 0xd78(0x10)
	bool EligibleForRetirementAssignment; // 0xd88(0x01)
	FMulticastInlineDelegate OnEligibleForRetirementAssignment; // 0xd90(0x10)
	UWND_JoiningPassword_C* JoinFriendInvitePasswordWidget; // 0xda0(0x08)
	UWND_JoiningModded_C* JoinFriendInviteModdedWidget; // 0xda8(0x08)
	FBlueprintSessionResult CurrentModdedSession; // 0xdb0(0x108)
	FString CurrentModdedPassword; // 0xeb8(0x10)
	UWND_Joining_C* JoiningFriendInviteWidget; // 0xec8(0x08)
	UObject* JoinFriendInviteProgressionDisabling; // 0xed0(0x08)
	FBlueprintSessionResult tmpSetupModdedSession; // 0xed8(0x108)

	void SetModdedSession();
	void SetupJoinVanillaDisableProgressionMods(FBlueprintSessionResult Session);
	void BlockSandboxClient();
	void ShouldBlockSandboxClient(FBlueprintSessionResult Session, bool Yes);
	void SetupJoinModded(FBlueprintSessionResult Session);
	void Setup Join with Password(FBlueprintSessionResult Session);
	void IsEligibleForRetirementAassignment(bool EligibleForRetirementAssignment);
	void OnFailure_7B3ECFCE46627790F0C9B89A6B449207();
	void OnSuccess_7B3ECFCE46627790F0C9B89A6B449207();
	void OnFailure_7B3ECFCE46627790F0C9B89A89B12120();
	void OnSuccess_7B3ECFCE46627790F0C9B89A89B12120();
	void OnFailure_D72617F2470A6492F0633884F8A94A97();
	void OnSuccess_D72617F2470A6492F0633884F8A94A97();
	void OnFailure_E6A52403462766A65D96D581DEE58F2A();
	void OnSuccess_E6A52403462766A65D96D581DEE58F2A();
	void OnFailure_7B3ECFCE46627790F0C9B89A0D72085C();
	void OnSuccess_7B3ECFCE46627790F0C9B89A0D72085C();
	void OnFailure_3F92037B4548E12D6DF3A4A0C91F55FB();
	void OnSuccess_3F92037B4548E12D6DF3A4A0C91F55FB();
	void ReceiveInit();
	void JoinFriendInvite(FBlueprintSessionResult Session);
	void OnLoadComplete(FString MapName);
	void SetEligableForRetirementAssignment(bool eligable);
	void JoinFriendInviteWithPassword(FBlueprintSessionResult Session, FString Password);
	void OnCancelJoin();
	void OnJoiningModded(FBlueprintSessionResult Session, FString Password);
	void ModdedSaveLoaded();
	void OnBlockedAnswer(bool Yes);
	void ExecuteUbergraph_BP_GameInstance(int32_t EntryPoint);
	void OnEligibleForRetirementAssignment__DelegateSignature(UBP_GameInstance_C* GameInstance);
	void OnAvailableCraftingItems__DelegateSignature(TArray<TScriptInterface<ICraftable>> NewItems);
};

