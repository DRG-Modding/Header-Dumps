#ifndef UE4SS_SDK_BP_PostProcessing_IceCaves_HPP
#define UE4SS_SDK_BP_PostProcessing_IceCaves_HPP

class ABP_PostProcessing_IceCaves_C : AFSDPostProcessingActor
{
    UPostProcessComponent* PostProcess;
    UExponentialHeightFogComponent* ExponentialHeightFog;
    USceneComponent* DefaultSceneRoot;
}

#endif
