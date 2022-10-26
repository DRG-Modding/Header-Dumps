#ifndef UE4SS_SDK_Cheat_CharacterPointLight_HPP
#define UE4SS_SDK_Cheat_CharacterPointLight_HPP

class UCheat_CharacterPointLight_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* IntensityLabel;
    class USlider* IntensitySlider;
    class UTextBlock* RadiusLabel;
    class USlider* RadiusSlider;

    void Update();
    void BndEvt__IntensitySlider_K2Node_ComponentBoundEvent_79_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Radius_K2Node_ComponentBoundEvent_96_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void Set max value on radius and intensity();
    void ExecuteUbergraph_Cheat_CharacterPointLight(int32 EntryPoint);
};

#endif
