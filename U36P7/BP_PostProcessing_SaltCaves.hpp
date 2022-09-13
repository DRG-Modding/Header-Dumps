#ifndef UE4SS_SDK_BP_PostProcessing_SaltCaves_HPP
#define UE4SS_SDK_BP_PostProcessing_SaltCaves_HPP

class ABP_PostProcessing_SaltCaves_C : public AFSDPostProcessingActor
{
    class UPostProcessComponent* PostProcess;
    class UExponentialHeightFogComponent* ExponentialHeightFog;
    class USceneComponent* DefaultSceneRoot;

};

#endif
