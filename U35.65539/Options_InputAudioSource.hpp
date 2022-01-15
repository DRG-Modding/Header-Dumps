#ifndef UE4SS_SDK_Options_InputAudioSource_HPP
#define UE4SS_SDK_Options_InputAudioSource_HPP

class UOptions_InputAudioSource_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_OptionSwitcher_C* Basic_OptionSwitcher;
    UBasic_Slider_C* MicAmplitudeSlider;
    FTimerHandle NewDevicesTimerHandle;
    int32 NumOfDevices;
    UBasic_ToolTip_C* MicAmplitudeTooltip;
    FText CurrentDeviceName;

    UWidget* GetMicAmplitudeSliderTooltip(FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_TextText_ReturnValue, FText K2Node_Select_Default, UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void FillAudioDevices(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_SetAudioInputDevice_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, TArray<FString>& CallFunc_GetAvaliableAudioInputDevices_AudioDevices, bool CallFunc_GetAvaliableAudioInputDevices_ReturnValue, int32 CallFunc_Add_Option_Index, FString CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_Option_Index_1, int32 CallFunc_Array_Length_ReturnValue_1);
    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void CheckForNewDevices();
    void Destruct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ReenableSlider();
    void ExecuteUbergraph_Options_InputAudioSource(int32 EntryPoint, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FText K2Node_ComponentBoundEvent_Value, int32 K2Node_ComponentBoundEvent_Index, FString CallFunc_GetCurrentAudioInputDeviceName_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, FString CallFunc_SelectString_ReturnValue, bool CallFunc_SetAudioInputDevice_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_1, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_2, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_3, TArray<FString>& CallFunc_GetAvaliableAudioInputDevices_AudioDevices, bool CallFunc_GetAvaliableAudioInputDevices_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetPlayerControllerID_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_GetCurrentAudioInputDeviceAmplitude_ReturnValue);
}

#endif
