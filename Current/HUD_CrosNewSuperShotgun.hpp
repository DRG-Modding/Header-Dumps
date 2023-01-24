#ifndef UE4SS_SDK_HUD_CrosNewSuperShotgun_HPP
#define UE4SS_SDK_HUD_CrosNewSuperShotgun_HPP

class UHUD_CrosNewSuperShotgun_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* CH_Left;
    class UImage* CH_LeftInterior;
    class UImage* CH_RighInterior;
    class UImage* CH_Right;
    class UImage* CH_Top;
    class UImage* CH_TopInterior;
    float Opacity High;
    class APlayerCharacter* Character;
    float Opacity Low;

    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void SetData(class AItem* Item);
    void Construct();
    void ExecuteUbergraph_HUD_CrosNewSuperShotgun(int32 EntryPoint);
};

#endif
