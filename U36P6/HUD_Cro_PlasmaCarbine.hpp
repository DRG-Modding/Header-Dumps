#ifndef UE4SS_SDK_HUD_Cro_PlasmaCarbine_HPP
#define UE4SS_SDK_HUD_Cro_PlasmaCarbine_HPP

class UHUD_Cro_PlasmaCarbine_C : public UCrosshairWidget
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
    class UImage* CH_BottomLine;
    class UImage* CH_BottomLine_1;
    class UImage* CH_FullBottom;
    class UImage* CH_FullLeft;
    class UImage* CH_FullRight;
    class UImage* CH_FullTop;
    class UImage* CH_Left;
    class UImage* CH_LeftLine;
    class UImage* CH_LeftLine_1;
    class UImage* CH_Right;
    class UImage* CH_RightLine;
    class UImage* CH_RightLine_1;
    class UImage* CH_Top;
    class UImage* CH_TopLine;
    class UImage* CH_TopLine_1;
    class UImage* Dot;
    class UImage* Outside;
    class APlayerCharacter* Character;
    float OpacityLow;
    float OpacityHigh;

    void Construct();
    void SetData(class AItem* Item);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_Cro_PlasmaCarbine(int32 EntryPoint);
};

#endif
