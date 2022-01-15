#ifndef UE4SS_SDK_Options_GFX_Gamma_HPP
#define UE4SS_SDK_Options_GFX_Gamma_HPP

class UOptions_GFX_Gamma_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Slider_C* Basic_Slider;

    void Construct();
    void UINeedsUpdate();
    void ShowUI();
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature(float Percent);
    void ExecuteUbergraph_Options_GFX_Gamma(int32 EntryPoint, float CallFunc_Get_Value_Value, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, float K2Node_ComponentBoundEvent_Percent, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, float CallFunc_GetGamma_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1);
}

#endif
