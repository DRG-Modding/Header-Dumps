#ifndef UE4SS_SDK_Options_GFX_MaxFPS_HPP
#define UE4SS_SDK_Options_GFX_MaxFPS_HPP

class UOptions_GFX_MaxFPS_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;
    class UBasic_Slider_C* Basic_Slider;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value);
    void ExecuteUbergraph_Options_GFX_MaxFPS(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value, bool Temp_bool_Variable, FExecuteUbergraph_Options_GFX_MaxFPSK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, float Temp_float_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetFrameRateLimit_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, float K2Node_Select_Default, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_GetIsChecked_ReturnValue, float CallFunc_Get_Value_Value, bool K2Node_ComponentBoundEvent_IsChecked, float K2Node_Select_Default_1, int32 CallFunc_Round_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
};

#endif
