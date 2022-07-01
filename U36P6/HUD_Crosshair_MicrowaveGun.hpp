#ifndef UE4SS_SDK_HUD_Crosshair_MicrowaveGun_HPP
#define UE4SS_SDK_HUD_Crosshair_MicrowaveGun_HPP

class UHUD_Crosshair_MicrowaveGun_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class USizeBox* BorderLeftBottomInner;
    class USizeBox* BorderLeftBottomOuter;
    class USizeBox* BorderLeftTopInner;
    class USizeBox* BorderLeftTopOuter;
    class USizeBox* BorderRightBottomInner;
    class USizeBox* BorderRightBottomOuter;
    class USizeBox* BorderRightTopInner;
    class USizeBox* BorderRightTopOuter;
    class UImage* DamageIndicatorBorderLeftBottom;
    class UImage* DamageIndicatorBorderLeftTop;
    class UImage* DamageIndicatorBorderRightBottom;
    class UImage* DamageIndicatorBorderRightTop_1;
    class UImage* DmgindIcatorBottom;
    class UImage* DmgindIcatorLeft;
    class UImage* DmgindIcatorRight;
    class UImage* DmgindIcatorTop;
    class UImage* Dot;
    class UImage* IndicatorLeft1;
    class UImage* IndicatorLeft2;
    class UImage* IndicatorRight1;
    class UImage* IndicatorRight2;
    class UImage* LeftBorderBottom;
    class UImage* LeftBorderTop;
    class UImage* LineBottom;
    class UImage* LineLeft;
    class UImage* LineRight;
    class UImage* LineTop;
    class UTextBlock* ModeText;
    class UImage* RightBorderBottom;
    class UImage* RightBorderTop;
    class USpacer* Spacer_131;
    class APlayerCharacter* Character;
    TArray<class USizeBox*> Borders;
    bool WidthIncreased;
    float OverdriveDecreaseAmount;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void IncreaseWidth();
    void SetData(class AItem* Item);
    void OnLenseActivated(bool isWideLens);
    void OnLenseDeactivated(bool isWideLens);
    void SetSize(float Multiplier);
    void DecreaseWidth();
    void ExecuteUbergraph_HUD_Crosshair_MicrowaveGun(int32 EntryPoint);
};

#endif
