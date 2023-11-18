#ifndef UE4SS_SDK_Basic_CorneredBar_HPP
#define UE4SS_SDK_Basic_CorneredBar_HPP

class UBasic_CorneredBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Bar_Border;
    class USizeBox* BarSizeBox;
    class UImage* LeftImage;
    class UImage* RightImage;
    int32 Height;
    FMargin BarPadding;
    bool LeftVisible;
    bool LeftFlipped;
    bool RightVisible;
    bool RightFlipped;
    FMenuColorAndTint BarColor;

    void SetLeftCorner(bool LeftVisible, bool LeftFlipped);
    void SetRightCorner(bool RightVisible, bool RightFlipped);
    void SetBarPadding(FMargin BarPadding);
    void SetBarColor(FMenuColorAndTint BarColor);
    void SetBarHeight(int32 Height);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Basic_CorneredBar(int32 EntryPoint);
};

#endif
