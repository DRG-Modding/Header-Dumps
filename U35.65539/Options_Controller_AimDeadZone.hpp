#ifndef UE4SS_SDK_Options_Controller_AimDeadZone_HPP
#define UE4SS_SDK_Options_Controller_AimDeadZone_HPP

class UOptions_Controller_AimDeadZone_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Slider_C* Basic_Slider;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float Value);
    void ExecuteUbergraph_Options_Controller_AimDeadZone(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, float CallFunc_GetAimDeadZone_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1);
}

#endif
