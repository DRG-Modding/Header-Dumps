#ifndef UE4SS_SDK_Options_DownedTurnDirection_HPP
#define UE4SS_SDK_Options_DownedTurnDirection_HPP

class UOptions_DownedTurnDirection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;
    class UBasic_Option_C* Basic_Option;
    EFSDInputSource InputSource;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_DownedTurnDirection(int32 EntryPoint);
};

#endif
