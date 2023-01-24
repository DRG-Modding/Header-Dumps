#ifndef UE4SS_SDK_Basic_ProgressBar_HPP
#define UE4SS_SDK_Basic_ProgressBar_HPP

class UBasic_ProgressBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Outline_Image;
    class UProgressBar* Progress_Bar;
    TEnumAsByte<EProgressBarFillType::Type> BarFillType;
    float Percent;
    FColoredTexture2D Background;
    FColoredTexture2D Fill;
    FColoredTexture2D outline;

    void SetPercent(float InPercent);
    void GetBrush(FColoredTexture2D Image, FSlateBrush& SlateBrush);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Basic_ProgressBar(int32 EntryPoint);
};

#endif
