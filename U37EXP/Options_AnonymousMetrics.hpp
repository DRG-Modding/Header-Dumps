#ifndef UE4SS_SDK_Options_AnonymousMetrics_HPP
#define UE4SS_SDK_Options_AnonymousMetrics_HPP

class UOptions_AnonymousMetrics_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;
    int32 PreviousStatus;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void OnAnonymousMetricsChanged(bool AllowAnonymousMetrics);
    void ExecuteUbergraph_Options_AnonymousMetrics(int32 EntryPoint);
};

#endif
