#ifndef UE4SS_SDK_Basic_Dots_HPP
#define UE4SS_SDK_Basic_Dots_HPP

class UBasic_Dots_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* Horizontal_Dots;
    class UVerticalBox* Vertical_Dots;
    bool Horizontal;
    int32 DotCount;
    int32 SelectedDotIndex;
    TArray<class UBasic_Image_C*> Dots;
    float DotSpacing;
    FSlateBrush SelectedDotBrush;
    FSlateBrush UnselectedDotBrush;
    TEnumAsByte<ENUM_MenuColors::Type> SelectedTint;
    TEnumAsByte<ENUM_MenuColors::Type> UnselectedTint;

    void SetFromWidgetSwitcher(class UWidgetSwitcher*& InSwitcher);
    void SetCountAndSelected(int32 InCount, int32 InSelected);
    void SetSelectedIndex(int32 InSelectedDotIndex);
    void SetCount();
    void Clear();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Basic_Dots(int32 EntryPoint);
};

#endif
