#ifndef UE4SS_SDK_Options_DisableJukeboxMusic_HPP
#define UE4SS_SDK_Options_DisableJukeboxMusic_HPP

class UOptions_DisableJukeboxMusic_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_DisableJukeboxMusic(int32 EntryPoint, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, bool K2Node_ComponentBoundEvent_IsChecked);
}

#endif
