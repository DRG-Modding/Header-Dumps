#ifndef UE4SS_SDK_HUD_Croshair_HPC_HPP
#define UE4SS_SDK_HUD_Croshair_HPC_HPP

class UHUD_Croshair_HPC_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* BoostFadeIn;
    class UWidgetAnimation* ready;
    class UWidgetAnimation* DotFade;
    class UTextBlock* BoostText;
    class UImage* CH_Bottom;
    class UImage* CH_In_B;
    class UImage* CH_In_L;
    class UImage* CH_In_R;
    class UImage* CH_In_T;
    class UImage* CH_Left;
    class UImage* CH_Right;
    class UImage* CH_Top;
    class UImage* Dot;
    class UImage* Dot_1;
    class UImage* Dot_3;
    class UImage* Dot_4;
    class UImage* Dot_5;
    class UImage* Dot_out;
    class UTextBlock* ReadyText;
    float OpacityHigh;
    class APlayerCharacter* Character;
    float Opacity Low;
    class AAmmoDrivenWeapon* Weapon;

    void SetData(class AItem* Item);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void OnClipCountChanged(int32 Amount);
    void OnBoosterActived(bool IsActive);
    void ExecuteUbergraph_HUD_Croshair_HPC(int32 EntryPoint);
};

#endif
