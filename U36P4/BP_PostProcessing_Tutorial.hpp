#ifndef UE4SS_SDK_BP_PostProcessing_Tutorial_HPP
#define UE4SS_SDK_BP_PostProcessing_Tutorial_HPP

class ABP_PostProcessing_Tutorial_C : public AFSDPostProcessingActor
{
    class UExponentialHeightFogComponent* ExponentialHeightFog;
    class UPostProcessComponent* PostProcess;
    class USceneComponent* DefaultSceneRoot;

};

#endif
