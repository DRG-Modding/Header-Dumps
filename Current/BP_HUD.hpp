#ifndef UE4SS_SDK_BP_HUD_HPP
#define UE4SS_SDK_BP_HUD_HPP

class ABP_HUD_C : public AFSDHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    TArray<class UWidget*> Widgets;
    class APlayerController* PlayerController;
    bool HudInitialized;
    bool CanAddToViewport;
    class UFSDMainHUDWidget* HudWidget;
    TArray<class URadarPointComponent*> RadarPointsInQueue;
    class APlayerCharacter* PlayerCharacter;
    class UWindowWidget* EscMenu;
    class UWindowWidget* CheatMenu;
    class UScreenOverlay_Afflictions_C* AfflictionWidget;
    class UBP_Invitation_C* InviteRequest;
    class UWindowWidget* QuickCheatMenu;
    TSoftClassPtr<UFSDMainHUDWidget> HUD Class;
    TSoftClassPtr<UWindowWidget> Escape Menu Class;
    TSoftClassPtr<UWindowWidget> Cheat Menu Class;
    TSoftClassPtr<UWindowWidget> Quick Cheat Menu Class;
    TSoftClassPtr<UScreenOverlay_Afflictions_C> Affliction Class;

    void GetQuickCheatMenu(class UWindowWidget*& QuickCheatMenu);
    void GetCheatMenu(class UWindowWidget*& CheatMenu);
    void GetHUDWidget(class UFSDMainHUDWidget*& HudWidget);
    void GetEscapeMenu(class UWindowWidget*& EscMenu);
    void PopEvent(class UWidget* eventWidget, bool Left);
    void CreateEscMenu();
    void IsInitialized(bool& Out);
    void CreateQuickCheatsIfNotCreated();
    void PushEvent(class UWidget* eventWidget, bool Left);
    void CreateCheatsIfNotCreated();
    void RemoveAllWidgetsFromParents();
    void AddAllWidgetToViewport();
    void Add Widget Class(TSubclassOf<class UUserWidget> Class, class UWidget*& Widget);
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
    void On HUD Initialized();
    void QuickCheatMenuRequest();
    void CheatMenuRequest();
    void ExecuteUbergraph_BP_HUD(int32 EntryPoint);
};

#endif
