#ifndef UE4SS_SDK_Basic_OptionSlider_HPP
#define UE4SS_SDK_Basic_OptionSlider_HPP

class UBasic_OptionSlider_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Slider_C* Basic_Slider;
    class UBorder* Border_Outer;
    FText Text;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Basic_OptionSlider(int32 EntryPoint);
};

#endif
