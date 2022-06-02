#ifndef UE4SS_SDK_Options_UseStreamerProgram_HPP
#define UE4SS_SDK_Options_UseStreamerProgram_HPP

class UOptions_UseStreamerProgram_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void SettingsChanged();
    void ExecuteUbergraph_Options_UseStreamerProgram(int32 EntryPoint);
};

#endif
