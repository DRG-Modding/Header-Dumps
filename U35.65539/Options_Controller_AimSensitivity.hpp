#ifndef UE4SS_SDK_Options_Controller_AimSensitivity_HPP
#define UE4SS_SDK_Options_Controller_AimSensitivity_HPP

class UOptions_Controller_AimSensitivity_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Slider_C* Basic_Slider;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value);
    void ExecuteUbergraph_Options_Controller_AimSensitivity(int32 EntryPoint, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, float CallFunc_GetAimSensitivity_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, float K2Node_ComponentBoundEvent_Value);
}

#endif
