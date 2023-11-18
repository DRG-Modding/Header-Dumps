#ifndef UE4SS_SDK_HUD_CrosNew_EngSMG_HPP
#define UE4SS_SDK_HUD_CrosNew_EngSMG_HPP

class UHUD_CrosNew_EngSMG_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* CH_Bottom;
    class UImage* CH_Left;
    class UImage* CH_Right;
    class UImage* CH_Top;
    class UImage* Dot;
    float OpacityHigh;
    class APlayerCharacter* Character;
    float Opacity Low;
    float MagicSpreadMultiplier;

    void SetData(class AItem* Item);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_CrosNew_EngSMG(int32 EntryPoint);
};

#endif
