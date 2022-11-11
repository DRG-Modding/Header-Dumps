#ifndef UE4SS_SDK_Options_SonyInputBoolOption_HPP
#define UE4SS_SDK_Options_SonyInputBoolOption_HPP

class UOptions_SonyInputBoolOption_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;
    ESonyInputSettingsBools Option;
    FOptions_SonyInputBoolOption_CStateChanged StateChanged;
    void StateChanged(bool IsChecked);

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_SonyInputBoolOption(int32 EntryPoint);
    void StateChanged__DelegateSignature(bool IsChecked);
};

#endif
