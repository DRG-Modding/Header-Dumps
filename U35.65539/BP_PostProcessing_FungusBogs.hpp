#ifndef UE4SS_SDK_BP_PostProcessing_FungusBogs_HPP
#define UE4SS_SDK_BP_PostProcessing_FungusBogs_HPP

class ABP_PostProcessing_FungusBogs_C : AFSDPostProcessingActor
{
    UExponentialHeightFogComponent* ExponentialHeightFog;
    UPostProcessComponent* PostProcess;
    USceneComponent* DefaultSceneRoot;
}

#endif
