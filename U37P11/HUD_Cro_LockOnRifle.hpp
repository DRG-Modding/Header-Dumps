#ifndef UE4SS_SDK_HUD_Cro_LockOnRifle_HPP
#define UE4SS_SDK_HUD_Cro_LockOnRifle_HPP

class UHUD_Cro_LockOnRifle_C : public UCrosshairWidget
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
    class UNamedSlot* Focussed_Regular;
    class UNamedSlot* Focussed_Small;
    class UImage* GK2-markerL;
    class UImage* GK2-markerR;
    class UImage* Hair_Bottom;
    class UImage* Hair_Left;
    class UImage* Hair_Right;
    class UImage* Hair_Top;
    class UImage* Image;
    class UImage* Image_1;
    class UImage* Image_4;
    class UImage* Image_72;
    class UUI_LockOn_Counter_C* LockOnCounter_Normal;
    class UUI_LockOn_Counter_C* LockOnCounter_Small;
    class UCanvasPanel* Normal;
    class UUI_LockOn_Scanning_C* Scanning_Normal;
    class UUI_LockOn_Scanning_C* Scanning_Small;
    class USizeBox* SizeBox_Regular;
    class USizeBox* SizeBox_Small;
    class UWidgetSwitcher* WidgetSwitcher_Type;
    float Opacity High;
    class APlayerCharacter* Character;
    float Opacity Low;
    bool JustHit;
    float SpreadPositionMultiplier;
    float FocusSpreadPositionMultiplier;
    class ALockOnWeapon* Weapon;

    void OnSpreadChange(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void Construct();
    void SetData(class AItem* Item);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void LockingStarted_Event();
    void NoLongerFocussed();
    void OnUpgraded(class AItem* Item);
    void OnLockingStopped();
    void ExecuteUbergraph_HUD_Cro_LockOnRifle(int32 EntryPoint);
};

#endif
