#ifndef UE4SS_SDK_Options_RestoreSave_HPP
#define UE4SS_SDK_Options_RestoreSave_HPP

class UOptions_RestoreSave_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ButtonWithControls_C* Basic_ButtonWithControls;

    void BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature();
    void ExecuteUbergraph_Options_RestoreSave(int32 EntryPoint, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UMenu_RestoreSaves_C* CallFunc_OpenWindowFromClass_ReturnValue);
}

#endif
