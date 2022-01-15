#ifndef UE4SS_SDK_Options_GrapplingHookEquipPrevious_HPP
#define UE4SS_SDK_Options_GrapplingHookEquipPrevious_HPP

class UOptions_GrapplingHookEquipPrevious_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_CheckBox_C* Basic_CheckBox;
    UBasic_Option_C* Basic_Option;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_GrapplingHookEquipPrevious(int32 EntryPoint, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, bool K2Node_ComponentBoundEvent_IsChecked, bool CallFunc_GetGrapplingHookAutoSwitch_ReturnValue);
}

#endif
