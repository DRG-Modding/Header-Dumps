#ifndef UE4SS_SDK_WeaponDisplay_Coilgun_Charge_HPP
#define UE4SS_SDK_WeaponDisplay_Coilgun_Charge_HPP

class UWeaponDisplay_Coilgun_Charge_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AmmoCountDownBlink;
    class UWidgetAnimation* AmmoCountDown;
    class UWidgetAnimation* TextFadeIn;
    class UBorder* Block1;
    class UBorder* Block2;
    class UBorder* Block3;
    class UBorder* Block4;
    class UBorder* Border_12;
    class UBorder* Border_13;
    class UBorder* Border_14;
    class UBorder* Border_15;
    class UBorder* Border_16;
    class UTextBlock* DATA_AmmoCount;
    class UTextBlock* DATA_AmmoCount_1;
    class UImage* Image;
    class UImage* Image_2;
    class UImage* Image_88;
    class UVerticalBox* VerticalBox_Text;
    class UImage* WarningOverlay;
    FLinearColor ChargeColorOff;
    FLinearColor ChargeColor1;
    int32 LowAmmoThreshold;
    class UWidgetAnimation* AmmoCritical;
    bool IsChargeUIVisible;
    int32 TargetAmmoCount;
    int32 OldAmmoCount;
    float Charge Value;

    void SequenceEvent__ENTRYPOINTWeaponDisplay_Coilgun_Charge_1();
    void SequenceEvent__ENTRYPOINTWeaponDisplay_Coilgun_Charge_0();
    void AmmoCountDownTick();
    void SetChargeValue(float ChargeValue, bool overHeated, bool ready, bool FullCharge);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Total Ammo left changed(int32 Amount);
    void WidgetAnimationEvt_AmmoCountDown_K2Node_WidgetAnimationEvent_0();
    void ExecuteUbergraph_WeaponDisplay_Coilgun_Charge(int32 EntryPoint);
};

#endif
