#ifndef UE4SS_SDK_Options_Headbob_HPP
#define UE4SS_SDK_Options_Headbob_HPP

class UOptions_Headbob_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Slider_C* Basic_Slider;

    void Construct();
    void UINeedsUpdate();
    void ShowUI();
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature(float Value);
    void ExecuteUbergraph_Options_Headbob(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value, FExecuteUbergraph_Options_HeadbobK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, float CallFunc_GetHeadBobbingScale_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1);
};

#endif
