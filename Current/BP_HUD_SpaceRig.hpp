#ifndef UE4SS_SDK_BP_HUD_SpaceRig_HPP
#define UE4SS_SDK_BP_HUD_SpaceRig_HPP

class ABP_HUD_SpaceRig_C : public ASpaceRigHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class APlayerCharacter* PlayerCharacter;
    class UHUD_SpaceRig_C* HUD;
    TArray<class UUserWidget*> OwnedWidgets;
    TArray<FClaimableRewardEntry> PendingPromotionRewards;
    bool PendingFirstPromotion;
    class UGameDLCSettings* DLCSettings;
    class UWindowWidget* CheatMenu;

    void TryShowNextNotification();
    void FetchPromotionRewards(bool& OutSuccess);
    void EnqueueWindow(TSoftClassPtr<UWindowWidget> WidgetClass);
    void PlayerSpawned(class APlayerCharacter* Player);
    void OnVisibilityChanged();
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void OnCountdownCompleted();
    void Update Visibility();
    void Handle Count Down();
    void Setup Campaign Notifications();
    void OnCampaignNotification_Event(class UCampaignNotification* Notification);
    void Setup Retirement Shouts();
    void OnEligibleForRetirementAssignment(class UBP_GameInstance_C* GameInstance);
    void Setup Spacerig Notifications();
    void Setup UI Notifications();
    void Setup Promotion Rewards();
    void Setup First Infused Core();
    void Setup Pending Rewards();
    void Setup FSD Events();
    void OnFSDEventActiveChanged(const class UFSDEvent* InFsdEvent, bool InIsActive);
    void SetupTutorialMessage();
    void CheckForTutorialPrompt();
    void Stop Check For Tutorial Prompt();
    void Setup Game DLC Announcements();
    void ReceiveNotificationQueueActivated();
    void ReceiveNotificationAdded();
    void Setup Notification Queue();
    void CheatMenuRequest();
    void Setup Cheat Menu();
    void Shouting Done();
    void SetupModWarnings]();
    void Setup Vanity Mastery Notification();
    void Handle Event Rewards(class UFSDEvent* inEvent);
    void Handle Event Popup(class UFSDEvent* inEvent);
    void WaitAndTryNextNotification(float WaitDuration);
    void OnLastWindowClosed();
    void ExecuteUbergraph_BP_HUD_SpaceRig(int32 EntryPoint);
};

#endif
