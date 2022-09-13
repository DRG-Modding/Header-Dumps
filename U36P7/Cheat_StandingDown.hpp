#ifndef UE4SS_SDK_Cheat_StandingDown_HPP
#define UE4SS_SDK_Cheat_StandingDown_HPP

class UCheat_StandingDown_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheckBox* CheckBox_0;

    void Construct();
    void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_Cheat_StandingDown(int32 EntryPoint);
};

#endif
