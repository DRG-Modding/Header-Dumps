#ifndef UE4SS_SDK_Options_Controller_ForceFeedbackScale_HPP
#define UE4SS_SDK_Options_Controller_ForceFeedbackScale_HPP

class UOptions_Controller_ForceFeedbackScale_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Slider_C* Basic_Slider;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value);
    void ExecuteUbergraph_Options_Controller_ForceFeedbackScale(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, float CallFunc_GetForceFeedbackScale_ReturnValue, float K2Node_ComponentBoundEvent_Value, FExecuteUbergraph_Options_Controller_ForceFeedbackScaleK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate);
};

#endif
