#ifndef UE4SS_SDK_BP_PostProcessing_IceCaves_HPP
#define UE4SS_SDK_BP_PostProcessing_IceCaves_HPP

class ABP_PostProcessing_IceCaves_C : public AFSDPostProcessingActor
{
    class UPostProcessComponent* PostProcess;
    class UExponentialHeightFogComponent* ExponentialHeightFog;
    class USceneComponent* DefaultSceneRoot;

};

#endif
