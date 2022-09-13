#ifndef UE4SS_SDK_Cheat_God_HPP
#define UE4SS_SDK_Cheat_God_HPP

class UCheat_God_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheckBox* CheckBox_0;

    void Construct();
    void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_Cheat_God(int32 EntryPoint);
};

#endif
