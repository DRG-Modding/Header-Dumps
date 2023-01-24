#ifndef UE4SS_SDK_Options_FullScreen_HPP
#define UE4SS_SDK_Options_FullScreen_HPP

class UOptions_FullScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_OptionSwitcher_C* Basic_OptionSwitcher;
    class UBasic_CheckBox_C* LockMouseCheckbox;
    bool FromWindowToFullscreen;

    void Construct();
    void UINeedsUpdate();
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_18_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void BndEvt__LockMouseCheckbox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_FullScreen(int32 EntryPoint);
};

#endif
