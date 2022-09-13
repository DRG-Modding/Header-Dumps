#ifndef UE4SS_SDK_HUD_HitIndicator_HPP
#define UE4SS_SDK_HUD_HitIndicator_HPP

class UHUD_HitIndicator_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* HitAnim;
    class UImage* IndicatorImage;
    class UImage* KillImage;
    int32 CurrentPriority;

    void StartAnimation(int32 Priority, float Scale, FLinearColor Color, bool ShowKillImage);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void Construct();
    void OnHitAnimStarted();
    void OnHitAnimFinished();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_HitIndicator(int32 EntryPoint);
};

#endif
