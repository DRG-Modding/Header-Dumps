#ifndef UE4SS_SDK_UI_UndoIcon_HPP
#define UE4SS_SDK_UI_UndoIcon_HPP

class UUI_UndoIcon_C : public UUserWidget
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
    void ExecuteUbergraph_UI_UndoIcon(int32 EntryPoint);
};

#endif
