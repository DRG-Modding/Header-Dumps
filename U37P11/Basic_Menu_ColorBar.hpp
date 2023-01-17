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

    void SetOpacity(float Opacity);
    void SetThickness(TEnumAsByte<ENUM_PixelWidths::Type> Index);
    void SetColor(TEnumAsByte<ENUM_MenuColors::Type> Brush Color);
    void PreConstruct(bool IsDesignTime);
    void SetData(TEnumAsByte<ENUM_PixelWidths::Type> Colorbar_Thickness, TEnumAsByte<ENUM_MenuColors::Type> Colorbar_Tint, float Colorbar_Opacity, class UMaterialInterface* Material);
    void ExecuteUbergraph_Basic_Menu_ColorBar(int32 EntryPoint);
};

#endif
