#ifndef UE4SS_SDK_Basic_IconWithOutline_HPP
#define UE4SS_SDK_Basic_IconWithOutline_HPP

class UBasic_IconWithOutline_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ICON_MATERIAL;
    class USizeBox* IconSize;
    float Size;
    class UTexture2D* Icon;
    FLinearColor OutlineColor;
    FLinearColor IconColor;
    bool UseOutline;
    bool ThickOutline;
    class UMaterialInstanceDynamic* DynMaterial;
    TEnumAsByte<M_IconShapes::Type> Shape;
    float IconScale;
    TSoftObjectPtr<UTexture2D> Shape_Hexagon;
    TSoftObjectPtr<UTexture2D> Shape_Warning;
    TSoftObjectPtr<UTexture2D> Shape_Anomaly;

    void SetData(class UTexture2D* Icon, FLinearColor OutlineColor, FLinearColor IconColor, bool UseOutline, bool OutlineThicknes, float IconScale, TEnumAsByte<M_IconShapes::Type> IconShape);
    void PreConstruct(bool IsDesignTime);
    void SetOutlineColor(FLinearColor Color);
    void SetTintColor(FLinearColor Color);
    void ExecuteUbergraph_Basic_IconWithOutline(int32 EntryPoint);
};

#endif
