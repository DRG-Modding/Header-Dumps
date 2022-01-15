#ifndef UE4SS_SDK_Basic_IconWithOutline_HPP
#define UE4SS_SDK_Basic_IconWithOutline_HPP

class UBasic_IconWithOutline_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* ICON_MATERIAL;
    USizeBox* IconSize;
    float Size;
    UTexture2D* Icon;
    FLinearColor OutlineColor;
    FLinearColor IconColor;
    bool UseOutline;
    bool ThickOutline;
    UMaterialInstanceDynamic* DynMaterial;
    TEnumAsByte<M_IconShapes::Type> Shape;
    float IconScale;
    TSoftObjectPtr<UTexture2D> Shape_Hexagon;
    TSoftObjectPtr<UTexture2D> Shape_Warning;
    TSoftObjectPtr<UTexture2D> Shape_Anomaly;

    void SetData(UTexture2D* Icon, FLinearColor OutlineColor, FLinearColor IconColor, bool UseOutline, bool OutlineThicknes, float IconScale, uint8 IconShape, bool Temp_bool_Variable, float Temp_float_Variable, uint8 Temp_byte_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable_1, float Temp_float_Variable_2, float K2Node_Select_Default, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float K2Node_Select_Default_1, SoftObjectProperty K2Node_Select_Default_2, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor);
    void PreConstruct(bool IsDesignTime);
    void SetOutlineColor(FLinearColor Color);
    void SetTintColor(FLinearColor Color);
    void ExecuteUbergraph_Basic_IconWithOutline(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_1, FLinearColor K2Node_CustomEvent_Color_1, FLinearColor K2Node_CustomEvent_Color);
}

#endif
