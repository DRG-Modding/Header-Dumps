#ifndef UE4SS_SDK_Basic_Menu_ColorBarVertical_HPP
#define UE4SS_SDK_Basic_Menu_ColorBarVertical_HPP

class UBasic_Menu_ColorBarVertical_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* ColorBar;
    class USizeBox* ColorBar_Sizer;
    TEnumAsByte<ENUM_PixelWidths::Type> Thickness;
    TEnumAsByte<ENUM_MenuColors::Type> Color;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Basic_Menu_ColorBarVertical(int32 EntryPoint);
};

#endif
