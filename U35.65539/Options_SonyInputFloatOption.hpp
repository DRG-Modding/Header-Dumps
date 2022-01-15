#ifndef UE4SS_SDK_Options_SonyInputFloatOption_HPP
#define UE4SS_SDK_Options_SonyInputFloatOption_HPP

class UOptions_SonyInputFloatOption_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Slider_C* Basic_Slider;
    ESonyInputSettingsFloats Option;
    FOptions_SonyInputFloatOption_CStateChanged StateChanged;
    void StateChanged(float NewValue);
    float MaxValue;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Options_SonyInputFloatOption(int32 EntryPoint, bool K2Node_Event_IsDesignTime, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, float K2Node_ComponentBoundEvent_Value, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSonyInputSettingFloat_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
    void StateChanged__DelegateSignature(float NewValue);
}

#endif
