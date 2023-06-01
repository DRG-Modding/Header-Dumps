#ifndef UE4SS_SDK_UI_ToggleSleevelessIcon_HPP
#define UE4SS_SDK_UI_ToggleSleevelessIcon_HPP

class UUI_ToggleSleevelessIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimNotAvailable;
    class UWidgetAnimation* AnimHover;
    class UWidgetAnimation* AnimActivate;
    class UBorder* Background;
    class UBorder* FrameBorder;
    class UUI_ImageTinted_C* NoVariantAvailable;
    class UBorder* SelectionBorder;
    class UOverlay* ShuffleOverlay;
    class USizeBox* Sizer;
    class UUI_ImageTinted_C* WithoutSleeveIcon_1;
    class UUI_ImageTinted_C* WithSleeveIcon;
    int32 Dimension;
    bool IsSleevesDesired;
    bool IsSleevelessAvailable;

    void PreConstruct(bool IsDesignTime);
    void PlayActivateAnimation();
    void SetHovered(bool IsHovered);
    void OnSleevelessDesireChanged(bool DesireSleeveless);
    void OnSleevelessAvailabilityChanged(bool IsAvailable);
    void ExecuteUbergraph_UI_ToggleSleevelessIcon(int32 EntryPoint);
};

#endif
