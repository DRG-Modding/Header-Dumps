#ifndef UE4SS_SDK_Basic_OptionSlider_HPP
#define UE4SS_SDK_Basic_OptionSlider_HPP

class UBasic_OptionSlider_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Slider_C* Basic_Slider;
    UBorder* Border_Outer;
    FText Text;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Basic_OptionSlider(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime);
}

#endif
