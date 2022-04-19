#ifndef UE4SS_SDK_UI_RandomizeIcon_HPP
#define UE4SS_SDK_UI_RandomizeIcon_HPP

class UUI_RandomizeIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimHover;
    class UWidgetAnimation* AnimActivate;
    class UBorder* Background;
    class UBorder* FrameBorder;
    class UBorder* SelectionBorder;
    class UOverlay* ShuffleOverlay;
    class USizeBox* Sizer;
    int32 Dimension;

    void PreConstruct(bool IsDesignTime);
    void PlayActivateAnimation();
    void SetHovered(bool IsHovered);
    void ExecuteUbergraph_UI_RandomizeIcon(int32 EntryPoint);
};

#endif
