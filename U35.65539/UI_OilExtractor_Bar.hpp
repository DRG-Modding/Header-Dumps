#ifndef UE4SS_SDK_UI_OilExtractor_Bar_HPP
#define UE4SS_SDK_UI_OilExtractor_Bar_HPP

class UUI_OilExtractor_Bar_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Full;
    UProgressBar* ProgressBar_41;
    UTextBlock* TextBlock_70;

    void SetFilledPercentage(float PercentFull, FRuntimeFloatCurve ProgressBarDisplay, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable, float CallFunc_EvaluateRuntimeCurve_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void Construct();
    void ExecuteUbergraph_UI_OilExtractor_Bar(int32 EntryPoint);
}

#endif
