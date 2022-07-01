#ifndef UE4SS_SDK_HUD_CrosNewRevolver_HPP
#define UE4SS_SDK_HUD_CrosNewRevolver_HPP

class UHUD_CrosNewRevolver_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* CH_Bottom;
    class UImage* CH_FullLeft;
    class UImage* CH_FullRight;
    class UImage* CH_Left;
    class UImage* CH_Right;
    float OpacityLow;
    class APlayerCharacter* Character;
    float OpacityHigh;

    void Construct();
    void SetData(class AItem* Item);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_CrosNewRevolver(int32 EntryPoint);
};

#endif
