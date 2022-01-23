#ifndef UE4SS_SDK_UI_MaskedImage_HPP
#define UE4SS_SDK_UI_MaskedImage_HPP

class UUI_MaskedImage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* MaskedImage;
    class UTexture2D* Image;
    FVector2D ImageSize;
    bool AutoSize;
    FSlateColor ImageTint;
    class UTexture* Mask;
    bool Invert Mask;
    TEnumAsByte<ESlateBrushDrawType::Type> DrawAs;
    class UMaterialInstanceDynamic* Material;
    bool Mask Black;
    class UObject* BrushImage;

    void SetMaskBlack(bool Index, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default);
    void UpdateMaterial(bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void SetDrawAs(TEnumAsByte<ESlateBrushDrawType::Type> InBrush_DrawAs, FMargin Margin, bool K2Node_SwitchEnum_CmpSuccess, FMargin K2Node_MakeStruct_Margin, FSlateBrush K2Node_MakeStruct_SlateBrush);
    void SetMaskInverted(bool Invert, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default);
    void SetMask(class UTexture* Value, bool Temp_bool_Variable, class UTexture* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class UTexture* K2Node_Select_Default);
    void SetImageTint(FSlateColor TintColor);
    void SetImageSize(FVector2D DesiredSize);
    void SetImage(class UTexture2D* Value, bool Match Size, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_MaskedImage(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
