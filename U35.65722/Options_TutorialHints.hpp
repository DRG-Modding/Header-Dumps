#ifndef UE4SS_SDK_Options_TutorialHints_HPP
#define UE4SS_SDK_Options_TutorialHints_HPP

class UOptions_TutorialHints_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;
    class UBasic_ButtonScalable_C* Button_Reset;

    void Construct();
    void OnEnableTutorialHintsChanged(bool NewValue);
    void BndEvt__Button_Reset_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_TutorialHints(int32 EntryPoint, bool K2Node_ComponentBoundEvent_IsChecked, FExecuteUbergraph_Options_TutorialHintsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, bool K2Node_CustomEvent_NewValue, bool CallFunc_GetTutorialHintsEnabled_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue);
};

#endif
