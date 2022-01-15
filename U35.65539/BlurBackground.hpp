#ifndef UE4SS_SDK_BlurBackground_HPP
#define UE4SS_SDK_BlurBackground_HPP

class UBlurBackground_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBackgroundBlur* BackgroundBlur_66;
    UBorder* Border_0;
    FLinearColor Tint;
    float Blur;

    void SetBlur(float InBlur);
    void SetColor(FLinearColor Tint);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BlurBackground(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
