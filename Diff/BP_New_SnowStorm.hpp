#ifndef UE4SS_SDK_BP_New_SnowStorm_HPP
#define UE4SS_SDK_BP_New_SnowStorm_HPP

class ABP_New_SnowStorm_C : public ABP_WeatherEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Fadeout_OneToZero_321EE05E466F9B8147EEF89FEA0B8335;
    TEnumAsByte<ETimelineDirection::Type> Fadeout__Direction_321EE05E466F9B8147EEF89FEA0B8335;
    class UTimelineComponent* FadeOut;
    float Fadein_ZeroToOne_A0FCF2DB48CDF89D5DB4DC99F95711E6;
    TEnumAsByte<ETimelineDirection::Type> Fadein__Direction_A0FCF2DB48CDF89D5DB4DC99F95711E6;
    class UTimelineComponent* FadeIn;

    void FadeIn__FinishedFunc();
    void FadeIn__UpdateFunc();
    void FadeOut__FinishedFunc();
    void FadeOut__UpdateFunc();
    void StartEffect();
    void EndEffect();
    void ExecuteUbergraph_BP_New_SnowStorm(int32 EntryPoint);
};

#endif
