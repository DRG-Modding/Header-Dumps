#ifndef UE4SS_SDK_BP_PostProcessing_SandblastedCorridors_HPP
#define UE4SS_SDK_BP_PostProcessing_SandblastedCorridors_HPP

class ABP_PostProcessing_SandblastedCorridors_C : public AFSDPostProcessingActor
{
    class UExponentialHeightFogComponent* ExponentialHeightFog;
    class UPostProcessComponent* PostProcess;
    class USceneComponent* DefaultSceneRoot;

};

#endif
