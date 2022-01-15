#ifndef UE4SS_SDK_Options_TutorialHints_HPP
#define UE4SS_SDK_Options_TutorialHints_HPP

class UOptions_TutorialHints_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_CheckBox_C* Basic_CheckBox;
    UBasic_ButtonScalable_C* Button_Reset;

    void Construct();
    void OnEnableTutorialHintsChanged(bool NewValue);
    void BndEvt__Button_Reset_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_TutorialHints(int32 EntryPoint, bool K2Node_ComponentBoundEvent_IsChecked, BoolConfigChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, bool K2Node_CustomEvent_NewValue, bool CallFunc_GetTutorialHintsEnabled_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue);
}

#endif
