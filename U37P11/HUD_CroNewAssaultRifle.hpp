#ifndef UE4SS_SDK_HUD_CroNewAssaultRifle_HPP
#define UE4SS_SDK_HUD_CroNewAssaultRifle_HPP

class UHUD_CroNewAssaultRifle_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* Bracket_Left;
    class UImage* Bracket_Right;
    class UImage* CH_Bottom;
    class UImage* CH_Left;
    class UImage* CH_Right;
    class UImage* CH_Top;
    class UImage* Dot;
    float Opacity High;
    class APlayerCharacter* Character;
    float Opacity Low;

    void Construct();
    void SetData(class AItem* Item);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_CroNewAssaultRifle(int32 EntryPoint);
};

#endif
