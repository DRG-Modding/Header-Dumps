#ifndef UE4SS_SDK_WeaponDisplay_Overheat_HPP
#define UE4SS_SDK_WeaponDisplay_Overheat_HPP

class UWeaponDisplay_Overheat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_88;
    class UTextBlock* TextBlock_HeatValue;
    class UTextBlock* TextBlock_Status;

    void SetHeatValue(float HeatPercentage, bool overHeated);
    void Construct();
    void ExecuteUbergraph_WeaponDisplay_Overheat(int32 EntryPoint);
};

#endif
