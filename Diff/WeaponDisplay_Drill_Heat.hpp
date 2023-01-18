#ifndef UE4SS_SDK_WeaponDisplay_Drill_Heat_HPP
#define UE4SS_SDK_WeaponDisplay_Drill_Heat_HPP

class UWeaponDisplay_Drill_Heat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Flash;
    class UImage* Image_88;
    class UImage* Image_131;
    class UTextBlock* TextBlock_440;
    class UTextBlock* TextBlock_HeatValue;

    void SetHeatValue(float HeatPercentage, bool Overheated);
    void Construct();
    void ExecuteUbergraph_WeaponDisplay_Drill_Heat(int32 EntryPoint);
};

#endif
