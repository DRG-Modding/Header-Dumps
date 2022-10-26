#ifndef UE4SS_SDK_Options_PhotosensitivityMode_HPP
#define UE4SS_SDK_Options_PhotosensitivityMode_HPP

class UOptions_PhotosensitivityMode_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void OnGameUserSettingsChanged();
    void ExecuteUbergraph_Options_PhotosensitivityMode(int32 EntryPoint);
};

#endif
