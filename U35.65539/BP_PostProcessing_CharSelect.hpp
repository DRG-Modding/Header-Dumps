#ifndef UE4SS_SDK_BP_PostProcessing_CharSelect_HPP
#define UE4SS_SDK_BP_PostProcessing_CharSelect_HPP

class ABP_PostProcessing_CharSelect_C : AFSDPostProcessingActor
{
    UPostProcessComponent* PostProcess;
    UBoxComponent* Box;
    USceneComponent* DefaultSceneRoot;
    FVector BoundsSize;
    bool Unbound;

    void UserConstructionScript();
}

#endif
