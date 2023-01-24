#ifndef UE4SS_SDK_BP_GameInstance_HPP
#define UE4SS_SDK_BP_GameInstance_HPP

class UBP_GameInstance_C : public UFSDGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBP_GameInstance_COnAvailableCraftingItems OnAvailableCraftingItems;
    void OnAvailableCraftingItems(TArray<TScriptInterface<ICraftable>>& NewItems);
    bool EligibleForRetirementAssignment;
    FBP_GameInstance_COnEligibleForRetirementAssignment OnEligibleForRetirementAssignment;
    void OnEligibleForRetirementAssignment(class UBP_GameInstance_C* GameInstance);
    class UWND_JoiningPassword_C* JoinFriendInvitePasswordWidget;
    class UWND_JoiningModded_C* JoinFriendInviteModdedWidget;
    FBlueprintSessionResult CurrentModdedSession;
    FString CurrentModdedPassword;
    class UWND_Joining_C* JoiningFriendInviteWidget;
    class UObject* JoinFriendInviteProgressionDisabling;
    FBlueprintSessionResult tmpSetupModdedSession;

    void ResetTempSessions();
    void CreateAndOpenModdedWidget();
    void SetModdedSession();
    void SetupJoinVanillaDisableProgressionMods(FBlueprintSessionResult Session);
    void PromptSandboxUser(FBlueprintSessionResult Session);
    void ShouldPromptSandboxUser(FBlueprintSessionResult Session, bool& Yes);
    void SetupJoinModded(FBlueprintSessionResult Session);
    void Setup Join with Password(FBlueprintSessionResult Session);
    void IsEligibleForRetirementAassignment(bool& EligibleForRetirementAssignment);
    void OnFailure_7B3ECFCE46627790F0C9B89A0D72085C();
    void OnSuccess_7B3ECFCE46627790F0C9B89A0D72085C();
    void OnFailure_7B3ECFCE46627790F0C9B89A6B449207();
    void OnSuccess_7B3ECFCE46627790F0C9B89A6B449207();
    void OnFailure_7B3ECFCE46627790F0C9B89A89B12120();
    void OnSuccess_7B3ECFCE46627790F0C9B89A89B12120();
    void OnFailure_D72617F2470A6492F0633884F8A94A97();
    void OnSuccess_D72617F2470A6492F0633884F8A94A97();
    void OnFailure_E6A52403462766A65D96D581DEE58F2A();
    void OnSuccess_E6A52403462766A65D96D581DEE58F2A();
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
    void OnSandboxAnswer(bool Yes);
    void OnSaveLoaded();
    void ApplyGameUserSettings(class UFSDGameUserSettings* Settings);
    void ExecuteUbergraph_BP_GameInstance(int32 EntryPoint);
    void OnEligibleForRetirementAssignment__DelegateSignature(class UBP_GameInstance_C* GameInstance);
    void OnAvailableCraftingItems__DelegateSignature(TArray<TScriptInterface<ICraftable>>& NewItems);
};

#endif
