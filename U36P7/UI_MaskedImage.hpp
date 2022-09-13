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

    void SetMaskBlack(bool Index);
    void UpdateMaterial();
    void SetDrawAs(TEnumAsByte<ESlateBrushDrawType::Type> InBrush_DrawAs);
    void SetMaskInverted(bool Invert);
    void SetMask(class UTexture* Value);
    void SetImageTint(FSlateColor TintColor);
    void SetImageSize(FVector2D DesiredSize);
    void SetImage(class UTexture2D* Value, bool Match Size);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_MaskedImage(int32 EntryPoint);
};

#endif
