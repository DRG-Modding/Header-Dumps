#ifndef UE4SS_SDK_Options_TutorialHints_HPP
#define UE4SS_SDK_Options_TutorialHints_HPP

class UOptions_TutorialHints_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;
    class UBasic_ButtonScalable_C* Button_Reset;

    void Construct();
    void OnEnableTutorialHintsChanged(bool NewValue);
    void BndEvt__Button_Reset_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_TutorialHints(int32 EntryPoint);
};

#endif
