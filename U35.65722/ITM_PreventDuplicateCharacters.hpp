#ifndef UE4SS_SDK_ITM_PreventDuplicateCharacters_HPP
#define UE4SS_SDK_ITM_PreventDuplicateCharacters_HPP

class UITM_PreventDuplicateCharacters_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;

    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void UpdateState();
    void ExecuteUbergraph_ITM_PreventDuplicateCharacters(int32 EntryPoint, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, bool CallFunc_GetPreventLatejoinCharacterDuplication_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, bool K2Node_ComponentBoundEvent_IsChecked, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_2);
};

#endif
