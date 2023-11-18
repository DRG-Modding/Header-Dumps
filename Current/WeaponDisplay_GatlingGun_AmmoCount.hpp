#ifndef UE4SS_SDK_WeaponDisplay_GatlingGun_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_GatlingGun_AmmoCount_HPP

class UWeaponDisplay_GatlingGun_AmmoCount_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AmmoLow;
    class UTextBlock* AmmoCount;
    class UImage* Image_161;
    class UImage* Image_163;
    class UImage* Image_327;
    class UProgressBar* ProgressBar_0;
    class UProgressBar* ProgressBar_97;
    class UHorizontalBox* TEMPHorizontalBoxManualCoolant;
    class UTextBlock* TEXT_Low;
    class UTextBlock* TEXT_Rounds;
    class UTextBlock* TextBlock_156;
    class UWidgetSwitcher* WidgetSwitcher_0;
    int32 CurrentClipCount;
    int32 TotalClipCount;
    int32 ClipCountTrailing;
    bool IsCounting;

    float GetPercent_0();
    void AdjustPercentage();
    void AnimateClipCount();
    void AdjustProgressBar();
    void Check AmmoLow();
    void SetTotalCount(int32 Value);
    void SetMaxAmmo(int32 Value);
    void Construct();
    void OnAmmoLowFinished();
    void SetClipCount(int32 Value);
    void ExecuteUbergraph_WeaponDisplay_GatlingGun_AmmoCount(int32 EntryPoint);
};

#endif
