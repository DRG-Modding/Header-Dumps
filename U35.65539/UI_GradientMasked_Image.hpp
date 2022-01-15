#ifndef UE4SS_SDK_UI_GradientMasked_Image_HPP
#define UE4SS_SDK_UI_GradientMasked_Image_HPP

class UUI_GradientMasked_Image_C : UUI_GradientMasked_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* ImageMasked;
    UTexture2D* Texture;

    UTexture2D* GetTextureOrDefault(bool Temp_bool_Variable, UTexture2D* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, UTexture2D* K2Node_Select_Default);
    void SetImage(UTexture2D* InTexture);
    void OnMaterialRefreshed();
    void ExecuteUbergraph_UI_GradientMasked_Image(int32 EntryPoint, UTexture2D* CallFunc_GetTextureOrDefault_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_Material, float CallFunc_Conv_IntToFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_Material_1, bool CallFunc_IsValid_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_Material_2, UTexture2D* CallFunc_GetTextureOrDefault_ReturnValue_1);
}

#endif
