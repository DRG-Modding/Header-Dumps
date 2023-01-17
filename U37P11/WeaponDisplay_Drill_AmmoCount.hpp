#ifndef UE4SS_SDK_WeaponDisplay_Drill_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_Drill_AmmoCount_HPP

class UWeaponDisplay_Drill_AmmoCount_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* AmmoCount;
    class UProgressBar* AmmoProgressBar;
    class UImage* Image_87;
    class UImage* Image_246;
    int32 CurrentClipCount;
    int32 TotalClipCount;

    void AdjustProgressBar();
    void SetClipCount(int32 Value);
    void SetTotalCount(int32 Value);
    void Construct();
    void ExecuteUbergraph_WeaponDisplay_Drill_AmmoCount(int32 EntryPoint);
};

#endif
