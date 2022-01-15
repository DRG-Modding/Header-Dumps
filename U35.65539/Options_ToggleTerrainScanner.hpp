#ifndef UE4SS_SDK_Options_ToggleTerrainScanner_HPP
#define UE4SS_SDK_Options_ToggleTerrainScanner_HPP

class UOptions_ToggleTerrainScanner_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void UINeedsUpdate();
    void ShowOptions();
    void ExecuteUbergraph_Options_ToggleTerrainScanner(int32 EntryPoint, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_ComponentBoundEvent_IsChecked, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, bool CallFunc_GetUseToggleTerrainScanner_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1);
}

#endif
