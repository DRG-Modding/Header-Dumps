#ifndef UE4SS_SDK_BP_PostProcessing_AzureWeald_HPP
#define UE4SS_SDK_BP_PostProcessing_AzureWeald_HPP

class ABP_PostProcessing_AzureWeald_C : AFSDPostProcessingActor
{
    UPostProcessComponent* PostProcess;
    UExponentialHeightFogComponent* ExponentialHeightFog;
    USceneComponent* DefaultSceneRoot;
}

#endif
