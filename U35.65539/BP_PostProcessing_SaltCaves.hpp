#ifndef UE4SS_SDK_BP_PostProcessing_SaltCaves_HPP
#define UE4SS_SDK_BP_PostProcessing_SaltCaves_HPP

class ABP_PostProcessing_SaltCaves_C : AFSDPostProcessingActor
{
    UPostProcessComponent* PostProcess;
    UExponentialHeightFogComponent* ExponentialHeightFog;
    USceneComponent* DefaultSceneRoot;
}

#endif
