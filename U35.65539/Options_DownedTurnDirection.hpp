#ifndef UE4SS_SDK_Options_DownedTurnDirection_HPP
#define UE4SS_SDK_Options_DownedTurnDirection_HPP

class UOptions_DownedTurnDirection_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_CheckBox_C* Basic_CheckBox;
    UBasic_Option_C* Basic_Option;
    EFSDInputSource InputSource;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_DownedTurnDirection(int32 EntryPoint, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, bool K2Node_ComponentBoundEvent_IsChecked, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_2, float K2Node_Select_Default, float CallFunc_GetDownCameraTurnDirection_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
}

#endif
