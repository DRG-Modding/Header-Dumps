#ifndef UE4SS_SDK_Options_Controller_AimSensitivity_HPP
#define UE4SS_SDK_Options_Controller_AimSensitivity_HPP

class UOptions_Controller_AimSensitivity_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Slider_C* Basic_Slider;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value);
    void ExecuteUbergraph_Options_Controller_AimSensitivity(int32 EntryPoint, FExecuteUbergraph_Options_Controller_AimSensitivityK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, float CallFunc_GetAimSensitivity_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, float K2Node_ComponentBoundEvent_Value);
};

#endif
