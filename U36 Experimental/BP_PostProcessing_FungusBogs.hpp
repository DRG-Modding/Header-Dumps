#ifndef UE4SS_SDK_BP_PostProcessing_FungusBogs_HPP
#define UE4SS_SDK_BP_PostProcessing_FungusBogs_HPP

class ABP_PostProcessing_FungusBogs_C : public AFSDPostProcessingActor
{
    class UExponentialHeightFogComponent* ExponentialHeightFog;
    class UPostProcessComponent* PostProcess;
    class USceneComponent* DefaultSceneRoot;

};

#endif
