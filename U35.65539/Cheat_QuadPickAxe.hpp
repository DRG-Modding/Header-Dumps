#ifndef UE4SS_SDK_Cheat_QuadPickAxe_HPP
#define UE4SS_SDK_Cheat_QuadPickAxe_HPP

class UCheat_QuadPickAxe_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCheckBox* CheckBox_0;

    void Construct();
    void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_Cheat_QuadPickAxe(int32 EntryPoint, UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, bool K2Node_ComponentBoundEvent_bIsChecked);
}

#endif
