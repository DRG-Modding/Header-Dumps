#ifndef UE4SS_SDK_Cheat_ShowHUD_HPP
#define UE4SS_SDK_Cheat_ShowHUD_HPP

class UCheat_ShowHUD_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCheckBox* CheckBox_0;

    void Construct();
    void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_Cheat_ShowHUD(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsChecked, UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue);
}

#endif
