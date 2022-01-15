#ifndef UE4SS_SDK_BP_PostProcessing_LushDownpour_HPP
#define UE4SS_SDK_BP_PostProcessing_LushDownpour_HPP

class ABP_PostProcessing_LushDownpour_C : AFSDPostProcessingActor
{
    UExponentialHeightFogComponent* ExponentialHeightFog;
    UPostProcessComponent* PostProcess;
    USceneComponent* DefaultSceneRoot;
}

#endif
