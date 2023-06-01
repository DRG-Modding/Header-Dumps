#ifndef UE4SS_SDK_WeaponDisplay_ChargeBlaster_Charge_HPP
#define UE4SS_SDK_WeaponDisplay_ChargeBlaster_Charge_HPP

class UWeaponDisplay_ChargeBlaster_Charge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    class UBorder* Block1;
    class UBorder* Block2;
    class UBorder* Block3;
    class UBorder* Border_12;
    class UBorder* Border_13;
    class UBorder* Border_14;
    class UBorder* Border_15;
    class UImage* Image_0;
    class UImage* Image_1;
    class UImage* Image_88;
    FLinearColor ChargeColorOff;
    FLinearColor ChargeColor1;
    class AItem* Item;

    void Construct();
    void SetChargeValue(float ChargeValue, bool overHeated, bool ready, bool FullCharge);
    void PreConstruct(bool IsDesignTime);
    void Init(class AItem* Item);
    void On UnEquipped();
    void OnEquipped();
    void ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Charge(int32 EntryPoint);
};

#endif
