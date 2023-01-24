#ifndef UE4SS_SDK_BP_New_HeavyRain_Lush_HPP
#define UE4SS_SDK_BP_New_HeavyRain_Lush_HPP

class ABP_New_HeavyRain_Lush_C : public ABP_WeatherEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Fadeout_OneToZero_6AF7D3FF4ECB419F4995D9B03104B55F;
    TEnumAsByte<ETimelineDirection::Type> Fadeout__Direction_6AF7D3FF4ECB419F4995D9B03104B55F;
    class UTimelineComponent* FadeOut;
    float Fadein_ZeroToOne_FE890FCF46CAF26A7BBFED9BDF736F8A;
    TEnumAsByte<ETimelineDirection::Type> Fadein__Direction_FE890FCF46CAF26A7BBFED9BDF736F8A;
    class UTimelineComponent* FadeIn;

    void FadeIn__FinishedFunc();
    void FadeIn__UpdateFunc();
    void FadeOut__FinishedFunc();
    void FadeOut__UpdateFunc();
    void StartEffect();
    void EndEffect();
    void ExecuteUbergraph_BP_New_HeavyRain_Lush(int32 EntryPoint);
};

#endif
