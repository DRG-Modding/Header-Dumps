#ifndef UE4SS_SDK_Options_Mouse_SeparateAxis_HPP
#define UE4SS_SDK_Options_Mouse_SeparateAxis_HPP

class UOptions_Mouse_SeparateAxis_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_Mouse_SeparateAxis(int32 EntryPoint);
};

#endif
