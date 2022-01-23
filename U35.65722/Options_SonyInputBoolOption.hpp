#ifndef UE4SS_SDK_Options_SonyInputBoolOption_HPP
#define UE4SS_SDK_Options_SonyInputBoolOption_HPP

class UOptions_SonyInputBoolOption_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;
    ESonyInputSettingsBools Option;
    FOptions_SonyInputBoolOption_CStateChanged StateChanged;
    void StateChanged(bool IsChecked);

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_SonyInputBoolOption(int32 EntryPoint, FExecuteUbergraph_Options_SonyInputBoolOptionK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool K2Node_ComponentBoundEvent_IsChecked, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetSonyInputSettingBool_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
    void StateChanged__DelegateSignature(bool IsChecked);
};

#endif
