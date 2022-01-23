#ifndef UE4SS_SDK_Options_CameraShake_HPP
#define UE4SS_SDK_Options_CameraShake_HPP

class UOptions_CameraShake_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Slider_C* Basic_Slider;

    void Construct();
    void UINeedsUpdate();
    void ShowUI();
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature(float Value);
    void ExecuteUbergraph_Options_CameraShake(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value, FExecuteUbergraph_Options_CameraShakeK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, float CallFunc_GetCameraShakeScale_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1);
};

#endif
