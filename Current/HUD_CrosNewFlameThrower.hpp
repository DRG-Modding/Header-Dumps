#ifndef UE4SS_SDK_HUD_CrosNewFlameThrower_HPP
#define UE4SS_SDK_HUD_CrosNewFlameThrower_HPP

class UHUD_CrosNewFlameThrower_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* CH_ArrowLeft;
    class UImage* CH_ArrowRight;
    class UImage* CH_LeftBottom;
    class UImage* CH_LeftTop;
    class UImage* CH_RightTop;
    class UImage* Dot;
    class UImage* Image_1;
    float Opacity High;
    class APlayerCharacter* Character;
    float Opacity Low;

    void SetData(class AItem* Item);
    void Construct();
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_CrosNewFlameThrower(int32 EntryPoint);
};

#endif
