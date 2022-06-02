#ifndef UE4SS_SDK_UI_GradientMasked_Image_HPP
#define UE4SS_SDK_UI_GradientMasked_Image_HPP

class UUI_GradientMasked_Image_C : public UUI_GradientMasked_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ImageMasked;
    class UTexture2D* Texture;
    TEnumAsByte<ENUM_MenuColors::Type> MenuColor;
    float MenuColorOpacity;

    void SetMenuColor(TEnumAsByte<ENUM_MenuColors::Type> InColor, float InOpacity);
    class UTexture2D* GetTextureOrDefault();
    void SetImage(class UTexture2D* InTexture);
    void OnMaterialRefreshed();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_GradientMasked_Image(int32 EntryPoint);
};

#endif
