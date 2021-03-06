#ifndef UE4SS_SDK_Options_OutputAudioSource_HPP
#define UE4SS_SDK_Options_OutputAudioSource_HPP

class UOptions_OutputAudioSource_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeOut;
    class UBasic_CheckBox_C* Basic_CheckBox;
    class UBasic_OptionSwitcher_C* Basic_OptionSwitcher;
    class UBlurBackground_C* ErrorBackground;
    class UTextBlock* ErrorText;
    TMap<class FString, class FString> AudioDevices;
    int32 NumOfDevices;
    FTimerHandle CheckForNewDevicesTimer;
    FString UserSetDeviceId;

    void CheckForAudioDeviceFallback(FString DeviceID, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void FillAudioDevices(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_2, TArray<FString>& CallFunc_GetAvaliableAudioOutputDevices_AudioDevices, bool CallFunc_GetAvaliableAudioOutputDevices_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FString CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, FString CallFunc_GetAudioOutputDeviceName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Add_Option_Index);
    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void CheckForNewDevices();
    void Destruct();
    void ExecuteUbergraph_Options_OutputAudioSource(int32 EntryPoint, FText K2Node_ComponentBoundEvent_Value, int32 K2Node_ComponentBoundEvent_Index, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool K2Node_ComponentBoundEvent_IsChecked, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_2, FString CallFunc_GetCurrentAudioOutputDevice_AudioDevice, bool CallFunc_GetCurrentAudioOutputDevice_ReturnValue, FString CallFunc_GetAudioOutputDeviceName_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_3, bool CallFunc_GetUseDefaultAudioOutputDevice_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_4, FString CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_SetAudioOutputDevice_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_5, TArray<FString>& CallFunc_GetAvaliableAudioOutputDevices_AudioDevices, bool CallFunc_GetAvaliableAudioOutputDevices_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue, FString CallFunc_HasAudioOutputDeviceChanged_AudioDeviceChangedTo, bool CallFunc_HasAudioOutputDeviceChanged_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_7, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, bool CallFunc_SetAudioOutputDevice_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_8, bool CallFunc_GetUseDefaultAudioOutputDevice_ReturnValue_1, FExecuteUbergraph_Options_OutputAudioSourceK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FExecuteUbergraph_Options_OutputAudioSourceK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1);
};

#endif
