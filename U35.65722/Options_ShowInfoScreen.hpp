#ifndef UE4SS_SDK_Options_ShowInfoScreen_HPP
#define UE4SS_SDK_Options_ShowInfoScreen_HPP

class UOptions_ShowInfoScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;
    int32 PreviousStatus;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_ShowInfoScreen(int32 EntryPoint, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool K2Node_ComponentBoundEvent_IsChecked, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1);
};

#endif
