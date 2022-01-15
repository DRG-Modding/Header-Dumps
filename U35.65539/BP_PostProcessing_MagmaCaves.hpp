#ifndef UE4SS_SDK_BP_PostProcessing_MagmaCaves_HPP
#define UE4SS_SDK_BP_PostProcessing_MagmaCaves_HPP

class ABP_PostProcessing_MagmaCaves_C : AFSDPostProcessingActor
{
    UExponentialHeightFogComponent* ExponentialHeightFog;
    UPostProcessComponent* PostProcess;
    USceneComponent* DefaultSceneRoot;
}

#endif
