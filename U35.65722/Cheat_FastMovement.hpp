#ifndef UE4SS_SDK_Cheat_FastMovement_HPP
#define UE4SS_SDK_Cheat_FastMovement_HPP

class UCheat_FastMovement_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheckBox* CheckBox_0;

    void Construct();
    void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_Cheat_FastMovement(int32 EntryPoint, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, bool K2Node_ComponentBoundEvent_bIsChecked);
};

#endif
