#ifndef UE4SS_SDK_HUD_CrosAutocannon_HPP
#define UE4SS_SDK_HUD_CrosAutocannon_HPP

class UHUD_CrosAutocannon_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* CH_LeftBottom;
    class UImage* CH_LeftTop;
    class UImage* CH_RightBottom;
    class UImage* CH_RightTop;
    class UImage* Dot;
    class UImage* Line_Left;
    class UImage* Line_Right;
    class UImage* Line_TOp;
    class UImage* LineBottom;
    float Opacity High;
    float Opacity Low;
    float SpreadMultiplier;

    void Construct();
    void SetData(class AItem* Item);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void OnUpgraded(class AItem* Item);
    void ExecuteUbergraph_HUD_CrosAutocannon(int32 EntryPoint);
};

#endif
