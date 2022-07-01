#ifndef UE4SS_SDK_HUD_CrosMicroMissileLauncher_HPP
#define UE4SS_SDK_HUD_CrosMicroMissileLauncher_HPP

class UHUD_CrosMicroMissileLauncher_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* Arrow_Bottom;
    class UImage* Arrow_Left;
    class UImage* Arrow_Right;
    class UImage* Arrow_Top;
    class UImage* CH_HL;
    class UImage* CH_HR;
    class UImage* CH_LeftBottom;
    class UImage* CH_LeftTop;
    class UImage* CH_RightBottom;
    class UImage* CH_RightTop;
    class UImage* CH_VB;
    class UImage* CH_VT;
    class UImage* M1;
    class UImage* M2;
    class UImage* M3;
    class UImage* M4;
    class UImage* M5;
    class UImage* M6;
    class UImage* M7;
    class UImage* M8;
    class UImage* M9;
    float Opacity High;
    class APlayerCharacter* Character;
    float Opacity Low;
    FTimerHandle BuckShotCheckTimer;
    TArray<class UImage*> MissileCounters;

    void SetData(class AItem* Item);
    void Construct();
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void StartCharging();
    void EndCharge();
    void ToggleBuckShotCrosshair(float Spread);
    void CheckBuckShot();
    void ExecuteUbergraph_HUD_CrosMicroMissileLauncher(int32 EntryPoint);
};

#endif
