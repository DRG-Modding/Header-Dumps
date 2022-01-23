#ifndef UE4SS_SDK_UI_GradientMasked_Image_HPP
#define UE4SS_SDK_UI_GradientMasked_Image_HPP

class UUI_GradientMasked_Image_C : public UUI_GradientMasked_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ImageMasked;
    class UTexture2D* Texture;

    class UTexture2D* GetTextureOrDefault(bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class UTexture2D* K2Node_Select_Default);
    void SetImage(class UTexture2D* InTexture);
    void OnMaterialRefreshed();
    void ExecuteUbergraph_UI_GradientMasked_Image(int32 EntryPoint, class UTexture2D* CallFunc_GetTextureOrDefault_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_Material, float CallFunc_Conv_IntToFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_Material_1, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_Material_2, class UTexture2D* CallFunc_GetTextureOrDefault_ReturnValue_1);
};

#endif
