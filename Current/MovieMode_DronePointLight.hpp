#ifndef UE4SS_SDK_MovieMode_DronePointLight_HPP
#define UE4SS_SDK_MovieMode_DronePointLight_HPP

class UMovieMode_DronePointLight_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_291;
    class USlider* ColorSlider;
    class USlider* IntensitySlider;
    class UTextBlock* RadiusLabel;
    class UTextBlock* RadiusLabel_1;
    class UTextBlock* RadiusLabel_2;
    class USlider* RadiusSlider;

    void Update();
    void BndEvt__RadiusSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__ColorSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__RadiusSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Button_291_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void ReBuild();
    void ExecuteUbergraph_MovieMode_DronePointLight(int32 EntryPoint);
};

#endif
