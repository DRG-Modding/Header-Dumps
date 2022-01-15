#ifndef UE4SS_SDK_BP_PostProcessing_SpaceRig_HPP
#define UE4SS_SDK_BP_PostProcessing_SpaceRig_HPP

class ABP_PostProcessing_SpaceRig_C : AFSDPostProcessingActor
{
    UExponentialHeightFogComponent* ExponentialHeightFog1;
    UPostProcessComponent* PostProcess;
    USceneComponent* DefaultSceneRoot;
}

#endif
