#ifndef UE4SS_SDK_HUD_Cro_BoltActionRifle_HPP
#define UE4SS_SDK_HUD_Cro_BoltActionRifle_HPP

class UHUD_Cro_BoltActionRifle_C : public UCrosshairWidget
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
    class UImage* Focus_Botom;
    class UImage* Focus_Left;
    class UImage* Focus_Right;
    class UImage* Focus_Top;
    class UImage* FocusHair_Bottom;
    class UImage* FocusHair_Left;
    class UImage* FocusHair_Right;
    class UImage* FocusHair_Top;
    class UNamedSlot* FocusHairs;
    class UImage* GK2-markerL;
    class UImage* GK2-markerR;
    class UImage* Hair_Bottom;
    class UImage* Hair_Left;
    class UImage* Hair_Right;
    class UImage* Hair_Top;
    float Opacity High;
    class APlayerCharacter* Character;
    float Opacity Low;
    bool JustHit;
    float SpreadPositionMultiplier;
    float FocusSpreadPositionMultiplier;
    float Opacity Medium;

    void OnSpreadChange(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void Construct();
    void SetData(class AItem* Item);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_Cro_BoltActionRifle(int32 EntryPoint);
};

#endif
