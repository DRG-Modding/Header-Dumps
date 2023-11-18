#ifndef UE4SS_SDK_Basic_Window_CutCorner_HPP
#define UE4SS_SDK_Basic_Window_CutCorner_HPP

class UBasic_Window_CutCorner_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_BG_CutCorner_C* Basic_BG_Window;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UNamedSlot* Content;
    FMargin ContentPadding;
    float BackgroundOpacity;
    TEnumAsByte<ENUM_MenuColors::Type> ColorbarTint;
    bool ShowBar;

    void PreConstruct(bool IsDesignTime);
    void SetBackgroundTint(FLinearColor InColorAndOpacity);
    void SetColorbarColor(TEnumAsByte<ENUM_MenuColors::Type> Colorbar_Tint);
    void ExecuteUbergraph_Basic_Window_CutCorner(int32 EntryPoint);
};

#endif
