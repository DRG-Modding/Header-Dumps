#ifndef UE4SS_SDK_BP_PostProcessing_SpaceRig_HPP
#define UE4SS_SDK_BP_PostProcessing_SpaceRig_HPP

class ABP_PostProcessing_SpaceRig_C : public AFSDPostProcessingActor
{
    class UExponentialHeightFogComponent* ExponentialHeightFog1;
    class UPostProcessComponent* PostProcess;
    class USceneComponent* DefaultSceneRoot;

};

#endif
