#ifndef UE4SS_SDK_BP_Pipeline_StatusLamp_HPP
#define UE4SS_SDK_BP_Pipeline_StatusLamp_HPP

class ABP_Pipeline_StatusLamp_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* ST_Connector_StatusLamp;
    class USceneComponent* DefaultSceneRoot;
    class APipelineStart* PipelineStart;
    EPipelineBuildState PreviewState;

    void UpdateState();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ListenToPipelineStart(class APipelineStart* InPipelineStart);
    void OnBuildStateChanged_Event(class APipelineStart* InPipelineStart, EPipelineBuildState InPipelineState);
    void ExecuteUbergraph_BP_Pipeline_StatusLamp(int32 EntryPoint);
};

#endif
