#ifndef UE4SS_SDK_WeaponDisplay_LineCutter_CurrentClip_HPP
#define UE4SS_SDK_WeaponDisplay_LineCutter_CurrentClip_HPP

class UWeaponDisplay_LineCutter_CurrentClip_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Fire;
    class UTextBlock* AmmoCount;
    class UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    class UImage* Image_88;
    class UProgressBar* ProgressBar_0;
    class UTextBlock* TextBlock_0;

    void SetClipCount(int32 Value);
    void SetTotalCount(int32 Value);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WeaponDisplay_LineCutter_CurrentClip(int32 EntryPoint);
};

#endif
