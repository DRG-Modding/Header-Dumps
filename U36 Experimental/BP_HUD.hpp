#ifndef UE4SS_SDK_BP_HUD_HPP
#define UE4SS_SDK_BP_HUD_HPP

class ABP_HUD_C : public AFSDHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    TArray<class UWidget*> Widgets;
    class APlayerController* PlayerController;
    bool HudInitialized;
    class UFSDMainHUDWidget* HudWidget;
    TArray<class URadarPointComponent*> RadarPointsInQueue;
    class APlayerCharacter* PlayerCharacter;
    class UWindowWidget* EscMenu;
    class UWindowWidget* CheatMenu;
    class UScreenOverlay_Afflictions_C* AfflictionWidget;
    class UBP_Invitation_C* InviteRequest;
    class UWindowWidget* QuickCheatMenu;

    void CreateEscMenu();
    void IsInitialized(bool& Out);
    void CreateQuickCheatsIfNotCreated();
    void PushEvent(class UWidget* EventWidget, bool Left);
    void CreateCheatsIfNotCreated();
    void RemoveAllWidgetsFromParents();
    void AddAllWidgetToViewport();
    void AddWidget(TSubclassOf<class UUserWidget> Class, class UWidget*& Widget);
    void PlayerSpawned(class APlayerCharacter* Player);
    void RadarPointAdded(class URadarPointComponent* radarPoint);
    void HandleSeamlessTravel();
    void OnVisibilityChanged();
    void ReceiveDestroyed();
    void CameraDroneSpawned(class APlayerCameraDrone* Drone);
    void OnEndLevelReceived_Event();
    void OnShowMainMenu();
    void LoadEscapeMenu();
    void MenuLoaded();
    void OnHit_Event(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void QuickCheatMenuRequest();
    void CheatMenuRequest();
    void ExecuteUbergraph_BP_HUD(int32 EntryPoint);
};

#endif
