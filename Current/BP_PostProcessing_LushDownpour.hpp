#ifndef UE4SS_SDK_BP_PostProcessing_LushDownpour_HPP
#define UE4SS_SDK_BP_PostProcessing_LushDownpour_HPP

class ABP_PostProcessing_LushDownpour_C : public AFSDPostProcessingActor
{
    class UExponentialHeightFogComponent* ExponentialHeightFog;
    class UPostProcessComponent* PostProcess;
    class USceneComponent* DefaultSceneRoot;

};

#endif
