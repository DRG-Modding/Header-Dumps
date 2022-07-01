#ifndef UE4SS_SDK_Options_Scalability_ResolutioScale_HPP
#define UE4SS_SDK_Options_Scalability_ResolutioScale_HPP

class UOptions_Scalability_ResolutioScale_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Slider_C* Basic_Slider;

    void Construct();
    void UINeedsUpdate();
    void ShowUI();
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature(float Percent);
    void ExecuteUbergraph_Options_Scalability_ResolutioScale(int32 EntryPoint);
};

#endif
