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
    void ExecuteUbergraph_Basic_Menu_ColorBarVertical(int32 EntryPoint, TEnumAsByte<ENUM_PixelWidths::Type> Temp_byte_Variable, FLinearColor CallFunc_MenuColors_OutputColor, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, bool K2Node_Event_IsDesignTime, float K2Node_Select_Default);
};

#endif
