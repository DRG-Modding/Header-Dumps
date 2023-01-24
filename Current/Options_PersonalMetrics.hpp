#ifndef UE4SS_SDK_Options_PersonalMetrics_HPP
#define UE4SS_SDK_Options_PersonalMetrics_HPP

class UOptions_PersonalMetrics_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;
    int32 PreviousStatus;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void OnPersonalMetricsChanged(bool AllowPersonalMetrics);
    void ExecuteUbergraph_Options_PersonalMetrics(int32 EntryPoint);
};

#endif
