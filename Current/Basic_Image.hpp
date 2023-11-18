#ifndef UE4SS_SDK_Basic_Image_HPP
#define UE4SS_SDK_Basic_Image_HPP

class UBasic_Image_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimFadeIn;
    class UImage* ImageComponent;
    FSlateBrush Brush;
    TEnumAsByte<ENUM_MenuColors::Type> Tint;
    float TintOpacity;
    TMap<FName, float> Scalars;
    TMap<class FName, class FLinearColor> Vectors;
    TMap<class FName, class TSoftObjectPtr<UTexture>> Textures;
    TMap<class FName, class FMenuColorAndOpacity> MenuColors;
    FText BasicToolTipText;
    FVector2D BasicToolTipPosition;
    FVector2D BasicToolTipAlignment;

    void ScaleToFitY(float InHeight);
    void ScaleToFitX(float InWidth);
    void SetBasicToolTip(FText BasicToolTipText, FVector2D BasicToolTipPosition, FVector2D BasicToolTipAlignment);
    class UWidget* GetBasicToolTip();
    void SetDynamicMaterialValues();
    void SetDynamicMaterialTexture(FName ParameterName, class UTexture* Value);
    void SetDynamicMaterialVector(FName ParameterName, FLinearColor Value);
    void SetDynamicMaterialScalar(FName ParameterName, float Value);
    void FadeOut(float InDuration);
    void FadeIn(float InDuration);
    void GetBrushSize(FVector2D& Brush Image Size);
    void SetBrushSize(FVector2D DesiredSize);
    void SetBrushFromSoftTexture(TSoftObjectPtr<UTexture2D> Texture, bool bMatchSize);
    class UMaterialInstanceDynamic* GetDynamicMaterial();
    void SetTintAndOpacity(TEnumAsByte<ENUM_MenuColors::Type> InTint, float InTintOpacity);
    void SetTintOpacity(float InOpacity);
    void SetTint(TEnumAsByte<ENUM_MenuColors::Type> InTint);
    void SelectTint(TEnumAsByte<ENUM_MenuColors::Type> FALSE, TEnumAsByte<ENUM_MenuColors::Type> TRUE, bool Condition, TEnumAsByte<ENUM_MenuColors::Type>& SelectedTint);
    void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
    void SetBrush(const FSlateBrush& InBrush);
    void GetBrush(FSlateBrush& Brush);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_Basic_Image(int32 EntryPoint);
};

#endif
