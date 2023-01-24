#ifndef UE4SS_SDK_HUD_CroDualMachinePistols_HPP
#define UE4SS_SDK_HUD_CroDualMachinePistols_HPP

class UHUD_CroDualMachinePistols_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* CH_BottomLeft;
    class UImage* CH_BottomRight;
    class UImage* CH_FullLeft;
    class UImage* CH_FullRight;
    class UImage* CH_Left;
    class UImage* CH_Right;
    class APlayerCharacter* Character;
    class UHitscanBaseComponent* HitscanComponent;

    void SetData(class AItem* Item);
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_CroDualMachinePistols(int32 EntryPoint);
};

#endif
