#ifndef UE4SS_SDK_Basic_Menu_ColorBar_HPP
#define UE4SS_SDK_Basic_Menu_ColorBar_HPP

class UBasic_Menu_ColorBar_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBorder* ColorBar;
    USizeBox* ColorBar_Sizer;
    TEnumAsByte<ENUM_PixelWidths::Type> Colorbar_Thickness;
    TEnumAsByte<ENUM_MenuColors::Type> Colorbar_Tint;
    float Colorbar_Opacity;
    UMaterialInterface* Material;

    void SetOpacity(float Opacity, float OpacityHolder);
    void SetThickness(uint8 Index, uint8 Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue);
    void SetColor(uint8 Brush Color, FLinearColor CallFunc_MenuColors_OutputColor);
    void PreConstruct(bool IsDesignTime);
    void SetData(uint8 Colorbar_Thickness, uint8 Colorbar_Tint, float Colorbar_Opacity, UMaterialInterface* Material);
    void ExecuteUbergraph_Basic_Menu_ColorBar(int32 EntryPoint, uint8 K2Node_CustomEvent_Colorbar_Thickness, uint8 K2Node_CustomEvent_Colorbar_Tint, float K2Node_CustomEvent_Colorbar_Opacity, UMaterialInterface* K2Node_CustomEvent_Material, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue);
}

#endif
