#ifndef UE4SS_SDK_BP_New_HeavyRain_Crystal_HPP
#define UE4SS_SDK_BP_New_HeavyRain_Crystal_HPP

class ABP_New_HeavyRain_Crystal_C : public ABP_WeatherEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Fadeout_OneToZero_A3017D9546A53807B6D05BB6AE0CDCAB;
    TEnumAsByte<ETimelineDirection::Type> Fadeout__Direction_A3017D9546A53807B6D05BB6AE0CDCAB;
    class UTimelineComponent* FadeOut;
    float Fadein_ZeroToOne_292B154C4E05A9ACA12E6F98823124C0;
    TEnumAsByte<ETimelineDirection::Type> Fadein__Direction_292B154C4E05A9ACA12E6F98823124C0;
    class UTimelineComponent* FadeIn;

    void FadeIn__FinishedFunc();
    void FadeIn__UpdateFunc();
    void FadeOut__FinishedFunc();
    void FadeOut__UpdateFunc();
    void StartEffect();
    void EndEffect();
    void ExecuteUbergraph_BP_New_HeavyRain_Crystal(int32 EntryPoint);
};

#endif
