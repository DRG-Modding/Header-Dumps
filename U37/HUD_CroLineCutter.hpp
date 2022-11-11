#ifndef UE4SS_SDK_HUD_CroLineCutter_HPP
#define UE4SS_SDK_HUD_CroLineCutter_HPP

class UHUD_CroLineCutter_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* Bracket_Left;
    class UImage* Bracket_Right;
    class UImage* Image_0;
    class UImage* Image_4;
    float OpacityHigh;
    class APlayerCharacter* Character;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_CroLineCutter(int32 EntryPoint);
};

#endif
