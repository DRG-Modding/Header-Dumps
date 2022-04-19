#ifndef UE4SS_SDK_BP_PostProcessing_CharSelect_HPP
#define UE4SS_SDK_BP_PostProcessing_CharSelect_HPP

class ABP_PostProcessing_CharSelect_C : public AFSDPostProcessingActor
{
    class UPostProcessComponent* PostProcess;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;
    FVector BoundsSize;
    bool Unbound;

    void UserConstructionScript();
};

#endif
