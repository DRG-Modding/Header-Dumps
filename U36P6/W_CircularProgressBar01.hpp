#ifndef UE4SS_SDK_W_CircularProgressBar01_HPP
#define UE4SS_SDK_W_CircularProgressBar01_HPP

class UW_CircularProgressBar01_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ProgressBarImage;
    class UTexture* Texture;
    float Percent;
    float Start Angle;
    float Complete Range;
    float RingRadius;
    float RingThickness;
    bool Clockwise;
    TEnumAsByte<ENUM_MenuColors::Type> Tint;
    float TintOpacity;

    void SetTintOpacity(float TintOpacity);
    void SetTint(TEnumAsByte<ENUM_MenuColors::Type> Tint);
    void IncPercent(float Value, float& Percent);
    void GetPercent(float& Percent);
    void SetClockwise(bool ShowClockwise);
    void SetRingThickness(float Value);
    void SetRingRadius(float Value);
    void SetCompleteRange(float Value);
    void SetStartAngle(float Value);
    void CreateMaterial();
    void SetPercent(float Value);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_CircularProgressBar01(int32 EntryPoint);
};

#endif
