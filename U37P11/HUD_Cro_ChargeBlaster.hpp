#ifndef UE4SS_SDK_HUD_Cro_ChargeBlaster_HPP
#define UE4SS_SDK_HUD_Cro_ChargeBlaster_HPP

class UHUD_Cro_ChargeBlaster_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* CA_Down1;
    class UImage* CA_Down2;
    class UImage* CA_Down3;
    class UImage* CA_Left1;
    class UImage* CA_Left2;
    class UImage* CA_Left3;
    class UImage* CA_Right1;
    class UImage* CA_Right2;
    class UImage* CA_Right3;
    class UImage* Center_Down;
    class UImage* Center_Left;
    class UImage* Center_Right;
    class UImage* CH_Bottom;
    class UImage* CH_FullLeft;
    class UImage* CH_FullRight;
    class UImage* CH_FullTop;
    class UImage* CH_Left;
    class UImage* CH_Right;
    class UImage* CH_Top;
    class UImage* Dot;
    class UImage* Outside;
    class APlayerCharacter* Character;

    void Construct();
    void SetData(class AItem* Item);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void OnChargeChanged(float charge);
    void ExecuteUbergraph_HUD_Cro_ChargeBlaster(int32 EntryPoint);
};

#endif
