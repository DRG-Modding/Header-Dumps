#ifndef UE4SS_SDK_BP_PostProcessing_CrystalCaves_HPP
#define UE4SS_SDK_BP_PostProcessing_CrystalCaves_HPP

class ABP_PostProcessing_CrystalCaves_C : public AFSDPostProcessingActor
{
    class UExponentialHeightFogComponent* ExponentialHeightFog;
    class UPostProcessComponent* PostProcess;
    class USceneComponent* DefaultSceneRoot;

};

#endif
