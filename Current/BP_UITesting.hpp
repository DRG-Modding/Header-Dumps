#ifndef UE4SS_SDK_BP_UITesting_HPP
#define UE4SS_SDK_BP_UITesting_HPP

class ABP_UITesting_C : public AFSDHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    float Crosshair_Spin_Scale_3C06262F40B28AFF76CC83AA5B6151F5;
    TEnumAsByte<ETimelineDirection::Type> Crosshair_Spin__Direction_3C06262F40B28AFF76CC83AA5B6151F5;
    class UTimelineComponent* Crosshair Spin;
    TArray<class UWidget*> Widgets;
    class APlayerController* PlayerController;
    bool HudInitialized;
    class UFSDMainHUDWidget* HudWidget;
    TArray<class URadarPointComponent*> RadarPointsInQueue;
    class UUserWidget* Default CrossHair Widget;
    class APlayerCharacter* PlayerCharacter;
    class UUserWidget* CrossHair Widget;
    class UWindowWidget* EscMenu;
    TSubclassOf<class UFSDMainHUDWidget> MainHUDType;

    void Change Crosshair(class UUserWidget* New Crosshair);
    void AddWidget(TSubclassOf<class UUserWidget> Class, class UWidget*& Widget);
    void Crosshair Spin__FinishedFunc();
    void Crosshair Spin__UpdateFunc();
    void PlayerSpawned(class APlayerCharacter* Player);
    void RadarPointAdded(class URadarPointComponent* radarPoint);
    void HandleSeamlessTravel();
    void OnVisibilityChanged();
    void Spin Crosshair();
    void OnToggleMapTool(bool Visible);
    void OnItemEquipped(class AItem* Item);
    void OnHit_Event(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void OnShowMainMenu();
    void ExecuteUbergraph_BP_UITesting(int32 EntryPoint);
};

#endif
