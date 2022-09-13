#ifndef UE4SS_SDK_UI_RoundedImage_HPP
#define UE4SS_SDK_UI_RoundedImage_HPP

class UUI_RoundedImage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* RoundedImage;
    class UMaterialInstanceDynamic* Material;
    class UTexture2D* Texture;
    float Radius;
    float EdgeSharpness;

    void SetImage(class UTexture2D* Texture);
    void OnPaint(FPaintContext& Context);
    void UpdateMaterial();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_RoundedImage(int32 EntryPoint);
};

#endif
