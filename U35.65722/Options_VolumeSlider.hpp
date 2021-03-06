#ifndef UE4SS_SDK_Options_VolumeSlider_HPP
#define UE4SS_SDK_Options_VolumeSlider_HPP

class UOptions_VolumeSlider_C : public USoundClassWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Slider_C* Basic_Slider;
    EVolumeType volumeType;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value);
    void UINeedsUpdate();
    void Update Percentage Text();
    void ExecuteUbergraph_Options_VolumeSlider(int32 EntryPoint, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, bool K2Node_Event_IsDesignTime, float K2Node_ComponentBoundEvent_Value, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FExecuteUbergraph_Options_VolumeSliderK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, float CallFunc_GetVolume_ReturnValue, float CallFunc_Get_Value_Value, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
};

#endif
