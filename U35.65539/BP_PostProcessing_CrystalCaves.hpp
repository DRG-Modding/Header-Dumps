#ifndef UE4SS_SDK_BP_PostProcessing_CrystalCaves_HPP
#define UE4SS_SDK_BP_PostProcessing_CrystalCaves_HPP

class ABP_PostProcessing_CrystalCaves_C : AFSDPostProcessingActor
{
    UExponentialHeightFogComponent* ExponentialHeightFog;
    UPostProcessComponent* PostProcess;
    USceneComponent* DefaultSceneRoot;
}

#endif
