#ifndef UE4SS_SDK_Options_GFX_Sharpening_HPP
#define UE4SS_SDK_Options_GFX_Sharpening_HPP

class UOptions_GFX_Sharpening_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Slider_C* Basic_Slider;

    void Construct();
    void UINeedsUpdate();
    void ShowUI();
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnPercentChanged__DelegateSignature(float Percent);
    void ExecuteUbergraph_Options_GFX_Sharpening(int32 EntryPoint, float CallFunc_Get_Value_Value, FExecuteUbergraph_Options_GFX_SharpeningK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, float K2Node_ComponentBoundEvent_Percent, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, float CallFunc_GetSharpening_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1);
};

#endif
