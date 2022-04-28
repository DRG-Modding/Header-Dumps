#ifndef UE4SS_SDK_HUD_CroNewGrenadeLauncher_HPP
#define UE4SS_SDK_HUD_CroNewGrenadeLauncher_HPP

class UHUD_CroNewGrenadeLauncher_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* Bracket_Right;
    class UImage* Dot;
    class UImage* FocusHair_Bottom;
    class UImage* FocusHair_Left;
    class UImage* FocusHair_Right;
    class UImage* FocusHair_Top;
    class UImage* HP_Left;
    class UImage* HP_Right;
    class UNamedSlot* HyperCrosshairs;
    class UImage* Image_36;
    class UImage* Line10;
    class UImage* Line15;
    class UImage* Line20;
    class UImage* Line20-HV_L;
    class UImage* Line20-HV_R;
    class UImage* Line5;
    class UNamedSlot* PGLCrosshairs;
    float OpacityHigh;
    class APlayerCharacter* Character;
    bool IsHP;
    float OpacityLow;

    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void SwitchToHP();
    void SetData(class AItem* Item);
    void Construct();
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void ExecuteUbergraph_HUD_CroNewGrenadeLauncher(int32 EntryPoint);
};

#endif
