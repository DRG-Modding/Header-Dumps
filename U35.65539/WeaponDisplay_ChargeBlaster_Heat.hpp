#ifndef UE4SS_SDK_WeaponDisplay_ChargeBlaster_Heat_HPP
#define UE4SS_SDK_WeaponDisplay_ChargeBlaster_Heat_HPP

class UWeaponDisplay_ChargeBlaster_Heat_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    UImage* Image_0;
    UImage* Image_1;
    UImage* Image_88;
    UProgressBar* ProgressBar_0;
    UTextBlock* TextBlock_HeatValue;
    FLinearColor OverheatTint;

    void SetHeatValue(float HeatPercentage, bool Overheated);
    void Construct();
    void ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Heat(int32 EntryPoint, bool Temp_bool_Variable, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, float K2Node_CustomEvent_HeatPercentage, bool K2Node_CustomEvent_Overheated, FLinearColor K2Node_Select_Default);
}

#endif
