#ifndef UE4SS_SDK_BP_Pipeline_StatusLamp_HPP
#define UE4SS_SDK_BP_Pipeline_StatusLamp_HPP

class ABP_Pipeline_StatusLamp_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* ST_Connector_StatusLamp;
    class USceneComponent* DefaultSceneRoot;
    class APipelineStart* PipelineStart;
    EPipelineBuildState PreviewState;

    void UpdateState(EPipelineBuildState Status, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* CallFunc_GetMaterialFromPipelineStatus_ReturnValue);
    void UserConstructionScript(class UMaterialInterface* CallFunc_GetMaterialFromPipelineStatus_ReturnValue);
    void ReceiveBeginPlay();
    void ListenToPipelineStart(class APipelineStart* InPipelineStart);
    void OnBuildStateChanged_Event(class APipelineStart* InPipelineStart, EPipelineBuildState InPipelineState);
    void ExecuteUbergraph_BP_Pipeline_StatusLamp(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetParentActor_ReturnValue, class APipelineStart* K2Node_CustomEvent_InPipelineStart_1, class APipelineSegment* K2Node_DynamicCast_AsPipeline_Segment, bool K2Node_DynamicCast_bSuccess, class APipelineStart* CallFunc_GetPipelineStart_ReturnValue, class APipelineStart* K2Node_DynamicCast_AsPipeline_Start, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class APipelineStart* K2Node_CustomEvent_InPipelineStart, EPipelineBuildState K2Node_CustomEvent_InPipelineState, FExecuteUbergraph_BP_Pipeline_StatusLampK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate);
};

#endif
