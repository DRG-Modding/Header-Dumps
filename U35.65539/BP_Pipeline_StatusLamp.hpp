#ifndef UE4SS_SDK_BP_Pipeline_StatusLamp_HPP
#define UE4SS_SDK_BP_Pipeline_StatusLamp_HPP

class ABP_Pipeline_StatusLamp_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* ST_Connector_StatusLamp;
    USceneComponent* DefaultSceneRoot;
    APipelineStart* PipelineStart;
    EPipelineBuildState PreviewState;

    void UpdateState(EPipelineBuildState Status, bool CallFunc_IsValid_ReturnValue, UMaterialInterface* CallFunc_GetMaterialFromPipelineStatus_ReturnValue);
    void UserConstructionScript(UMaterialInterface* CallFunc_GetMaterialFromPipelineStatus_ReturnValue);
    void ReceiveBeginPlay();
    void ListenToPipelineStart(APipelineStart* InPipelineStart);
    void OnBuildStateChanged_Event(APipelineStart* InPipelineStart, EPipelineBuildState InPipelineState);
    void ExecuteUbergraph_BP_Pipeline_StatusLamp(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetParentActor_ReturnValue, APipelineStart* K2Node_CustomEvent_InPipelineStart_1, UPipelineSegment* K2Node_DynamicCast_AsPipeline_Segment, bool K2Node_DynamicCast_bSuccess, APipelineStart* CallFunc_GetPipelineStart_ReturnValue, APipelineStart* K2Node_DynamicCast_AsPipeline_Start, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, APipelineStart* K2Node_CustomEvent_InPipelineStart, EPipelineBuildState K2Node_CustomEvent_InPipelineState, PipelineStartStateDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
}

#endif
