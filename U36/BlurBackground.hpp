#ifndef UE4SS_SDK_BlurBackground_HPP
#define UE4SS_SDK_BlurBackground_HPP

class UBlurBackground_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBackgroundBlur* BackgroundBlur_66;
    class UBorder* Border_0;
    FLinearColor Tint;
    float Blur;

    void SetBlur(float InBlur);
    void SetColor(FLinearColor Tint);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BlurBackground(int32 EntryPoint);
};

#endif
