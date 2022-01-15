#ifndef UE4SS_SDK_BP_PostProcessing_HollowBough_HPP
#define UE4SS_SDK_BP_PostProcessing_HollowBough_HPP

class ABP_PostProcessing_HollowBough_C : AFSDPostProcessingActor
{
    UPostProcessComponent* PostProcess;
    UExponentialHeightFogComponent* ExponentialHeightFog;
    USceneComponent* DefaultSceneRoot;
}

#endif
