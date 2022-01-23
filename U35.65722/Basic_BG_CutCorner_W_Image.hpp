#ifndef UE4SS_SDK_Basic_BG_CutCorner_W_Image_HPP
#define UE4SS_SDK_Basic_BG_CutCorner_W_Image_HPP

class UBasic_BG_CutCorner_W_Image_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_Border;
    class UImage* I_BG2;
    class UImage* I_O2;
    class UImage* Image_Background;
    class UImage* Image_Front;
    float CornerSize;
    class UMaterialInstanceDynamic* DynBackgroundMaterial;
    TEnumAsByte<ENUM_MenuColors::Type> BackgroundColor;

    void PreConstruct(bool IsDesignTime);
    void SetImage(class UTexture2D* ImageBackground, FLinearColor BackgroundColor, class UTexture2D* front);
    void SetOutlineColor(FLinearColor Color);
    void SetBackgroundColor(FLinearColor Color);
    void UpdateCornorSize(float Size);
    void SetStyle(TEnumAsByte<E_MM_ButtonStyle::Type> IsEnabled);
    void ExecuteUbergraph_Basic_BG_CutCorner_W_Image(int32 EntryPoint, class UTexture2D* K2Node_CustomEvent_ImageBackground, FLinearColor K2Node_CustomEvent_BackgroundColor, class UTexture2D* K2Node_CustomEvent_Front, bool CallFunc_IsValid_ReturnValue, FLinearColor CallFunc_Multiply_LinearColorFloat_ReturnValue, FLinearColor CallFunc_Add_LinearColorLinearColor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FLinearColor K2Node_MakeStruct_LinearColor, FLinearColor K2Node_CustomEvent_Color_1, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor K2Node_CustomEvent_Color, FSlateColor K2Node_MakeStruct_SlateColor_1, float K2Node_CustomEvent_Size, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, TEnumAsByte<E_MM_ButtonStyle::Type> K2Node_CustomEvent_IsEnabled, bool K2Node_SwitchEnum_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2);
};

#endif
