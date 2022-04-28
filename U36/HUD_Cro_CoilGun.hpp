#ifndef UE4SS_SDK_HUD_Cro_CoilGun_HPP
#define UE4SS_SDK_HUD_Cro_CoilGun_HPP

class UHUD_Cro_CoilGun_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* CH_Full;
    class UImage* CH_Full_Inner;
    class UImage* CH_FullLeft;
    class UImage* CH_FullRight_1;
    class UImage* CH_FullTop;
    class UImage* DmgindIcatorLeft;
    class UImage* DmgindIcatorRight;
    class UImage* Dot;
    class APlayerCharacter* Character;
    class UImage* CH Full Inner;

    void Construct();
    void SetData(class AItem* Item);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void OnChargeChanged(float charge);
    void ExecuteUbergraph_HUD_Cro_CoilGun(int32 EntryPoint);
};

#endif
