#ifndef UE4SS_SDK_BP_PostProcessing_Tutorial_HPP
#define UE4SS_SDK_BP_PostProcessing_Tutorial_HPP

class ABP_PostProcessing_Tutorial_C : AFSDPostProcessingActor
{
    UExponentialHeightFogComponent* ExponentialHeightFog;
    UPostProcessComponent* PostProcess;
    USceneComponent* DefaultSceneRoot;
}

#endif
