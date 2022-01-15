#ifndef UE4SS_SDK_ITM_PrivatePublic_HPP
#define UE4SS_SDK_ITM_PrivatePublic_HPP

class UITM_PrivatePublic_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_CheckBox_C* Basic_CheckBox;

    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void UpdateState();
    void ExecuteUbergraph_ITM_PrivatePublic(int32 EntryPoint, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_FSDUpdateSessionInfo_ReturnValue, bool K2Node_ComponentBoundEvent_IsChecked);
}

#endif
