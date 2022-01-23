#ifndef UE4SS_SDK_Basic_Menu_ColorBar_HPP
#define UE4SS_SDK_Basic_Menu_ColorBar_HPP

class UBasic_Menu_ColorBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* ColorBar;
    class USizeBox* ColorBar_Sizer;
    TEnumAsByte<ENUM_PixelWidths::Type> Colorbar_Thickness;
    TEnumAsByte<ENUM_MenuColors::Type> Colorbar_Tint;
    float Colorbar_Opacity;
    class UMaterialInterface* Material;

    void SetOpacity(float Opacity, float OpacityHolder);
    void SetThickness(TEnumAsByte<ENUM_PixelWidths::Type> Index, TEnumAsByte<ENUM_PixelWidths::Type> Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue);
    void SetColor(TEnumAsByte<ENUM_MenuColors::Type> Brush Color, FLinearColor CallFunc_MenuColors_OutputColor);
    void PreConstruct(bool IsDesignTime);
    void SetData(TEnumAsByte<ENUM_PixelWidths::Type> Colorbar_Thickness, TEnumAsByte<ENUM_MenuColors::Type> Colorbar_Tint, float Colorbar_Opacity, class UMaterialInterface* Material);
    void ExecuteUbergraph_Basic_Menu_ColorBar(int32 EntryPoint, TEnumAsByte<ENUM_PixelWidths::Type> K2Node_CustomEvent_Colorbar_Thickness, TEnumAsByte<ENUM_MenuColors::Type> K2Node_CustomEvent_Colorbar_Tint, float K2Node_CustomEvent_Colorbar_Opacity, class UMaterialInterface* K2Node_CustomEvent_Material, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue);
};

#endif
