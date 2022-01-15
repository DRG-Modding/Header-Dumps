#ifndef UE4SS_SDK_Options_Controller_ForceFeedbackScale_HPP
#define UE4SS_SDK_Options_Controller_ForceFeedbackScale_HPP

class UOptions_Controller_ForceFeedbackScale_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Slider_C* Basic_Slider;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value);
    void ExecuteUbergraph_Options_Controller_ForceFeedbackScale(int32 EntryPoint, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, float CallFunc_GetForceFeedbackScale_ReturnValue, float K2Node_ComponentBoundEvent_Value, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
}

#endif
