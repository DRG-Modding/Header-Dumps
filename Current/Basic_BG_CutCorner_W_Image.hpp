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
    void ExecuteUbergraph_Basic_BG_CutCorner_W_Image(int32 EntryPoint);
};

#endif
