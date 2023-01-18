#ifndef UE4SS_SDK_Basic_Slider_HPP
#define UE4SS_SDK_Basic_Slider_HPP

class UBasic_Slider_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* ColorOverlay;
    class UTextBlock* DATA_Percentage;
    class UProgressBar* ProgressBar_0;
    class USizeBox* SizeBox_1;
    class USlider* Slider;
    FBasic_Slider_COnValueChanged OnValueChanged;
    void OnValueChanged(float Value);
    float MinValue;
    float MaxValue;
    FBasic_Slider_COnPercentChanged OnPercentChanged;
    void OnPercentChanged(float Percent);
    FText TextFormat;
    int32 MaxFractionalDigits;
    float MinDesiredWidth;
    int32 MinFractionalDigits;
    float MappedMinValue;
    float MappedMaxValue;
    float PreviewPercent;

    void Set Text(FText New Text);
    void Get Value(float& Value);
    void Get Percent(float& Percent);
    void Set Value(float Value);
    void Set Percent(float New Percent);
    void BndEvt__Slider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature();
    void BndEvt__Slider_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Update Text();
    void ExecuteUbergraph_Basic_Slider(int32 EntryPoint);
    void OnPercentChanged__DelegateSignature(float Percent);
    void OnValueChanged__DelegateSignature(float Value);
};

#endif
