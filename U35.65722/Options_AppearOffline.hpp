#ifndef UE4SS_SDK_Options_AppearOffline_HPP
#define UE4SS_SDK_Options_AppearOffline_HPP

class UOptions_AppearOffline_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ShowOptions();
    void UINeedsUpdate();
    void ExecuteUbergraph_Options_AppearOffline(int32 EntryPoint, FExecuteUbergraph_Options_AppearOfflineK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_ComponentBoundEvent_IsChecked, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, bool CallFunc_GetAppearOffline_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1);
};

#endif
