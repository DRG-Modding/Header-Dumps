#ifndef UE4SS_SDK_BP_PostProcessing_RadioactiveZone_HPP
#define UE4SS_SDK_BP_PostProcessing_RadioactiveZone_HPP

class ABP_PostProcessing_RadioactiveZone_C : AFSDPostProcessingActor
{
    UPostProcessComponent* PostProcess;
    UExponentialHeightFogComponent* ExponentialHeightFog;
    USceneComponent* DefaultSceneRoot;
}

#endif
