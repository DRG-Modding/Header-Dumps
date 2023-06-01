#ifndef UE4SS_SDK_WeaponDisplay_PlasmaCarbine_AmmoCounter_HPP
#define UE4SS_SDK_WeaponDisplay_PlasmaCarbine_AmmoCounter_HPP

class UWeaponDisplay_PlasmaCarbine_AmmoCounter_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anim_ProgressColor;
    class UWidgetAnimation* Anim_LowerBlink;
    class UWidgetAnimation* Anim_Overheat;
    class UWidgetAnimation* Anim_AmmoCritical;
    class UTextBlock* DATA_AmmoCount;
    class UTextBlock* DATA_AmmoLow;
    class UImage* Image_Progress;
    class UImage* Image_ProgressLowerBit;
    class UOverlay* Overlay_AmmoLow;
    class UOverlay* Overlay_Overheat;
    float Progress;
    bool Overheating;
    FLinearColor ProgressColor;

    void SetProgressColor(FLinearColor InColor);
    void Scrub Animation(class UWidgetAnimation* InAnimation, float InProgress);
    void OverheatStatus(bool Condition);
    void SetProgress(float Value);
    void UpdateAmount(int32 Value);
    void SetTotalCount(int32 Value);
    void Max Ammo Changed(int32 Amount);
    void Total Ammo left changed(int32 Amount);
    void SetClipCount(int32 Value);
    void PreConstruct(bool IsDesignTime);
    void SetHeatValue(float HeatPercentage, bool overHeated, float ThermalFeedbackLevel);
    void ExecuteUbergraph_WeaponDisplay_PlasmaCarbine_AmmoCounter(int32 EntryPoint);
};

#endif
