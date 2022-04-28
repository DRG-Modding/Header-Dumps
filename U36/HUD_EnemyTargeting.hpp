#ifndef UE4SS_SDK_HUD_EnemyTargeting_HPP
#define UE4SS_SDK_HUD_EnemyTargeting_HPP

class UHUD_EnemyTargeting_C : public ULookingAtWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DeadAnim;
    class UWidgetAnimation* Intro;
    class UWidgetSwitcher* ContentSwitcher;
    class UImage* DeadIcon;
    class UHUD_EnemyTargeting_HealthBar_C* HealthBar;
    class UHUD_EnemyTargeting_HealthBar_Elite_C* HealthBar_Elite;
    class UHUD_EnemyTargeting_AfflictionBox_C* HUD_EnemyTargeting_AfflictionBox;
    class UHUD_EnemyTargeting_Temperature_C* Icon_Temperature;
    class UHorizontalBox* StatusIconBox;
    class UCanvasPanel* VisibilityCanvas;
    FVector LastTargetLocation;
    bool HealthBarVisible;

    void GetContent(class ULookingAtContentWidget*& OutActiveContent);
    void SelectContent();
    void UpdateScreenPosition();
    void ClampToScreenHeight(float CoordinateY, float Bound, float& ClampedY);
    void UpdateWidgets(bool Reset);
    void HandleTargetDamaged(TScriptInterface<class IHealth> Health, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void SetIsVisible(bool IsVisible);
    void ReceiveTargetLost();
    void ReceiveUpdateTarget(class AActor* InCurrentTarget, float DeltaTime);
    void ReceiveNewTarget(class AActor* InCurrentTarget);
    void Construct();
    void OnDamagedEnemy(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_EnemyTargeting(int32 EntryPoint);
};

#endif
