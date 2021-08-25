// BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
// Size: 0xea0 (Inherited: 0xd40)
struct UBP_GameInstance_C : UFSDGameInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd40(0x08)
	struct FMulticastInlineDelegate OnAvailableCraftingItems; // 0xd48(0x10)
	bool EligibleForRetirementAssignment; // 0xd58(0x01)
	char UnknownData_D59[0x7]; // 0xd59(0x07)
	struct FMulticastInlineDelegate OnEligibleForRetirementAssignment; // 0xd60(0x10)
	struct UWND_JoiningPassword_C* JoinFriendInvitePasswordWidget; // 0xd70(0x08)
	struct UWND_JoiningModded_C* JoinFriendInviteModdedWidget; // 0xd78(0x08)
	struct FBlueprintSessionResult CurrentModdedSession; // 0xd80(0x108)
	struct FString CurrentModdedPassword; // 0xe88(0x10)
	struct UWND_Joining_C* JoiningFriendInviteWidget; // 0xe98(0x08)

	void SetupJoinModded(struct FBlueprintSessionResult Session); // Function BP_GameInstance.BP_GameInstance_C.SetupJoinModded
	void Setup Join with Password(struct FBlueprintSessionResult Session); // Function BP_GameInstance.BP_GameInstance_C.Setup Join with Password
	void IsEligibleForRetirementAassignment(bool EligibleForRetirementAssignment); // Function BP_GameInstance.BP_GameInstance_C.IsEligibleForRetirementAassignment
	void OnFailure_7B3ECFCE46627790F0C9B89A6B449207(); // Function BP_GameInstance.BP_GameInstance_C.OnFailure_7B3ECFCE46627790F0C9B89A6B449207
	void OnSuccess_7B3ECFCE46627790F0C9B89A6B449207(); // Function BP_GameInstance.BP_GameInstance_C.OnSuccess_7B3ECFCE46627790F0C9B89A6B449207
	void OnFailure_7B3ECFCE46627790F0C9B89A0D72085C(); // Function BP_GameInstance.BP_GameInstance_C.OnFailure_7B3ECFCE46627790F0C9B89A0D72085C
	void OnSuccess_7B3ECFCE46627790F0C9B89A0D72085C(); // Function BP_GameInstance.BP_GameInstance_C.OnSuccess_7B3ECFCE46627790F0C9B89A0D72085C
	void OnFailure_7B3ECFCE46627790F0C9B89A89B12120(); // Function BP_GameInstance.BP_GameInstance_C.OnFailure_7B3ECFCE46627790F0C9B89A89B12120
	void OnSuccess_7B3ECFCE46627790F0C9B89A89B12120(); // Function BP_GameInstance.BP_GameInstance_C.OnSuccess_7B3ECFCE46627790F0C9B89A89B12120
	void OnFailure_D72617F2470A6492F0633884F8A94A97(); // Function BP_GameInstance.BP_GameInstance_C.OnFailure_D72617F2470A6492F0633884F8A94A97
	void OnSuccess_D72617F2470A6492F0633884F8A94A97(); // Function BP_GameInstance.BP_GameInstance_C.OnSuccess_D72617F2470A6492F0633884F8A94A97
	void OnFailure_E6A52403462766A65D96D581DEE58F2A(); // Function BP_GameInstance.BP_GameInstance_C.OnFailure_E6A52403462766A65D96D581DEE58F2A
	void OnSuccess_E6A52403462766A65D96D581DEE58F2A(); // Function BP_GameInstance.BP_GameInstance_C.OnSuccess_E6A52403462766A65D96D581DEE58F2A
	void ReceiveInit(); // Function BP_GameInstance.BP_GameInstance_C.ReceiveInit
	void JoinFriendInvite(struct FBlueprintSessionResult Session); // Function BP_GameInstance.BP_GameInstance_C.JoinFriendInvite
	void OnLoadComplete(struct FString MapName); // Function BP_GameInstance.BP_GameInstance_C.OnLoadComplete
	void SetEligableForRetirementAssignment(bool eligable); // Function BP_GameInstance.BP_GameInstance_C.SetEligableForRetirementAssignment
	void JoinFriendInviteWithPassword(struct FBlueprintSessionResult Session, struct FString Password); // Function BP_GameInstance.BP_GameInstance_C.JoinFriendInviteWithPassword
	void OnCancelJoin(); // Function BP_GameInstance.BP_GameInstance_C.OnCancelJoin
	void OnJoiningModded(struct FBlueprintSessionResult Session, struct FString Password); // Function BP_GameInstance.BP_GameInstance_C.OnJoiningModded
	void ModdedSaveLoaded(); // Function BP_GameInstance.BP_GameInstance_C.ModdedSaveLoaded
	void ExecuteUbergraph_BP_GameInstance(int32_t EntryPoint); // Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
	void OnEligibleForRetirementAssignment__DelegateSignature(struct UBP_GameInstance_C* GameInstance); // Function BP_GameInstance.BP_GameInstance_C.OnEligibleForRetirementAssignment__DelegateSignature
	void OnAvailableCraftingItems__DelegateSignature(struct TArray<struct TScriptInterface<None>> NewItems); // Function BP_GameInstance.BP_GameInstance_C.OnAvailableCraftingItems__DelegateSignature
};

