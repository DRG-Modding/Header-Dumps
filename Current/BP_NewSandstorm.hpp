#ifndef UE4SS_SDK_BP_NewSandstorm_HPP
#define UE4SS_SDK_BP_NewSandstorm_HPP

class ABP_NewSandStorm_C : public ABP_WeatherEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Fadeout_OneToZero_1C9D7E9C43D38F352386738892203941;
    TEnumAsByte<ETimelineDirection::Type> Fadeout__Direction_1C9D7E9C43D38F352386738892203941;
    class UTimelineComponent* FadeOut;
    float Fadin_ZeroToOne_D260EBF6476C34297BC10A928022C9AF;
    TEnumAsByte<ETimelineDirection::Type> Fadin__Direction_D260EBF6476C34297BC10A928022C9AF;
    class UTimelineComponent* Fadin;

    void Fadin__FinishedFunc();
    void Fadin__UpdateFunc();
    void FadeOut__FinishedFunc();
    void FadeOut__UpdateFunc();
    void StartEffect();
    void EndEffect();
    void ExecuteUbergraph_BP_NewSandStorm(int32 EntryPoint);
};

#endif
