#ifndef UE4SS_SDK_Option_ColorDeficieny_HPP
#define UE4SS_SDK_Option_ColorDeficieny_HPP

class UOption_ColorDeficieny_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ImageIntro;
    class UBasic_Option_C* Basic_Option;
    class UBorder* Border_DeficiencyOutline;
    class UImage* Image_ColorDeficiency_Collapsed;
    class UScaleBox* ScaleBox_ColorDeficiency;
    class UHorizontalBox* Severity_Box;
    class UBasic_Slider_C* Severity_Slider;
    class UTextBlock* Severity_Text;
    class UBasic_OptionSwitcher_C* Type_Selector;

    void ApplyAndSave();
    void Refresh();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__Option_ColorDeficieny_Type_Selector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void BndEvt__Option_ColorDeficieny_Severity_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature(float Percent);
    void BndEvt__Option_ColorDeficieny_Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringBegin__DelegateSignature();
    void BndEvt__Option_ColorDeficieny_Basic_Option_K2Node_ComponentBoundEvent_3_OnHoveringEnd__DelegateSignature();
    void ExecuteUbergraph_Option_ColorDeficieny(int32 EntryPoint);
};

#endif
