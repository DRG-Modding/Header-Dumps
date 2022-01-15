#ifndef UE4SS_SDK_BP_Pipeline_Movement_HPP
#define UE4SS_SDK_BP_Pipeline_Movement_HPP

class UBP_Pipeline_Movement_C : UTrackBuilderMovement
{
    FPointerToUberGraphFrame UberGraphFrame;
    USplineComponent* MovementSpline;
    float SplineLength;
    float VerticalOffset;
    ABP_Pipeline_Segment_C* PipelineSegment;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Pipeline_Movement(int32 EntryPoint, AActor* CallFunc_GetOwner_ReturnValue, UBP_Pipeline_Segment_C* K2Node_DynamicCast_AsBP_Pipeline_Segment, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetSplineLength_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_1, USplineComponent* CallFunc_GetComponentByClass_ReturnValue);
}

#endif
