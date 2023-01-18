#ifndef UE4SS_SDK_BP_PostProcessing_MagmaCaves_HPP
#define UE4SS_SDK_BP_PostProcessing_MagmaCaves_HPP

class ABP_PostProcessing_MagmaCaves_C : public AFSDPostProcessingActor
{
    class UExponentialHeightFogComponent* ExponentialHeightFog;
    class UPostProcessComponent* PostProcess;
    class USceneComponent* DefaultSceneRoot;

};

#endif
