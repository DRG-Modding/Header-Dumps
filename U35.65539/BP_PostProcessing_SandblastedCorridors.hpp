#ifndef UE4SS_SDK_BP_PostProcessing_SandblastedCorridors_HPP
#define UE4SS_SDK_BP_PostProcessing_SandblastedCorridors_HPP

class ABP_PostProcessing_SandblastedCorridors_C : AFSDPostProcessingActor
{
    UExponentialHeightFogComponent* ExponentialHeightFog;
    UPostProcessComponent* PostProcess;
    USceneComponent* DefaultSceneRoot;
}

#endif
