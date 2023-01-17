#ifndef UE4SS_SDK_HUD_CroBurstPistol_HPP
#define UE4SS_SDK_HUD_CroBurstPistol_HPP

class UHUD_CroBurstPistol_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* CH_Bottom;
    class UImage* CH_FullLeft;
    class UImage* CH_FullRight;
    class UImage* CH_Left;
    class UImage* CH_Right;
    class UImage* CH_Top;
    class UImage* Dot;
    class APlayerCharacter* Character;

    void Construct();
    void SetData(class AItem* Item);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_CroBurstPistol(int32 EntryPoint);
};

#endif
